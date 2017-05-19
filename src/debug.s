.globl _throw_debug_message

_throw_debug_message:
  ld d,d
  jr 1$
  .dw 0x6464
  .dw 0x0000
  .db 0x62, 0x6F, 0x6F, 0x6D ; prints "boom" string in debug messages window
1$:
