# json_object_new_array @ 00437364
00437364  lui gp,0x1e
00437368  addiu gp,gp,0x211c
0043736c  addu gp,gp,t9
00437370  addiu sp,sp,-0x28
00437374  sw ra,0x24(sp)
00437378  sw s8,0x20(sp)
0043737c  move s8,sp
00437380  sw gp,0x10(sp)
00437384  li a0,0x5
00437388  lw v0,-0x7fcc(gp)
0043738c  nop
00437390  addiu v0,v0,0x4df0
00437394  move t9,v0
00437398  jalr t9
0043739c  _nop
004373a0  lw gp,0x10(s8)
004373a4  sw v0,0x18(s8)
004373a8  lw v0,0x18(s8)
004373ac  nop
004373b0  bne v0,zero,0x004373c4
004373b4  _nop
004373b8  clear v0
004373bc  b 0x00437424
004373c0  _nop
004373c4  lw v0,0x18(s8)
004373c8  lw v1,-0x7fcc(gp)
004373cc  nop
004373d0  addiu v1,v1,0x72dc
004373d4  sw v1,0x4(v0)
004373d8  lw v0,0x18(s8)
004373dc  lw v1,-0x7fcc(gp)
004373e0  nop
004373e4  addiu v1,v1,0x6f0c
004373e8  sw v1,0x8(v0)
004373ec  lw v0,-0x7fcc(gp)
004373f0  nop
004373f4  addiu a0,v0,0x727c
004373f8  lw v0,-0x5f3c(gp)
004373fc  nop
00437400  move t9,v0
00437404  jalr t9
00437408  _nop
0043740c  lw gp,0x10(s8)
00437410  move v1,v0
00437414  lw v0,0x18(s8)
00437418  nop
0043741c  sw v1,0x18(v0)
00437420  lw v0,0x18(s8)
00437424  move sp,s8
00437428  lw ra,0x24(sp)
0043742c  lw s8,0x20(sp)
00437430  addiu sp,sp,0x28
00437434  jr ra
00437438  _nop
