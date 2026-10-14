# lh_table_lookup_entry @ 0043f45c
0043f45c  addiu sp,sp,-0x30
0043f460  sw ra,0x2c(sp)
0043f464  sw s8,0x28(sp)
0043f468  move s8,sp
0043f46c  sw a0,0x30(s8)
0043f470  sw a1,0x34(s8)
0043f474  lw v0,0x30(s8)
0043f478  nop
0043f47c  lw v0,0x30(v0)
0043f480  lw a0,0x34(s8)
0043f484  move t9,v0
0043f488  jalr t9
0043f48c  _nop
0043f490  sw v0,0x20(s8)
0043f494  lw v0,0x30(s8)
0043f498  nop
0043f49c  lw v0,0x0(v0)
0043f4a0  lw v1,0x20(s8)
0043f4a4  nop
0043f4a8  divu v1,v0
0043f4ac  bne v0,zero,0x0043f4b8
0043f4b0  _nop
0043f4b4  break 0x1c00
0043f4b8  mfhi v0
0043f4bc  sw v0,0x1c(s8)
0043f4c0  sw zero,0x18(s8)
0043f4c4  lw v0,0x30(s8)
0043f4c8  nop
0043f4cc  lw v0,0x10(v0)
0043f4d0  nop
0043f4d4  addiu v1,v0,0x1
0043f4d8  lw v0,0x30(s8)
0043f4dc  nop
0043f4e0  sw v1,0x10(v0)
0043f4e4  b 0x0043f600
0043f4e8  _nop
0043f4ec  lw v0,0x30(s8)
0043f4f0  nop
0043f4f4  lw v1,0x28(v0)
0043f4f8  lw v0,0x1c(s8)
0043f4fc  nop
0043f500  sll v0,v0,0x4
0043f504  addu v0,v1,v0
0043f508  lw v1,0x0(v0)
0043f50c  li v0,-0x1
0043f510  bne v1,v0,0x0043f524
0043f514  _nop
0043f518  clear v0
0043f51c  b 0x0043f624
0043f520  _nop
0043f524  lw v0,0x30(s8)
0043f528  nop
0043f52c  lw v1,0x28(v0)
0043f530  lw v0,0x1c(s8)
0043f534  nop
0043f538  sll v0,v0,0x4
0043f53c  addu v0,v1,v0
0043f540  lw v1,0x0(v0)
0043f544  li v0,-0x2
0043f548  beq v1,v0,0x0043f5c0
0043f54c  _nop
0043f550  lw v0,0x30(s8)
0043f554  nop
0043f558  lw v0,0x34(v0)
0043f55c  lw v1,0x30(s8)
0043f560  nop
0043f564  lw a0,0x28(v1)
0043f568  lw v1,0x1c(s8)
0043f56c  nop
0043f570  sll v1,v1,0x4
0043f574  addu v1,a0,v1
0043f578  lw v1,0x0(v1)
0043f57c  nop
0043f580  move a0,v1
0043f584  lw a1,0x34(s8)
0043f588  move t9,v0
0043f58c  jalr t9
0043f590  _nop
0043f594  beq v0,zero,0x0043f5c0
0043f598  _nop
0043f59c  lw v0,0x30(s8)
0043f5a0  nop
0043f5a4  lw v1,0x28(v0)
0043f5a8  lw v0,0x1c(s8)
0043f5ac  nop
0043f5b0  sll v0,v0,0x4
0043f5b4  addu v0,v1,v0
0043f5b8  b 0x0043f624
0043f5bc  _nop
0043f5c0  lw v0,0x1c(s8)
0043f5c4  nop
0043f5c8  addiu v0,v0,0x1
0043f5cc  sw v0,0x1c(s8)
0043f5d0  lw v1,0x1c(s8)
0043f5d4  lw v0,0x30(s8)
0043f5d8  nop
0043f5dc  lw v0,0x0(v0)
0043f5e0  nop
0043f5e4  bne v1,v0,0x0043f5f0
0043f5e8  _nop
0043f5ec  sw zero,0x1c(s8)
0043f5f0  lw v0,0x18(s8)
0043f5f4  nop
0043f5f8  addiu v0,v0,0x1
0043f5fc  sw v0,0x18(s8)
0043f600  lw v0,0x30(s8)
0043f604  nop
0043f608  lw v1,0x0(v0)
0043f60c  lw v0,0x18(s8)
0043f610  nop
0043f614  slt v0,v0,v1
0043f618  bne v0,zero,0x0043f4ec
0043f61c  _nop
0043f620  clear v0
0043f624  move sp,s8
0043f628  lw ra,0x2c(sp)
0043f62c  lw s8,0x28(sp)
0043f630  addiu sp,sp,0x30
0043f634  jr ra
0043f638  _nop
