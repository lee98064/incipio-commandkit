# char_replace @ 0041e058
0041e058  addiu sp,sp,-0x28
0041e05c  sw ra,0x24(sp)
0041e060  sw s2,0x20(sp)
0041e064  sw s1,0x1c(sp)
0041e068  sw s0,0x18(sp)
0041e06c  lui gp,0x47
0041e070  addiu gp,gp,0x2630
0041e074  sw gp,0x10(sp)
0041e078  sll s1,a1,0x18
0041e07c  sll s2,a2,0x18
0041e080  move s0,a0
0041e084  sra s1,s1,0x18
0041e088  sra s2,s2,0x18
0041e08c  beq a0,zero,0x0041e0d4
0041e090  _li v0,-0x1
0041e094  lw t9,-0x7f1c(gp)
0041e098  nop
0041e09c  jalr t9
0041e0a0  _nop
0041e0a4  b 0x0041e0c4
0041e0a8  _clear v1
0041e0ac  lb a0,0x0(s0)
0041e0b0  nop
0041e0b4  bne a0,s1,0x0041e0c0
0041e0b8  _addiu v1,v1,0x1
0041e0bc  sb s2,0x0(s0)
0041e0c0  addiu s0,s0,0x1
0041e0c4  slt a0,v1,v0
0041e0c8  bne a0,zero,0x0041e0ac
0041e0cc  _nop
0041e0d0  clear v0
0041e0d4  lw ra,0x24(sp)
0041e0d8  lw s2,0x20(sp)
0041e0dc  lw s1,0x1c(sp)
0041e0e0  lw s0,0x18(sp)
0041e0e4  jr ra
0041e0e8  _addiu sp,sp,0x28
