# FUN_0041c7c0 @ 0041c7c0
0041c7c0  addiu sp,sp,-0x20
0041c7c4  sw ra,0x1c(sp)
0041c7c8  sw s0,0x18(sp)
0041c7cc  lui gp,0x62
0041c7d0  addiu gp,gp,-0x5cf0
0041c7d4  sw gp,0x10(sp)
0041c7d8  lw v0,0x0(a0)
0041c7dc  nop
0041c7e0  beq v0,zero,0x0041c850
0041c7e4  _move s0,a0
0041c7e8  lw a0,0xc(v0)
0041c7ec  nop
0041c7f0  beq a0,zero,0x0041c80c
0041c7f4  _nop
0041c7f8  lw t9,-0x7aa4(gp)
0041c7fc  nop
0041c800  jalr t9
0041c804  _nop
0041c808  lw gp,0x10(sp)
0041c80c  lw v0,0x0(s0)
0041c810  nop
0041c814  lw a0,0x10(v0)
0041c818  nop
0041c81c  beq a0,zero,0x0041c83c
0041c820  _nop
0041c824  lw t9,-0x7aa4(gp)
0041c828  nop
0041c82c  jalr t9
0041c830  _nop
0041c834  lw gp,0x10(sp)
0041c838  nop
0041c83c  lw t9,-0x7aa4(gp)
0041c840  lw a0,0x0(s0)
0041c844  jalr t9
0041c848  _nop
0041c84c  sw zero,0x0(s0)
0041c850  lw ra,0x1c(sp)
0041c854  lw s0,0x18(sp)
0041c858  jr ra
0041c85c  _addiu sp,sp,0x20
