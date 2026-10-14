# homekitUserSerialRead @ 00431c10
00431c10  addiu sp,sp,-0x20
00431c14  sw ra,0x1c(sp)
00431c18  lui gp,0x62
00431c1c  addiu gp,gp,-0x5cf0
00431c20  sw gp,0x10(sp)
00431c24  lw t9,-0x58a4(gp)
00431c28  nop
00431c2c  jalr t9
00431c30  _nop
00431c34  lw ra,0x1c(sp)
00431c38  clear v0
00431c3c  jr ra
00431c40  _addiu sp,sp,0x20
