# json_object_get_type @ 00434f08
00434f08  addiu sp,sp,-0x8
00434f0c  sw s8,0x4(sp)
00434f10  move s8,sp
00434f14  sw a0,0x8(s8)
00434f18  lw v0,0x8(s8)
00434f1c  nop
00434f20  bne v0,zero,0x00434f34
00434f24  _nop
00434f28  clear v0
00434f2c  b 0x00434f40
00434f30  _nop
00434f34  lw v0,0x8(s8)
00434f38  nop
00434f3c  lw v0,0x0(v0)
00434f40  move sp,s8
00434f44  lw s8,0x4(sp)
00434f48  addiu sp,sp,0x8
00434f4c  jr ra
00434f50  _nop
