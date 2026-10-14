# FUN_00400c58 @ 00400c58
00400c58  lui gp,0x2
00400c5c  addiu gp,gp,-0x2a08
00400c60  addu gp,gp,t9
00400c64  addiu sp,sp,-0x20
00400c68  sw ra,0x1c(sp)
00400c6c  sw gp,0x10(sp)
00400c70  lw v0,-0x7f3c(gp)
00400c74  nop
00400c78  beq v0,zero,0x00400ca0
00400c7c  _nop
00400c80  lw a0,-0x7fdc(gp)
00400c84  lw a1,-0x7fe8(gp)
00400c88  lw t9,-0x7f3c(gp)
00400c8c  addiu a0,a0,0x61d0
00400c90  jalr t9
00400c94  _addiu a1,a1,0x6348
00400c98  lw gp,0x10(sp)
00400c9c  nop
00400ca0  lw a0,-0x7fe8(gp)
00400ca4  nop
00400ca8  lw v0,0x61e4(a0)
00400cac  nop
00400cb0  beq v0,zero,0x00400cd4
00400cb4  _nop
00400cb8  lw t9,-0x7fc8(gp)
00400cbc  nop
00400cc0  beq t9,zero,0x00400cd4
00400cc4  _addiu a0,a0,0x61e4
00400cc8  lw ra,0x1c(sp)
00400ccc  jr t9
00400cd0  _addiu sp,sp,0x20
00400cd4  lw ra,0x1c(sp)
00400cd8  nop
00400cdc  jr ra
00400ce0  _addiu sp,sp,0x20
