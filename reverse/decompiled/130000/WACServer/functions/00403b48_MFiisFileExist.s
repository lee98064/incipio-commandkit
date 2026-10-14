# MFiisFileExist @ 00403b48
00403b48  addiu sp,sp,-0xb8
00403b4c  sw ra,0xb4(sp)
00403b50  lui gp,0x44
00403b54  addiu gp,gp,-0x4fc0
00403b58  sw gp,0x10(sp)
00403b5c  lw t9,-0x7f28(gp)
00403b60  nop
00403b64  jalr t9
00403b68  _addiu a1,sp,0x18
00403b6c  lw ra,0xb4(sp)
00403b70  nor v0,zero,v0
00403b74  srl v0,v0,0x1f
00403b78  jr ra
00403b7c  _addiu sp,sp,0xb8
