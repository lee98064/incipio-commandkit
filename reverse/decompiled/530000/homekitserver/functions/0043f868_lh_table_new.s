# lh_table_new @ 0043f868
0043f868  lui gp,0x1e
0043f86c  addiu gp,gp,-0x5558
0043f870  addu gp,gp,t9
0043f874  addiu sp,sp,-0x28
0043f878  sw ra,0x24(sp)
0043f87c  sw s8,0x20(sp)
0043f880  move s8,sp
0043f884  sw gp,0x10(sp)
0043f888  sw a0,0x28(s8)
0043f88c  sw a1,0x2c(s8)
0043f890  sw a2,0x30(s8)
0043f894  sw a3,0x34(s8)
0043f898  li a0,0x1
0043f89c  li a1,0x38
0043f8a0  lw v0,-0x5a50(gp)
0043f8a4  nop
0043f8a8  move t9,v0
0043f8ac  jalr t9
0043f8b0  _nop
0043f8b4  lw gp,0x10(s8)
0043f8b8  sw v0,0x18(s8)
0043f8bc  lw v0,0x18(s8)
0043f8c0  nop
0043f8c4  bne v0,zero,0x0043f8f0
0043f8c8  _nop
0043f8cc  lw v0,-0x7fd0(gp)
0043f8d0  nop
0043f8d4  addiu a0,v0,-0x1030
0043f8d8  lw v0,-0x628c(gp)
0043f8dc  nop
0043f8e0  move t9,v0
0043f8e4  jalr t9
0043f8e8  _nop
0043f8ec  lw gp,0x10(s8)
0043f8f0  lw v0,0x18(s8)
0043f8f4  nop
0043f8f8  sw zero,0x4(v0)
0043f8fc  lw v0,0x18(s8)
0043f900  lw v1,0x28(s8)
0043f904  nop
0043f908  sw v1,0x0(v0)
0043f90c  lw v0,0x18(s8)
0043f910  lw v1,0x2c(s8)
0043f914  nop
0043f918  sw v1,0x1c(v0)
0043f91c  lw v0,0x28(s8)
0043f920  nop
0043f924  move a0,v0
0043f928  li a1,0x10
0043f92c  lw v0,-0x5a50(gp)
0043f930  nop
0043f934  move t9,v0
0043f938  jalr t9
0043f93c  _nop
0043f940  lw gp,0x10(s8)
0043f944  move v1,v0
0043f948  lw v0,0x18(s8)
0043f94c  nop
0043f950  sw v1,0x28(v0)
0043f954  lw v0,0x18(s8)
0043f958  nop
0043f95c  lw v0,0x28(v0)
0043f960  nop
0043f964  bne v0,zero,0x0043f990
0043f968  _nop
0043f96c  lw v0,-0x7fd0(gp)
0043f970  nop
0043f974  addiu a0,v0,-0x1030
0043f978  lw v0,-0x628c(gp)
0043f97c  nop
0043f980  move t9,v0
0043f984  jalr t9
0043f988  _nop
0043f98c  lw gp,0x10(s8)
0043f990  lw v0,0x18(s8)
0043f994  lw v1,0x30(s8)
0043f998  nop
0043f99c  sw v1,0x2c(v0)
0043f9a0  lw v0,0x18(s8)
0043f9a4  lw v1,0x34(s8)
0043f9a8  nop
0043f9ac  sw v1,0x30(v0)
0043f9b0  lw v0,0x18(s8)
0043f9b4  lw v1,0x38(s8)
0043f9b8  nop
0043f9bc  sw v1,0x34(v0)
0043f9c0  sw zero,0x1c(s8)
0043f9c4  b 0x0043fa00
0043f9c8  _nop
0043f9cc  lw v0,0x18(s8)
0043f9d0  nop
0043f9d4  lw v1,0x28(v0)
0043f9d8  lw v0,0x1c(s8)
0043f9dc  nop
0043f9e0  sll v0,v0,0x4
0043f9e4  addu v0,v1,v0
0043f9e8  li v1,-0x1
0043f9ec  sw v1,0x0(v0)
0043f9f0  lw v0,0x1c(s8)
0043f9f4  nop
0043f9f8  addiu v0,v0,0x1
0043f9fc  sw v0,0x1c(s8)
0043fa00  lw v1,0x1c(s8)
0043fa04  lw v0,0x28(s8)
0043fa08  nop
0043fa0c  slt v0,v1,v0
0043fa10  bne v0,zero,0x0043f9cc
0043fa14  _nop
0043fa18  lw v0,0x18(s8)
0043fa1c  move sp,s8
0043fa20  lw ra,0x24(sp)
0043fa24  lw s8,0x20(sp)
0043fa28  addiu sp,sp,0x28
0043fa2c  jr ra
0043fa30  _nop
