# HKUpdateValueToPrivateEventTable @ 0042f0f8
0042f0f8  addiu sp,sp,-0x28
0042f0fc  sw ra,0x24(sp)
0042f100  sw s2,0x20(sp)
0042f104  sw s1,0x1c(sp)
0042f108  sw s0,0x18(sp)
0042f10c  lui gp,0x62
0042f110  addiu gp,gp,-0x6b80
0042f114  sw gp,0x10(sp)
0042f118  lw v0,0x0(a0)
0042f11c  nop
0042f120  beq v0,a0,0x0042f22c
0042f124  _move s0,a2
0042f128  lw s1,0x14(a0)
0042f12c  nop
0042f130  lw v0,0x0(s1)
0042f134  b 0x0042f224
0042f138  _addiu a0,a0,0x14
0042f13c  lw v1,0x4(s1)
0042f140  nop
0042f144  bne v1,a1,0x0042f21c
0042f148  _nop
0042f14c  lw v0,0xc(s1)
0042f150  nop
0042f154  sltiu v1,v0,0x6
0042f158  beq v1,zero,0x0042f234
0042f15c  _lui v1,0x5b
0042f160  sll v0,v0,0x2
0042f164  addiu v1,v1,-0x376c
0042f168  addu v0,v1,v0
0042f16c  lw v0,0x0(v0)
0042f170  nop
0042f174  jr v0
0042f178  _nop
0042f17c  b 0x0042f234
0042f180  _sw s0,0x8(s1)
0042f184  b 0x0042f234
0042f188  _sw s0,0x8(s1)
0042f18c  lw s2,0x8(s1)
0042f190  nop
0042f194  beq s2,zero,0x0042f1d0
0042f198  _move a0,s2
0042f19c  lw t9,-0x7894(gp)
0042f1a0  nop
0042f1a4  jalr t9
0042f1a8  _move a1,s0
0042f1ac  lw gp,0x10(sp)
0042f1b0  beq v0,zero,0x0042f234
0042f1b4  _nop
0042f1b8  lw t9,-0x7aa4(gp)
0042f1bc  nop
0042f1c0  jalr t9
0042f1c4  _move a0,s2
0042f1c8  lw gp,0x10(sp)
0042f1cc  nop
0042f1d0  lw t9,-0x63cc(gp)
0042f1d4  nop
0042f1d8  jalr t9
0042f1dc  _move a0,s0
0042f1e0  lw gp,0x10(sp)
0042f1e4  addiu a1,v0,0x1
0042f1e8  lw t9,-0x5a68(gp)
0042f1ec  nop
0042f1f0  jalr t9
0042f1f4  _li a0,0x1
0042f1f8  lw gp,0x10(sp)
0042f1fc  move a0,v0
0042f200  sw v0,0x8(s1)
0042f204  lw t9,-0x7eb0(gp)
0042f208  nop
0042f20c  jalr t9
0042f210  _move a1,s0
0042f214  b 0x0042f238
0042f218  _clear v0
0042f21c  move s1,v0
0042f220  lw v0,0x0(v0)
0042f224  bne s1,a0,0x0042f13c
0042f228  _addiu s1,s1,-0x14
0042f22c  b 0x0042f238
0042f230  _li v0,-0x1a6b
0042f234  clear v0
0042f238  lw ra,0x24(sp)
0042f23c  lw s2,0x20(sp)
0042f240  lw s1,0x1c(sp)
0042f244  lw s0,0x18(sp)
0042f248  jr ra
0042f24c  _addiu sp,sp,0x28
