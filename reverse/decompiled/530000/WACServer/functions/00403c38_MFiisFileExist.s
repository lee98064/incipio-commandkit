# MFiisFileExist @ 00403c38
00403c38  addiu sp,sp,-0xb8
00403c3c  sw ra,0xb4(sp)
00403c40  lui gp,0x44
00403c44  addiu gp,gp,-0x4fc0
00403c48  sw gp,0x10(sp)
00403c4c  lw t9,-0x7f28(gp)
00403c50  nop
00403c54  jalr t9
00403c58  _addiu a1,sp,0x18
00403c5c  lw ra,0xb4(sp)
00403c60  nor v0,zero,v0
00403c64  srl v0,v0,0x1f
00403c68  jr ra
00403c6c  _addiu sp,sp,0xb8
