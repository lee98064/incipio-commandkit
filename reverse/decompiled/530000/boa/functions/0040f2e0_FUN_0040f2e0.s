# FUN_0040f2e0 @ 0040f2e0
0040f2e0  addiu sp,sp,-0x20
0040f2e4  sw ra,0x1c(sp)
0040f2e8  sw s0,0x18(sp)
0040f2ec  lui gp,0x47
0040f2f0  addiu gp,gp,0x2630
0040f2f4  sw gp,0x10(sp)
0040f2f8  lw v0,0x24(a0)
0040f2fc  nop
0040f300  slti v0,v0,0x2
0040f304  bne v0,zero,0x0040f31c
0040f308  _move s0,a0
0040f30c  lw t9,-0x7a44(gp)
0040f310  lui a1,0x47
0040f314  jalr t9
0040f318  _addiu a1,a1,-0x7b44
0040f31c  jal 0x0040ec18
0040f320  _move a0,s0
0040f324  move a0,s0
0040f328  lw gp,0x10(sp)
0040f32c  lw ra,0x1c(sp)
0040f330  lw s0,0x18(sp)
0040f334  j 0x0040d3dc
0040f338  _addiu sp,sp,0x20
