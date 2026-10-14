# FUN_00414d78 @ 00414d78
00414d78  addiu sp,sp,-0x38
00414d7c  sw ra,0x34(sp)
00414d80  sw s3,0x30(sp)
00414d84  sw s2,0x2c(sp)
00414d88  sw s1,0x28(sp)
00414d8c  sw s0,0x24(sp)
00414d90  lui gp,0x58
00414d94  addiu gp,gp,0x5010
00414d98  sw gp,0x10(sp)
00414d9c  lw t9,-0x71e4(gp)
00414da0  move s1,a0
00414da4  move s3,a1
00414da8  lui a0,0x53
00414dac  lui a1,0x53
00414db0  addiu a0,a0,0x2ee8
00414db4  addiu a1,a1,0x47fc
00414db8  jalr t9
00414dbc  _move s2,a2
00414dc0  lw gp,0x10(sp)
00414dc4  bne v0,zero,0x00414df4
00414dc8  _move s0,v0
00414dcc  lw v0,-0x72fc(gp)
00414dd0  lw t9,-0x785c(gp)
00414dd4  lui a1,0x55
00414dd8  lw a0,0x0(v0)
00414ddc  lui a2,0x53
00414de0  addiu a1,a1,-0x6504
00414de4  jalr t9
00414de8  _addiu a2,a2,0x2ef8
00414dec  b 0x00414e20
00414df0  _nop
00414df4  lw t9,-0x74ec(gp)
00414df8  addiu a0,sp,0x18
00414dfc  li a1,0x2
00414e00  jalr t9
00414e04  _move a2,v0
00414e08  lw gp,0x10(sp)
00414e0c  nop
00414e10  lw t9,-0x7158(gp)
00414e14  nop
00414e18  jalr t9
00414e1c  _move a0,s0
00414e20  lb v0,0x18(sp)
00414e24  nop
00414e28  addiu a0,v0,-0x31
00414e2c  sltiu a0,a0,0x2
00414e30  beq a0,zero,0x00414e44
00414e34  _addiu v1,v0,-0x30
00414e38  li v0,0x1
00414e3c  bne v1,v0,0x00414e50
00414e40  _nop
00414e44  li v0,0x2
00414e48  b 0x00414e54
00414e4c  _li v1,0x1
00414e50  li v1,0x2
00414e54  movz v0,v1,s1
00414e58  sw v1,0x0(s3)
00414e5c  sw v0,0x0(s2)
00414e60  lw ra,0x34(sp)
00414e64  lw s3,0x30(sp)
00414e68  lw s2,0x2c(sp)
00414e6c  lw s1,0x28(sp)
00414e70  lw s0,0x24(sp)
00414e74  jr ra
00414e78  _addiu sp,sp,0x38
