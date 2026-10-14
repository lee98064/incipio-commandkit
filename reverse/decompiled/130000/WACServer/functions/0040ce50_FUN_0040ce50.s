# FUN_0040ce50 @ 0040ce50
0040ce50  addiu sp,sp,-0x30
0040ce54  sw ra,0x2c(sp)
0040ce58  sw s2,0x28(sp)
0040ce5c  sw s1,0x24(sp)
0040ce60  sw s0,0x20(sp)
0040ce64  lui gp,0x44
0040ce68  addiu gp,gp,-0x4fc0
0040ce6c  sw gp,0x10(sp)
0040ce70  lw s1,0x104(a0)
0040ce74  move s0,a0
0040ce78  move v0,a3
0040ce7c  bne s1,zero,0x0040cf18
0040ce80  _andi s2,a1,0xff
0040ce84  li v1,-0x1
0040ce88  bne a3,v1,0x0040cea4
0040ce8c  _move a0,a2
0040ce90  lw t9,-0x7f74(gp)
0040ce94  nop
0040ce98  jalr t9
0040ce9c  _sw a2,0x18(sp)
0040cea0  lw a2,0x18(sp)
0040cea4  lw v1,0x100(s0)
0040cea8  nop
0040ceac  addiu a0,v1,0x2
0040ceb0  addu a1,a0,v0
0040ceb4  sltiu a1,a1,0x100
0040ceb8  bne a1,zero,0x0040cec8
0040cebc  _addu a1,s0,v1
0040cec0  b 0x0040cf04
0040cec4  _li s1,-0x1a57
0040cec8  sb v0,0x1(a1)
0040cecc  sb s2,0x0(a1)
0040ced0  addu v0,a2,v0
0040ced4  b 0x0040cef8
0040ced8  _sw a0,0x100(s0)
0040cedc  lw v1,0x100(s0)
0040cee0  lbu a1,0x0(a2)
0040cee4  addiu a2,a2,0x1
0040cee8  addiu a0,v1,0x1
0040ceec  addu v1,s0,v1
0040cef0  sb a1,0x0(v1)
0040cef4  sw a0,0x100(s0)
0040cef8  sltu v1,a2,v0
0040cefc  bne v1,zero,0x0040cedc
0040cf00  _nop
0040cf04  lw v0,0x104(s0)
0040cf08  nop
0040cf0c  bne v0,zero,0x0040cf1c
0040cf10  _move v0,s1
0040cf14  sw s1,0x104(s0)
0040cf18  move v0,s1
0040cf1c  lw ra,0x2c(sp)
0040cf20  lw s2,0x28(sp)
0040cf24  lw s1,0x24(sp)
0040cf28  lw s0,0x20(sp)
0040cf2c  jr ra
0040cf30  _addiu sp,sp,0x30
