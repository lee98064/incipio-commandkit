# _init @ 00401cb8
00401cb8  lui gp,0x4
00401cbc  addiu gp,gp,-0x6c78
00401cc0  addu gp,gp,t9
00401cc4  addiu sp,sp,-0x20
00401cc8  sw gp,0x10(sp)
00401ccc  sw ra,0x1c(sp)
00401cd0  sw gp,0x18(sp)
00401cd4  bal 0x00401cdc
00401cd8  _nop
00401cdc  lui gp,0x4
00401ce0  addiu gp,gp,-0x6c9c
00401ce4  addu gp,gp,ra
00401ce8  lw t9,-0x7fd8(gp)
00401cec  nop
00401cf0  addiu t9,t9,0x1eb8
00401cf4  bal 0x00401eb8
00401cf8  _nop
00401cfc  lw gp,0x10(sp)
00401d00  nop
00401d04  bal 0x00401d0c
00401d08  _nop
00401d0c  lui gp,0x4
00401d10  addiu gp,gp,-0x6ccc
00401d14  addu gp,gp,ra
00401d18  lw t9,-0x7fdc(gp)
00401d1c  nop
00401d20  addiu t9,t9,-0x3a10
00401d24  bal 0x0041c5f0
00401d28  _nop
00401d2c  lw gp,0x10(sp)
00401d30  nop
00401d34  lw ra,0x1c(sp)
00401d38  nop
00401d3c  jr ra
00401d40  _addiu sp,sp,0x20
