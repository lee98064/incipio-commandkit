# readHomeKitSetupCode @ 00404c60
00404c60  addiu sp,sp,-0x48
00404c64  sw ra,0x44(sp)
00404c68  sw s8,0x40(sp)
00404c6c  sw s0,0x3c(sp)
00404c70  move s8,sp
00404c74  lui gp,0x42
00404c78  addiu gp,gp,-0x21a0
00404c7c  sw gp,0x10(sp)
00404c80  lui v0,0x40
00404c84  addiu a0,v0,0x5d58
00404c88  li a1,0x2
00404c8c  lw v0,-0x7fc4(gp)
00404c90  nop
00404c94  move t9,v0
00404c98  jalr t9
00404c9c  _nop
00404ca0  lw gp,0x10(s8)
00404ca4  sw v0,0x18(s8)
00404ca8  lw v0,0x18(s8)
00404cac  nop
00404cb0  blez v0,0x00404d2c
00404cb4  _nop
00404cb8  lw a0,0x18(s8)
00404cbc  lui a1,0x1
00404cc0  clear a2
00404cc4  lw v0,-0x7f64(gp)
00404cc8  nop
00404ccc  move t9,v0
00404cd0  jalr t9
00404cd4  _nop
00404cd8  lw gp,0x10(s8)
00404cdc  move v1,v0
00404ce0  li v0,-0x1
00404ce4  beq v1,v0,0x00404e04
00404ce8  _nop
00404cec  addiu v0,s8,0x20
00404cf0  lw a0,0x18(s8)
00404cf4  move a1,v0
00404cf8  li a2,0x18
00404cfc  lw v0,-0x7f80(gp)
00404d00  nop
00404d04  move t9,v0
00404d08  jalr t9
00404d0c  _nop
00404d10  lw gp,0x10(s8)
00404d14  move v1,v0
00404d18  li v0,-0x1
00404d1c  bne v1,v0,0x00404d60
00404d20  _nop
00404d24  b 0x00404e08
00404d28  _nop
00404d2c  lui v0,0x40
00404d30  addiu v0,v0,0x5dbc
00404d34  move a0,v0
00404d38  lui v0,0x40
00404d3c  addiu a1,v0,0x5d58
00404d40  lw v0,-0x7f30(gp)
00404d44  nop
00404d48  move t9,v0
00404d4c  jalr t9
00404d50  _nop
00404d54  lw gp,0x10(s8)
00404d58  b 0x00404e08
00404d5c  _nop
00404d60  sb zero,0x35(s8)
00404d64  lui v0,0x40
00404d68  addiu s0,v0,0x5dd8
00404d6c  addiu v0,s8,0x20
00404d70  addiu v0,v0,0x4
00404d74  move a0,v0
00404d78  lw v0,-0x7fc0(gp)
00404d7c  nop
00404d80  move t9,v0
00404d84  jalr t9
00404d88  _nop
00404d8c  lw gp,0x10(s8)
00404d90  addiu v1,s8,0x20
00404d94  addiu v1,v1,0x4
00404d98  move a0,v1
00404d9c  move a1,v0
00404da0  jal 0x004040bc
00404da4  _nop
00404da8  lw gp,0x10(s8)
00404dac  move a0,s0
00404db0  move a1,v0
00404db4  lw v0,-0x7f30(gp)
00404db8  nop
00404dbc  move t9,v0
00404dc0  jalr t9
00404dc4  _nop
00404dc8  lw gp,0x10(s8)
00404dcc  lw v0,0x18(s8)
00404dd0  nop
00404dd4  blez v0,0x00404df8
00404dd8  _nop
00404ddc  lw a0,0x18(s8)
00404de0  lw v0,-0x7fcc(gp)
00404de4  nop
00404de8  move t9,v0
00404dec  jalr t9
00404df0  _nop
00404df4  lw gp,0x10(s8)
00404df8  li v0,0x1
00404dfc  b 0x00404e38
00404e00  _nop
00404e04  nop
00404e08  lw v0,0x18(s8)
00404e0c  nop
00404e10  blez v0,0x00404e34
00404e14  _nop
00404e18  lw a0,0x18(s8)
00404e1c  lw v0,-0x7fcc(gp)
00404e20  nop
00404e24  move t9,v0
00404e28  jalr t9
00404e2c  _nop
00404e30  lw gp,0x10(s8)
00404e34  clear v0
00404e38  move sp,s8
00404e3c  lw ra,0x44(sp)
00404e40  lw s8,0x40(sp)
00404e44  lw s0,0x3c(sp)
00404e48  addiu sp,sp,0x48
00404e4c  jr ra
00404e50  _nop
