# FUN_0042ce44 @ 0042ce44
0042ce44  addiu sp,sp,-0xe8
0042ce48  sw ra,0xe4(sp)
0042ce4c  lui gp,0x47
0042ce50  addiu gp,gp,0x2630
0042ce54  sw gp,0x10(sp)
0042ce58  lui a2,0x45
0042ce5c  move v1,a0
0042ce60  addiu v0,sp,0x18
0042ce64  li t0,0x25
0042ce68  b 0x0042ce9c
0042ce6c  _addiu a3,a2,0x215c
0042ce70  bne a1,t0,0x0042ce90
0042ce74  _nop
0042ce78  lbu t1,0x215c(a2)
0042ce7c  lbu a1,0x1(a3)
0042ce80  sb t1,0x0(v0)
0042ce84  sb a1,0x1(v0)
0042ce88  b 0x0042ce98
0042ce8c  _addiu v0,v0,0x2
0042ce90  sb a1,0x0(v0)
0042ce94  addiu v0,v0,0x1
0042ce98  addiu v1,v1,0x1
0042ce9c  lb a1,0x0(v1)
0042cea0  nop
0042cea4  bne a1,zero,0x0042ce70
0042cea8  _nop
0042ceac  lw t9,-0x79d0(gp)
0042ceb0  addiu a1,sp,0x18
0042ceb4  jalr t9
0042ceb8  _sb zero,0x0(v0)
0042cebc  lw ra,0xe4(sp)
0042cec0  nop
0042cec4  jr ra
0042cec8  _addiu sp,sp,0xe8
