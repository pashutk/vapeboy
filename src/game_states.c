#include "game_states.h"
#include "title_state.h"
#include "game_state.h"
#include "helpers.h"
#include <stdarg.h>
#include <stdio.h>


void set_current_game_state(Game_state_t state) {
  switch (state) {
    case TITLE_STATE:
      title_state_prehook();
      break;
    case GAME_STATE:
      game_state_prehook();
      break;
  }

  switch (current_game_state) {
    case TITLE_STATE:
      title_state_posthook();
      break;
  }

  current_game_state = state;
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

// stdarg works correctly with int only
// UINT8 add(UINT8 x, UINT8 y, ...) {
//   UINT8 sum;
//   UINT8 z;
//   va_list args;
//   va_start(args, y);

//   sum = x + y;

//   while (1) {
//     z = va_arg(args, UINT8);
//     printf("%d\n", z);
//     if (z != VA_LAST_UINT8) {
//       sum += z;
//     } else {
//       break;
//     }
//   }

//   va_end(args);
//   return sum;
// }

void run_game_loop(void) {
  // UINT8 res;
  // res = add(1, 2, 3, 4, 5, 6, 7);
  // printf("result\n");
  // printf("%d\n", res);
  // return;

  set_current_game_state(TITLE_STATE);
  while(1) {
    run_current_game_state_loop();
  }
}
