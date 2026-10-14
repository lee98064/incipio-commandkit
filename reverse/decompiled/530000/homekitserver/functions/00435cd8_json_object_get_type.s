# json_object_get_type @ 00435cd8
00435cd8  addiu sp,sp,-0x8
00435cdc  sw s8,0x4(sp)
00435ce0  move s8,sp
00435ce4  sw a0,0x8(s8)
00435ce8  lw v0,0x8(s8)
00435cec  nop
00435cf0  bne v0,zero,0x00435d04
00435cf4  _nop
00435cf8  clear v0
00435cfc  b 0x00435d10
00435d00  _nop
00435d04  lw v0,0x8(s8)
00435d08  nop
00435d0c  lw v0,0x0(v0)
00435d10  move sp,s8
00435d14  lw s8,0x4(sp)
00435d18  addiu sp,sp,0x8
00435d1c  jr ra
00435d20  _nop
