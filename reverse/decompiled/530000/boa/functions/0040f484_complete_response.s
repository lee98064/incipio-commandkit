# complete_response @ 0040f484
0040f484  addiu sp,sp,-0x20
0040f488  sw ra,0x1c(sp)
0040f48c  sw s0,0x18(sp)
0040f490  lui gp,0x47
0040f494  addiu gp,gp,0x2630
0040f498  sw gp,0x10(sp)
0040f49c  move s0,a0
0040f4a0  lw a0,0x20(a0)
0040f4a4  lw t9,-0x7dc4(gp)
0040f4a8  lw v0,0x8(a0)
0040f4ac  jalr t9
0040f4b0  _sw v0,0x20(s0)
0040f4b4  lw v1,0x10(s0)
0040f4b8  li v0,0xce
0040f4bc  bne v1,v0,0x0040f540
0040f4c0  _li v0,0xa
0040f4c4  lw v0,0x24(s0)
0040f4c8  nop
0040f4cc  slti v0,v0,0x2
0040f4d0  bne v0,zero,0x0040f540
0040f4d4  _li v0,0xa
0040f4d8  lw v0,0x20(s0)
0040f4dc  nop
0040f4e0  beq v0,zero,0x0040f514
0040f4e4  _nop
0040f4e8  jal 0x0040f2e0
0040f4ec  _move a0,s0
0040f4f0  lw gp,0x10(sp)
0040f4f4  lui a1,0x45
0040f4f8  move a0,s0
0040f4fc  lw t9,-0x7a44(gp)
0040f500  nop
0040f504  jalr t9
0040f508  _addiu a1,a1,-0x4c0c
0040f50c  b 0x0040f538
0040f510  _nop
0040f514  jal 0x0040d3c0
0040f518  _move a0,s0
0040f51c  lw gp,0x10(sp)
0040f520  li v0,0xa
0040f524  sw v0,0x0(s0)
0040f528  lw t9,-0x7f98(gp)
0040f52c  nop
0040f530  jalr t9
0040f534  _move a0,s0
0040f538  b 0x0040f548
0040f53c  _li v0,0x1
0040f540  sw v0,0x0(s0)
0040f544  clear v0
0040f548  lw ra,0x1c(sp)
0040f54c  lw s0,0x18(sp)
0040f550  jr ra
0040f554  _addiu sp,sp,0x20
