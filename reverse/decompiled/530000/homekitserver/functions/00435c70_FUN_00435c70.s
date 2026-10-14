# FUN_00435c70 @ 00435c70
00435c70  addiu sp,sp,-0x8
00435c74  sw s8,0x4(sp)
00435c78  move s8,sp
00435c7c  sw a0,0x8(s8)
00435c80  sw a1,0xc(s8)
00435c84  lw v0,0x8(s8)
00435c88  nop
00435c8c  bne v0,zero,0x00435ca8
00435c90  _nop
00435c94  lw v0,0xc(s8)
00435c98  nop
00435c9c  sltiu v0,v0,0x1
00435ca0  b 0x00435cc4
00435ca4  _nop
00435ca8  lw v0,0x8(s8)
00435cac  nop
00435cb0  lw v1,0x0(v0)
00435cb4  lw v0,0xc(s8)
00435cb8  nop
00435cbc  xor v0,v1,v0
00435cc0  sltiu v0,v0,0x1
00435cc4  move sp,s8
00435cc8  lw s8,0x4(sp)
00435ccc  addiu sp,sp,0x8
00435cd0  jr ra
00435cd4  _nop
