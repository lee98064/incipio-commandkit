# json_object_get @ 00435a00
00435a00  addiu sp,sp,-0x8
00435a04  sw s8,0x4(sp)
00435a08  move s8,sp
00435a0c  sw a0,0x8(s8)
00435a10  lw v0,0x8(s8)
00435a14  nop
00435a18  beq v0,zero,0x00435a40
00435a1c  _nop
00435a20  lw v0,0x8(s8)
00435a24  nop
00435a28  lw v0,0xc(v0)
00435a2c  nop
00435a30  addiu v1,v0,0x1
00435a34  lw v0,0x8(s8)
00435a38  nop
00435a3c  sw v1,0xc(v0)
00435a40  lw v0,0x8(s8)
00435a44  move sp,s8
00435a48  lw s8,0x4(sp)
00435a4c  addiu sp,sp,0x8
00435a50  jr ra
00435a54  _nop
