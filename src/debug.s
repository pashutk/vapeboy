;IF !DEF(DEBUG_INC)  
;DEBUG_INC SET 1
;; Prints a message to the no$gmb / bgb debugger
;; Accepts a string as input, see emulator doc for support
;DBGMSG: MACRO  
;        ld  d, d
;        jr .end\@
;        DW $6464
;        DW $0000
;        DB \1
;.end\@:
;        ENDM
;
;ENDC ; DEBUG_INC 

.globl _console_log

_console_log:
  ld d,d; jr @end; dw $6464; dw $0000; db "message"; @end
  jr 0x10
  .dw 0x6464
  .dw 0x0000
  .db 0x43,0x42,0x22,0x23,0x24,0x25,0x26,0x27
  ld d,d
  ld d,d
  ld d,d
  ld d,d
  ld d,d
