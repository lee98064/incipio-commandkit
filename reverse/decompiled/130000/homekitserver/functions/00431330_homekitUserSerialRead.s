# homekitUserSerialRead @ 00431330
00431330  addiu sp,sp,-0x20
00431334  sw ra,0x1c(sp)
00431338  lui gp,0x62
0043133c  addiu gp,gp,-0x6b80
00431340  sw gp,0x10(sp)
00431344  lw t9,-0x58bc(gp)
00431348  nop
0043134c  jalr t9
00431350  _nop
00431354  lw ra,0x1c(sp)
00431358  clear v0
0043135c  jr ra
00431360  _addiu sp,sp,0x20
