# HTTPHeaderMatchURL @ 00405c54
00405c54  addiu sp,sp,-0x20
00405c58  sw ra,0x1c(sp)
00405c5c  lui gp,0x44
00405c60  addiu gp,gp,-0x4fc0
00405c64  sw gp,0x10(sp)
00405c68  move a2,a1
00405c6c  lw t9,-0x7f14(gp)
00405c70  lw a1,0x840(a0)
00405c74  lw a0,0x83c(a0)
00405c78  jalr t9
00405c7c  _nop
00405c80  li v1,-0x1a47
00405c84  lw ra,0x1c(sp)
00405c88  movz v1,zero,v0
00405c8c  move v0,v1
00405c90  jr ra
00405c94  _addiu sp,sp,0x20
