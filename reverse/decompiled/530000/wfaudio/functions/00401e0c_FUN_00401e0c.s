# FUN_00401e0c @ 00401e0c
00401e0c  addiu sp,sp,-0x20
00401e10  sw ra,0x1c(sp)
00401e14  lui gp,0x43
00401e18  addiu gp,gp,-0x4c90
00401e1c  sw gp,0x10(sp)
00401e20  lw t9,-0x7e18(gp)
00401e24  lui a0,0x41
00401e28  jalr t9
00401e2c  _addiu a0,a0,0x84
00401e30  lw gp,0x10(sp)
00401e34  lui a0,0x41
00401e38  lw t9,-0x7e18(gp)
00401e3c  nop
00401e40  jalr t9
00401e44  _addiu a0,a0,0xa4
00401e48  lw gp,0x10(sp)
00401e4c  lw ra,0x1c(sp)
00401e50  lui a0,0x41
00401e54  lw t9,-0x7e18(gp)
00401e58  addiu a0,a0,0xcc
00401e5c  jr t9
00401e60  _addiu sp,sp,0x20
