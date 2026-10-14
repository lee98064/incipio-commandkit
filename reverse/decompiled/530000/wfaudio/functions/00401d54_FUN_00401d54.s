# FUN_00401d54 @ 00401d54
00401d54  addiu sp,sp,-0xb8
00401d58  sw ra,0xb4(sp)
00401d5c  sw s1,0xb0(sp)
00401d60  sw s0,0xac(sp)
00401d64  lui gp,0x43
00401d68  addiu gp,gp,-0x4c90
00401d6c  sw gp,0x10(sp)
00401d70  lw t9,-0x7ee0(gp)
00401d74  addiu s1,sp,0x18
00401d78  move a0,s1
00401d7c  clear a1
00401d80  jalr t9
00401d84  _li a2,0x40
00401d88  lw gp,0x10(sp)
00401d8c  addiu s0,sp,0x58
00401d90  move a0,s0
00401d94  lw t9,-0x7ee0(gp)
00401d98  clear a1
00401d9c  jalr t9
00401da0  _li a2,0x50
00401da4  lw gp,0x10(sp)
00401da8  li a0,0x2b1
00401dac  lw t9,-0x7e24(gp)
00401db0  nop
00401db4  jalr t9
00401db8  _move a1,s1
00401dbc  lb v0,0x18(sp)
00401dc0  lw gp,0x10(sp)
00401dc4  beq v0,zero,0x00401df8
00401dc8  _lui a1,0x41
00401dcc  lw t9,-0x7f24(gp)
00401dd0  addiu a1,a1,0x74
00401dd4  move a2,s1
00401dd8  jalr t9
00401ddc  _move a0,s0
00401de0  lw gp,0x10(sp)
00401de4  nop
00401de8  lw t9,-0x7e18(gp)
00401dec  nop
00401df0  jalr t9
00401df4  _move a0,s0
00401df8  lw ra,0xb4(sp)
00401dfc  lw s1,0xb0(sp)
00401e00  lw s0,0xac(sp)
00401e04  jr ra
00401e08  _addiu sp,sp,0xb8
