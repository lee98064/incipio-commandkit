# FUN_0040d608 @ 0040d608
0040d608  addiu sp,sp,-0x20
0040d60c  sw ra,0x1c(sp)
0040d610  sw s0,0x18(sp)
0040d614  lui gp,0x47
0040d618  addiu gp,gp,0x2630
0040d61c  sw gp,0x10(sp)
0040d620  lw t9,-0x7a44(gp)
0040d624  lui a1,0x45
0040d628  addiu a1,a1,-0x5128
0040d62c  jalr t9
0040d630  _move s0,a0
0040d634  lw gp,0x10(sp)
0040d638  lw a0,0x2c(s0)
0040d63c  lw t9,-0x7c64(gp)
0040d640  nop
0040d644  jalr t9
0040d648  _nop
0040d64c  lw gp,0x10(sp)
0040d650  move a0,s0
0040d654  lw t9,-0x7a44(gp)
0040d658  nop
0040d65c  jalr t9
0040d660  _move a1,v0
0040d664  lw gp,0x10(sp)
0040d668  move a0,s0
0040d66c  lw ra,0x1c(sp)
0040d670  lw t9,-0x7a44(gp)
0040d674  lw s0,0x18(sp)
0040d678  lui a1,0x45
0040d67c  addiu a1,a1,-0x4c0c
0040d680  jr t9
0040d684  _addiu sp,sp,0x20
