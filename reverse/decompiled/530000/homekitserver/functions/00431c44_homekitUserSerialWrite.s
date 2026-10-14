# homekitUserSerialWrite @ 00431c44
00431c44  addiu sp,sp,-0x20
00431c48  sw ra,0x1c(sp)
00431c4c  lui gp,0x62
00431c50  addiu gp,gp,-0x5cf0
00431c54  sw gp,0x10(sp)
00431c58  lw t9,-0x5a74(gp)
00431c5c  nop
00431c60  jalr t9
00431c64  _nop
00431c68  lw ra,0x1c(sp)
00431c6c  clear v0
00431c70  jr ra
00431c74  _addiu sp,sp,0x20
