#include "game_state.h"
#include "helpers.h"
#include "tiledata_stay.h"
#include "game_sprite_object.h"
#include "level_testlevel.h"
#include "collision_detect.h"
#include <time.h>
#include <stdio.h>
#include <types.h>
#include <gb/gb.h>


game_sprite_object* get_player_gso_pointer() {
  static game_sprite_object player;
  return &player;
}

void console_log(char[]);

void game_state_loop(void) {
  // Long static variable name causes phasing errors
  // phase error: label location changing between passes 2 and 3
  // So I reverted var names from 'player_position_x' to 'x_position_player'
  static UINT8 x_position_player = 64;
  static UINT8 y_position_player = 64;
  static UINT16 clock_buffer = 0;
  BOOLEAN jump_state = FALSE;

  const g = 10;

  UINT8 j, delta_x = 0;
  UINT16 delta_y = 0;
  game_sprite_object* player_gso_pointer = get_player_gso_pointer();
  clock_t current_clock = clock();
  UINT16 s_clock_buffer = 0;

  console_log("sd");

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

  if ((j & J_B) && (clock_buffer + 20 <= current_clock)) {
    jump_state = TRUE;
    y_position_player -= 10;
    clock_buffer = current_clock;
  }

  s_clock_buffer = current_clock - clock_buffer;
  // if (clock_buffer + 20 <= current_clock) {
  //   y_position_player = y_position_player - 100 * s_clock_buffer + s_clock_buffer * s_clock_buffer / 200;
  // }

  if (y_position_player >= 128) {
    y_position_player = 128;
    // delta_y = 0;
  } else {
    y_position_player += s_clock_buffer * s_clock_buffer / 200;
    // delta_y = current_clock * current_clock / 200;
  }

  draw_gso(player_gso_pointer, x_position_player += delta_x, y_position_player);
  console_log(detect_collision());
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
