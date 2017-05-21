#include "game_state.h"
#include "helpers.h"
#include "tiledata_stay.h"
#include "game_sprite_object.h"
#include "level_testlevel.h"
#include "collision_detect.h"
#include "debug.h"
#include <time.h>
#include <stdio.h>
#include <types.h>
#include <gb/gb.h>


game_sprite_object* get_player_gso_pointer() {
  static game_sprite_object player;
  return &player;
}

INT16 get_nearest_bottom_block(INT16 current_x_block, INT16 current_y_block) {
  INT16 y_block = current_y_block * test_level_width + current_x_block + test_level_width;
  while (test_level_data[y_block] == 0) {
    y_block += test_level_width;
  }
  return y_block / test_level_width;
}

INT16 get_nearest_top_block(INT16 current_x_block, INT16 current_y_block) {
  INT16 y_block = current_y_block * test_level_width + current_x_block - test_level_width;
  if (y_block < 0) {
    return 0;
  }

  while (test_level_data[y_block] == 0) {
    y_block -= test_level_width;
  }
  return y_block / test_level_width;
}

INT16 get_under_block_y(game_sprite_object *gso) {
  const INT16 pos_x = get_gso_x(gso);
  const INT16 block_x = pos_x / 8;

  const INT16 pos_y = get_gso_y(gso);
  const INT16 block_y = (pos_y / 8) - 1;

  const INT16 nearest_bottom_block = get_nearest_bottom_block(block_x, block_y);

  return nearest_bottom_block;
}

INT16 get_upper_block_y(game_sprite_object *gso) {
  const INT16 pos_x = get_gso_x(gso);
  const INT16 block_x = pos_x / 8;

  const INT16 pos_y = get_gso_y(gso);
  const INT16 block_y = (pos_y / 8) - 1;

  const INT16 nearest_top_block = get_nearest_top_block(block_x, block_y);

  return nearest_top_block;
}

BOOLEAN check_side_collision(game_sprite_object *gso, INT16 delta) {
  const INT8 x_tweak = 4;
  const INT16 tweaked_delta = delta > 0 ? delta : delta - x_tweak;
  const INT16 pos_x = get_gso_x(gso);
  const INT16 block_x = pos_x / 8;

  const INT16 pos_y = get_gso_y(gso);
  const INT16 block_y = (pos_y / 8) - 1;

  const INT16 block_x_with_delta = (pos_x + tweaked_delta) / 8;
  const INT16 delta_block_top = block_y * test_level_width + block_x_with_delta;
  const INT16 delta_block_bottom = block_y * test_level_width + block_x_with_delta + test_level_width;

  return test_level_data[delta_block_top] != 0 || test_level_data[delta_block_bottom] != 0;
}

void game_state_loop(void) {
  // Long static variable name causes phasing errors
  // phase error: label location changing between passes 2 and 3
  // So I reverted var names from 'player_position_x' to 'x_position_player'
  static INT16 x_position_player = 64;
  static INT16 y_position_player = 64;
  static UINT16 clock_buffer = 0;
  static BOOLEAN jump_state = FALSE;

  const g = 1;
  const downtempo = 20;
  const jump_start_velocity = -10;

  INT16 delta_x;

  UINT8 j = 0;
  UINT16 delta_y = 0;
  game_sprite_object* player_gso_pointer = get_player_gso_pointer();
  clock_t current_clock = clock();
  clock_t current_time = current_clock / CLOCKS_PER_SEC;
  static clock_t jump_time_memo;
  static clock_t jump_clock_memo;
  clock_t buf;
  UINT16 s_clock_buffer = 0;
  UINT8 ttt = 140;

  static INT16 velocityY = 0;
  static INT8 velocityX = 0;

  INT16 under_block_y = 0;
  INT16 upper_block_bottom = 0;

  j = joypad();

  if (j & J_RIGHT) {
    set_gso_horizontal_flip(player_gso_pointer, FALSE);
    if (j & J_A) {
      set_gso_state(player_gso_pointer, RUNVAPE_STATE);
    } else {
      set_gso_state(player_gso_pointer, RUN_STATE);
    }
    delta_x = 1;
  } else if (j & J_LEFT) {
    set_gso_horizontal_flip(player_gso_pointer, TRUE);
    if (j & J_A) {
      set_gso_state(player_gso_pointer, RUNVAPE_STATE);
    } else {
      set_gso_state(player_gso_pointer, RUN_STATE);
    }
    delta_x = -1;
  } else {
    if (j & J_A) {
      set_gso_state(player_gso_pointer, STAYVAPE_STATE);
    } else {
      set_gso_state(player_gso_pointer, STAY_STATE);
    }
    delta_x = 0;
  }

  if ((j & J_B) && (jump_state == FALSE)) {
    jump_state = TRUE;
    jump_clock_memo = current_clock;
    velocityY = jump_start_velocity;
  }

  if (jump_state == TRUE) {
    buf = (current_clock - jump_clock_memo) / downtempo + 1;
    y_position_player += buf * (velocityY / 2 + 1);
    velocityY += buf * g;
  }

  // If player on the ground
  under_block_y = get_under_block_y(player_gso_pointer) * 8;
  upper_block_bottom = get_upper_block_y(player_gso_pointer) * 8 + 8;
  if (y_position_player - 15 <= upper_block_bottom) {
    velocityY = 0;
  }
  if (y_position_player + 8 >= under_block_y) {
    y_position_player = under_block_y - 8;
    jump_state = FALSE;
    velocityY = 0;
  } else if (jump_state == FALSE) {
    jump_state = TRUE;
    jump_clock_memo = current_clock;
  }

  // Wall collisions
  if (delta_x != 0 && check_side_collision(player_gso_pointer, delta_x) == TRUE) {
    delta_x = 0;
  }

  draw_gso(player_gso_pointer, x_position_player += delta_x, y_position_player);

  wait_vbl_done();
}

void game_state_prehook(void) {
  UINT8 last_free_tile = 0;

  flush_bkg();
  
  render_level(test_level_width,
      test_level_height,
      test_level_data);

  new_gso(get_player_gso_pointer(), stay_tile_map_width, stay_tile_map_height, &stay_tile_data, &last_free_tile);
  move_gso(get_player_gso_pointer(), 0, 50);
}
