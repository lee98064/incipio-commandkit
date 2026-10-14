# FUN_00404e60 @ 00404e60
00404e60  lui gp,0x2
00404e64  addiu gp,gp,-0x7000
00404e68  addu gp,gp,t9
00404e6c  addiu sp,sp,-0x28
00404e70  sw ra,0x24(sp)
00404e74  sw s1,0x20(sp)
00404e78  sw s0,0x1c(sp)
00404e7c  sw gp,0x10(sp)
00404e80  lw s0,-0x7fe8(gp)
00404e84  li s1,-0x1
00404e88  b 0x00404e98
00404e8c  _addiu s0,s0,0x5de4
00404e90  jalr t9
00404e94  _nop
00404e98  lw t9,0x0(s0)
00404e9c  nop
00404ea0  bne t9,s1,0x00404e90
00404ea4  _addiu s0,s0,-0x4
00404ea8  lw ra,0x24(sp)
00404eac  lw s1,0x20(sp)
00404eb0  lw s0,0x1c(sp)
00404eb4  jr ra
00404eb8  _addiu sp,sp,0x28
