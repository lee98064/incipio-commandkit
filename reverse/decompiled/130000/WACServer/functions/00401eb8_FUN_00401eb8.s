# FUN_00401eb8 @ 00401eb8
00401eb8  lui gp,0x4
00401ebc  addiu gp,gp,-0x6e78
00401ec0  addu gp,gp,t9
00401ec4  addiu sp,sp,-0x20
00401ec8  sw ra,0x1c(sp)
00401ecc  sw gp,0x10(sp)
00401ed0  lw v0,-0x7d80(gp)
00401ed4  nop
00401ed8  beq v0,zero,0x00401f00
00401edc  _nop
00401ee0  lw a0,-0x7fdc(gp)
00401ee4  lw a1,-0x7fe8(gp)
00401ee8  lw t9,-0x7d80(gp)
00401eec  addiu a0,a0,0x2b00
00401ef0  jalr t9
00401ef4  _addiu a1,a1,0x3328
00401ef8  lw gp,0x10(sp)
00401efc  nop
00401f00  lw a0,-0x7fe8(gp)
00401f04  nop
00401f08  lw v0,0x3010(a0)
00401f0c  nop
00401f10  beq v0,zero,0x00401f34
00401f14  _nop
00401f18  lw t9,-0x7f90(gp)
00401f1c  nop
00401f20  beq t9,zero,0x00401f34
00401f24  _addiu a0,a0,0x3010
00401f28  lw ra,0x1c(sp)
00401f2c  jr t9
00401f30  _addiu sp,sp,0x20
00401f34  lw ra,0x1c(sp)
00401f38  nop
00401f3c  jr ra
00401f40  _addiu sp,sp,0x20
