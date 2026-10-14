# HTTPHeaderMatchMethod @ 00421ff4
00421ff4  addiu sp,sp,-0x20
00421ff8  sw ra,0x1c(sp)
00421ffc  lui gp,0x62
00422000  addiu gp,gp,-0x5cf0
00422004  sw gp,0x10(sp)
00422008  move a2,a1
0042200c  lw t9,-0x6470(gp)
00422010  lw a1,0x114(a0)
00422014  lw a0,0x110(a0)
00422018  jalr t9
0042201c  _nop
00422020  li v1,-0x1a47
00422024  lw ra,0x1c(sp)
00422028  movz v1,zero,v0
0042202c  move v0,v1
00422030  jr ra
00422034  _addiu sp,sp,0x20
