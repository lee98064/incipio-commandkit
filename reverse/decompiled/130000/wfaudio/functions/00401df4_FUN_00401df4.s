# FUN_00401df4 @ 00401df4
00401df4  addiu sp,sp,-0x20
00401df8  sw ra,0x1c(sp)
00401dfc  lui gp,0x43
00401e00  addiu gp,gp,-0x4f70
00401e04  sw gp,0x10(sp)
00401e08  jal 0x00401cc8
00401e0c  _nop
00401e10  lw gp,0x10(sp)
00401e14  nop
00401e18  lw t9,-0x7dbc(gp)
00401e1c  beq v0,zero,0x00401e4c
00401e20  _lui a1,0x41
00401e24  lui a0,0x41
00401e28  addiu a0,a0,-0x1cc
00401e2c  addiu a1,a1,0xc7c
00401e30  jalr t9
00401e34  _li a2,0x34
00401e38  lw gp,0x10(sp)
00401e3c  lui a0,0x41
00401e40  lw t9,-0x7e20(gp)
00401e44  b 0x00401e70
00401e48  _addiu a0,a0,-0x190
00401e4c  lui a0,0x41
00401e50  addiu a0,a0,-0x178
00401e54  addiu a1,a1,0xc7c
00401e58  jalr t9
00401e5c  _li a2,0x37
00401e60  lw gp,0x10(sp)
00401e64  lui a0,0x41
00401e68  addiu a0,a0,-0x128
00401e6c  lw t9,-0x7e20(gp)
00401e70  lw ra,0x1c(sp)
00401e74  jr t9
00401e78  _addiu sp,sp,0x20
