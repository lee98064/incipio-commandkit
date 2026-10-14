# lh_abort @ 0043f670
0043f670  lui gp,0x1e
0043f674  addiu gp,gp,-0x5360
0043f678  addu gp,gp,t9
0043f67c  addiu sp,sp,-0x28
0043f680  sw ra,0x24(sp)
0043f684  sw s8,0x20(sp)
0043f688  move s8,sp
0043f68c  sw gp,0x10(sp)
0043f690  sw a1,0x2c(s8)
0043f694  sw a2,0x30(s8)
0043f698  sw a3,0x34(s8)
0043f69c  sw a0,0x28(s8)
0043f6a0  addiu v0,s8,0x2c
0043f6a4  sw v0,0x18(s8)
0043f6a8  lw v0,0x18(s8)
0043f6ac  lw a0,0x28(s8)
0043f6b0  move a1,v0
0043f6b4  lw v0,-0x6bd8(gp)
0043f6b8  nop
0043f6bc  move t9,v0
0043f6c0  jalr t9
0043f6c4  _nop
0043f6c8  lw gp,0x10(s8)
0043f6cc  li a0,0x1
0043f6d0  lw v0,-0x7738(gp)
0043f6d4  nop
0043f6d8  move t9,v0
0043f6dc  jalr t9
0043f6e0  _nop
