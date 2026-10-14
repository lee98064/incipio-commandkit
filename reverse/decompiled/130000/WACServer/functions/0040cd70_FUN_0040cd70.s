# FUN_0040cd70 @ 0040cd70
0040cd70  lw v0,0x104(a0)
0040cd74  nop
0040cd78  bne v0,zero,0x0040cdc4
0040cd7c  _nop
0040cd80  lw v1,0x108(a0)
0040cd84  nop
0040cd88  bne v1,zero,0x0040cd98
0040cd8c  _addu a1,a0,v1
0040cd90  b 0x0040cdb0
0040cd94  _li v0,-0x1a59
0040cd98  lw a2,0x100(a0)
0040cd9c  nop
0040cda0  addiu a2,a2,-0x1
0040cda4  subu v1,a2,v1
0040cda8  sb v1,0x0(a1)
0040cdac  sw zero,0x108(a0)
0040cdb0  lw v1,0x104(a0)
0040cdb4  nop
0040cdb8  bne v1,zero,0x0040cdc4
0040cdbc  _nop
0040cdc0  sw v0,0x104(a0)
0040cdc4  jr ra
0040cdc8  _nop
