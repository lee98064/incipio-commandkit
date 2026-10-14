# FUN_00434ea0 @ 00434ea0
00434ea0  addiu sp,sp,-0x8
00434ea4  sw s8,0x4(sp)
00434ea8  move s8,sp
00434eac  sw a0,0x8(s8)
00434eb0  sw a1,0xc(s8)
00434eb4  lw v0,0x8(s8)
00434eb8  nop
00434ebc  bne v0,zero,0x00434ed8
00434ec0  _nop
00434ec4  lw v0,0xc(s8)
00434ec8  nop
00434ecc  sltiu v0,v0,0x1
00434ed0  b 0x00434ef4
00434ed4  _nop
00434ed8  lw v0,0x8(s8)
00434edc  nop
00434ee0  lw v1,0x0(v0)
00434ee4  lw v0,0xc(s8)
00434ee8  nop
00434eec  xor v0,v1,v0
00434ef0  sltiu v0,v0,0x1
00434ef4  move sp,s8
00434ef8  lw s8,0x4(sp)
00434efc  addiu sp,sp,0x8
00434f00  jr ra
00434f04  _nop
