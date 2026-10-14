# isConnectPPP @ 00423150
00423150  addiu sp,sp,-0xb8
00423154  sw ra,0xb4(sp)
00423158  lui gp,0x47
0042315c  addiu gp,gp,0x2630
00423160  sw gp,0x10(sp)
00423164  lw t9,-0x7e8c(gp)
00423168  lui a0,0x45
0042316c  addiu a0,a0,0xd94
00423170  jalr t9
00423174  _addiu a1,sp,0x18
00423178  lw ra,0xb4(sp)
0042317c  nor v0,zero,v0
00423180  srl v0,v0,0x1f
00423184  jr ra
00423188  _addiu sp,sp,0xb8
