# json_tokener_parse_verbose @ 00437ce4
00437ce4  lui gp,0x1e
00437ce8  addiu gp,gp,0x179c
00437cec  addu gp,gp,t9
00437cf0  addiu sp,sp,-0x28
00437cf4  sw ra,0x24(sp)
00437cf8  sw s8,0x20(sp)
00437cfc  move s8,sp
00437d00  sw gp,0x10(sp)
00437d04  sw a0,0x28(s8)
00437d08  sw a1,0x2c(s8)
00437d0c  lw v0,-0x5de0(gp)
00437d10  nop
00437d14  move t9,v0
00437d18  jalr t9
00437d1c  _nop
00437d20  lw gp,0x10(s8)
00437d24  sw v0,0x1c(s8)
00437d28  lw v0,0x1c(s8)
00437d2c  nop
00437d30  bne v0,zero,0x00437d44
00437d34  _nop
00437d38  clear v0
00437d3c  b 0x00437dec
00437d40  _nop
00437d44  lw a0,0x1c(s8)
00437d48  lw a1,0x28(s8)
00437d4c  li a2,-0x1
00437d50  lw v0,-0x5918(gp)
00437d54  nop
00437d58  move t9,v0
00437d5c  jalr t9
00437d60  _nop
00437d64  lw gp,0x10(s8)
00437d68  sw v0,0x18(s8)
00437d6c  lw v0,0x1c(s8)
00437d70  nop
00437d74  lw v1,0x1c(v0)
00437d78  lw v0,0x2c(s8)
00437d7c  nop
00437d80  sw v1,0x0(v0)
00437d84  lw v0,0x1c(s8)
00437d88  nop
00437d8c  lw v0,0x1c(v0)
00437d90  nop
00437d94  beq v0,zero,0x00437dcc
00437d98  _nop
00437d9c  lw v0,0x18(s8)
00437da0  nop
00437da4  beq v0,zero,0x00437dc8
00437da8  _nop
00437dac  lw a0,0x18(s8)
00437db0  lw v0,-0x7dec(gp)
00437db4  nop
00437db8  move t9,v0
00437dbc  jalr t9
00437dc0  _nop
00437dc4  lw gp,0x10(s8)
00437dc8  sw zero,0x18(s8)
00437dcc  lw a0,0x1c(s8)
00437dd0  lw v0,-0x5d4c(gp)
00437dd4  nop
00437dd8  move t9,v0
00437ddc  jalr t9
00437de0  _nop
00437de4  lw gp,0x10(s8)
00437de8  lw v0,0x18(s8)
00437dec  move sp,s8
00437df0  lw ra,0x24(sp)
00437df4  lw s8,0x20(sp)
00437df8  addiu sp,sp,0x28
00437dfc  jr ra
00437e00  _nop
