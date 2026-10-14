# writeHomeKitSetupCode @ 00404ce0
00404ce0  addiu sp,sp,-0x40
00404ce4  sw ra,0x3c(sp)
00404ce8  sw s8,0x38(sp)
00404cec  move s8,sp
00404cf0  lui gp,0x42
00404cf4  addiu gp,gp,-0x1db0
00404cf8  sw gp,0x10(sp)
00404cfc  sw a0,0x40(s8)
00404d00  sw zero,0x18(s8)
00404d04  addiu v0,s8,0x20
00404d08  move a0,v0
00404d0c  lui v0,0x40
00404d10  addiu a1,v0,0x6140
00404d14  li a2,0x5
00404d18  lw v0,-0x7f4c(gp)
00404d1c  nop
00404d20  move t9,v0
00404d24  jalr t9
00404d28  _nop
00404d2c  lw gp,0x10(s8)
00404d30  lw a0,0x40(s8)
00404d34  lw v0,-0x7fc0(gp)
00404d38  nop
00404d3c  move t9,v0
00404d40  jalr t9
00404d44  _nop
00404d48  lw gp,0x10(s8)
00404d4c  lw a0,0x40(s8)
00404d50  move a1,v0
00404d54  jal 0x00404718
00404d58  _nop
00404d5c  lw gp,0x10(s8)
00404d60  addiu v1,s8,0x20
00404d64  addiu v1,v1,0x4
00404d68  move a0,v1
00404d6c  move a1,v0
00404d70  lw v0,-0x7f24(gp)
00404d74  nop
00404d78  move t9,v0
00404d7c  jalr t9
00404d80  _nop
00404d84  lw gp,0x10(s8)
00404d88  sb zero,0x35(s8)
00404d8c  lui v0,0x40
00404d90  addiu a0,v0,0x6148
00404d94  li a1,0x2
00404d98  lw v0,-0x7fc4(gp)
00404d9c  nop
00404da0  move t9,v0
00404da4  jalr t9
00404da8  _nop
00404dac  lw gp,0x10(s8)
00404db0  sw v0,0x18(s8)
00404db4  lw v0,0x18(s8)
00404db8  nop
00404dbc  beq v0,zero,0x00404e94
00404dc0  _nop
00404dc4  lw a0,0x18(s8)
00404dc8  lui a1,0x1
00404dcc  clear a2
00404dd0  lw v0,-0x7f64(gp)
00404dd4  nop
00404dd8  move t9,v0
00404ddc  jalr t9
00404de0  _nop
00404de4  lw gp,0x10(s8)
00404de8  move v1,v0
00404dec  li v0,-0x1
00404df0  beq v1,v0,0x00404ee4
00404df4  _nop
00404df8  addiu v0,s8,0x20
00404dfc  lw a0,0x18(s8)
00404e00  move a1,v0
00404e04  li a2,0x18
00404e08  lw v0,-0x7f74(gp)
00404e0c  nop
00404e10  move t9,v0
00404e14  jalr t9
00404e18  _nop
00404e1c  lw gp,0x10(s8)
00404e20  move v1,v0
00404e24  li v0,-0x1
00404e28  bne v1,v0,0x00404e58
00404e2c  _nop
00404e30  lui v0,0x40
00404e34  addiu a0,v0,0x6158
00404e38  lw v0,-0x7f50(gp)
00404e3c  nop
00404e40  move t9,v0
00404e44  jalr t9
00404e48  _nop
00404e4c  lw gp,0x10(s8)
00404e50  b 0x00404ee8
00404e54  _nop
00404e58  lui v0,0x40
00404e5c  addiu a0,v0,0x616c
00404e60  lw v0,-0x7f50(gp)
00404e64  nop
00404e68  move t9,v0
00404e6c  jalr t9
00404e70  _nop
00404e74  lw gp,0x10(s8)
00404e78  nop
00404e7c  lw v0,0x18(s8)
00404e80  nop
00404e84  beq v0,zero,0x00404ed8
00404e88  _nop
00404e8c  b 0x00404ebc
00404e90  _nop
00404e94  lui v0,0x40
00404e98  addiu a0,v0,0x6198
00404e9c  lw v0,-0x7f50(gp)
00404ea0  nop
00404ea4  move t9,v0
00404ea8  jalr t9
00404eac  _nop
00404eb0  lw gp,0x10(s8)
00404eb4  b 0x00404ee8
00404eb8  _nop
00404ebc  lw a0,0x18(s8)
00404ec0  lw v0,-0x7fcc(gp)
00404ec4  nop
00404ec8  move t9,v0
00404ecc  jalr t9
00404ed0  _nop
00404ed4  lw gp,0x10(s8)
00404ed8  li v0,0x1
00404edc  b 0x00404f18
00404ee0  _nop
00404ee4  nop
00404ee8  lw v0,0x18(s8)
00404eec  nop
00404ef0  beq v0,zero,0x00404f14
00404ef4  _nop
00404ef8  lw a0,0x18(s8)
00404efc  lw v0,-0x7fcc(gp)
00404f00  nop
00404f04  move t9,v0
00404f08  jalr t9
00404f0c  _nop
00404f10  lw gp,0x10(s8)
00404f14  clear v0
00404f18  move sp,s8
00404f1c  lw ra,0x3c(sp)
00404f20  lw s8,0x38(sp)
00404f24  addiu sp,sp,0x40
00404f28  jr ra
00404f2c  _nop
