# json_object_new_string_len @ 00436cb8
00436cb8  lui gp,0x1e
00436cbc  addiu gp,gp,0x27c8
00436cc0  addu gp,gp,t9
00436cc4  addiu sp,sp,-0x28
00436cc8  sw ra,0x24(sp)
00436ccc  sw s8,0x20(sp)
00436cd0  move s8,sp
00436cd4  sw gp,0x10(sp)
00436cd8  sw a0,0x28(s8)
00436cdc  sw a1,0x2c(s8)
00436ce0  li a0,0x6
00436ce4  lw v0,-0x7fcc(gp)
00436ce8  nop
00436cec  addiu v0,v0,0x4df0
00436cf0  move t9,v0
00436cf4  jalr t9
00436cf8  _nop
00436cfc  lw gp,0x10(s8)
00436d00  sw v0,0x18(s8)
00436d04  lw v0,0x18(s8)
00436d08  nop
00436d0c  bne v0,zero,0x00436d20
00436d10  _nop
00436d14  clear v0
00436d18  b 0x00436de4
00436d1c  _nop
00436d20  lw v0,0x18(s8)
00436d24  lw v1,-0x7fcc(gp)
00436d28  nop
00436d2c  addiu v1,v1,0x6b30
00436d30  sw v1,0x4(v0)
00436d34  lw v0,0x18(s8)
00436d38  lw v1,-0x7fcc(gp)
00436d3c  nop
00436d40  addiu v1,v1,0x6a54
00436d44  sw v1,0x8(v0)
00436d48  lw v0,0x2c(s8)
00436d4c  nop
00436d50  addiu v0,v0,0x1
00436d54  move a0,v0
00436d58  lw v0,-0x61a8(gp)
00436d5c  nop
00436d60  move t9,v0
00436d64  jalr t9
00436d68  _nop
00436d6c  lw gp,0x10(s8)
00436d70  move v1,v0
00436d74  lw v0,0x18(s8)
00436d78  nop
00436d7c  sw v1,0x18(v0)
00436d80  lw v0,0x18(s8)
00436d84  nop
00436d88  lw v1,0x18(v0)
00436d8c  lw v0,0x2c(s8)
00436d90  move a0,v1
00436d94  lw a1,0x28(s8)
00436d98  move a2,v0
00436d9c  lw v0,-0x5cb0(gp)
00436da0  nop
00436da4  move t9,v0
00436da8  jalr t9
00436dac  _nop
00436db0  lw gp,0x10(s8)
00436db4  lw v0,0x18(s8)
00436db8  nop
00436dbc  lw v1,0x18(v0)
00436dc0  lw v0,0x2c(s8)
00436dc4  nop
00436dc8  addu v0,v1,v0
00436dcc  sb zero,0x0(v0)
00436dd0  lw v0,0x18(s8)
00436dd4  lw v1,0x2c(s8)
00436dd8  nop
00436ddc  sw v1,0x1c(v0)
00436de0  lw v0,0x18(s8)
00436de4  move sp,s8
00436de8  lw ra,0x24(sp)
00436dec  lw s8,0x20(sp)
00436df0  addiu sp,sp,0x28
00436df4  jr ra
00436df8  _nop
