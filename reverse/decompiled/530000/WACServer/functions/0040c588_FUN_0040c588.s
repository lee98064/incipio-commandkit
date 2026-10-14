# FUN_0040c588 @ 0040c588
0040c588  lui gp,0x44
0040c58c  addiu gp,gp,-0x4fc0
0040c590  bne a1,zero,0x0040c5c8
0040c594  _move a2,a0
0040c598  move v0,a0
0040c59c  li v1,0xf
0040c5a0  li a1,-0x1
0040c5a4  lbu a0,0x1167(v0)
0040c5a8  addiu v1,v1,-0x1
0040c5ac  addiu a0,a0,0x1
0040c5b0  andi a0,a0,0xff
0040c5b4  bne a0,zero,0x0040c5c4
0040c5b8  _sb a0,0x1167(v0)
0040c5bc  bne v1,a1,0x0040c5a4
0040c5c0  _addiu v0,v0,-0x1
0040c5c4  addiu a1,a2,0x1158
0040c5c8  lw t9,-0x7ef8(gp)
0040c5cc  move a0,a1
0040c5d0  li a1,0x10
0040c5d4  jr t9
0040c5d8  _nop
