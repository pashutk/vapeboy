#include "helpers.h"
#include <gb/hardware.h>


UINT8 get_lcdc_reg_sprite_height(void) {
  if (LCDC_REG & 0x04U) {
    return 16;
  } else {
    return 8;
  }
}
