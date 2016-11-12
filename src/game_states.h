typedef enum game_states {
  TITLE_STATE,
  GAME_STATE
} Game_state_t;

Game_state_t current_game_state;

void run_game_loop(void);

void set_current_game_state(Game_state_t);
