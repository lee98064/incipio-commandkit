# json_object_get @ 00434c30
00434c30  addiu sp,sp,-0x8
00434c34  sw s8,0x4(sp)
00434c38  move s8,sp
00434c3c  sw a0,0x8(s8)
00434c40  lw v0,0x8(s8)
00434c44  nop
00434c48  beq v0,zero,0x00434c70
00434c4c  _nop
00434c50  lw v0,0x8(s8)
00434c54  nop
00434c58  lw v0,0xc(v0)
00434c5c  nop
00434c60  addiu v1,v0,0x1
00434c64  lw v0,0x8(s8)
00434c68  nop
00434c6c  sw v1,0xc(v0)
00434c70  lw v0,0x8(s8)
00434c74  move sp,s8
00434c78  lw s8,0x4(sp)
00434c7c  addiu sp,sp,0x8
00434c80  jr ra
00434c84  _nop
