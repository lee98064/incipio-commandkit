# PlatformSWAPStart @ 00402cbc
00402cbc  addiu sp,sp,-0x30
00402cc0  sw ra,0x2c(sp)
00402cc4  sw s4,0x28(sp)
00402cc8  sw s3,0x24(sp)
00402ccc  sw s2,0x20(sp)
00402cd0  sw s1,0x1c(sp)
00402cd4  sw s0,0x18(sp)
00402cd8  lui gp,0x44
00402cdc  addiu gp,gp,-0x4fc0
00402ce0  sw gp,0x10(sp)
00402ce4  move s3,a1
00402ce8  beq a1,zero,0x00402e24
00402cec  _move s2,a0
00402cf0  lw t9,-0x7d5c(gp)
00402cf4  lui a0,0x42
00402cf8  jalr t9
00402cfc  _addiu a0,a0,-0x301c
00402d00  lw gp,0x10(sp)
00402d04  beq s2,zero,0x00402e08
00402d08  _lui s1,0x42
00402d0c  lw t9,-0x7eac(gp)
00402d10  lui a1,0x42
00402d14  addiu a1,a1,-0x3230
00402d18  jalr t9
00402d1c  _addiu a0,s1,-0x2fec
00402d20  lw gp,0x10(sp)
00402d24  beq v0,zero,0x00402dec
00402d28  _move s0,v0
00402d2c  lw t9,-0x7f68(gp)
00402d30  nop
00402d34  jalr t9
00402d38  _move a0,v0
00402d3c  lw gp,0x10(sp)
00402d40  move a0,v0
00402d44  lw t9,-0x7e64(gp)
00402d48  nop
00402d4c  jalr t9
00402d50  _li a1,0x2
00402d54  lw gp,0x10(sp)
00402d58  bne v0,zero,0x00402de0
00402d5c  _addiu a1,s1,-0x2fec
00402d60  lw t9,-0x7d5c(gp)
00402d64  lui a0,0x42
00402d68  addiu a0,a0,-0x2fd4
00402d6c  jalr t9
00402d70  _lui s4,0x42
00402d74  lw gp,0x10(sp)
00402d78  addiu s4,s4,-0x2fa4
00402d7c  b 0x00402da0
00402d80  _clear s1
00402d84  lbu a2,0x0(s2)
00402d88  move a0,s0
00402d8c  jalr t9
00402d90  _move a1,s4
00402d94  lw gp,0x10(sp)
00402d98  addiu s1,s1,0x1
00402d9c  addiu s2,s2,0x1
00402da0  slt v0,s1,s3
00402da4  lw t9,-0x7e2c(gp)
00402da8  bne v0,zero,0x00402d84
00402dac  _nop
00402db0  lw t9,-0x7f68(gp)
00402db4  nop
00402db8  jalr t9
00402dbc  _move a0,s0
00402dc0  lw gp,0x10(sp)
00402dc4  move a0,v0
00402dc8  lw t9,-0x7e64(gp)
00402dcc  nop
00402dd0  jalr t9
00402dd4  _li a1,0x8
00402dd8  lw gp,0x10(sp)
00402ddc  nop
00402de0  lw t9,-0x7ec8(gp)
00402de4  b 0x00402e14
00402de8  _move a0,s0
00402dec  lw t9,-0x7d5c(gp)
00402df0  lui a0,0x42
00402df4  addiu a0,a0,-0x2f9c
00402df8  jalr t9
00402dfc  _addiu a1,s1,-0x2fec
00402e00  b 0x00402e1c
00402e04  _nop
00402e08  lw t9,-0x7dac(gp)
00402e0c  lui a0,0x42
00402e10  addiu a0,a0,-0x2f64
00402e14  jalr t9
00402e18  _nop
00402e1c  lw gp,0x10(sp)
00402e20  nop
00402e24  lw t9,-0x7dbc(gp)
00402e28  lui a0,0x42
00402e2c  jalr t9
00402e30  _addiu a0,a0,-0x2f48
00402e34  lw ra,0x2c(sp)
00402e38  lw s4,0x28(sp)
00402e3c  lw s3,0x24(sp)
00402e40  lw s2,0x20(sp)
00402e44  lw s1,0x1c(sp)
00402e48  lw s0,0x18(sp)
00402e4c  clear v0
00402e50  jr ra
00402e54  _addiu sp,sp,0x30
