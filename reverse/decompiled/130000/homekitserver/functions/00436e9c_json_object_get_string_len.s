# json_object_get_string_len @ 00436e9c
00436e9c  addiu sp,sp,-0x8
00436ea0  sw s8,0x4(sp)
00436ea4  move s8,sp
00436ea8  sw a0,0x8(s8)
00436eac  lw v0,0x8(s8)
00436eb0  nop
00436eb4  bne v0,zero,0x00436ec8
00436eb8  _nop
00436ebc  clear v0
00436ec0  b 0x00436ef8
00436ec4  _nop
00436ec8  lw v0,0x8(s8)
00436ecc  nop
00436ed0  lw v1,0x0(v0)
00436ed4  li v0,0x6
00436ed8  bne v1,v0,0x00436ef4
00436edc  _nop
00436ee0  lw v0,0x8(s8)
00436ee4  nop
00436ee8  lw v0,0x1c(v0)
00436eec  b 0x00436ef8
00436ef0  _nop
00436ef4  clear v0
00436ef8  move sp,s8
00436efc  lw s8,0x4(sp)
00436f00  addiu sp,sp,0x8
00436f04  jr ra
00436f08  _nop
