#include "helpers.h"
#include <gb/hardware.h>
#include <stdio.h>
#include <gb/gb.h>

#define MAX_BLOCK_TYPES_PER_LEVEL 10

UINT8 get_lcdc_reg_sprite_height(void) {
  if (LCDC_REG & 0x04U) {
    return 16;
  } else {
    return 8;
  }
}

void load_level_bkg_sprites(UINT8 width, UINT8 height, UINT8 *data) {
  UINT16 size = width * height;
  UINT8 blocks[MAX_BLOCK_TYPES_PER_LEVEL];
  UINT8 blocks_length = 0;
  UINT8 i;
  BOOLEAN flag = FALSE;
  
  for (size--; size != 0; size--) {
    if (blocks_length == 0) {
      blocks[0] = data[size];
      blocks_length++;
      continue;
    }

    for (i = 0; i != blocks_length; i++) {
      if (blocks[i] == data[size]) {
        break;
      }
    }

    if (i == blocks_length) {
      blocks[blocks_length] = data[size];
      blocks_length++;
    }
  }

  for (i = 0; i != blocks_length; i++) {
    printf("%d\n", blocks[i]);
  }
}

void render_entire_bkg_level(UINT8 width, UINT8 height, UINT8 *data) {
  
}

void render_level(UINT8 width, UINT8 height, UINT8 *data) {
  load_level_bkg_sprites(width, height, data);
  render_entire_bkg_level(width, height, data);
}
