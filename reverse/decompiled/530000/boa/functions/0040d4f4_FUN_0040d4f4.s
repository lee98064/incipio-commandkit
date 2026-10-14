# FUN_0040d4f4 @ 0040d4f4
0040d4f4  addiu sp,sp,-0x20
0040d4f8  sw ra,0x1c(sp)
0040d4fc  sw s0,0x18(sp)
0040d500  lui gp,0x47
0040d504  addiu gp,gp,0x2630
0040d508  sw gp,0x10(sp)
0040d50c  lw v0,0x8c4(a0)
0040d510  nop
0040d514  beq v0,zero,0x0040d5e8
0040d518  _move s0,a0
0040d51c  lw v1,0x4(a0)
0040d520  li v0,0x1
0040d524  bne v1,v0,0x0040d5e8
0040d528  _nop
0040d52c  lw v0,0x10(a0)
0040d530  nop
0040d534  sltiu v0,v0,0x1f4
0040d538  beq v0,zero,0x0040d5e8
0040d53c  _lui a1,0x45
0040d540  lw t9,-0x7a44(gp)
0040d544  nop
0040d548  jalr t9
0040d54c  _addiu a1,a1,-0x5174
0040d550  lw gp,0x10(sp)
0040d554  nop
0040d558  lw v0,-0x7c60(gp)
0040d55c  lw t9,-0x7c64(gp)
0040d560  lw a0,0x0(v0)
0040d564  jalr t9
0040d568  _nop
0040d56c  lw gp,0x10(sp)
0040d570  move a1,v0
0040d574  lw t9,-0x7a44(gp)
0040d578  nop
0040d57c  jalr t9
0040d580  _move a0,s0
0040d584  lw gp,0x10(sp)
0040d588  lui a1,0x45
0040d58c  addiu a1,a1,-0x5144
0040d590  lw t9,-0x7a44(gp)
0040d594  nop
0040d598  jalr t9
0040d59c  _move a0,s0
0040d5a0  lw gp,0x10(sp)
0040d5a4  lw a0,0x8c4(s0)
0040d5a8  lw t9,-0x7c64(gp)
0040d5ac  nop
0040d5b0  jalr t9
0040d5b4  _nop
0040d5b8  lw gp,0x10(sp)
0040d5bc  move a1,v0
0040d5c0  lw t9,-0x7a44(gp)
0040d5c4  nop
0040d5c8  jalr t9
0040d5cc  _move a0,s0
0040d5d0  lw gp,0x10(sp)
0040d5d4  lui a1,0x45
0040d5d8  move a0,s0
0040d5dc  lw t9,-0x7a44(gp)
0040d5e0  b 0x0040d5f8
0040d5e4  _addiu a1,a1,-0x4c0c
0040d5e8  lw t9,-0x7a44(gp)
0040d5ec  lui a1,0x45
0040d5f0  move a0,s0
0040d5f4  addiu a1,a1,-0x513c
0040d5f8  lw ra,0x1c(sp)
0040d5fc  lw s0,0x18(sp)
0040d600  jr t9
0040d604  _addiu sp,sp,0x20
