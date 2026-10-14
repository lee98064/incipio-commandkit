# HKUpdateValueToPrivateEventTable @ 0042f858
0042f858  addiu sp,sp,-0x28
0042f85c  sw ra,0x24(sp)
0042f860  sw s2,0x20(sp)
0042f864  sw s1,0x1c(sp)
0042f868  sw s0,0x18(sp)
0042f86c  lui gp,0x62
0042f870  addiu gp,gp,-0x5cf0
0042f874  sw gp,0x10(sp)
0042f878  lw v0,0x0(a0)
0042f87c  nop
0042f880  beq v0,a0,0x0042f98c
0042f884  _move s0,a2
0042f888  lw s1,0x14(a0)
0042f88c  nop
0042f890  lw v0,0x0(s1)
0042f894  b 0x0042f984
0042f898  _addiu a0,a0,0x14
0042f89c  lw v1,0x4(s1)
0042f8a0  nop
0042f8a4  bne v1,a1,0x0042f97c
0042f8a8  _nop
0042f8ac  lw v0,0xc(s1)
0042f8b0  nop
0042f8b4  sltiu v1,v0,0x6
0042f8b8  beq v1,zero,0x0042f994
0042f8bc  _lui v1,0x5b
0042f8c0  sll v0,v0,0x2
0042f8c4  addiu v1,v1,-0x292c
0042f8c8  addu v0,v1,v0
0042f8cc  lw v0,0x0(v0)
0042f8d0  nop
0042f8d4  jr v0
0042f8d8  _nop
0042f8dc  b 0x0042f994
0042f8e0  _sw s0,0x8(s1)
0042f8e4  b 0x0042f994
0042f8e8  _sw s0,0x8(s1)
0042f8ec  lw s2,0x8(s1)
0042f8f0  nop
0042f8f4  beq s2,zero,0x0042f930
0042f8f8  _move a0,s2
0042f8fc  lw t9,-0x7894(gp)
0042f900  nop
0042f904  jalr t9
0042f908  _move a1,s0
0042f90c  lw gp,0x10(sp)
0042f910  beq v0,zero,0x0042f994
0042f914  _nop
0042f918  lw t9,-0x7aa4(gp)
0042f91c  nop
0042f920  jalr t9
0042f924  _move a0,s2
0042f928  lw gp,0x10(sp)
0042f92c  nop
0042f930  lw t9,-0x63c4(gp)
0042f934  nop
0042f938  jalr t9
0042f93c  _move a0,s0
0042f940  lw gp,0x10(sp)
0042f944  addiu a1,v0,0x1
0042f948  lw t9,-0x5a50(gp)
0042f94c  nop
0042f950  jalr t9
0042f954  _li a0,0x1
0042f958  lw gp,0x10(sp)
0042f95c  move a0,v0
0042f960  sw v0,0x8(s1)
0042f964  lw t9,-0x7eac(gp)
0042f968  nop
0042f96c  jalr t9
0042f970  _move a1,s0
0042f974  b 0x0042f998
0042f978  _clear v0
0042f97c  move s1,v0
0042f980  lw v0,0x0(v0)
0042f984  bne s1,a0,0x0042f89c
0042f988  _addiu s1,s1,-0x14
0042f98c  b 0x0042f998
0042f990  _li v0,-0x1a6b
0042f994  clear v0
0042f998  lw ra,0x24(sp)
0042f99c  lw s2,0x20(sp)
0042f9a0  lw s1,0x1c(sp)
0042f9a4  lw s0,0x18(sp)
0042f9a8  jr ra
0042f9ac  _addiu sp,sp,0x28
