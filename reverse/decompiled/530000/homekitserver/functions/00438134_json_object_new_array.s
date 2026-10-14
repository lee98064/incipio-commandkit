# json_object_new_array @ 00438134
00438134  lui gp,0x1e
00438138  addiu gp,gp,0x21dc
0043813c  addu gp,gp,t9
00438140  addiu sp,sp,-0x28
00438144  sw ra,0x24(sp)
00438148  sw s8,0x20(sp)
0043814c  move s8,sp
00438150  sw gp,0x10(sp)
00438154  li a0,0x5
00438158  lw v0,-0x7fcc(gp)
0043815c  nop
00438160  addiu v0,v0,0x5bc0
00438164  move t9,v0
00438168  jalr t9
0043816c  _nop
00438170  lw gp,0x10(s8)
00438174  sw v0,0x18(s8)
00438178  lw v0,0x18(s8)
0043817c  nop
00438180  bne v0,zero,0x00438194
00438184  _nop
00438188  clear v0
0043818c  b 0x004381f4
00438190  _nop
00438194  lw v0,0x18(s8)
00438198  lw v1,-0x7fc8(gp)
0043819c  nop
004381a0  addiu v1,v1,-0x7f54
004381a4  sw v1,0x4(v0)
004381a8  lw v0,0x18(s8)
004381ac  lw v1,-0x7fcc(gp)
004381b0  nop
004381b4  addiu v1,v1,0x7cdc
004381b8  sw v1,0x8(v0)
004381bc  lw v0,-0x7fc8(gp)
004381c0  nop
004381c4  addiu a0,v0,-0x7fb4
004381c8  lw v0,-0x5f28(gp)
004381cc  nop
004381d0  move t9,v0
004381d4  jalr t9
004381d8  _nop
004381dc  lw gp,0x10(s8)
004381e0  move v1,v0
004381e4  lw v0,0x18(s8)
004381e8  nop
004381ec  sw v1,0x18(v0)
004381f0  lw v0,0x18(s8)
004381f4  move sp,s8
004381f8  lw ra,0x24(sp)
004381fc  lw s8,0x20(sp)
00438200  addiu sp,sp,0x28
00438204  jr ra
00438208  _nop
