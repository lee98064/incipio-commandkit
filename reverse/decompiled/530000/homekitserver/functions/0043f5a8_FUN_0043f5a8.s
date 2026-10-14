# FUN_0043f5a8 @ 0043f5a8
0043f5a8  lui gp,0x1e
0043f5ac  addiu gp,gp,-0x5298
0043f5b0  addu gp,gp,t9
0043f5b4  addiu sp,sp,-0x28
0043f5b8  sw ra,0x24(sp)
0043f5bc  sw s8,0x20(sp)
0043f5c0  move s8,sp
0043f5c4  sw gp,0x10(sp)
0043f5c8  sw a0,0x28(s8)
0043f5cc  lw v0,0x28(s8)
0043f5d0  nop
0043f5d4  sw v0,0x18(s8)
0043f5d8  lw v0,0x18(s8)
0043f5dc  nop
0043f5e0  bltz v0,0x0043f5fc
0043f5e4  _nop
0043f5e8  lw v0,0x18(s8)
0043f5ec  nop
0043f5f0  slti v0,v0,0x7
0043f5f4  bne v0,zero,0x0043f634
0043f5f8  _nop
0043f5fc  lw v0,-0x7fd0(gp)
0043f600  nop
0043f604  addiu a0,v0,-0x107c
0043f608  lw a1,0x28(s8)
0043f60c  li a2,0x7
0043f610  lw v0,-0x6108(gp)
0043f614  nop
0043f618  move t9,v0
0043f61c  jalr t9
0043f620  _nop
0043f624  lw gp,0x10(s8)
0043f628  clear v0
0043f62c  b 0x0043f64c
0043f630  _nop
0043f634  lw v1,0x28(s8)
0043f638  lw v0,-0x7fc4(gp)
0043f63c  sll v1,v1,0x2
0043f640  addiu v0,v0,0xc10
0043f644  addu v0,v1,v0
0043f648  lw v0,0x0(v0)
0043f64c  move sp,s8
0043f650  lw ra,0x24(sp)
0043f654  lw s8,0x20(sp)
0043f658  addiu sp,sp,0x28
0043f65c  jr ra
0043f660  _nop
