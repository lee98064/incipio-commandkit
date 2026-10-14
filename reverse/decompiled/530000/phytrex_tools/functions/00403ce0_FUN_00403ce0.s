# FUN_00403ce0 @ 00403ce0
00403ce0  addiu sp,sp,-0x30
00403ce4  sw ra,0x2c(sp)
00403ce8  sw s8,0x28(sp)
00403cec  move s8,sp
00403cf0  lui gp,0x42
00403cf4  addiu gp,gp,-0x1db0
00403cf8  sw gp,0x10(sp)
00403cfc  li v0,0x64
00403d00  sw v0,0x1c(s8)
00403d04  sb zero,0x20(s8)
00403d08  lui v0,0x40
00403d0c  addiu a0,v0,0x5f70
00403d10  li a1,0x2
00403d14  lw v0,-0x7fc4(gp)
00403d18  nop
00403d1c  move t9,v0
00403d20  jalr t9
00403d24  _nop
00403d28  lw gp,0x10(s8)
00403d2c  sw v0,0x18(s8)
00403d30  lw v0,0x18(s8)
00403d34  nop
00403d38  blez v0,0x00403de4
00403d3c  _nop
00403d40  lw a0,0x18(s8)
00403d44  lui a1,0x1
00403d48  clear a2
00403d4c  lw v0,-0x7f64(gp)
00403d50  nop
00403d54  move t9,v0
00403d58  jalr t9
00403d5c  _nop
00403d60  lw gp,0x10(s8)
00403d64  addiu v0,s8,0x1c
00403d68  lw a0,0x18(s8)
00403d6c  move a1,v0
00403d70  li a2,0x8
00403d74  lw v0,-0x7f74(gp)
00403d78  nop
00403d7c  move t9,v0
00403d80  jalr t9
00403d84  _nop
00403d88  lw gp,0x10(s8)
00403d8c  move v1,v0
00403d90  li v0,-0x1
00403d94  bne v1,v0,0x00403dbc
00403d98  _nop
00403d9c  lui v0,0x40
00403da0  addiu a0,v0,0x5f80
00403da4  lw v0,-0x7f50(gp)
00403da8  nop
00403dac  move t9,v0
00403db0  jalr t9
00403db4  _nop
00403db8  lw gp,0x10(s8)
00403dbc  lui v0,0x40
00403dc0  addiu a0,v0,0x5fac
00403dc4  lw v0,-0x7f50(gp)
00403dc8  nop
00403dcc  move t9,v0
00403dd0  jalr t9
00403dd4  _nop
00403dd8  lw gp,0x10(s8)
00403ddc  b 0x00403e04
00403de0  _nop
00403de4  lui v0,0x40
00403de8  addiu a0,v0,0x5fc8
00403dec  lw v0,-0x7f50(gp)
00403df0  nop
00403df4  move t9,v0
00403df8  jalr t9
00403dfc  _nop
00403e00  lw gp,0x10(s8)
00403e04  lw a0,0x18(s8)
00403e08  lw v0,-0x7fcc(gp)
00403e0c  nop
00403e10  move t9,v0
00403e14  jalr t9
00403e18  _nop
00403e1c  lw gp,0x10(s8)
00403e20  move sp,s8
00403e24  lw ra,0x2c(sp)
00403e28  lw s8,0x28(sp)
00403e2c  addiu sp,sp,0x30
00403e30  jr ra
00403e34  _nop
