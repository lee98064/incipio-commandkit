# FUN_0043804c @ 0043804c
0043804c  lui gp,0x1e
00438050  addiu gp,gp,0x22c4
00438054  addu gp,gp,t9
00438058  addiu sp,sp,-0x20
0043805c  sw ra,0x1c(sp)
00438060  sw s8,0x18(sp)
00438064  move s8,sp
00438068  sw gp,0x10(sp)
0043806c  sw a0,0x20(s8)
00438070  lw v0,0x20(s8)
00438074  nop
00438078  move a0,v0
0043807c  lw v0,-0x7dec(gp)
00438080  nop
00438084  move t9,v0
00438088  jalr t9
0043808c  _nop
00438090  lw gp,0x10(s8)
00438094  move sp,s8
00438098  lw ra,0x1c(sp)
0043809c  lw s8,0x18(sp)
004380a0  addiu sp,sp,0x20
004380a4  jr ra
004380a8  _nop
