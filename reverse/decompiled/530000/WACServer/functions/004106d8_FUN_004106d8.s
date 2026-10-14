# FUN_004106d8 @ 004106d8
004106d8  addiu sp,sp,-0xc0
004106dc  sw ra,0xbc(sp)
004106e0  sw s1,0xb8(sp)
004106e4  sw s0,0xb4(sp)
004106e8  lui gp,0x44
004106ec  addiu gp,gp,-0x4fc0
004106f0  sw gp,0x10(sp)
004106f4  addiu s0,sp,0x18
004106f8  move s1,a0
004106fc  jal 0x0040de10
00410700  _move a0,s0
00410704  jal 0x0040f4a4
00410708  _move a0,s0
0041070c  jal 0x0040f91c
00410710  _move a0,s0
00410714  lw gp,0x10(sp)
00410718  move a0,s1
0041071c  move a1,s0
00410720  lw t9,-0x7d98(gp)
00410724  nop
00410728  jalr t9
0041072c  _li a2,0x50
00410730  lw ra,0xbc(sp)
00410734  lw s1,0xb8(sp)
00410738  lw s0,0xb4(sp)
0041073c  jr ra
00410740  _addiu sp,sp,0xc0
