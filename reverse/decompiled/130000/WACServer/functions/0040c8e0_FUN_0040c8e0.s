# FUN_0040c8e0 @ 0040c8e0
0040c8e0  addiu sp,sp,-0x30
0040c8e4  sw ra,0x2c(sp)
0040c8e8  sw s1,0x28(sp)
0040c8ec  sw s0,0x24(sp)
0040c8f0  lui gp,0x44
0040c8f4  addiu gp,gp,-0x4fc0
0040c8f8  sw gp,0x10(sp)
0040c8fc  lw t9,-0x7fb0(gp)
0040c900  sw a2,0x18(sp)
0040c904  move s0,a0
0040c908  jalr t9
0040c90c  _move s1,a1
0040c910  li v0,0x1
0040c914  lw gp,0x10(sp)
0040c918  lw a0,0x18(sp)
0040c91c  bne s1,v0,0x0040c930
0040c920  _nop
0040c924  lw t9,-0x7de8(gp)
0040c928  b 0x0040c938
0040c92c  _nop
0040c930  lw t9,-0x7f3c(gp)
0040c934  nop
0040c938  jalr t9
0040c93c  _move a1,s0
0040c940  sw s1,0xf4(s0)
0040c944  lw ra,0x2c(sp)
0040c948  lw s1,0x28(sp)
0040c94c  lw s0,0x24(sp)
0040c950  clear v0
0040c954  jr ra
0040c958  _addiu sp,sp,0x30
