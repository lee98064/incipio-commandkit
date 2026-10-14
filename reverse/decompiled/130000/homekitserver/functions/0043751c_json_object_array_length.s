# json_object_array_length @ 0043751c
0043751c  lui gp,0x1e
00437520  addiu gp,gp,0x1f64
00437524  addu gp,gp,t9
00437528  addiu sp,sp,-0x20
0043752c  sw ra,0x1c(sp)
00437530  sw s8,0x18(sp)
00437534  move s8,sp
00437538  sw gp,0x10(sp)
0043753c  sw a0,0x20(s8)
00437540  lw v0,0x20(s8)
00437544  nop
00437548  lw v0,0x18(v0)
0043754c  nop
00437550  move a0,v0
00437554  lw v0,-0x7884(gp)
00437558  nop
0043755c  move t9,v0
00437560  jalr t9
00437564  _nop
00437568  lw gp,0x10(s8)
0043756c  move sp,s8
00437570  lw ra,0x1c(sp)
00437574  lw s8,0x18(sp)
00437578  addiu sp,sp,0x20
0043757c  jr ra
00437580  _nop
