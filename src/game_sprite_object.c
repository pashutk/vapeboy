#include "game_sprite_object.h"
#include <gb/gb.h>
#include <types.h>


void init_gso(game_sprite_object *gso) {
  UINT8 i;
  UINT8 tile_sum;
  UINT8 last_free_tile_value;

  last_free_tile_value = *(gso->last_free_tile_pointer);
  tile_sum = gso->width * gso->height;

  gso->state = STAY_STATE;

  set_sprite_data(last_free_tile_value, tile_sum, gso->tile_data_pointer);
  // Refresh last_free_tile value
  *(gso->last_free_tile_pointer) += tile_sum;
  // Link tiles and sprites
  for (i = last_free_tile_value; i < last_free_tile_value + tile_sum; i++) {
    set_sprite_tile(i, i);
  }
}

void new_gso(game_sprite_object *gso_pointer,
             UINT8              width,
             UINT8              height,
             UINT8              *tile_data_pointer,
             UINT8              *last_free_tile_pointer) {
  // Without this lines some params === 0 ¯\_(ツ)_/¯
  gso_pointer->height;
  gso_pointer->tile_data_pointer;

  gso_pointer->width = width;
  gso_pointer->height = height;
  gso_pointer->tile_data_pointer = tile_data_pointer;
  gso_pointer->first_tile_num = *last_free_tile_pointer;
  gso_pointer->last_free_tile_pointer = last_free_tile_pointer;

  init_gso(gso_pointer);
}

void move_gso(game_sprite_object *gso,
              UINT8              x,
              UINT8              y) {
  UINT8 i, j, c;
  c = gso->first_tile_num;

  for (i = 0; i < gso->height; ++i) {
    for (j = 0; j < gso->width; ++j) {
      move_sprite(c++, x + 8 * j, y + 8 * i);
    }
  }
}

/** @return previous gso state */
Game_sprite_object_state_t set_gso_state(game_sprite_object *gso,
                                         Game_sprite_object_state_t state) {
  Game_sprite_object_state_t previous_state = gso->state;
  gso->state = state;
  return previous_state;
}
