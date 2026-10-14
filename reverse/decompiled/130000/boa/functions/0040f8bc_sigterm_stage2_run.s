# sigterm_stage2_run @ 0040f8bc
0040f8bc  addiu sp,sp,-0x20
0040f8c0  sw ra,0x1c(sp)
0040f8c4  sw s0,0x18(sp)
0040f8c8  lui gp,0x47
0040f8cc  addiu gp,gp,0x2630
0040f8d0  sw gp,0x10(sp)
0040f8d4  lw v0,-0x7ac8(gp)
0040f8d8  lw v1,-0x7e40(gp)
0040f8dc  lw t9,-0x7c44(gp)
0040f8e0  lw a2,0x0(v0)
0040f8e4  lw v0,-0x7cac(gp)
0040f8e8  lw a0,0x0(v1)
0040f8ec  lui a1,0x45
0040f8f0  lw v0,0x0(v0)
0040f8f4  addiu a1,a1,-0x44c4
0040f8f8  jalr t9
0040f8fc  _subu a2,a2,v0
0040f900  lw gp,0x10(sp)
0040f904  nop
0040f908  lw v0,-0x7bd0(gp)
0040f90c  lw t9,-0x7c90(gp)
0040f910  lw s0,-0x7f78(gp)
0040f914  lw a0,0x0(v0)
0040f918  jalr t9
0040f91c  _nop
0040f920  lw gp,0x10(sp)
0040f924  nop
0040f928  lw t9,-0x7c38(gp)
0040f92c  nop
0040f930  jalr t9
0040f934  _nop
0040f938  lw gp,0x10(sp)
0040f93c  nop
0040f940  lw t9,-0x7aac(gp)
0040f944  nop
0040f948  jalr t9
0040f94c  _nop
0040f950  lw gp,0x10(sp)
0040f954  nop
0040f958  lw t9,-0x7e60(gp)
0040f95c  nop
0040f960  jalr t9
0040f964  _nop
0040f968  lw gp,0x10(sp)
0040f96c  nop
0040f970  lw t9,-0x7b4c(gp)
0040f974  nop
0040f978  jalr t9
0040f97c  _nop
0040f980  lw gp,0x10(sp)
0040f984  nop
0040f988  lw t9,-0x7d0c(gp)
0040f98c  nop
0040f990  jalr t9
0040f994  _nop
0040f998  lw gp,0x10(sp)
0040f99c  nop
0040f9a0  lw t9,-0x7cc0(gp)
0040f9a4  nop
0040f9a8  jalr t9
0040f9ac  _nop
0040f9b0  lw gp,0x10(sp)
0040f9b4  lw a0,0x0(s0)
0040f9b8  lw t9,-0x7fb0(gp)
0040f9bc  nop
0040f9c0  jalr t9
0040f9c4  _nop
0040f9c8  lw gp,0x10(sp)
0040f9cc  nop
0040f9d0  lw v0,-0x7b0c(gp)
0040f9d4  lw t9,-0x7fb0(gp)
0040f9d8  lw a0,0x0(v0)
0040f9dc  jalr t9
0040f9e0  _nop
0040f9e4  lw gp,0x10(sp)
0040f9e8  clear a0
0040f9ec  lw t9,-0x7ed4(gp)
0040f9f0  nop
0040f9f4  jalr t9
0040f9f8  _sw zero,0x0(s0)
