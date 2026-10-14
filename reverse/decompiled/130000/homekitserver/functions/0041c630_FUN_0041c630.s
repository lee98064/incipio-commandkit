# FUN_0041c630 @ 0041c630
0041c630  addiu sp,sp,-0x20
0041c634  sw ra,0x1c(sp)
0041c638  sw s0,0x18(sp)
0041c63c  lui gp,0x62
0041c640  addiu gp,gp,-0x6b80
0041c644  sw gp,0x10(sp)
0041c648  lw v0,0x0(a0)
0041c64c  nop
0041c650  beq v0,zero,0x0041c6c0
0041c654  _move s0,a0
0041c658  lw a0,0xc(v0)
0041c65c  nop
0041c660  beq a0,zero,0x0041c67c
0041c664  _nop
0041c668  lw t9,-0x7aa4(gp)
0041c66c  nop
0041c670  jalr t9
0041c674  _nop
0041c678  lw gp,0x10(sp)
0041c67c  lw v0,0x0(s0)
0041c680  nop
0041c684  lw a0,0x10(v0)
0041c688  nop
0041c68c  beq a0,zero,0x0041c6ac
0041c690  _nop
0041c694  lw t9,-0x7aa4(gp)
0041c698  nop
0041c69c  jalr t9
0041c6a0  _nop
0041c6a4  lw gp,0x10(sp)
0041c6a8  nop
0041c6ac  lw t9,-0x7aa4(gp)
0041c6b0  lw a0,0x0(s0)
0041c6b4  jalr t9
0041c6b8  _nop
0041c6bc  sw zero,0x0(s0)
0041c6c0  lw ra,0x1c(sp)
0041c6c4  lw s0,0x18(sp)
0041c6c8  jr ra
0041c6cc  _addiu sp,sp,0x20
