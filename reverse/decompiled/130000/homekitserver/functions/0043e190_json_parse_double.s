# json_parse_double @ 0043e190
0043e190  lui gp,0x1e
0043e194  addiu gp,gp,-0x4d10
0043e198  addu gp,gp,t9
0043e19c  addiu sp,sp,-0x20
0043e1a0  sw ra,0x1c(sp)
0043e1a4  sw s8,0x18(sp)
0043e1a8  move s8,sp
0043e1ac  sw gp,0x10(sp)
0043e1b0  sw a0,0x20(s8)
0043e1b4  sw a1,0x24(s8)
0043e1b8  lw a0,0x20(s8)
0043e1bc  lw v0,-0x7fd0(gp)
0043e1c0  nop
0043e1c4  addiu a1,v0,-0x1f98
0043e1c8  lw a2,0x24(s8)
0043e1cc  lw v0,-0x6ea4(gp)
0043e1d0  nop
0043e1d4  move t9,v0
0043e1d8  jalr t9
0043e1dc  _nop
0043e1e0  lw gp,0x10(s8)
0043e1e4  xori v0,v0,0x1
0043e1e8  sltu v0,zero,v0
0043e1ec  move sp,s8
0043e1f0  lw ra,0x1c(sp)
0043e1f4  lw s8,0x18(sp)
0043e1f8  addiu sp,sp,0x20
0043e1fc  jr ra
0043e200  _nop
