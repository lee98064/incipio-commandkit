# FUN_0040c5d0 @ 0040c5d0
0040c5d0  addiu sp,sp,-0x28
0040c5d4  sw ra,0x24(sp)
0040c5d8  sw s1,0x20(sp)
0040c5dc  sw s0,0x1c(sp)
0040c5e0  lui gp,0x47
0040c5e4  addiu gp,gp,0x2630
0040c5e8  sw gp,0x10(sp)
0040c5ec  beq a1,zero,0x0040c620
0040c5f0  _move s0,a0
0040c5f4  lw v0,-0x7f94(gp)
0040c5f8  nop
0040c5fc  lw v0,0x0(v0)
0040c600  nop
0040c604  sw v0,0x8c4(a0)
0040c608  lw v0,-0x7ac8(gp)
0040c60c  nop
0040c610  lw v0,0x0(v0)
0040c614  sw zero,0x8c8(a0)
0040c618  b 0x0040c650
0040c61c  _sw v0,0xb8(a0)
0040c620  lw a1,0x48(a0)
0040c624  lw s1,0x8c8(a0)
0040c628  nop
0040c62c  subu s1,s1,a1
0040c630  beq s1,zero,0x0040c64c
0040c634  _addiu a0,a0,0x10d5
0040c638  lw t9,-0x7a40(gp)
0040c63c  addu a1,a0,a1
0040c640  jalr t9
0040c644  _move a2,s1
0040c648  lw gp,0x10(sp)
0040c64c  sw s1,0x8c8(s0)
0040c650  lw v0,-0x7a3c(gp)
0040c654  nop
0040c658  lw v0,0x0(v0)
0040c65c  nop
0040c660  andi v0,v0,0x1000
0040c664  beq v0,zero,0x0040c690
0040c668  _lui a1,0x45
0040c66c  lw v0,-0x7e40(gp)
0040c670  lw t9,-0x7c44(gp)
0040c674  lw a0,0x0(v0)
0040c678  addiu a1,a1,-0x5304
0040c67c  move a2,s0
0040c680  jalr t9
0040c684  _li a3,0xb4
0040c688  lw gp,0x10(sp)
0040c68c  nop
0040c690  lw t9,-0x7db4(gp)
0040c694  move a0,s0
0040c698  clear a1
0040c69c  jalr t9
0040c6a0  _li a2,0xb4
0040c6a4  addiu v0,s0,0x10d5
0040c6a8  sw v0,0x40(s0)
0040c6ac  sw zero,0x0(s0)
0040c6b0  lw ra,0x24(sp)
0040c6b4  lw s1,0x20(sp)
0040c6b8  lw s0,0x1c(sp)
0040c6bc  jr ra
0040c6c0  _addiu sp,sp,0x28
