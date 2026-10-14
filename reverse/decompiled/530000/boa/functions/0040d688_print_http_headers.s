# print_http_headers @ 0040d688
0040d688  addiu sp,sp,-0x20
0040d68c  sw ra,0x1c(sp)
0040d690  sw s0,0x18(sp)
0040d694  lui gp,0x47
0040d698  addiu gp,gp,0x2630
0040d69c  sw gp,0x10(sp)
0040d6a0  lw t9,-0x79d8(gp)
0040d6a4  move s0,a0
0040d6a8  lui a0,0x47
0040d6ac  addiu a0,a0,-0x7b06
0040d6b0  jalr t9
0040d6b4  _clear a1
0040d6b8  lw gp,0x10(sp)
0040d6bc  lui a1,0x47
0040d6c0  addiu a1,a1,-0x7b0c
0040d6c4  lw t9,-0x7a44(gp)
0040d6c8  nop
0040d6cc  jalr t9
0040d6d0  _move a0,s0
0040d6d4  lw gp,0x10(sp)
0040d6d8  nop
0040d6dc  lw v0,-0x7adc(gp)
0040d6e0  nop
0040d6e4  lw v0,0x0(v0)
0040d6e8  nop
0040d6ec  bne v0,zero,0x0040d710
0040d6f0  _nop
0040d6f4  lw t9,-0x7a44(gp)
0040d6f8  lui a1,0x47
0040d6fc  addiu a1,a1,-0x7b28
0040d700  jalr t9
0040d704  _move a0,s0
0040d708  lw gp,0x10(sp)
0040d70c  nop
0040d710  lw t9,-0x7a44(gp)
0040d714  lui a1,0x45
0040d718  move a0,s0
0040d71c  jalr t9
0040d720  _addiu a1,a1,-0x5114
0040d724  move a0,s0
0040d728  lw gp,0x10(sp)
0040d72c  lw ra,0x1c(sp)
0040d730  lw s0,0x18(sp)
0040d734  j 0x0040d4f4
0040d738  _addiu sp,sp,0x20
