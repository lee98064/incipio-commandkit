# WACServerStop @ 00404ee8
00404ee8  addiu sp,sp,-0x20
00404eec  sw ra,0x1c(sp)
00404ef0  lui gp,0x44
00404ef4  addiu gp,gp,-0x4fc0
00404ef8  sw gp,0x10(sp)
00404efc  move v0,a0
00404f00  lw t9,-0x7f9c(gp)
00404f04  lw a0,0x3c(a0)
00404f08  li v1,0x1
00404f0c  sb v1,0x40(v0)
00404f10  jalr t9
00404f14  _clear a1
00404f18  lw ra,0x1c(sp)
00404f1c  clear v0
00404f20  jr ra
00404f24  _addiu sp,sp,0x20
