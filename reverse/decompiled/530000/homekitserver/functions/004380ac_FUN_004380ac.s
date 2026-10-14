# FUN_004380ac @ 004380ac
004380ac  lui gp,0x1e
004380b0  addiu gp,gp,0x2264
004380b4  addu gp,gp,t9
004380b8  addiu sp,sp,-0x20
004380bc  sw ra,0x1c(sp)
004380c0  sw s8,0x18(sp)
004380c4  move s8,sp
004380c8  sw gp,0x10(sp)
004380cc  sw a0,0x20(s8)
004380d0  lw v0,0x20(s8)
004380d4  nop
004380d8  lw v0,0x18(v0)
004380dc  nop
004380e0  move a0,v0
004380e4  lw v0,-0x6570(gp)
004380e8  nop
004380ec  move t9,v0
004380f0  jalr t9
004380f4  _nop
004380f8  lw gp,0x10(s8)
004380fc  lw a0,0x20(s8)
00438100  lw v0,-0x7fcc(gp)
00438104  nop
00438108  addiu v0,v0,0x5b3c
0043810c  move t9,v0
00438110  jalr t9
00438114  _nop
00438118  lw gp,0x10(s8)
0043811c  move sp,s8
00438120  lw ra,0x1c(sp)
00438124  lw s8,0x18(sp)
00438128  addiu sp,sp,0x20
0043812c  jr ra
00438130  _nop
