# isFileExist @ 0040262c
0040262c  addiu sp,sp,-0xb8
00402630  sw ra,0xb4(sp)
00402634  lui gp,0x43
00402638  addiu gp,gp,0x3060
0040263c  sw gp,0x10(sp)
00402640  lw t9,-0x7f88(gp)
00402644  nop
00402648  jalr t9
0040264c  _addiu a1,sp,0x18
00402650  lw ra,0xb4(sp)
00402654  nor v0,zero,v0
00402658  srl v0,v0,0x1f
0040265c  jr ra
00402660  _addiu sp,sp,0xb8
