# json_object_get_string_len @ 00437c6c
00437c6c  addiu sp,sp,-0x8
00437c70  sw s8,0x4(sp)
00437c74  move s8,sp
00437c78  sw a0,0x8(s8)
00437c7c  lw v0,0x8(s8)
00437c80  nop
00437c84  bne v0,zero,0x00437c98
00437c88  _nop
00437c8c  clear v0
00437c90  b 0x00437cc8
00437c94  _nop
00437c98  lw v0,0x8(s8)
00437c9c  nop
00437ca0  lw v1,0x0(v0)
00437ca4  li v0,0x6
00437ca8  bne v1,v0,0x00437cc4
00437cac  _nop
00437cb0  lw v0,0x8(s8)
00437cb4  nop
00437cb8  lw v0,0x1c(v0)
00437cbc  b 0x00437cc8
00437cc0  _nop
00437cc4  clear v0
00437cc8  move sp,s8
00437ccc  lw s8,0x4(sp)
00437cd0  addiu sp,sp,0x8
00437cd4  jr ra
00437cd8  _nop
