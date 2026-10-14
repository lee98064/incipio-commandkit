# json_object_put @ 00434c88
00434c88  addiu sp,sp,-0x20
00434c8c  sw ra,0x1c(sp)
00434c90  sw s8,0x18(sp)
00434c94  move s8,sp
00434c98  sw a0,0x20(s8)
00434c9c  lw v0,0x20(s8)
00434ca0  nop
00434ca4  beq v0,zero,0x00434d50
00434ca8  _nop
00434cac  lw v0,0x20(s8)
00434cb0  nop
00434cb4  lw v0,0xc(v0)
00434cb8  nop
00434cbc  addiu v1,v0,-0x1
00434cc0  lw v0,0x20(s8)
00434cc4  nop
00434cc8  sw v1,0xc(v0)
00434ccc  lw v0,0x20(s8)
00434cd0  nop
00434cd4  lw v0,0xc(v0)
00434cd8  nop
00434cdc  bne v0,zero,0x00434d50
00434ce0  _nop
00434ce4  lw v0,0x20(s8)
00434ce8  nop
00434cec  lw v0,0x20(v0)
00434cf0  nop
00434cf4  beq v0,zero,0x00434d28
00434cf8  _nop
00434cfc  lw v0,0x20(s8)
00434d00  nop
00434d04  lw v0,0x20(v0)
00434d08  lw v1,0x20(s8)
00434d0c  nop
00434d10  lw v1,0x24(v1)
00434d14  lw a0,0x20(s8)
00434d18  move a1,v1
00434d1c  move t9,v0
00434d20  jalr t9
00434d24  _nop
00434d28  lw v0,0x20(s8)
00434d2c  nop
00434d30  lw v0,0x4(v0)
00434d34  lw a0,0x20(s8)
00434d38  move t9,v0
00434d3c  jalr t9
00434d40  _nop
00434d44  li v0,0x1
00434d48  b 0x00434d54
00434d4c  _nop
00434d50  clear v0
00434d54  move sp,s8
00434d58  lw ra,0x1c(sp)
00434d5c  lw s8,0x18(sp)
00434d60  addiu sp,sp,0x20
00434d64  jr ra
00434d68  _nop
