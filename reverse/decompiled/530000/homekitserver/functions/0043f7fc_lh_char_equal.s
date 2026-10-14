# lh_char_equal @ 0043f7fc
0043f7fc  lui gp,0x1e
0043f800  addiu gp,gp,-0x54ec
0043f804  addu gp,gp,t9
0043f808  addiu sp,sp,-0x20
0043f80c  sw ra,0x1c(sp)
0043f810  sw s8,0x18(sp)
0043f814  move s8,sp
0043f818  sw gp,0x10(sp)
0043f81c  sw a0,0x20(s8)
0043f820  sw a1,0x24(s8)
0043f824  lw v1,0x20(s8)
0043f828  lw v0,0x24(s8)
0043f82c  move a0,v1
0043f830  move a1,v0
0043f834  lw v0,-0x7894(gp)
0043f838  nop
0043f83c  move t9,v0
0043f840  jalr t9
0043f844  _nop
0043f848  lw gp,0x10(s8)
0043f84c  sltiu v0,v0,0x1
0043f850  move sp,s8
0043f854  lw ra,0x1c(sp)
0043f858  lw s8,0x18(sp)
0043f85c  addiu sp,sp,0x20
0043f860  jr ra
0043f864  _nop
