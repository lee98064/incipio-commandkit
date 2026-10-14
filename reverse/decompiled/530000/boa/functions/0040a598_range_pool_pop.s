# range_pool_pop @ 0040a598
0040a598  addiu sp,sp,-0x20
0040a59c  sw ra,0x1c(sp)
0040a5a0  lui gp,0x47
0040a5a4  addiu gp,gp,0x2630
0040a5a8  sw gp,0x10(sp)
0040a5ac  lui v1,0x47
0040a5b0  lw v0,-0x2050(v1)
0040a5b4  nop
0040a5b8  beq v0,zero,0x0040a5cc
0040a5bc  _nop
0040a5c0  lw a0,0x8(v0)
0040a5c4  b 0x0040a5dc
0040a5c8  _sw a0,-0x2050(v1)
0040a5cc  lw t9,-0x7b1c(gp)
0040a5d0  nop
0040a5d4  jalr t9
0040a5d8  _li a0,0xc
0040a5dc  sw zero,0x0(v0)
0040a5e0  sw zero,0x4(v0)
0040a5e4  sw zero,0x8(v0)
0040a5e8  lw ra,0x1c(sp)
0040a5ec  nop
0040a5f0  jr ra
0040a5f4  _addiu sp,sp,0x20
