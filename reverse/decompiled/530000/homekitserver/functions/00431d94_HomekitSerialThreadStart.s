# HomekitSerialThreadStart @ 00431d94
00431d94  addiu sp,sp,-0x50
00431d98  sw ra,0x4c(sp)
00431d9c  sw s1,0x48(sp)
00431da0  sw s0,0x44(sp)
00431da4  lui gp,0x62
00431da8  addiu gp,gp,-0x5cf0
00431dac  sw gp,0x10(sp)
00431db0  lw t9,-0x5e38(gp)
00431db4  lui v1,0x61
00431db8  addiu v0,v1,0x5e60
00431dbc  lui a0,0x61
00431dc0  sw zero,0x5e60(v1)
00431dc4  addiu a0,a0,0x5e74
00431dc8  clear a1
00431dcc  sw zero,0xc(v0)
00431dd0  sw zero,0x4(v0)
00431dd4  jalr t9
00431dd8  _sw zero,0x8(v0)
00431ddc  lw gp,0x10(sp)
00431de0  lui a0,0x61
00431de4  addiu a0,a0,0x5e8c
00431de8  lw t9,-0x582c(gp)
00431dec  clear a1
00431df0  jalr t9
00431df4  _clear a2
00431df8  lw gp,0x10(sp)
00431dfc  lui a0,0x61
00431e00  clear a2
00431e04  lw t9,-0x582c(gp)
00431e08  clear a1
00431e0c  jalr t9
00431e10  _addiu a0,a0,0x5e9c
00431e14  lw gp,0x10(sp)
00431e18  addiu s0,sp,0x18
00431e1c  move a0,s0
00431e20  lw t9,-0x5f5c(gp)
00431e24  nop
00431e28  jalr t9
00431e2c  _li s1,-0x1
00431e30  lw gp,0x10(sp)
00431e34  move a0,s0
00431e38  lw t9,-0x5ba0(gp)
00431e3c  nop
00431e40  jalr t9
00431e44  _li a1,0x1
00431e48  lw gp,0x10(sp)
00431e4c  lui a0,0x61
00431e50  lui a2,0x43
00431e54  lw t9,-0x6bd0(gp)
00431e58  move a1,s0
00431e5c  addiu a2,a2,0x1eb4
00431e60  clear a3
00431e64  jalr t9
00431e68  _addiu a0,a0,0x5e70
00431e6c  lw gp,0x10(sp)
00431e70  nop
00431e74  lw t9,-0x6338(gp)
00431e78  nop
00431e7c  jalr t9
00431e80  _movz s1,zero,v0
00431e84  lw gp,0x10(sp)
00431e88  nop
00431e8c  lw t9,-0x6ae0(gp)
00431e90  nop
00431e94  jalr t9
00431e98  _move a0,s0
00431e9c  move v0,s1
00431ea0  lw ra,0x4c(sp)
00431ea4  lw s1,0x48(sp)
00431ea8  lw s0,0x44(sp)
00431eac  jr ra
00431eb0  _addiu sp,sp,0x50
