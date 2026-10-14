# lh_char_hash @ 0043f75c
0043f75c  addiu sp,sp,-0x18
0043f760  sw s8,0x14(sp)
0043f764  move s8,sp
0043f768  sw a0,0x18(s8)
0043f76c  sw zero,0xc(s8)
0043f770  lw v0,0x18(s8)
0043f774  nop
0043f778  sw v0,0x8(s8)
0043f77c  b 0x0043f7cc
0043f780  _nop
0043f784  lw v1,0xc(s8)
0043f788  nop
0043f78c  move v0,v1
0043f790  sll v0,v0,0x7
0043f794  addu v1,v0,v1
0043f798  lw v0,0x8(s8)
0043f79c  nop
0043f7a0  lb v0,0x0(v0)
0043f7a4  nop
0043f7a8  addu v1,v1,v0
0043f7ac  lui v0,0x9e37
0043f7b0  ori v0,v0,0x1
0043f7b4  addu v0,v1,v0
0043f7b8  sw v0,0xc(s8)
0043f7bc  lw v0,0x8(s8)
0043f7c0  nop
0043f7c4  addiu v0,v0,0x1
0043f7c8  sw v0,0x8(s8)
0043f7cc  lw v0,0x8(s8)
0043f7d0  nop
0043f7d4  lb v0,0x0(v0)
0043f7d8  nop
0043f7dc  bne v0,zero,0x0043f784
0043f7e0  _nop
0043f7e4  lw v0,0xc(s8)
0043f7e8  move sp,s8
0043f7ec  lw s8,0x14(sp)
0043f7f0  addiu sp,sp,0x18
0043f7f4  jr ra
0043f7f8  _nop
