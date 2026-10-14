# sigHandler_autoconf @ 0043c604
0043c604  addiu sp,sp,-0x148
0043c608  sw ra,0x144(sp)
0043c60c  sw s1,0x140(sp)
0043c610  sw s0,0x13c(sp)
0043c614  lui gp,0x47
0043c618  addiu gp,gp,0x2630
0043c61c  sw gp,0x10(sp)
0043c620  lw t9,-0x7e8c(gp)
0043c624  lui s0,0x45
0043c628  addiu a0,s0,0x59d0
0043c62c  jalr t9
0043c630  _addiu a1,sp,0xa0
0043c634  lw gp,0x10(sp)
0043c638  bne v0,zero,0x0043c658
0043c63c  _li v1,0x834
0043c640  lw t9,-0x7d30(gp)
0043c644  nop
0043c648  jalr t9
0043c64c  _addiu a0,s0,0x59d0
0043c650  b 0x0043c724
0043c654  _nop
0043c658  lw s1,-0x7cf4(gp)
0043c65c  li v0,0x844
0043c660  lw a0,0x0(s1)
0043c664  lw t9,-0x7b54(gp)
0043c668  li s0,0x1
0043c66c  movz v0,v1,a0
0043c670  move a0,v0
0043c674  lw v0,-0x7e50(gp)
0043c678  addiu a1,sp,0x18
0043c67c  jalr t9
0043c680  _sw s0,0x0(v0)
0043c684  lw gp,0x10(sp)
0043c688  li a0,0x3b
0043c68c  lw t9,-0x7b54(gp)
0043c690  nop
0043c694  jalr t9
0043c698  _addiu a1,sp,0x1c
0043c69c  lw v0,0x18(sp)
0043c6a0  lw gp,0x10(sp)
0043c6a4  bne v0,s0,0x0043c71c
0043c6a8  _lui a0,0x45
0043c6ac  lw v1,0x1c(sp)
0043c6b0  nop
0043c6b4  bne v1,v0,0x0043c71c
0043c6b8  _addiu s0,sp,0x20
0043c6bc  lw t9,-0x7ad4(gp)
0043c6c0  lui a1,0x45
0043c6c4  addiu a1,a1,0x538c
0043c6c8  move a0,s0
0043c6cc  jalr t9
0043c6d0  _li a2,0x13
0043c6d4  lw gp,0x10(sp)
0043c6d8  addiu a0,sp,0x33
0043c6dc  clear a1
0043c6e0  lw t9,-0x7db4(gp)
0043c6e4  nop
0043c6e8  jalr t9
0043c6ec  _li a2,0x6d
0043c6f0  lw a2,0x0(s1)
0043c6f4  move a1,s0
0043c6f8  jal 0x0043a10c
0043c6fc  _clear a0
0043c700  lw gp,0x10(sp)
0043c704  nop
0043c708  lw t9,-0x7c04(gp)
0043c70c  nop
0043c710  jalr t9
0043c714  _li a0,0x4
0043c718  lui a0,0x45
0043c71c  jal 0x0043c378
0043c720  _addiu a0,a0,-0x260c
0043c724  lw gp,0x10(sp)
0043c728  nop
0043c72c  lw t9,-0x7bc4(gp)
0043c730  nop
0043c734  jalr t9
0043c738  _nop
0043c73c  lw ra,0x144(sp)
0043c740  lw s1,0x140(sp)
0043c744  lw s0,0x13c(sp)
0043c748  jr ra
0043c74c  _addiu sp,sp,0x148
