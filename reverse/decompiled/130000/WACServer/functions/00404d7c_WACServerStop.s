# WACServerStop @ 00404d7c
00404d7c  addiu sp,sp,-0x20
00404d80  sw ra,0x1c(sp)
00404d84  lui gp,0x44
00404d88  addiu gp,gp,-0x4fc0
00404d8c  sw gp,0x10(sp)
00404d90  move v0,a0
00404d94  lw t9,-0x7f9c(gp)
00404d98  lw a0,0x3c(a0)
00404d9c  li v1,0x1
00404da0  sb v1,0x40(v0)
00404da4  jalr t9
00404da8  _clear a1
00404dac  lw ra,0x1c(sp)
00404db0  clear v0
00404db4  jr ra
00404db8  _addiu sp,sp,0x20
