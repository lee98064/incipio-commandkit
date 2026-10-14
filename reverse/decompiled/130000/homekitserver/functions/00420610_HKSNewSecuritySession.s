# HKSNewSecuritySession @ 00420610
00420610  addiu sp,sp,-0x20
00420614  sw ra,0x1c(sp)
00420618  lui gp,0x62
0042061c  addiu gp,gp,-0x6b80
00420620  sw gp,0x10(sp)
00420624  lw t9,-0x5a68(gp)
00420628  li a0,0x1
0042062c  jalr t9
00420630  _li a1,0x68
00420634  sb zero,0x0(v0)
00420638  lw ra,0x1c(sp)
0042063c  nop
00420640  jr ra
00420644  _addiu sp,sp,0x20
