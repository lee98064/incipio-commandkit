# json_tokener_new @ 004378e8
004378e8  lui gp,0x1e
004378ec  addiu gp,gp,0x1b98
004378f0  addu gp,gp,t9
004378f4  addiu sp,sp,-0x20
004378f8  sw ra,0x1c(sp)
004378fc  sw s8,0x18(sp)
00437900  move s8,sp
00437904  sw gp,0x10(sp)
00437908  li a0,0x20
0043790c  lw v0,-0x5a50(gp)
00437910  nop
00437914  move t9,v0
00437918  jalr t9
0043791c  _nop
00437920  lw gp,0x10(s8)
00437924  move sp,s8
00437928  lw ra,0x1c(sp)
0043792c  lw s8,0x18(sp)
00437930  addiu sp,sp,0x20
00437934  jr ra
00437938  _nop
