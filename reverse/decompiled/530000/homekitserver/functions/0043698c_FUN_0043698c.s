# FUN_0043698c @ 0043698c
0043698c  lui gp,0x1e
00436990  addiu gp,gp,0x3984
00436994  addu gp,gp,t9
00436998  addiu sp,sp,-0x20
0043699c  sw ra,0x1c(sp)
004369a0  sw s8,0x18(sp)
004369a4  move s8,sp
004369a8  sw gp,0x10(sp)
004369ac  sw a0,0x20(s8)
004369b0  lw v0,0x20(s8)
004369b4  nop
004369b8  lw v0,0x18(v0)
004369bc  nop
004369c0  move a0,v0
004369c4  lw v0,-0x5898(gp)
004369c8  nop
004369cc  move t9,v0
004369d0  jalr t9
004369d4  _nop
004369d8  lw gp,0x10(s8)
004369dc  move sp,s8
004369e0  lw ra,0x1c(sp)
004369e4  lw s8,0x18(sp)
004369e8  addiu sp,sp,0x20
004369ec  jr ra
004369f0  _nop
