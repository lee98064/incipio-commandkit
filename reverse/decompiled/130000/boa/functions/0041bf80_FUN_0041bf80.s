# FUN_0041bf80 @ 0041bf80
0041bf80  addiu sp,sp,-0xa8
0041bf84  sw ra,0xa4(sp)
0041bf88  sw s1,0xa0(sp)
0041bf8c  sw s0,0x9c(sp)
0041bf90  lui gp,0x47
0041bf94  addiu gp,gp,0x2630
0041bf98  sw gp,0x18(sp)
0041bf9c  lw t9,-0x7fbc(gp)
0041bfa0  lui s1,0x45
0041bfa4  lui a1,0x45
0041bfa8  addiu a1,a1,-0x384
0041bfac  addiu a2,s1,-0x4cd4
0041bfb0  jalr t9
0041bfb4  _move s0,a0
0041bfb8  lb v0,0x0(v0)
0041bfbc  lw gp,0x18(sp)
0041bfc0  beq v0,zero,0x0041c150
0041bfc4  _lui a1,0x45
0041bfc8  lw t9,-0x7fbc(gp)
0041bfcc  addiu a1,a1,0x2248
0041bfd0  addiu a2,s1,-0x4cd4
0041bfd4  jalr t9
0041bfd8  _move a0,s0
0041bfdc  lw gp,0x18(sp)
0041bfe0  lui a1,0x45
0041bfe4  move a0,v0
0041bfe8  lw t9,-0x7e0c(gp)
0041bfec  nop
0041bff0  jalr t9
0041bff4  _addiu a1,a1,-0x54ec
0041bff8  lw gp,0x18(sp)
0041bffc  bne v0,zero,0x0041c00c
0041c000  _li v0,0x1
0041c004  b 0x0041c010
0041c008  _sw v0,0x20(sp)
0041c00c  sw zero,0x20(sp)
0041c010  lw t9,-0x7c08(gp)
0041c014  li a0,0x8c
0041c018  jalr t9
0041c01c  _addiu a1,sp,0x20
0041c020  lw gp,0x18(sp)
0041c024  bne v0,zero,0x0041c03c
0041c028  _lui a2,0x45
0041c02c  lui a1,0x45
0041c030  lw t9,-0x79d0(gp)
0041c034  b 0x0041c100
0041c038  _addiu a1,a1,-0x560
0041c03c  lw t9,-0x7fbc(gp)
0041c040  lui a1,0x45
0041c044  addiu a1,a1,0x161c
0041c048  addiu a2,a2,-0x4cd4
0041c04c  jalr t9
0041c050  _move a0,s0
0041c054  lb v1,0x0(v0)
0041c058  lw gp,0x18(sp)
0041c05c  beq v1,zero,0x0041c150
0041c060  _move a0,v0
0041c064  lw t9,-0x7d94(gp)
0041c068  lw s1,-0x7a50(gp)
0041c06c  jalr t9
0041c070  _addiu a1,sp,0x24
0041c074  lw gp,0x18(sp)
0041c078  lw a0,0x0(s1)
0041c07c  clear a1
0041c080  lw t9,-0x7ae0(gp)
0041c084  nop
0041c088  jalr t9
0041c08c  _addiu a2,sp,0x28
0041c090  lw gp,0x18(sp)
0041c094  lw a0,0x0(s1)
0041c098  li a1,0x2
0041c09c  lw t9,-0x7ae0(gp)
0041c0a0  nop
0041c0a4  jalr t9
0041c0a8  _addiu a2,sp,0x2c
0041c0ac  lw v0,0x24(sp)
0041c0b0  lw gp,0x18(sp)
0041c0b4  lw a0,0x28(sp)
0041c0b8  lw v1,0x2c(sp)
0041c0bc  beq v0,zero,0x0041c0dc
0041c0c0  _xor v0,a0,v0
0041c0c4  and v0,v0,v1
0041c0c8  beq v0,zero,0x0041c0dc
0041c0cc  _lui a1,0x45
0041c0d0  lw t9,-0x79d0(gp)
0041c0d4  b 0x0041c100
0041c0d8  _addiu a1,a1,-0x50c
0041c0dc  lw t9,-0x7c08(gp)
0041c0e0  li a0,0x8d
0041c0e4  jalr t9
0041c0e8  _addiu a1,sp,0x24
0041c0ec  lw gp,0x18(sp)
0041c0f0  bne v0,zero,0x0041c150
0041c0f4  _lui a1,0x45
0041c0f8  lw t9,-0x79d0(gp)
0041c0fc  addiu a1,a1,-0x37c
0041c100  jalr t9
0041c104  _addiu a0,sp,0x30
0041c108  jal 0x00419fe8
0041c10c  _move a0,s0
0041c110  lw gp,0x18(sp)
0041c114  lui a1,0x45
0041c118  move a0,s0
0041c11c  lw t9,-0x7cd4(gp)
0041c120  addiu a1,a1,-0x271c
0041c124  jalr t9
0041c128  _addiu a2,sp,0x30
0041c12c  lw gp,0x18(sp)
0041c130  lui a1,0x45
0041c134  move a0,s0
0041c138  lw t9,-0x7cd4(gp)
0041c13c  nop
0041c140  jalr t9
0041c144  _addiu a1,a1,-0x2050
0041c148  b 0x0041c348
0041c14c  _nop
0041c150  jal 0x0041af38
0041c154  _nop
0041c158  lw gp,0x18(sp)
0041c15c  nop
0041c160  lw t9,-0x7d68(gp)
0041c164  nop
0041c168  jalr t9
0041c16c  _nop
0041c170  lw gp,0x18(sp)
0041c174  beq v0,zero,0x0041c1dc
0041c178  _addiu s1,sp,0x30
0041c17c  lw t9,-0x79e8(gp)
0041c180  move a0,v0
0041c184  clear a1
0041c188  jalr t9
0041c18c  _clear a2
0041c190  lw gp,0x18(sp)
0041c194  lui a1,0x45
0041c198  lui a2,0x45
0041c19c  lw t9,-0x7fbc(gp)
0041c1a0  move a0,s0
0041c1a4  addiu a1,a1,-0x3b10
0041c1a8  jalr t9
0041c1ac  _addiu a2,a2,-0x4cd4
0041c1b0  lw gp,0x18(sp)
0041c1b4  move s1,v0
0041c1b8  li a0,0x1
0041c1bc  lw v1,-0x7c7c(gp)
0041c1c0  nop
0041c1c4  lw v0,0x0(v1)
0041c1c8  nop
0041c1cc  bne v0,a0,0x0041c328
0041c1d0  _nop
0041c1d4  b 0x0041c23c
0041c1d8  _sw v0,0x0(v1)
0041c1dc  lw t9,-0x7a4c(gp)
0041c1e0  lui s0,0x45
0041c1e4  addiu s0,s0,-0x390
0041c1e8  lui a2,0x45
0041c1ec  lui a3,0x45
0041c1f0  addiu a2,a2,-0x27e4
0041c1f4  addiu a3,a3,-0x27dc
0041c1f8  move a0,s1
0041c1fc  li a1,0x64
0041c200  jalr t9
0041c204  _sw s0,0x10(sp)
0041c208  lw gp,0x18(sp)
0041c20c  move a0,s1
0041c210  move a1,s0
0041c214  lw t9,-0x7ae4(gp)
0041c218  nop
0041c21c  jalr t9
0041c220  _clear a2
0041c224  lw gp,0x18(sp)
0041c228  nop
0041c22c  lw t9,-0x7ed4(gp)
0041c230  nop
0041c234  jalr t9
0041c238  _li a0,0x1
0041c23c  lb v0,0x0(s1)
0041c240  nop
0041c244  bne v0,zero,0x0041c268
0041c248  _nop
0041c24c  lw t9,-0x79d0(gp)
0041c250  lui a1,0x45
0041c254  addiu a1,a1,-0x22a8
0041c258  jalr t9
0041c25c  _move a0,s1
0041c260  lw gp,0x18(sp)
0041c264  nop
0041c268  lw t9,-0x7cd4(gp)
0041c26c  lui a1,0x45
0041c270  move a0,s0
0041c274  jalr t9
0041c278  _addiu a1,a1,-0x229c
0041c27c  lw gp,0x18(sp)
0041c280  lui a1,0x45
0041c284  move a0,s0
0041c288  lw t9,-0x7cd4(gp)
0041c28c  nop
0041c290  jalr t9
0041c294  _addiu a1,a1,-0x21b0
0041c298  lw gp,0x18(sp)
0041c29c  lui a1,0x45
0041c2a0  move a2,s1
0041c2a4  lw t9,-0x7cd4(gp)
0041c2a8  move a0,s0
0041c2ac  jalr t9
0041c2b0  _addiu a1,a1,-0x216c
0041c2b4  lw gp,0x18(sp)
0041c2b8  lui a1,0x45
0041c2bc  move a0,s0
0041c2c0  lw t9,-0x7cd4(gp)
0041c2c4  nop
0041c2c8  jalr t9
0041c2cc  _addiu a1,a1,-0x2138
0041c2d0  lw gp,0x18(sp)
0041c2d4  lui a1,0x45
0041c2d8  move a2,s1
0041c2dc  lw t9,-0x7cd4(gp)
0041c2e0  move a0,s0
0041c2e4  jalr t9
0041c2e8  _addiu a1,a1,-0x20d8
0041c2ec  lw gp,0x18(sp)
0041c2f0  lui a1,0x45
0041c2f4  move a0,s0
0041c2f8  lw t9,-0x7cd4(gp)
0041c2fc  nop
0041c300  jalr t9
0041c304  _addiu a1,a1,-0x2074
0041c308  lw gp,0x18(sp)
0041c30c  lui a0,0x45
0041c310  lw t9,-0x7c58(gp)
0041c314  nop
0041c318  jalr t9
0041c31c  _addiu a0,a0,-0x3bd8
0041c320  b 0x0041c348
0041c324  _nop
0041c328  lb v0,0x0(s1)
0041c32c  nop
0041c330  beq v0,zero,0x0041c348
0041c334  _move a0,s0
0041c338  lw t9,-0x79b8(gp)
0041c33c  nop
0041c340  jalr t9
0041c344  _move a1,s1
0041c348  lw ra,0xa4(sp)
0041c34c  lw s1,0xa0(sp)
0041c350  lw s0,0x9c(sp)
0041c354  jr ra
0041c358  _addiu sp,sp,0xa8
