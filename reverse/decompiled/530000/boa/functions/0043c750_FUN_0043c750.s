# FUN_0043c750 @ 0043c750
0043c750  addiu sp,sp,-0x20
0043c754  sw ra,0x1c(sp)
0043c758  sw s0,0x18(sp)
0043c75c  lui gp,0x47
0043c760  addiu gp,gp,0x2630
0043c764  sw gp,0x10(sp)
0043c768  lw t9,-0x7c04(gp)
0043c76c  nop
0043c770  jalr t9
0043c774  _li a0,0x4
0043c778  lw gp,0x10(sp)
0043c77c  beq v0,zero,0x0043c794
0043c780  _move s0,v0
0043c784  lw t9,-0x7d38(gp)
0043c788  nop
0043c78c  jalr t9
0043c790  _nop
0043c794  move v0,s0
0043c798  lw ra,0x1c(sp)
0043c79c  lw s0,0x18(sp)
0043c7a0  jr ra
0043c7a4  _addiu sp,sp,0x20
