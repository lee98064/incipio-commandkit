# lh_char_hash @ 0043e98c
0043e98c  addiu sp,sp,-0x18
0043e990  sw s8,0x14(sp)
0043e994  move s8,sp
0043e998  sw a0,0x18(s8)
0043e99c  sw zero,0xc(s8)
0043e9a0  lw v0,0x18(s8)
0043e9a4  nop
0043e9a8  sw v0,0x8(s8)
0043e9ac  b 0x0043e9fc
0043e9b0  _nop
0043e9b4  lw v1,0xc(s8)
0043e9b8  nop
0043e9bc  move v0,v1
0043e9c0  sll v0,v0,0x7
0043e9c4  addu v1,v0,v1
0043e9c8  lw v0,0x8(s8)
0043e9cc  nop
0043e9d0  lb v0,0x0(v0)
0043e9d4  nop
0043e9d8  addu v1,v1,v0
0043e9dc  lui v0,0x9e37
0043e9e0  ori v0,v0,0x1
0043e9e4  addu v0,v1,v0
0043e9e8  sw v0,0xc(s8)
0043e9ec  lw v0,0x8(s8)
0043e9f0  nop
0043e9f4  addiu v0,v0,0x1
0043e9f8  sw v0,0x8(s8)
0043e9fc  lw v0,0x8(s8)
0043ea00  nop
0043ea04  lb v0,0x0(v0)
0043ea08  nop
0043ea0c  bne v0,zero,0x0043e9b4
0043ea10  _nop
0043ea14  lw v0,0xc(s8)
0043ea18  move sp,s8
0043ea1c  lw s8,0x14(sp)
0043ea20  addiu sp,sp,0x18
0043ea24  jr ra
0043ea28  _nop
