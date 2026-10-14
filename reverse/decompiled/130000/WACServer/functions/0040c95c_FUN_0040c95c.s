# FUN_0040c95c @ 0040c95c
0040c95c  addiu sp,sp,-0x30
0040c960  sw ra,0x2c(sp)
0040c964  sw s2,0x28(sp)
0040c968  sw s1,0x24(sp)
0040c96c  sw s0,0x20(sp)
0040c970  lui gp,0x44
0040c974  addiu gp,gp,-0x4fc0
0040c978  sw gp,0x10(sp)
0040c97c  lw t9,-0x7fb0(gp)
0040c980  andi s1,a3,0xff
0040c984  sw a1,0x18(sp)
0040c988  move s0,a0
0040c98c  jalr t9
0040c990  _move s2,a2
0040c994  lw gp,0x10(sp)
0040c998  lw a0,0x18(sp)
0040c99c  beq s1,zero,0x0040c9b0
0040c9a0  _nop
0040c9a4  lw t9,-0x7de8(gp)
0040c9a8  b 0x0040c9b8
0040c9ac  _nop
0040c9b0  lw t9,-0x7f3c(gp)
0040c9b4  nop
0040c9b8  jalr t9
0040c9bc  _move a1,s0
0040c9c0  lw gp,0x10(sp)
0040c9c4  addiu a0,s0,0xf8
0040c9c8  sw s1,0xf4(s0)
0040c9cc  lw t9,-0x7d98(gp)
0040c9d0  move a1,s2
0040c9d4  jalr t9
0040c9d8  _li a2,0x10
0040c9dc  lw ra,0x2c(sp)
0040c9e0  lw s2,0x28(sp)
0040c9e4  lw s1,0x24(sp)
0040c9e8  lw s0,0x20(sp)
0040c9ec  clear v0
0040c9f0  jr ra
0040c9f4  _addiu sp,sp,0x30
