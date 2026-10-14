# lh_abort @ 0043e8a0
0043e8a0  lui gp,0x1e
0043e8a4  addiu gp,gp,-0x5420
0043e8a8  addu gp,gp,t9
0043e8ac  addiu sp,sp,-0x28
0043e8b0  sw ra,0x24(sp)
0043e8b4  sw s8,0x20(sp)
0043e8b8  move s8,sp
0043e8bc  sw gp,0x10(sp)
0043e8c0  sw a1,0x2c(s8)
0043e8c4  sw a2,0x30(s8)
0043e8c8  sw a3,0x34(s8)
0043e8cc  sw a0,0x28(s8)
0043e8d0  addiu v0,s8,0x2c
0043e8d4  sw v0,0x18(s8)
0043e8d8  lw v0,0x18(s8)
0043e8dc  lw a0,0x28(s8)
0043e8e0  move a1,v0
0043e8e4  lw v0,-0x6be4(gp)
0043e8e8  nop
0043e8ec  move t9,v0
0043e8f0  jalr t9
0043e8f4  _nop
0043e8f8  lw gp,0x10(s8)
0043e8fc  li a0,0x1
0043e900  lw v0,-0x7738(gp)
0043e904  nop
0043e908  move t9,v0
0043e90c  jalr t9
0043e910  _nop
