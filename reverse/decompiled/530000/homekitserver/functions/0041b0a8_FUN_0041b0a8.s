# FUN_0041b0a8 @ 0041b0a8
0041b0a8  lui gp,0x20
0041b0ac  addiu gp,gp,-0xd98
0041b0b0  addu gp,gp,t9
0041b0b4  addiu sp,sp,-0x20
0041b0b8  sw ra,0x1c(sp)
0041b0bc  sw gp,0x10(sp)
0041b0c0  lw v0,-0x60cc(gp)
0041b0c4  nop
0041b0c8  beq v0,zero,0x0041b0f0
0041b0cc  _nop
0041b0d0  lw a0,-0x7fd8(gp)
0041b0d4  lw a1,-0x7fe8(gp)
0041b0d8  lw t9,-0x60cc(gp)
0041b0dc  addiu a0,a0,-0x19b0
0041b0e0  jalr t9
0041b0e4  _addiu a1,a1,0x4b68
0041b0e8  lw gp,0x10(sp)
0041b0ec  nop
0041b0f0  lw a0,-0x7fdc(gp)
0041b0f4  nop
0041b0f8  lw v0,-0x199c(a0)
0041b0fc  nop
0041b100  beq v0,zero,0x0041b124
0041b104  _nop
0041b108  lw t9,-0x5d78(gp)
0041b10c  nop
0041b110  beq t9,zero,0x0041b124
0041b114  _addiu a0,a0,-0x199c
0041b118  lw ra,0x1c(sp)
0041b11c  jr t9
0041b120  _addiu sp,sp,0x20
0041b124  lw ra,0x1c(sp)
0041b128  nop
0041b12c  jr ra
0041b130  _addiu sp,sp,0x20
