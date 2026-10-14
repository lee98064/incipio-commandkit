# HTTPHeaderMatchURL @ 00421fb0
00421fb0  addiu sp,sp,-0x20
00421fb4  sw ra,0x1c(sp)
00421fb8  lui gp,0x62
00421fbc  addiu gp,gp,-0x5cf0
00421fc0  sw gp,0x10(sp)
00421fc4  move a2,a1
00421fc8  lw t9,-0x5e7c(gp)
00421fcc  lw a1,0x144(a0)
00421fd0  lw a0,0x140(a0)
00421fd4  jalr t9
00421fd8  _nop
00421fdc  li v1,-0x1a47
00421fe0  lw ra,0x1c(sp)
00421fe4  movz v1,zero,v0
00421fe8  move v0,v1
00421fec  jr ra
00421ff0  _addiu sp,sp,0x20
