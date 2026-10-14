# FUN_0040bff8 @ 0040bff8
0040bff8  addiu sp,sp,-0x58
0040bffc  sw ra,0x54(sp)
0040c000  sw s8,0x50(sp)
0040c004  sw s7,0x4c(sp)
0040c008  sw s6,0x48(sp)
0040c00c  sw s5,0x44(sp)
0040c010  sw s4,0x40(sp)
0040c014  sw s3,0x3c(sp)
0040c018  sw s2,0x38(sp)
0040c01c  sw s1,0x34(sp)
0040c020  sw s0,0x30(sp)
0040c024  lui gp,0x43
0040c028  addiu gp,gp,-0x4be0
0040c02c  sw gp,0x18(sp)
0040c030  lw t9,-0x7fa4(gp)
0040c034  nop
0040c038  jalr t9
0040c03c  _nop
0040c040  lw gp,0x18(sp)
0040c044  bne v0,zero,0x0040c064
0040c048  _lui s4,0x42
0040c04c  lw t9,-0x7e8c(gp)
0040c050  lui a0,0x41
0040c054  jalr t9
0040c058  _addiu a0,a0,0x1144
0040c05c  b 0x0040c348
0040c060  _nop
0040c064  lw s5,-0x7ef4(gp)
0040c068  lw s2,-0x7f08(gp)
0040c06c  sw zero,0x0(s5)
0040c070  sw zero,0x3600(s4)
0040c074  clear s3
0040c078  addiu s0,sp,0x20
0040c07c  lw v1,0x3600(s4)
0040c080  nop
0040c084  addiu v0,v1,0x1
0040c088  sltiu a0,v0,0x7
0040c08c  beq a0,zero,0x0040c348
0040c090  _sw v0,0x3600(s4)
0040c094  bne v1,zero,0x0040c0a8
0040c098  _li v1,0x2
0040c09c  lw s3,-0x7ed0(gp)
0040c0a0  b 0x0040c0f8
0040c0a4  _clear s1
0040c0a8  bne v0,v1,0x0040c0bc
0040c0ac  _li v1,0x3
0040c0b0  lw s3,-0x7f68(gp)
0040c0b4  b 0x0040c0f8
0040c0b8  _clear s1
0040c0bc  beq v0,v1,0x0040c0e4
0040c0c0  _li v1,0x5
0040c0c4  beq v0,v1,0x0040c0e4
0040c0c8  _li v1,0x4
0040c0cc  beq v0,v1,0x0040c0f0
0040c0d0  _li v1,0x6
0040c0d4  bne v0,v1,0x0040c0f4
0040c0d8  _nop
0040c0dc  b 0x0040c0f0
0040c0e0  _nop
0040c0e4  lw s3,-0x7ec4(gp)
0040c0e8  b 0x0040c0f8
0040c0ec  _clear s1
0040c0f0  lw s3,-0x7e68(gp)
0040c0f4  clear s1
0040c0f8  li s8,0x2
0040c0fc  li s7,0x4
0040c100  b 0x0040c2c8
0040c104  _li s6,0x6
0040c108  ori v1,zero,0x8036
0040c10c  beq v0,v1,0x0040c1b4
0040c110  _li a0,0x35
0040c114  ori v1,zero,0x8836
0040c118  beq v0,v1,0x0040c1b4
0040c11c  _li a0,0x835
0040c120  ori v1,zero,0x8848
0040c124  beq v0,v1,0x0040c1b4
0040c128  _li a0,0x847
0040c12c  ori v1,zero,0x8070
0040c130  beq v0,v1,0x0040c1b4
0040c134  _li a0,0x6f
0040c138  ori v1,zero,0x8041
0040c13c  beq v0,v1,0x0040c1b4
0040c140  _li a0,0x40
0040c144  ori v1,zero,0x81f9
0040c148  beq v0,v1,0x0040c1b4
0040c14c  _li a0,0x1f8
0040c150  ori v1,zero,0x826a
0040c154  beq v0,v1,0x0040c1b4
0040c158  _li a0,0x269
0040c15c  ori v1,zero,0x8082
0040c160  beq v0,v1,0x0040c1b4
0040c164  _li a0,0x81
0040c168  ori v1,zero,0x8076
0040c16c  beq v0,v1,0x0040c1b4
0040c170  _li a0,0x75
0040c174  ori v1,zero,0x807c
0040c178  beq v0,v1,0x0040c1b4
0040c17c  _li a0,0x7b
0040c180  ori v1,zero,0x80f1
0040c184  beq v0,v1,0x0040c1b4
0040c188  _li a0,0xf0
0040c18c  ori v1,zero,0x8088
0040c190  beq v0,v1,0x0040c1b4
0040c194  _li a0,0x87
0040c198  ori v1,zero,0x8137
0040c19c  beq v0,v1,0x0040c1b4
0040c1a0  _li a0,0x136
0040c1a4  ori v1,zero,0x8126
0040c1a8  bne v0,v1,0x0040c1c8
0040c1ac  _li v0,0x1
0040c1b0  li a0,0x125
0040c1b4  jal 0x00408d80
0040c1b8  _move a1,s0
0040c1bc  lw gp,0x18(sp)
0040c1c0  b 0x0040c1cc
0040c1c4  _nop
0040c1c8  sw v0,0x20(sp)
0040c1cc  lw v0,0x20(sp)
0040c1d0  nop
0040c1d4  blez v0,0x0040c2bc
0040c1d8  _nop
0040c1dc  lw v1,0x28(sp)
0040c1e0  nop
0040c1e4  lw v0,0x24(v1)
0040c1e8  li v1,0x9
0040c1ec  beq v0,v1,0x0040c2bc
0040c1f0  _nop
0040c1f4  lw v0,0x3600(s4)
0040c1f8  nop
0040c1fc  addiu v1,v0,-0x1
0040c200  sltiu v1,v1,0x2
0040c204  beq v1,zero,0x0040c21c
0040c208  _addiu v0,v0,-0x3
0040c20c  lui a0,0x41
0040c210  lw t9,-0x7e5c(gp)
0040c214  b 0x0040c230
0040c218  _addiu a0,a0,0xda4
0040c21c  sltiu v0,v0,0x2
0040c220  beq v0,zero,0x0040c23c
0040c224  _lui a0,0x41
0040c228  lw t9,-0x7e5c(gp)
0040c22c  addiu a0,a0,0xdb0
0040c230  jalr t9
0040c234  _nop
0040c238  lw gp,0x18(sp)
0040c23c  lw v0,0x3600(s4)
0040c240  nop
0040c244  beq v0,s8,0x0040c288
0040c248  _nop
0040c24c  beq v0,s7,0x0040c25c
0040c250  _nop
0040c254  bne v0,s6,0x0040c29c
0040c258  _nop
0040c25c  lw a2,0x0(s5)
0040c260  nop
0040c264  blez a2,0x0040c288
0040c268  _addiu a2,a2,-0x1
0040c26c  lw t9,-0x7e5c(gp)
0040c270  lw a1,0x0(s2)
0040c274  lui a0,0x41
0040c278  jalr t9
0040c27c  _addiu a0,a0,0x2740
0040c280  b 0x0040c29c
0040c284  _nop
0040c288  lw t9,-0x7e5c(gp)
0040c28c  lw a1,0x0(s2)
0040c290  lui a0,0x41
0040c294  jalr t9
0040c298  _addiu a0,a0,0x2750
0040c29c  lw v0,0x28(sp)
0040c2a0  lw a3,0x20(sp)
0040c2a4  lw a1,0x0(v0)
0040c2a8  lw a2,0x24(v0)
0040c2ac  addiu a0,v0,0x4
0040c2b0  jal 0x0040af4c
0040c2b4  _sw zero,0x10(sp)
0040c2b8  lw gp,0x18(sp)
0040c2bc  b 0x0040c2c8
0040c2c0  _addiu s1,s1,0x1
0040c2c4  clear s1
0040c2c8  li v1,0x3c
0040c2cc  mult s1,v1
0040c2d0  mflo v0
0040c2d4  addu v0,s3,v0
0040c2d8  sw v0,0x28(sp)
0040c2dc  lw v0,0x0(v0)
0040c2e0  nop
0040c2e4  bne v0,zero,0x0040c108
0040c2e8  _nop
0040c2ec  lw v0,0x3600(s4)
0040c2f0  nop
0040c2f4  beq v0,s8,0x0040c328
0040c2f8  _nop
0040c2fc  beq v0,s7,0x0040c30c
0040c300  _nop
0040c304  bne v0,s6,0x0040c07c
0040c308  _nop
0040c30c  lw v0,0x0(s5)
0040c310  nop
0040c314  addiu v0,v0,0x1
0040c318  slti v1,v0,0x6
0040c31c  bne v1,zero,0x0040c2c4
0040c320  _sw v0,0x0(s5)
0040c324  sw zero,0x0(s5)
0040c328  lw v0,0x0(s2)
0040c32c  nop
0040c330  addiu v0,v0,0x1
0040c334  blez v0,0x0040c2c4
0040c338  _sw v0,0x0(s2)
0040c33c  lw v1,-0x7f08(gp)
0040c340  b 0x0040c07c
0040c344  _sw zero,0x0(v1)
0040c348  lw ra,0x54(sp)
0040c34c  lw s8,0x50(sp)
0040c350  lw s7,0x4c(sp)
0040c354  lw s6,0x48(sp)
0040c358  lw s5,0x44(sp)
0040c35c  lw s4,0x40(sp)
0040c360  lw s3,0x3c(sp)
0040c364  lw s2,0x38(sp)
0040c368  lw s1,0x34(sp)
0040c36c  lw s0,0x30(sp)
0040c370  jr ra
0040c374  _addiu sp,sp,0x58
