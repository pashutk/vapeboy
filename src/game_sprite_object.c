#include "helpers.h"
#include "game_sprite_object.h"
#include "tiledata_run.h"
#include "tiledata_stayvape.h"
#include "tiledata_vapeboyrunvape.h"
#include "debug.h"
#include <gb/gb.h>
#include <types.h>
#include <stdio.h>


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
  gso_pointer->x_position = 0;
  gso_pointer->y_position = 0;
  gso_pointer->tile_data_pointer = tile_data_pointer;
  gso_pointer->first_tile_num = *last_free_tile_pointer;
  gso_pointer->last_free_tile_pointer = last_free_tile_pointer;

  init_gso(gso_pointer);
}

void move_gso(game_sprite_object *gso,
              INT16              x,
              INT16              y) {
  UINT8 i, j, c;
  c = gso->first_tile_num;
  
  // TODO wtf
  gso->x_position = x;
  gso->x_position = x;
  gso->y_position = y;
  gso->y_position = y;

  for (i = 0; i < gso->height; ++i) {
    if (gso->is_flipped) {
      for (j = gso->width; j != 0; --j) {
        move_sprite(c++, (x + SPRITE_WIDTH * j) - SPRITE_WIDTH, y + SPRITE_HEIGHT * i);
      }
    } else {
      for (j = 0; j < gso->width; ++j) {
        move_sprite(c++, x + SPRITE_WIDTH * j, y + SPRITE_HEIGHT * i);
      }
    }
  }
}

void draw_gso(game_sprite_object *gso,
              INT16              x,
              INT16              y) {
  static UINT8 run_counter = 7;
  static UINT8 downtempo = 0;
  const BOOLEAN position_changed = get_gso_x(gso) != x || get_gso_y(gso) != y;

  if (run_counter == 8) {
    run_counter = 0;
  }

  if (gso->state == RUNVAPE_STATE) {
    if (downtempo == 4) {
      downtempo = 0;
      set_sprite_data(gso->first_tile_num, 6, &vapeboyrunvape_tile_data + (0x30 * run_counter));
      run_counter++;
    }
    downtempo++;
  } else if (gso->state == RUN_STATE) {
    if (downtempo == 4) {
      downtempo = 0;
      set_sprite_data(gso->first_tile_num, 6, &vapeboyrun_tile_data + (0x30 * run_counter));
      run_counter++;
    }
    downtempo++;
  } else if (gso->state == STAYVAPE_STATE) {
    set_sprite_data(gso->first_tile_num, 6, &vapeboystayvape_tile_data);
    run_counter = 7;
  } else {
    set_sprite_data(gso->first_tile_num, 6, gso->tile_data_pointer);
    run_counter = 7;
  }

  if (position_changed == TRUE) {
    move_gso(gso, x, y);
  }
}

/** @return previous gso state */
Game_sprite_object_state_t set_gso_state(game_sprite_object *gso,
                                         Game_sprite_object_state_t state) {
  Game_sprite_object_state_t previous_state = gso->state;
  gso->state = state;
  return previous_state;
}

void set_gso_horizontal_flip(game_sprite_object *gso, BOOLEAN is_flipped) {
  const UINT8 gso_size = gso->width * gso->height;
  const UINT8 sprite_prop = is_flipped ? 0x20 : 0x00;
  UINT8 i;

  gso->is_flipped = is_flipped ? TRUE : FALSE;

  for (i = 0; i < gso_size; i++) {
    set_sprite_prop(i, sprite_prop);
  }
}

INT16 get_gso_x(game_sprite_object *gso) {
  return gso->x_position;
}

INT16 get_gso_y(game_sprite_object *gso) {
  return gso->y_position;
}

INT16 get_gso_bottom(game_sprite_object *gso) {
  return gso->y_position + gso->height * SPRITE_HEIGHT;
}
