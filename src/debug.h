#define DEBUG_MODE 1
#define THROW_DEBUG_MSG ((DEBUG_MODE) ? (throw_debug_message()) : (0))

void throw_debug_message(void);
