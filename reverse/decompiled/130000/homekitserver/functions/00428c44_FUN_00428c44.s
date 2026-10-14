# FUN_00428c44 @ 00428c44
00428c44  addiu sp,sp,-0x48
00428c48  sw ra,0x44(sp)
00428c4c  sw s8,0x40(sp)
00428c50  sw s7,0x3c(sp)
00428c54  sw s6,0x38(sp)
00428c58  sw s5,0x34(sp)
00428c5c  sw s4,0x30(sp)
00428c60  sw s3,0x2c(sp)
00428c64  sw s2,0x28(sp)
00428c68  sw s1,0x24(sp)
00428c6c  sw s0,0x20(sp)
00428c70  lui gp,0x62
00428c74  move s8,sp
00428c78  addiu gp,gp,-0x6b80
00428c7c  sw gp,0x10(sp)
00428c80  addiu v0,a3,0xf
00428c84  srl v0,v0,0x3
00428c88  sll v0,v0,0x3
00428c8c  subu sp,sp,v0
00428c90  sb a1,0x4c(s8)
00428c94  sw a2,0x18(s8)
00428c98  sw a3,0x1c(s8)
00428c9c  lw s6,0x58(s8)
00428ca0  lw s7,0x5c(s8)
00428ca4  jal 0x00428bc8
00428ca8  _move s4,a0
00428cac  lui a0,0x61
00428cb0  lw a2,0x47c8(a0)
00428cb4  lw t0,0x47cc(a0)
00428cb8  lw a3,0x1c(s8)
00428cbc  lw gp,0x10(s8)
00428cc0  or a2,a2,t0
00428cc4  addiu s5,a3,0x1
00428cc8  lw a1,0x18(s8)
00428ccc  bne a2,zero,0x00428ce8
00428cd0  _addiu s3,sp,0x10
00428cd4  li t1,0x64
00428cd8  clear t0
00428cdc  sw t1,0x47cc(a0)
00428ce0  sw t0,0x47c8(a0)
00428ce4  lui a0,0x61
00428ce8  lw s2,0x47cc(a0)
00428cec  lw s1,0x47c8(a0)
00428cf0  addu s2,v1,s2
00428cf4  addu v0,v0,s1
00428cf8  sltu s1,s2,v1
00428cfc  beq s6,zero,0x00428dd0
00428d00  _addu s1,s1,v0
00428d04  li s0,0x1
00428d08  addiu s3,s8,0x4c
00428d0c  lw t9,-0x6be8(gp)
00428d10  move a0,s4
00428d14  move a1,s3
00428d18  jalr t9
00428d1c  _li a2,0x1
00428d20  lw gp,0x10(s8)
00428d24  li v1,0x1
00428d28  lw t9,-0x5ca0(gp)
00428d2c  beq v0,v1,0x00428d6c
00428d30  _li a0,0x1388
00428d34  jalr t9
00428d38  _nop
00428d3c  jal 0x00428bc8
00428d40  _nop
00428d44  sltu a0,v0,s1
00428d48  lw gp,0x10(s8)
00428d4c  bne a0,zero,0x00428d64
00428d50  _nop
00428d54  bne s1,v0,0x00428e50
00428d58  _sltu v1,v1,s2
00428d5c  beq v1,zero,0x00428e50
00428d60  _nop
00428d64  b 0x00428d0c
00428d68  _addiu s0,s0,0x1
00428d6c  li s0,0x1
00428d70  lw t9,-0x6590(gp)
00428d74  move a0,s4
00428d78  move a1,s6
00428d7c  jalr t9
00428d80  _move a2,s7
00428d84  lw gp,0x10(s8)
00428d88  nop
00428d8c  lw t9,-0x5ca0(gp)
00428d90  beq v0,s7,0x00428e74
00428d94  _li a0,0x1388
00428d98  jalr t9
00428d9c  _nop
00428da0  jal 0x00428bc8
00428da4  _nop
00428da8  sltu a0,v0,s1
00428dac  lw gp,0x10(s8)
00428db0  bne a0,zero,0x00428dc8
00428db4  _nop
00428db8  bne s1,v0,0x00428e50
00428dbc  _sltu v1,v1,s2
00428dc0  beq v1,zero,0x00428e50
00428dc4  _nop
00428dc8  b 0x00428d70
00428dcc  _addiu s0,s0,0x1
00428dd0  lbu v0,0x4c(s8)
00428dd4  lw t9,-0x5cb0(gp)
00428dd8  move a2,a3
00428ddc  sb v0,0x0(s3)
00428de0  jalr t9
00428de4  _addiu a0,s3,0x1
00428de8  lw gp,0x10(s8)
00428dec  li s0,0x1
00428df0  lw t9,-0x6be8(gp)
00428df4  move a0,s4
00428df8  move a1,s3
00428dfc  jalr t9
00428e00  _move a2,s5
00428e04  lw gp,0x10(s8)
00428e08  nop
00428e0c  lw t9,-0x5ca0(gp)
00428e10  beq v0,s5,0x00428e74
00428e14  _li a0,0x1388
00428e18  jalr t9
00428e1c  _nop
00428e20  jal 0x00428bc8
00428e24  _nop
00428e28  sltu a0,v0,s1
00428e2c  lw gp,0x10(s8)
00428e30  bne a0,zero,0x00428e48
00428e34  _nop
00428e38  bne s1,v0,0x00428e50
00428e3c  _sltu v1,v1,s2
00428e40  beq v1,zero,0x00428e50
00428e44  _nop
00428e48  b 0x00428df0
00428e4c  _addiu s0,s0,0x1
00428e50  lw t9,-0x7c24(gp)
00428e54  lbu a1,0x4c(s8)
00428e58  lui a0,0x5b
00428e5c  addiu a0,a0,-0x3e10
00428e60  move a2,s0
00428e64  jalr t9
00428e68  _li a3,-0x1a2c
00428e6c  b 0x00428e78
00428e70  _li v0,-0x1a2c
00428e74  clear v0
00428e78  move sp,s8
00428e7c  lw ra,0x44(sp)
00428e80  lw s8,0x40(sp)
00428e84  lw s7,0x3c(sp)
00428e88  lw s6,0x38(sp)
00428e8c  lw s5,0x34(sp)
00428e90  lw s4,0x30(sp)
00428e94  lw s3,0x2c(sp)
00428e98  lw s2,0x28(sp)
00428e9c  lw s1,0x24(sp)
00428ea0  lw s0,0x20(sp)
00428ea4  jr ra
00428ea8  _addiu sp,sp,0x48
