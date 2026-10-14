# homekitUserSerialClose @ 00431c78
00431c78  addiu sp,sp,-0x20
00431c7c  sw ra,0x1c(sp)
00431c80  lui gp,0x62
00431c84  addiu gp,gp,-0x5cf0
00431c88  sw gp,0x10(sp)
00431c8c  lw t9,-0x74ec(gp)
00431c90  nop
00431c94  jalr t9
00431c98  _nop
00431c9c  lw ra,0x1c(sp)
00431ca0  clear v0
00431ca4  jr ra
00431ca8  _addiu sp,sp,0x20
