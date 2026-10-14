# FUN_0040c02c @ 0040c02c
0040c02c  addiu sp,sp,-0x58
0040c030  sw ra,0x54(sp)
0040c034  sw s8,0x50(sp)
0040c038  sw s7,0x4c(sp)
0040c03c  sw s6,0x48(sp)
0040c040  sw s5,0x44(sp)
0040c044  sw s4,0x40(sp)
0040c048  sw s3,0x3c(sp)
0040c04c  sw s2,0x38(sp)
0040c050  sw s1,0x34(sp)
0040c054  sw s0,0x30(sp)
0040c058  lui gp,0x43
0040c05c  addiu gp,gp,-0x4bb0
0040c060  sw gp,0x18(sp)
0040c064  lw t9,-0x7fa4(gp)
0040c068  nop
0040c06c  jalr t9
0040c070  _nop
0040c074  lw gp,0x18(sp)
0040c078  bne v0,zero,0x0040c098
0040c07c  _lui s4,0x42
0040c080  lw t9,-0x7e8c(gp)
0040c084  lui a0,0x41
0040c088  jalr t9
0040c08c  _addiu a0,a0,0x1174
0040c090  b 0x0040c37c
0040c094  _nop
0040c098  lw s5,-0x7ef4(gp)
0040c09c  lw s2,-0x7f08(gp)
0040c0a0  sw zero,0x0(s5)
0040c0a4  sw zero,0x3630(s4)
0040c0a8  clear s3
0040c0ac  addiu s0,sp,0x20
0040c0b0  lw v1,0x3630(s4)
0040c0b4  nop
0040c0b8  addiu v0,v1,0x1
0040c0bc  sltiu a0,v0,0x7
0040c0c0  beq a0,zero,0x0040c37c
0040c0c4  _sw v0,0x3630(s4)
0040c0c8  bne v1,zero,0x0040c0dc
0040c0cc  _li v1,0x2
0040c0d0  lw s3,-0x7ed0(gp)
0040c0d4  b 0x0040c12c
0040c0d8  _clear s1
0040c0dc  bne v0,v1,0x0040c0f0
0040c0e0  _li v1,0x3
0040c0e4  lw s3,-0x7f68(gp)
0040c0e8  b 0x0040c12c
0040c0ec  _clear s1
0040c0f0  beq v0,v1,0x0040c118
0040c0f4  _li v1,0x5
0040c0f8  beq v0,v1,0x0040c118
0040c0fc  _li v1,0x4
0040c100  beq v0,v1,0x0040c124
0040c104  _li v1,0x6
0040c108  bne v0,v1,0x0040c128
0040c10c  _nop
0040c110  b 0x0040c124
0040c114  _nop
0040c118  lw s3,-0x7ec4(gp)
0040c11c  b 0x0040c12c
0040c120  _clear s1
0040c124  lw s3,-0x7e68(gp)
0040c128  clear s1
0040c12c  li s8,0x2
0040c130  li s7,0x4
0040c134  b 0x0040c2fc
0040c138  _li s6,0x6
0040c13c  ori v1,zero,0x8036
0040c140  beq v0,v1,0x0040c1e8
0040c144  _li a0,0x35
0040c148  ori v1,zero,0x8836
0040c14c  beq v0,v1,0x0040c1e8
0040c150  _li a0,0x835
0040c154  ori v1,zero,0x8848
0040c158  beq v0,v1,0x0040c1e8
0040c15c  _li a0,0x847
0040c160  ori v1,zero,0x8070
0040c164  beq v0,v1,0x0040c1e8
0040c168  _li a0,0x6f
0040c16c  ori v1,zero,0x8041
0040c170  beq v0,v1,0x0040c1e8
0040c174  _li a0,0x40
0040c178  ori v1,zero,0x81f9
0040c17c  beq v0,v1,0x0040c1e8
0040c180  _li a0,0x1f8
0040c184  ori v1,zero,0x826a
0040c188  beq v0,v1,0x0040c1e8
0040c18c  _li a0,0x269
0040c190  ori v1,zero,0x8082
0040c194  beq v0,v1,0x0040c1e8
0040c198  _li a0,0x81
0040c19c  ori v1,zero,0x8076
0040c1a0  beq v0,v1,0x0040c1e8
0040c1a4  _li a0,0x75
0040c1a8  ori v1,zero,0x807c
0040c1ac  beq v0,v1,0x0040c1e8
0040c1b0  _li a0,0x7b
0040c1b4  ori v1,zero,0x80f1
0040c1b8  beq v0,v1,0x0040c1e8
0040c1bc  _li a0,0xf0
0040c1c0  ori v1,zero,0x8088
0040c1c4  beq v0,v1,0x0040c1e8
0040c1c8  _li a0,0x87
0040c1cc  ori v1,zero,0x8137
0040c1d0  beq v0,v1,0x0040c1e8
0040c1d4  _li a0,0x136
0040c1d8  ori v1,zero,0x8126
0040c1dc  bne v0,v1,0x0040c1fc
0040c1e0  _li v0,0x1
0040c1e4  li a0,0x125
0040c1e8  jal 0x00408db4
0040c1ec  _move a1,s0
0040c1f0  lw gp,0x18(sp)
0040c1f4  b 0x0040c200
0040c1f8  _nop
0040c1fc  sw v0,0x20(sp)
0040c200  lw v0,0x20(sp)
0040c204  nop
0040c208  blez v0,0x0040c2f0
0040c20c  _nop
0040c210  lw v1,0x28(sp)
0040c214  nop
0040c218  lw v0,0x24(v1)
0040c21c  li v1,0x9
0040c220  beq v0,v1,0x0040c2f0
0040c224  _nop
0040c228  lw v0,0x3630(s4)
0040c22c  nop
0040c230  addiu v1,v0,-0x1
0040c234  sltiu v1,v1,0x2
0040c238  beq v1,zero,0x0040c250
0040c23c  _addiu v0,v0,-0x3
0040c240  lui a0,0x41
0040c244  lw t9,-0x7e5c(gp)
0040c248  b 0x0040c264
0040c24c  _addiu a0,a0,0xdd4
0040c250  sltiu v0,v0,0x2
0040c254  beq v0,zero,0x0040c270
0040c258  _lui a0,0x41
0040c25c  lw t9,-0x7e5c(gp)
0040c260  addiu a0,a0,0xde0
0040c264  jalr t9
0040c268  _nop
0040c26c  lw gp,0x18(sp)
0040c270  lw v0,0x3630(s4)
0040c274  nop
0040c278  beq v0,s8,0x0040c2bc
0040c27c  _nop
0040c280  beq v0,s7,0x0040c290
0040c284  _nop
0040c288  bne v0,s6,0x0040c2d0
0040c28c  _nop
0040c290  lw a2,0x0(s5)
0040c294  nop
0040c298  blez a2,0x0040c2bc
0040c29c  _addiu a2,a2,-0x1
0040c2a0  lw t9,-0x7e5c(gp)
0040c2a4  lw a1,0x0(s2)
0040c2a8  lui a0,0x41
0040c2ac  jalr t9
0040c2b0  _addiu a0,a0,0x2770
0040c2b4  b 0x0040c2d0
0040c2b8  _nop
0040c2bc  lw t9,-0x7e5c(gp)
0040c2c0  lw a1,0x0(s2)
0040c2c4  lui a0,0x41
0040c2c8  jalr t9
0040c2cc  _addiu a0,a0,0x2780
0040c2d0  lw v0,0x28(sp)
0040c2d4  lw a3,0x20(sp)
0040c2d8  lw a1,0x0(v0)
0040c2dc  lw a2,0x24(v0)
0040c2e0  addiu a0,v0,0x4
0040c2e4  jal 0x0040af80
0040c2e8  _sw zero,0x10(sp)
0040c2ec  lw gp,0x18(sp)
0040c2f0  b 0x0040c2fc
0040c2f4  _addiu s1,s1,0x1
0040c2f8  clear s1
0040c2fc  li v1,0x3c
0040c300  mult s1,v1
0040c304  mflo v0
0040c308  addu v0,s3,v0
0040c30c  sw v0,0x28(sp)
0040c310  lw v0,0x0(v0)
0040c314  nop
0040c318  bne v0,zero,0x0040c13c
0040c31c  _nop
0040c320  lw v0,0x3630(s4)
0040c324  nop
0040c328  beq v0,s8,0x0040c35c
0040c32c  _nop
0040c330  beq v0,s7,0x0040c340
0040c334  _nop
0040c338  bne v0,s6,0x0040c0b0
0040c33c  _nop
0040c340  lw v0,0x0(s5)
0040c344  nop
0040c348  addiu v0,v0,0x1
0040c34c  slti v1,v0,0x6
0040c350  bne v1,zero,0x0040c2f8
0040c354  _sw v0,0x0(s5)
0040c358  sw zero,0x0(s5)
0040c35c  lw v0,0x0(s2)
0040c360  nop
0040c364  addiu v0,v0,0x1
0040c368  blez v0,0x0040c2f8
0040c36c  _sw v0,0x0(s2)
0040c370  lw v1,-0x7f08(gp)
0040c374  b 0x0040c0b0
0040c378  _sw zero,0x0(v1)
0040c37c  lw ra,0x54(sp)
0040c380  lw s8,0x50(sp)
0040c384  lw s7,0x4c(sp)
0040c388  lw s6,0x48(sp)
0040c38c  lw s5,0x44(sp)
0040c390  lw s4,0x40(sp)
0040c394  lw s3,0x3c(sp)
0040c398  lw s2,0x38(sp)
0040c39c  lw s1,0x34(sp)
0040c3a0  lw s0,0x30(sp)
0040c3a4  jr ra
0040c3a8  _addiu sp,sp,0x58
