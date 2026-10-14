# free_requests @ 0040b5a0
0040b5a0  addiu sp,sp,-0x28
0040b5a4  sw ra,0x24(sp)
0040b5a8  sw s1,0x20(sp)
0040b5ac  sw s0,0x1c(sp)
0040b5b0  lui gp,0x47
0040b5b4  addiu gp,gp,0x2630
0040b5b8  sw gp,0x10(sp)
0040b5bc  lw v0,-0x7f60(gp)
0040b5c0  nop
0040b5c4  lw s0,0x0(v0)
0040b5c8  b 0x0040b628
0040b5cc  _nop
0040b5d0  lw v0,0x8d0(s0)
0040b5d4  lw s1,0x327c(s0)
0040b5d8  beq v0,zero,0x0040b5f0
0040b5dc  _move a0,v0
0040b5e0  jalr t9
0040b5e4  _nop
0040b5e8  lw gp,0x10(sp)
0040b5ec  sw zero,0x8d0(s0)
0040b5f0  lw v0,0x98(s0)
0040b5f4  lw t9,-0x7fb0(gp)
0040b5f8  beq v0,zero,0x0040b614
0040b5fc  _move a0,v0
0040b600  jalr t9
0040b604  _nop
0040b608  lw gp,0x10(sp)
0040b60c  sw zero,0x98(s0)
0040b610  lw t9,-0x7fb0(gp)
0040b614  move a0,s0
0040b618  jalr t9
0040b61c  _move s0,s1
0040b620  lw gp,0x10(sp)
0040b624  nop
0040b628  lw t9,-0x7fb0(gp)
0040b62c  bne s0,zero,0x0040b5d0
0040b630  _nop
0040b634  lw v0,-0x7f60(gp)
0040b638  nop
0040b63c  sw zero,0x0(v0)
0040b640  lw ra,0x24(sp)
0040b644  lw s1,0x20(sp)
0040b648  lw s0,0x1c(sp)
0040b64c  jr ra
0040b650  _addiu sp,sp,0x28
