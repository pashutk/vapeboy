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

void game_state_loop(void) {
  // Long static variable name causes phasing errors
  // phase error: label location changing between passes 2 and 3
  // So I reverted var names from 'player_position_x' to 'x_position_player'
  static UINT8 x_position_player = 64;
  static UINT8 y_position_player = 64;
  static UINT16 clock_buffer = 0;
  static BOOLEAN jump_state = FALSE;

  const g = 1;
  const downtempo = 20;
  const jump_start_velocity = -10;

  UINT8 j, delta_x = 0;
  UINT16 delta_y = 0;
  game_sprite_object* player_gso_pointer = get_player_gso_pointer();
  clock_t current_clock = clock();
  clock_t current_time = current_clock / CLOCKS_PER_SEC;
  static clock_t jump_time_memo;
  static clock_t jump_clock_memo;
  clock_t buf;
  UINT16 s_clock_buffer = 0;

  static INT16 velocityY = 0;
  static INT8 velocityX = 0;

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
    THROW_DEBUG_MSG;
  }

  if (jump_state == TRUE) {
    buf = (current_clock - jump_clock_memo) / downtempo + 1;
    y_position_player += buf * (velocityY / 2 + 1);
    velocityY += buf * g;
  }

  // If player on the ground
  if (y_position_player > 128) {
    y_position_player = 128;
    jump_state = FALSE;
    velocityY = 0;
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
