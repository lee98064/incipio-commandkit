# FUN_8040a2bc @ 8040a2bc
8040a2bc  addiu sp,sp,-0x20
8040a2c0  sw ra,0x1c(sp)
8040a2c4  sw s1,0x18(sp)
8040a2c8  sw s0,0x14(sp)
8040a2cc  bgtz a0,0x8040a2e8
8040a2d0  _move s0,a1
8040a2d4  lui a0,0x8041
8040a2d8  jal 0x804077a4
8040a2dc  _addiu a0,a0,-0x1f10
8040a2e0  j 0x8040a328
8040a2e4  _nop
8040a2e8  lw a0,0x0(a1)
8040a2ec  clear a1
8040a2f0  jal 0x80406c50
8040a2f4  _li a2,0x10
8040a2f8  lw a0,0x4(s0)
8040a2fc  nop
8040a300  bne a0,zero,0x8040a310
8040a304  _move s1,v0
8040a308  j 0x8040a320
8040a30c  _li a1,0x10
8040a310  clear a1
8040a314  jal 0x80406c50
8040a318  _li a2,0xa
8040a31c  move a1,v0
8040a320  jal 0x804077dc
8040a324  _move a0,s1
8040a328  lw ra,0x1c(sp)
8040a32c  lw s1,0x18(sp)
8040a330  lw s0,0x14(sp)
8040a334  jr ra
8040a338  _addiu sp,sp,0x20
