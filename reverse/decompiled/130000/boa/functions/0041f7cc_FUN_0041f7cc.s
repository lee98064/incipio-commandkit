# FUN_0041f7cc @ 0041f7cc
0041f7cc  addiu sp,sp,-0x50
0041f7d0  sw ra,0x4c(sp)
0041f7d4  sw s1,0x48(sp)
0041f7d8  sw s0,0x44(sp)
0041f7dc  lui gp,0x47
0041f7e0  addiu gp,gp,0x2630
0041f7e4  sw gp,0x10(sp)
0041f7e8  lw t9,-0x7b5c(gp)
0041f7ec  move s0,a0
0041f7f0  clear a2
0041f7f4  li a0,0x2
0041f7f8  jalr t9
0041f7fc  _li a1,0x1
0041f800  lw gp,0x10(sp)
0041f804  addiu a2,sp,0x18
0041f808  move a1,s0
0041f80c  lw t9,-0x79d0(gp)
0041f810  move a0,a2
0041f814  sw a2,0x38(sp)
0041f818  jalr t9
0041f81c  _move s0,v0
0041f820  lw gp,0x10(sp)
0041f824  lw a2,0x38(sp)
0041f828  move a0,s0
0041f82c  lw t9,-0x79f0(gp)
0041f830  ori a1,zero,0x8913
0041f834  jalr t9
0041f838  _clear s1
0041f83c  lw gp,0x10(sp)
0041f840  bltz v0,0x0041f854
0041f844  _nop
0041f848  lhu s1,0x28(sp)
0041f84c  nop
0041f850  andi s1,s1,0x1
0041f854  lw t9,-0x7f9c(gp)
0041f858  nop
0041f85c  jalr t9
0041f860  _move a0,s0
0041f864  move v0,s1
0041f868  lw ra,0x4c(sp)
0041f86c  lw s1,0x48(sp)
0041f870  lw s0,0x44(sp)
0041f874  jr ra
0041f878  _addiu sp,sp,0x50
