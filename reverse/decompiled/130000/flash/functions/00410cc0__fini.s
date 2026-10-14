# _fini @ 00410cc0
00410cc0  lui gp,0x2
00410cc4  addiu gp,gp,-0x58a0
00410cc8  addu gp,gp,t9
00410ccc  addiu sp,sp,-0x20
00410cd0  sw gp,0x10(sp)
00410cd4  sw ra,0x1c(sp)
00410cd8  sw gp,0x18(sp)
00410cdc  bal 0x00410ce4
00410ce0  _nop
00410ce4  lui gp,0x2
00410ce8  addiu gp,gp,-0x58c4
00410cec  addu gp,gp,ra
00410cf0  lw t9,-0x7fd8(gp)
00410cf4  nop
00410cf8  addiu t9,t9,0x1220
00410cfc  bal 0x00401220
00410d00  _nop
00410d04  lw gp,0x10(sp)
00410d08  nop
00410d0c  lw ra,0x1c(sp)
00410d10  nop
00410d14  jr ra
00410d18  _addiu sp,sp,0x20
