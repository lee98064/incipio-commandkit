# FUN_0040c428 @ 0040c428
0040c428  lui gp,0x44
0040c42c  addiu gp,gp,-0x4fc0
0040c430  bne a1,zero,0x0040c468
0040c434  _move a2,a0
0040c438  move v0,a0
0040c43c  li v1,0xf
0040c440  li a1,-0x1
0040c444  lbu a0,0x1167(v0)
0040c448  addiu v1,v1,-0x1
0040c44c  addiu a0,a0,0x1
0040c450  andi a0,a0,0xff
0040c454  bne a0,zero,0x0040c464
0040c458  _sb a0,0x1167(v0)
0040c45c  bne v1,a1,0x0040c444
0040c460  _addiu v0,v0,-0x1
0040c464  addiu a1,a2,0x1158
0040c468  lw t9,-0x7ef8(gp)
0040c46c  move a0,a1
0040c470  li a1,0x10
0040c474  jr t9
0040c478  _nop
