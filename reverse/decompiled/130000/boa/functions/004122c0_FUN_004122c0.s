# FUN_004122c0 @ 004122c0
004122c0  addiu sp,sp,-0x28
004122c4  sw ra,0x24(sp)
004122c8  sw s1,0x20(sp)
004122cc  sw s0,0x1c(sp)
004122d0  lui gp,0x47
004122d4  addiu gp,gp,0x2630
004122d8  sw gp,0x10(sp)
004122dc  lw v0,-0x7ed8(gp)
004122e0  nop
004122e4  lw s0,0x4(v0)
004122e8  sw zero,0x4(v0)
004122ec  lw t9,-0x7fb0(gp)
004122f0  beq s0,zero,0x0041232c
004122f4  _nop
004122f8  lw a0,0x0(s0)
004122fc  lw s1,0x4(s0)
00412300  jalr t9
00412304  _nop
00412308  lw gp,0x10(sp)
0041230c  move a0,s0
00412310  lw t9,-0x7fb0(gp)
00412314  nop
00412318  jalr t9
0041231c  _move s0,s1
00412320  lw gp,0x10(sp)
00412324  b 0x004122ec
00412328  _nop
0041232c  lw ra,0x24(sp)
00412330  lw s1,0x20(sp)
00412334  lw s0,0x1c(sp)
00412338  jr ra
0041233c  _addiu sp,sp,0x28
