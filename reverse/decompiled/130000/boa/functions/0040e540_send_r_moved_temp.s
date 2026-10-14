# send_r_moved_temp @ 0040e540
0040e540  addiu sp,sp,-0x30
0040e544  sw ra,0x2c(sp)
0040e548  sw s1,0x28(sp)
0040e54c  sw s0,0x24(sp)
0040e550  lui gp,0x47
0040e554  addiu gp,gp,0x2630
0040e558  sw gp,0x10(sp)
0040e55c  lw v0,0x8(a0)
0040e560  li v1,0x2
0040e564  sw v1,0x4(a0)
0040e568  li v1,0x12e
0040e56c  sw v1,0x10(a0)
0040e570  li v1,0x1
0040e574  move s0,a0
0040e578  beq v0,v1,0x0040e67c
0040e57c  _move s1,a1
0040e580  li v1,0x3
0040e584  beq v0,v1,0x0040e598
0040e588  _nop
0040e58c  lui a1,0x45
0040e590  b 0x0040e5a0
0040e594  _addiu a1,a1,-0x51b0
0040e598  lui a1,0x45
0040e59c  addiu a1,a1,-0x5198
0040e5a0  lw t9,-0x7a44(gp)
0040e5a4  sw a2,0x18(sp)
0040e5a8  jalr t9
0040e5ac  _move a0,s0
0040e5b0  lw gp,0x10(sp)
0040e5b4  lui a1,0x45
0040e5b8  addiu a1,a1,-0x48d0
0040e5bc  lw t9,-0x7a44(gp)
0040e5c0  nop
0040e5c4  jalr t9
0040e5c8  _move a0,s0
0040e5cc  jal 0x0040d688
0040e5d0  _move a0,s0
0040e5d4  lw gp,0x10(sp)
0040e5d8  lui a1,0x45
0040e5dc  addiu a1,a1,-0x4d08
0040e5e0  lw t9,-0x7a44(gp)
0040e5e4  nop
0040e5e8  jalr t9
0040e5ec  _move a0,s0
0040e5f0  lw gp,0x10(sp)
0040e5f4  lui a1,0x45
0040e5f8  addiu a1,a1,-0x66dc
0040e5fc  lw t9,-0x7a44(gp)
0040e600  nop
0040e604  jalr t9
0040e608  _move a0,s0
0040e60c  lw gp,0x10(sp)
0040e610  move a0,s0
0040e614  lw t9,-0x7c10(gp)
0040e618  nop
0040e61c  jalr t9
0040e620  _move a1,s1
0040e624  lw gp,0x10(sp)
0040e628  lui a1,0x45
0040e62c  addiu a1,a1,-0x4c0c
0040e630  lw t9,-0x7a44(gp)
0040e634  nop
0040e638  jalr t9
0040e63c  _move a0,s0
0040e640  lw gp,0x10(sp)
0040e644  lw a2,0x18(sp)
0040e648  move a0,s0
0040e64c  lw t9,-0x7a44(gp)
0040e650  nop
0040e654  jalr t9
0040e658  _move a1,a2
0040e65c  lw gp,0x10(sp)
0040e660  lui a1,0x45
0040e664  addiu a1,a1,-0x4cd8
0040e668  lw t9,-0x7a44(gp)
0040e66c  nop
0040e670  jalr t9
0040e674  _move a0,s0
0040e678  lw gp,0x10(sp)
0040e67c  lw v1,0xc(s0)
0040e680  li v0,0x2
0040e684  beq v1,v0,0x0040e6d4
0040e688  _lui a1,0x45
0040e68c  lw t9,-0x7a44(gp)
0040e690  addiu a1,a1,-0x48b4
0040e694  jalr t9
0040e698  _move a0,s0
0040e69c  lw gp,0x10(sp)
0040e6a0  move a1,s1
0040e6a4  lw t9,-0x7ef8(gp)
0040e6a8  nop
0040e6ac  jalr t9
0040e6b0  _move a0,s0
0040e6b4  lw gp,0x10(sp)
0040e6b8  lui a1,0x45
0040e6bc  addiu a1,a1,-0x4840
0040e6c0  lw t9,-0x7a44(gp)
0040e6c4  nop
0040e6c8  jalr t9
0040e6cc  _move a0,s0
0040e6d0  lw gp,0x10(sp)
0040e6d4  move a0,s0
0040e6d8  lw t9,-0x7f98(gp)
0040e6dc  lw ra,0x2c(sp)
0040e6e0  lw s1,0x28(sp)
0040e6e4  lw s0,0x24(sp)
0040e6e8  jr t9
0040e6ec  _addiu sp,sp,0x30
