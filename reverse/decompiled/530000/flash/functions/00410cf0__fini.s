# _fini @ 00410cf0
00410cf0  lui gp,0x2
00410cf4  addiu gp,gp,-0x58a0
00410cf8  addu gp,gp,t9
00410cfc  addiu sp,sp,-0x20
00410d00  sw gp,0x10(sp)
00410d04  sw ra,0x1c(sp)
00410d08  sw gp,0x18(sp)
00410d0c  bal 0x00410d14
00410d10  _nop
00410d14  lui gp,0x2
00410d18  addiu gp,gp,-0x58c4
00410d1c  addu gp,gp,ra
00410d20  lw t9,-0x7fd8(gp)
00410d24  nop
00410d28  addiu t9,t9,0x1220
00410d2c  bal 0x00401220
00410d30  _nop
00410d34  lw gp,0x10(sp)
00410d38  nop
00410d3c  lw ra,0x1c(sp)
00410d40  nop
00410d44  jr ra
00410d48  _addiu sp,sp,0x20
