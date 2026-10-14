# HTTPHeaderMatchMethod @ 00421e70
00421e70  addiu sp,sp,-0x20
00421e74  sw ra,0x1c(sp)
00421e78  lui gp,0x62
00421e7c  addiu gp,gp,-0x6b80
00421e80  sw gp,0x10(sp)
00421e84  move a2,a1
00421e88  lw t9,-0x6478(gp)
00421e8c  lw a1,0x114(a0)
00421e90  lw a0,0x110(a0)
00421e94  jalr t9
00421e98  _nop
00421e9c  li v1,-0x1a47
00421ea0  lw ra,0x1c(sp)
00421ea4  movz v1,zero,v0
00421ea8  move v0,v1
00421eac  jr ra
00421eb0  _addiu sp,sp,0x20
