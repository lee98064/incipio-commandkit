# sigterm_stage1_run @ 0040f6c8
0040f6c8  addiu sp,sp,-0x20
0040f6cc  sw ra,0x1c(sp)
0040f6d0  lui gp,0x47
0040f6d4  addiu gp,gp,0x2630
0040f6d8  sw gp,0x10(sp)
0040f6dc  lw t9,-0x7de4(gp)
0040f6e0  lw a0,-0x7ac8(gp)
0040f6e4  jalr t9
0040f6e8  _nop
0040f6ec  lw gp,0x10(sp)
0040f6f0  lui a0,0x45
0040f6f4  lw v0,-0x7e40(gp)
0040f6f8  lw t9,-0x7f4c(gp)
0040f6fc  lw a1,0x0(v0)
0040f700  jalr t9
0040f704  _addiu a0,a0,-0x4558
0040f708  lw gp,0x10(sp)
0040f70c  li v1,0x2
0040f710  lw v0,-0x7c84(gp)
0040f714  nop
0040f718  sw v1,0x0(v0)
0040f71c  lw ra,0x1c(sp)
0040f720  nop
0040f724  jr ra
0040f728  _addiu sp,sp,0x20
