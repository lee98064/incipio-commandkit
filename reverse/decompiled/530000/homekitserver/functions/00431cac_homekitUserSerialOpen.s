# homekitUserSerialOpen @ 00431cac
00431cac  addiu sp,sp,-0x20
00431cb0  sw ra,0x1c(sp)
00431cb4  lui gp,0x62
00431cb8  addiu gp,gp,-0x5cf0
00431cbc  sw gp,0x10(sp)
00431cc0  lw t9,-0x6fbc(gp)
00431cc4  nop
00431cc8  jalr t9
00431ccc  _nop
00431cd0  lw ra,0x1c(sp)
00431cd4  clear v0
00431cd8  jr ra
00431cdc  _addiu sp,sp,0x20
