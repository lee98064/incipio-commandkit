# _init @ 004018c8
004018c8  lui gp,0x3
004018cc  addiu gp,gp,-0x6838
004018d0  addu gp,gp,t9
004018d4  addiu sp,sp,-0x20
004018d8  sw gp,0x10(sp)
004018dc  sw ra,0x1c(sp)
004018e0  sw gp,0x18(sp)
004018e4  bal 0x004018ec
004018e8  _nop
004018ec  lui gp,0x3
004018f0  addiu gp,gp,-0x685c
004018f4  addu gp,gp,ra
004018f8  lw t9,-0x7fd8(gp)
004018fc  nop
00401900  addiu t9,t9,0x1ac8
00401904  bal 0x00401ac8
00401908  _nop
0040190c  lw gp,0x10(sp)
00401910  nop
00401914  bal 0x0040191c
00401918  _nop
0040191c  lui gp,0x3
00401920  addiu gp,gp,-0x688c
00401924  addu gp,gp,ra
00401928  lw t9,-0x7fdc(gp)
0040192c  nop
00401930  addiu t9,t9,-0x920
00401934  bal 0x0040f6e0
00401938  _nop
0040193c  lw gp,0x10(sp)
00401940  nop
00401944  lw ra,0x1c(sp)
00401948  nop
0040194c  jr ra
00401950  _addiu sp,sp,0x20
