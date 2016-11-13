#include <gb/drawing.h>
#include <types.h>

#define SPRITE_WIDTH 8
#define SPRITE_HEIGHT get_lcdc_reg_sprite_height()

#define SCREEN_SPRITES_WIDTH  GRAPHICS_WIDTH / 8

// TODO: improve performance by caching this value and adding setters for 8x8 and 8x16 modes
#define SCREEN_SPRITES_HEIGHT GRAPHICS_HEIGHT / SPRITE_HEIGHT

#define MAX_SCREEN_SPRITES_HEIGHT GRAPHICS_HEIGHT / 8

#define VA_LAST_UINT8 0
#define VA_LAST_UINT16 515

UINT8 get_lcdc_reg_sprite_height(void);
