# json_object_get_object @ 00435a14
00435a14  addiu sp,sp,-0x8
00435a18  sw s8,0x4(sp)
00435a1c  move s8,sp
00435a20  sw a0,0x8(s8)
00435a24  lw v0,0x8(s8)
00435a28  nop
00435a2c  bne v0,zero,0x00435a40
00435a30  _nop
00435a34  clear v0
00435a38  b 0x00435a70
00435a3c  _nop
00435a40  lw v0,0x8(s8)
00435a44  nop
00435a48  lw v1,0x0(v0)
00435a4c  li v0,0x4
00435a50  bne v1,v0,0x00435a6c
00435a54  _nop
00435a58  lw v0,0x8(s8)
00435a5c  nop
00435a60  lw v0,0x18(v0)
00435a64  b 0x00435a70
00435a68  _nop
00435a6c  clear v0
00435a70  move sp,s8
00435a74  lw s8,0x4(sp)
00435a78  addiu sp,sp,0x8
00435a7c  jr ra
00435a80  _nop
