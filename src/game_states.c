#include "game_states.h"
#include "title_state.h"

void set_current_game_state(Game_state_t state) {
  switch (state) {
    case TITLE_STATE:
      title_state_prehook();
      break;
  }

  current_game_state = state;
}

void game_state_loop(void) {

}

void run_current_game_state_loop(void) {
  switch (current_game_state) {
    case TITLE_STATE:
      title_state_loop();
      break;
    case GAME_STATE:
      game_state_loop();
      break;
  }
}

void run_game_loop(void) {
  set_current_game_state(TITLE_STATE);
  while(1) {
    run_current_game_state_loop();
  }
}
