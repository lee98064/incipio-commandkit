# FUN_00401e64 @ 00401e64
00401e64  addiu sp,sp,-0x20
00401e68  sw ra,0x1c(sp)
00401e6c  lui gp,0x43
00401e70  addiu gp,gp,-0x4c90
00401e74  sw gp,0x10(sp)
00401e78  jal 0x00401d38
00401e7c  _nop
00401e80  lw gp,0x10(sp)
00401e84  nop
00401e88  lw t9,-0x7db0(gp)
00401e8c  beq v0,zero,0x00401ebc
00401e90  _lui a1,0x41
00401e94  lui a0,0x41
00401e98  addiu a0,a0,0xf4
00401e9c  addiu a1,a1,0xf54
00401ea0  jalr t9
00401ea4  _li a2,0x34
00401ea8  lw gp,0x10(sp)
00401eac  lui a0,0x41
00401eb0  lw t9,-0x7e18(gp)
00401eb4  b 0x00401ee0
00401eb8  _addiu a0,a0,0x130
00401ebc  lui a0,0x41
00401ec0  addiu a0,a0,0x148
00401ec4  addiu a1,a1,0xf54
00401ec8  jalr t9
00401ecc  _li a2,0x37
00401ed0  lw gp,0x10(sp)
00401ed4  lui a0,0x41
00401ed8  addiu a0,a0,0x198
00401edc  lw t9,-0x7e18(gp)
00401ee0  lw ra,0x1c(sp)
00401ee4  jr t9
00401ee8  _addiu sp,sp,0x20
