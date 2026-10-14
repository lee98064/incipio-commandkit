# FUN_004383c4 @ 004383c4
004383c4  lui gp,0x1e
004383c8  addiu gp,gp,0x1f4c
004383cc  addu gp,gp,t9
004383d0  addiu sp,sp,-0x20
004383d4  sw ra,0x1c(sp)
004383d8  sw s8,0x18(sp)
004383dc  move s8,sp
004383e0  sw gp,0x10(sp)
004383e4  sw a0,0x20(s8)
004383e8  sw a1,0x24(s8)
004383ec  sw a2,0x28(s8)
004383f0  lw v0,0x20(s8)
004383f4  nop
004383f8  lw v0,0x18(v0)
004383fc  nop
00438400  move a0,v0
00438404  lw a1,0x24(s8)
00438408  lw a2,0x28(s8)
0043840c  lw v0,-0x6984(gp)
00438410  nop
00438414  move t9,v0
00438418  jalr t9
0043841c  _nop
00438420  lw gp,0x10(s8)
00438424  move sp,s8
00438428  lw ra,0x1c(sp)
0043842c  lw s8,0x18(sp)
00438430  addiu sp,sp,0x20
00438434  jr ra
00438438  _nop
