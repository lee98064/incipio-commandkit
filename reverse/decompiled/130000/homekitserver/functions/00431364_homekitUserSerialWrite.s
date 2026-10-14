# homekitUserSerialWrite @ 00431364
00431364  addiu sp,sp,-0x20
00431368  sw ra,0x1c(sp)
0043136c  lui gp,0x62
00431370  addiu gp,gp,-0x6b80
00431374  sw gp,0x10(sp)
00431378  lw t9,-0x5a8c(gp)
0043137c  nop
00431380  jalr t9
00431384  _nop
00431388  lw ra,0x1c(sp)
0043138c  clear v0
00431390  jr ra
00431394  _addiu sp,sp,0x20
