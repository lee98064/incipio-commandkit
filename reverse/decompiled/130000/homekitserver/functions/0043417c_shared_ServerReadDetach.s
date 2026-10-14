# shared_ServerReadDetach @ 0043417c
0043417c  addiu sp,sp,-0x28
00434180  sw ra,0x24(sp)
00434184  sw s1,0x20(sp)
00434188  sw s0,0x1c(sp)
0043418c  lui gp,0x62
00434190  addiu gp,gp,-0x6b80
00434194  sw gp,0x10(sp)
00434198  lui s0,0x60
0043419c  lw a0,-0x2fc(s0)
004341a0  li s1,-0x1
004341a4  beq a0,s1,0x004341d0
004341a8  _li v0,-0x1
004341ac  lw t9,-0x7c48(gp)
004341b0  nop
004341b4  jalr t9
004341b8  _nop
004341bc  bne v0,zero,0x004341cc
004341c0  _nop
004341c4  b 0x004341d0
004341c8  _sw s1,-0x2fc(s0)
004341cc  li v0,-0x1
004341d0  lw ra,0x24(sp)
004341d4  lw s1,0x20(sp)
004341d8  lw s0,0x1c(sp)
004341dc  jr ra
004341e0  _addiu sp,sp,0x28
