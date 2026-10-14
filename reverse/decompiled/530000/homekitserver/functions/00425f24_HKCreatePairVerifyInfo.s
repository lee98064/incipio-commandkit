# HKCreatePairVerifyInfo @ 00425f24
00425f24  addiu sp,sp,-0x20
00425f28  sw ra,0x1c(sp)
00425f2c  lui gp,0x62
00425f30  addiu gp,gp,-0x5cf0
00425f34  sw gp,0x10(sp)
00425f38  lw t9,-0x5a50(gp)
00425f3c  li a0,0x1
00425f40  jalr t9
00425f44  _li a1,0x28
00425f48  beq v0,zero,0x00425f54
00425f4c  _li v1,0x1
00425f50  sw v1,0x4(v0)
00425f54  lw ra,0x1c(sp)
00425f58  nop
00425f5c  jr ra
00425f60  _addiu sp,sp,0x20
