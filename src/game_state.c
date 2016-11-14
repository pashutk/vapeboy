#include "game_state.h"
#include "helpers.h"
#include "tiledata_stay.h"
#include "game_sprite_object.h"
#include <types.h>
#include <gb/gb.h>


game_sprite_object* get_player_gso_pointer() {
  static game_sprite_object player;
  return &player;
}

void game_state_loop(void) {
  static UINT8 player_position_x = 0;
  UINT8 j, delta = 0;

  j = joypad();

  if (j & J_RIGHT) {
    set_gso_horizontal_flip(get_player_gso_pointer(), FALSE);
    if (j & J_A) {
      set_gso_state(get_player_gso_pointer(), RUNVAPE_STATE);
    } else {
      set_gso_state(get_player_gso_pointer(), RUN_STATE);
    }
    delta = 1;
  } else if (j & J_LEFT) {
    set_gso_horizontal_flip(get_player_gso_pointer(), TRUE);
    if (j & J_A) {
      set_gso_state(get_player_gso_pointer(), RUNVAPE_STATE);
    } else {
      set_gso_state(get_player_gso_pointer(), RUN_STATE);
    }
    delta = -1;
  } else {
    if (j & J_A) {
      set_gso_state(get_player_gso_pointer(), STAYVAPE_STATE);
    } else {
      set_gso_state(get_player_gso_pointer(), STAY_STATE);
    }
    delta = 0;
  }

  draw_gso(get_player_gso_pointer(), player_position_x += delta, 64);
  wait_vbl_done();
}

void game_state_prehook(void) {
  UINT8 last_free_tile = 0;
  new_gso(get_player_gso_pointer(), stay_tile_map_width, stay_tile_map_height, &stay_tile_data, &last_free_tile);
  move_gso(get_player_gso_pointer(), 0, 50);
}
