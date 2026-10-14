# json_tokener_new @ 004386b8
004386b8  lui gp,0x1e
004386bc  addiu gp,gp,0x1c58
004386c0  addu gp,gp,t9
004386c4  addiu sp,sp,-0x20
004386c8  sw ra,0x1c(sp)
004386cc  sw s8,0x18(sp)
004386d0  move s8,sp
004386d4  sw gp,0x10(sp)
004386d8  li a0,0x20
004386dc  lw v0,-0x5a38(gp)
004386e0  nop
004386e4  move t9,v0
004386e8  jalr t9
004386ec  _nop
004386f0  lw gp,0x10(s8)
004386f4  move sp,s8
004386f8  lw ra,0x1c(sp)
004386fc  lw s8,0x18(sp)
00438700  addiu sp,sp,0x20
00438704  jr ra
00438708  _nop
