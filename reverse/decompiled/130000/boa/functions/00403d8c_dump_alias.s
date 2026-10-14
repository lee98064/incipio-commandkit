# dump_alias @ 00403d8c
00403d8c  addiu sp,sp,-0x28
00403d90  sw ra,0x24(sp)
00403d94  sw s2,0x20(sp)
00403d98  sw s1,0x1c(sp)
00403d9c  sw s0,0x18(sp)
00403da0  lui gp,0x47
00403da4  addiu gp,gp,0x2630
00403da8  sw gp,0x10(sp)
00403dac  lui s1,0x47
00403db0  lui s2,0x47
00403db4  addiu s1,s1,-0x3a94
00403db8  addiu s2,s2,-0x3a50
00403dbc  lw s0,0x0(s1)
00403dc0  nop
00403dc4  beq s0,zero,0x00403e28
00403dc8  _nop
00403dcc  lw a0,0x0(s0)
00403dd0  lw t9,-0x7fb0(gp)
00403dd4  beq a0,zero,0x00403de8
00403dd8  _nop
00403ddc  jalr t9
00403de0  _nop
00403de4  lw gp,0x10(sp)
00403de8  lw a0,0x4(s0)
00403dec  lw t9,-0x7fb0(gp)
00403df0  beq a0,zero,0x00403e04
00403df4  _nop
00403df8  jalr t9
00403dfc  _nop
00403e00  lw gp,0x10(sp)
00403e04  lw v0,0x14(s0)
00403e08  lw t9,-0x7fb0(gp)
00403e0c  move a0,s0
00403e10  jalr t9
00403e14  _move s0,v0
00403e18  lw gp,0x10(sp)
00403e1c  bne s0,zero,0x00403dcc
00403e20  _nop
00403e24  sw zero,0x0(s1)
00403e28  addiu s1,s1,0x4
00403e2c  bne s1,s2,0x00403dbc
00403e30  _nop
00403e34  lw ra,0x24(sp)
00403e38  lw s2,0x20(sp)
00403e3c  lw s1,0x1c(sp)
00403e40  lw s0,0x18(sp)
00403e44  jr ra
00403e48  _addiu sp,sp,0x28
