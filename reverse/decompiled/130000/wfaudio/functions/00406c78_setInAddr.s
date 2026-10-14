# setInAddr @ 00406c78
00406c78  addiu sp,sp,-0x78
00406c7c  sw ra,0x74(sp)
00406c80  sw s7,0x70(sp)
00406c84  sw s6,0x6c(sp)
00406c88  sw s5,0x68(sp)
00406c8c  sw s4,0x64(sp)
00406c90  sw s3,0x60(sp)
00406c94  sw s2,0x5c(sp)
00406c98  sw s1,0x58(sp)
00406c9c  sw s0,0x54(sp)
00406ca0  lui gp,0x43
00406ca4  addiu gp,gp,-0x4f70
00406ca8  sw gp,0x10(sp)
00406cac  lw t9,-0x7e30(gp)
00406cb0  move s1,a0
00406cb4  move s0,a1
00406cb8  move s2,a2
00406cbc  li a0,0x2
00406cc0  li a1,0x1
00406cc4  clear a2
00406cc8  lw s7,0x88(sp)
00406ccc  jalr t9
00406cd0  _move s6,a3
00406cd4  move s3,v0
00406cd8  li v1,-0x1
00406cdc  lw gp,0x10(sp)
00406ce0  beq s3,v1,0x00406ef4
00406ce4  _li v0,-0x1
00406ce8  lw t9,-0x7d9c(gp)
00406cec  addiu s4,sp,0x30
00406cf0  move a0,s4
00406cf4  jalr t9
00406cf8  _move a1,s1
00406cfc  lw gp,0x10(sp)
00406d00  move a0,s3
00406d04  ori a1,zero,0x8913
00406d08  lw t9,-0x7dac(gp)
00406d0c  nop
00406d10  jalr t9
00406d14  _move a2,s4
00406d18  lw gp,0x10(sp)
00406d1c  bgez v0,0x00406d3c
00406d20  _andi s5,s7,0xf
00406d24  lw t9,-0x7fc4(gp)
00406d28  nop
00406d2c  jalr t9
00406d30  _move a0,s3
00406d34  b 0x00406ef4
00406d38  _li v0,-0x1
00406d3c  li v1,0x1
00406d40  beq s5,v1,0x00406ef4
00406d44  _clear v0
00406d48  li v0,0x1043
00406d4c  andi s7,s7,0x2
00406d50  beq s7,zero,0x00406da4
00406d54  _sh v0,0x40(sp)
00406d58  beq s0,zero,0x00406da4
00406d5c  _move a0,s0
00406d60  lw t9,-0x7ed4(gp)
00406d64  nop
00406d68  jalr t9
00406d6c  _addiu a1,sp,0x18
00406d70  lw gp,0x10(sp)
00406d74  lw v0,0x18(sp)
00406d78  move a2,s4
00406d7c  lw t9,-0x7dac(gp)
00406d80  sw v0,0x14(s4)
00406d84  li v0,0x2
00406d88  sh v0,0x40(sp)
00406d8c  move a0,s3
00406d90  jalr t9
00406d94  _ori a1,zero,0x8916
00406d98  lw gp,0x10(sp)
00406d9c  bltz v0,0x00406ec8
00406da0  _nop
00406da4  andi v0,s5,0x4
00406da8  beq v0,zero,0x00406e40
00406dac  _nop
00406db0  beq s0,zero,0x00406e40
00406db4  _nop
00406db8  beq s2,zero,0x00406e40
00406dbc  _move a0,s2
00406dc0  lw t9,-0x7ed4(gp)
00406dc4  nop
00406dc8  jalr t9
00406dcc  _addiu a1,sp,0x1c
00406dd0  lw gp,0x10(sp)
00406dd4  lw v0,0x1c(sp)
00406dd8  addiu s0,sp,0x30
00406ddc  lw t9,-0x7dac(gp)
00406de0  li s2,0x2
00406de4  sw v0,0x14(s0)
00406de8  move a0,s3
00406dec  sh s2,0x40(sp)
00406df0  ori a1,zero,0x891c
00406df4  jalr t9
00406df8  _move a2,s0
00406dfc  lw gp,0x10(sp)
00406e00  bltz v0,0x00406ec8
00406e04  _move a2,s0
00406e08  lw v0,0x1c(sp)
00406e0c  lw a0,0x18(sp)
00406e10  lw t9,-0x7dac(gp)
00406e14  nor v1,zero,v0
00406e18  and v0,v0,a0
00406e1c  or v0,v1,v0
00406e20  sw v0,0x14(s0)
00406e24  sh s2,0x40(sp)
00406e28  move a0,s3
00406e2c  jalr t9
00406e30  _ori a1,zero,0x891a
00406e34  lw gp,0x10(sp)
00406e38  bltz v0,0x00406ec8
00406e3c  _nop
00406e40  andi s5,s5,0x8
00406e44  beq s5,zero,0x00406eb0
00406e48  _nop
00406e4c  beq s6,zero,0x00406eb0
00406e50  _move a1,s6
00406e54  lw t9,-0x7dfc(gp)
00406e58  li v0,0x1
00406e5c  addiu a0,sp,0x22
00406e60  li a2,0x6
00406e64  jalr t9
00406e68  _sh v0,0x20(sp)
00406e6c  lw gp,0x10(sp)
00406e70  addiu a1,sp,0x20
00406e74  addiu a0,sp,0x40
00406e78  lw t9,-0x7dfc(gp)
00406e7c  nop
00406e80  jalr t9
00406e84  _li a2,0x10
00406e88  lw gp,0x10(sp)
00406e8c  addiu a2,sp,0x30
00406e90  move a0,s3
00406e94  lw t9,-0x7dac(gp)
00406e98  nop
00406e9c  jalr t9
00406ea0  _ori a1,zero,0x8924
00406ea4  lw gp,0x10(sp)
00406ea8  bltz v0,0x00406ec8
00406eac  _nop
00406eb0  lw t9,-0x7fc4(gp)
00406eb4  nop
00406eb8  jalr t9
00406ebc  _move a0,s3
00406ec0  b 0x00406ef4
00406ec4  _clear v0
00406ec8  lw t9,-0x7fc4(gp)
00406ecc  nop
00406ed0  jalr t9
00406ed4  _move a0,s3
00406ed8  lw gp,0x10(sp)
00406edc  nop
00406ee0  lw t9,-0x7e0c(gp)
00406ee4  nop
00406ee8  jalr t9
00406eec  _move a0,s1
00406ef0  li v0,-0x1
00406ef4  lw ra,0x74(sp)
00406ef8  lw s7,0x70(sp)
00406efc  lw s6,0x6c(sp)
00406f00  lw s5,0x68(sp)
00406f04  lw s4,0x64(sp)
00406f08  lw s3,0x60(sp)
00406f0c  lw s2,0x5c(sp)
00406f10  lw s1,0x58(sp)
00406f14  lw s0,0x54(sp)
00406f18  jr ra
00406f1c  _addiu sp,sp,0x78
