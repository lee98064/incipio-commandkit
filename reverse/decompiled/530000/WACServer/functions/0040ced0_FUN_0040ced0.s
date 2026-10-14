# FUN_0040ced0 @ 0040ced0
0040ced0  lw v0,0x104(a0)
0040ced4  nop
0040ced8  bne v0,zero,0x0040cf24
0040cedc  _nop
0040cee0  lw v1,0x108(a0)
0040cee4  nop
0040cee8  bne v1,zero,0x0040cef8
0040ceec  _addu a1,a0,v1
0040cef0  b 0x0040cf10
0040cef4  _li v0,-0x1a59
0040cef8  lw a2,0x100(a0)
0040cefc  nop
0040cf00  addiu a2,a2,-0x1
0040cf04  subu v1,a2,v1
0040cf08  sb v1,0x0(a1)
0040cf0c  sw zero,0x108(a0)
0040cf10  lw v1,0x104(a0)
0040cf14  nop
0040cf18  bne v1,zero,0x0040cf24
0040cf1c  _nop
0040cf20  sw v0,0x104(a0)
0040cf24  jr ra
0040cf28  _nop
