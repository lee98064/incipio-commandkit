# json_object_get_boolean @ 00436d20
00436d20  lui gp,0x1e
00436d24  addiu gp,gp,0x35f0
00436d28  addu gp,gp,t9
00436d2c  addiu sp,sp,-0x28
00436d30  sw ra,0x24(sp)
00436d34  sw s8,0x20(sp)
00436d38  sw s0,0x1c(sp)
00436d3c  move s8,sp
00436d40  sw gp,0x10(sp)
00436d44  sw a0,0x28(s8)
00436d48  lw v0,0x28(s8)
00436d4c  nop
00436d50  bne v0,zero,0x00436d64
00436d54  _nop
00436d58  clear s0
00436d5c  b 0x00436e6c
00436d60  _nop
00436d64  lw v0,0x28(s8)
00436d68  nop
00436d6c  lw v0,0x0(v0)
00436d70  li v1,0x2
00436d74  beq v0,v1,0x00436e00
00436d78  _nop
00436d7c  sltiu v1,v0,0x3
00436d80  beq v1,zero,0x00436d9c
00436d84  _nop
00436d88  li v1,0x1
00436d8c  beq v0,v1,0x00436dbc
00436d90  _nop
00436d94  b 0x00436e68
00436d98  _nop
00436d9c  li v1,0x3
00436da0  beq v0,v1,0x00436dd0
00436da4  _nop
00436da8  li v1,0x6
00436dac  beq v0,v1,0x00436e4c
00436db0  _nop
00436db4  b 0x00436e68
00436db8  _nop
00436dbc  lw v0,0x28(s8)
00436dc0  nop
00436dc4  lw s0,0x18(v0)
00436dc8  b 0x00436e6c
00436dcc  _nop
00436dd0  lw v0,0x28(s8)
00436dd4  nop
00436dd8  lw a1,0x1c(v0)
00436ddc  lw a0,0x18(v0)
00436de0  clear s0
00436de4  move v0,a0
00436de8  or v0,v0,a1
00436dec  beq v0,zero,0x00436e6c
00436df0  _nop
00436df4  li s0,0x1
00436df8  b 0x00436e6c
00436dfc  _nop
00436e00  lw v0,0x28(s8)
00436e04  nop
00436e08  lw v1,0x1c(v0)
00436e0c  lw v0,0x18(v0)
00436e10  clear s0
00436e14  lw t0,-0x7310(gp)
00436e18  move a1,v1
00436e1c  move a0,v0
00436e20  clear a3
00436e24  clear a2
00436e28  move t9,t0
00436e2c  jalr t9
00436e30  _nop
00436e34  lw gp,0x10(s8)
00436e38  beq v0,zero,0x00436e6c
00436e3c  _nop
00436e40  li s0,0x1
00436e44  b 0x00436e6c
00436e48  _nop
00436e4c  lw v0,0x28(s8)
00436e50  nop
00436e54  lw v0,0x1c(v0)
00436e58  nop
00436e5c  sltu s0,zero,v0
00436e60  b 0x00436e6c
00436e64  _nop
00436e68  clear s0
00436e6c  move v0,s0
00436e70  move sp,s8
00436e74  lw ra,0x24(sp)
00436e78  lw s8,0x20(sp)
00436e7c  lw s0,0x1c(sp)
00436e80  addiu sp,sp,0x28
00436e84  jr ra
00436e88  _nop
