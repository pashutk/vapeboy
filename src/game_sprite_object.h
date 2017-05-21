#include <types.h>


typedef enum game_sprite_object_state {
  STAY_STATE,
  RUN_STATE,
  STAYVAPE_STATE,
  RUNVAPE_STATE
} Game_sprite_object_state_t;

typedef struct game_sprite_object_ {
  UINT8 width;
  UINT8 height;
  INT16 x_position;
  INT16 y_position;
  UINT8 *tile_data_pointer;
  UINT8 first_tile_num;
  UINT8 *last_free_tile_pointer;
  Game_sprite_object_state_t state;
  BOOLEAN is_flipped;
} game_sprite_object;

void init_gso(game_sprite_object *gso);

void new_gso(game_sprite_object *gso_pointer,
             UINT8              width,
             UINT8              height,
             UINT8              *tile_data_pointer,
             UINT8              *last_free_tile_pointer);

/** Work correctly with 8*8 sprites
    TODO: use helpers.h for work with 8x16
*/
void move_gso(game_sprite_object *gso,
              INT16              x,
              INT16              y);

void draw_gso(game_sprite_object *gso,
              INT16              x,
              INT16              y);

void set_gso_horizontal_flip(game_sprite_object *gso, BOOLEAN is_flipped);

/** @return previous gso state */
Game_sprite_object_state_t set_gso_state(game_sprite_object *gso,
                                         Game_sprite_object_state_t state);

INT16 get_gso_x(game_sprite_object *gso);

INT16 get_gso_y(game_sprite_object *gso);

INT16 get_gso_bottom(game_sprite_object *gso);

UINT8 get_gso_height(game_sprite_object *gso);
