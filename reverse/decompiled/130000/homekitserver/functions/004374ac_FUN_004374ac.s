# FUN_004374ac @ 004374ac
004374ac  lui gp,0x1e
004374b0  addiu gp,gp,0x1fd4
004374b4  addu gp,gp,t9
004374b8  addiu sp,sp,-0x20
004374bc  sw ra,0x1c(sp)
004374c0  sw s8,0x18(sp)
004374c4  move s8,sp
004374c8  sw gp,0x10(sp)
004374cc  sw a0,0x20(s8)
004374d0  sw a1,0x24(s8)
004374d4  lw v0,0x20(s8)
004374d8  nop
004374dc  lw v0,0x18(v0)
004374e0  nop
004374e4  move a0,v0
004374e8  lw a1,0x24(s8)
004374ec  lw v0,-0x7818(gp)
004374f0  nop
004374f4  move t9,v0
004374f8  jalr t9
004374fc  _nop
00437500  lw gp,0x10(s8)
00437504  move sp,s8
00437508  lw ra,0x1c(sp)
0043750c  lw s8,0x18(sp)
00437510  addiu sp,sp,0x20
00437514  jr ra
00437518  _nop
