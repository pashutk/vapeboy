typedef struct game_sprite_object_ {
  UINT8 width;
  UINT8 height;
  UINT8 *tile_data_pointer;
  UINT8 first_tile_num;
  UINT8 *last_free_tile_pointer;
} game_sprite_object;
