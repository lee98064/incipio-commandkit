# FUN_0043e12c @ 0043e12c
0043e12c  lui gp,0x1e
0043e130  addiu gp,gp,-0x4cac
0043e134  addu gp,gp,t9
0043e138  addiu sp,sp,-0x20
0043e13c  sw ra,0x1c(sp)
0043e140  sw s8,0x18(sp)
0043e144  move s8,sp
0043e148  sw gp,0x10(sp)
0043e14c  sw a0,0x20(s8)
0043e150  sw a1,0x24(s8)
0043e154  lw a0,0x20(s8)
0043e158  lw a1,0x24(s8)
0043e15c  clear a2
0043e160  lw v0,-0x5c50(gp)
0043e164  nop
0043e168  move t9,v0
0043e16c  jalr t9
0043e170  _nop
0043e174  lw gp,0x10(s8)
0043e178  move sp,s8
0043e17c  lw ra,0x1c(sp)
0043e180  lw s8,0x18(sp)
0043e184  addiu sp,sp,0x20
0043e188  jr ra
0043e18c  _nop
