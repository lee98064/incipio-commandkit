# FUN_0042d638 @ 0042d638
0042d638  addiu sp,sp,-0x28
0042d63c  sw ra,0x24(sp)
0042d640  sw s2,0x20(sp)
0042d644  sw s1,0x1c(sp)
0042d648  sw s0,0x18(sp)
0042d64c  lui gp,0x62
0042d650  addiu gp,gp,-0x5cf0
0042d654  sw gp,0x10(sp)
0042d658  lw v0,0xc8(a1)
0042d65c  li v1,0x1
0042d660  lw t9,-0x7244(gp)
0042d664  addu v0,a1,v0
0042d668  sb v1,0xcc(v0)
0042d66c  lw a2,0xc8(a1)
0042d670  addiu s1,a1,0xcc
0042d674  move s2,a0
0042d678  addiu a0,a2,0x1
0042d67c  nor a2,zero,a2
0042d680  move s0,a1
0042d684  addu a0,s1,a0
0042d688  addiu a2,a2,0x48
0042d68c  jalr t9
0042d690  _clear a1
0042d694  lbu v1,0x113(s0)
0042d698  li v0,-0x80
0042d69c  move a0,s0
0042d6a0  or v0,v1,v0
0042d6a4  move a1,s1
0042d6a8  jal 0x0042b904
0042d6ac  _sb v0,0x113(s0)
0042d6b0  clear v1
0042d6b4  li a0,0x40
0042d6b8  srl v0,v1,0x3
0042d6bc  sll v0,v0,0x3
0042d6c0  addu v0,s0,v0
0042d6c4  lw a1,0x4(v0)
0042d6c8  addiu v1,v1,0x8
0042d6cc  sb a1,0x0(s2)
0042d6d0  lw a1,0x4(v0)
0042d6d4  nop
0042d6d8  srl a1,a1,0x8
0042d6dc  sb a1,0x1(s2)
0042d6e0  lhu a1,0x4(v0)
0042d6e4  nop
0042d6e8  sb a1,0x2(s2)
0042d6ec  lbu a1,0x4(v0)
0042d6f0  nop
0042d6f4  sb a1,0x3(s2)
0042d6f8  lw a1,0x0(v0)
0042d6fc  nop
0042d700  sb a1,0x4(s2)
0042d704  lw a1,0x0(v0)
0042d708  nop
0042d70c  srl a1,a1,0x8
0042d710  sb a1,0x5(s2)
0042d714  lhu a1,0x0(v0)
0042d718  nop
0042d71c  sb a1,0x6(s2)
0042d720  lbu v0,0x0(v0)
0042d724  nop
0042d728  sb v0,0x7(s2)
0042d72c  bne v1,a0,0x0042d6b8
0042d730  _addiu s2,s2,0x8
0042d734  lw ra,0x24(sp)
0042d738  lw s2,0x20(sp)
0042d73c  lw s1,0x1c(sp)
0042d740  lw s0,0x18(sp)
0042d744  clear v0
0042d748  jr ra
0042d74c  _addiu sp,sp,0x28
