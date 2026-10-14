# FUN_00434ee4 @ 00434ee4
00434ee4  addiu sp,sp,-0x28
00434ee8  sw ra,0x24(sp)
00434eec  sw s1,0x20(sp)
00434ef0  sw s0,0x1c(sp)
00434ef4  lui gp,0x62
00434ef8  addiu gp,gp,-0x5cf0
00434efc  sw gp,0x10(sp)
00434f00  lui s0,0x60
00434f04  lw a0,0xb90(s0)
00434f08  li s1,-0x1
00434f0c  beq a0,s1,0x00434f38
00434f10  _li v0,-0x1
00434f14  lw t9,-0x7c4c(gp)
00434f18  nop
00434f1c  jalr t9
00434f20  _nop
00434f24  bne v0,zero,0x00434f34
00434f28  _nop
00434f2c  b 0x00434f38
00434f30  _sw s1,0xb90(s0)
00434f34  li v0,-0x1
00434f38  lw ra,0x24(sp)
00434f3c  lw s1,0x20(sp)
00434f40  lw s0,0x1c(sp)
00434f44  jr ra
00434f48  _addiu sp,sp,0x28
