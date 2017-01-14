#include "game_states.h"
#include "helpers.h"
#include "tiledata_titlescreen.h"
#include "title_state.h"
#include <gb/gb.h>
#include <time.h>
#include <types.h>


void load_t4() {
  UINT8 tiles_t4[0xB4];
  UINT16 i;

  set_bkg_data(1, 0x18, t4_tile_data);
  for(i = 0; i < t4_tile_map_size; i++) {
    tiles_t4[i] = t4_map_data[i] + 1;
  }
  set_bkg_tiles(30, 0, 10, 16, tiles_t4);
}

void load_t5() {
  UINT8 tiles_t5[0x5A];
  UINT16 i;

  set_bkg_data(0x1A, 0x8, t5_tile_data);
  for(i = 0; i < t5_tile_map_size; i++) {
    tiles_t5[i] = t5_map_data[i] + 0x1A;
  }
  set_bkg_tiles(8, 1, 5, 16, tiles_t5);
}

void move_pressstart(UINT8 x, UINT8 y) {
  UINT8 c, j, k;

  c = 0;
  for(k = 0; k < 3; k++) {
    for(j = 0; j < 8; j++) {
      move_sprite(c, (x * 8 + 8) + j * 8, (y * 8 + 16) + k * 8);
      c++;
    }
  }
}

void hide_pressstart(void) {
  move_pressstart(20, 12);
}

void title_state_prehook(void) {
  UINT16 i;
  UINT8 k;
  UINT8 tiles_t1[0xB4];
  UINT8 tiles_t2[0xB4];
  UINT8 tiles_t3[0xB4];

  set_bkg_data(1, 0x34, t1_tile_data);
  set_bkg_data(1 + 0x34, 0x5F, t2_tile_data);
  set_bkg_data(1 + 0x34 + 0x5F, 0x60, t3_tile_data);

  set_sprite_data(0, pressstart_tile_count, pressstart_tile_data);

  for(i = 0; i < t1_tile_map_size; i++) {
    tiles_t1[i] = t1_map_data[i] + 1;
  }
  for(i = 0; i < t2_tile_map_size; i++) {
    tiles_t2[i] = t2_map_data[i] + 1 + 0x34;
  }
  for(i = 0; i < t3_tile_map_size; i++) {
    tiles_t3[i] = t3_map_data[i] + 1 + 0x34 + 0x5F;
  }

  set_bkg_tiles(0, 0, 10, 16, tiles_t1);
  set_bkg_tiles(10, 0, 10, 16, tiles_t2);
  set_bkg_tiles(20, 0, 10, 16, tiles_t3);

  for (k = 0; k < pressstart_tile_count; k++) {
    set_sprite_tile(k, pressstart_map_data[k]);
  }

  hide_pressstart();
}

void title_state_posthook(void) {
  hide_pressstart();
  flush_bkg();
  move_bkg(0, 0);
} 

void title_state_loop(void) {
  const UINT8 delta = 1;
  static UINT8 scroll_position_x = 0;

  if (clock() % 2 == 0)
    move_bkg(scroll_position_x += delta, 0);

  if (scroll_position_x == 80) {
    load_t4();
  }

  if (scroll_position_x == 160) {
    load_t5();
  }

  if (scroll_position_x == 200) {
    move_pressstart(11, 13);
    waitpad(J_START);
    waitpadup();
    set_current_game_state(GAME_STATE);
  }
  wait_vbl_done();
}
