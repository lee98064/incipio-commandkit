# HTTPHeaderMatchURL @ 00421e2c
00421e2c  addiu sp,sp,-0x20
00421e30  sw ra,0x1c(sp)
00421e34  lui gp,0x62
00421e38  addiu gp,gp,-0x6b80
00421e3c  sw gp,0x10(sp)
00421e40  move a2,a1
00421e44  lw t9,-0x5e8c(gp)
00421e48  lw a1,0x144(a0)
00421e4c  lw a0,0x140(a0)
00421e50  jalr t9
00421e54  _nop
00421e58  li v1,-0x1a47
00421e5c  lw ra,0x1c(sp)
00421e60  movz v1,zero,v0
00421e64  move v0,v1
00421e68  jr ra
00421e6c  _addiu sp,sp,0x20
