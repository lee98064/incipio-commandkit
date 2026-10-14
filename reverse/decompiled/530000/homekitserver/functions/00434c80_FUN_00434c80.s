# FUN_00434c80 @ 00434c80
00434c80  addiu sp,sp,-0xa0
00434c84  sw ra,0x9c(sp)
00434c88  sw s8,0x98(sp)
00434c8c  sw s7,0x94(sp)
00434c90  sw s6,0x90(sp)
00434c94  sw s5,0x8c(sp)
00434c98  sw s4,0x88(sp)
00434c9c  sw s3,0x84(sp)
00434ca0  sw s2,0x80(sp)
00434ca4  sw s1,0x7c(sp)
00434ca8  sw s0,0x78(sp)
00434cac  lui gp,0x62
00434cb0  addiu gp,gp,-0x5cf0
00434cb4  sw gp,0x10(sp)
00434cb8  lw s2,-0x592c(gp)
00434cbc  addiu v0,sp,0x18
00434cc0  move t0,a1
00434cc4  move a3,s2
00434cc8  move s0,a2
00434ccc  addiu s2,s2,0x4
00434cd0  clear s1
00434cd4  li v1,0xb5
00434cd8  sw v0,0x64(sp)
00434cdc  li s8,0x1
00434ce0  li s7,0x2
00434ce4  li s6,0x14
00434ce8  li s5,0xa
00434cec  lw v0,0x0(s2)
00434cf0  nop
00434cf4  beq v0,zero,0x00434e9c
00434cf8  _mult s1,v1
00434cfc  clear s4
00434d00  mflo s3
00434d04  addiu s3,s3,0x1
00434d08  sll s3,s3,0x3
00434d0c  addu s3,a3,s3
00434d10  addiu s3,s3,0x4
00434d14  lw t9,-0x5c9c(gp)
00434d18  lw a0,0x64(sp)
00434d1c  move a1,s3
00434d20  li a2,0x48
00434d24  sw v1,0x6c(sp)
00434d28  sw a3,0x70(sp)
00434d2c  jalr t9
00434d30  _sw t0,0x68(sp)
00434d34  lbu t3,0x3c(sp)
00434d38  lw v0,0x24(sp)
00434d3c  lw gp,0x10(sp)
00434d40  lw t2,0x1c(sp)
00434d44  lbu t1,0x2c(sp)
00434d48  lbu a2,0x21(sp)
00434d4c  lbu a1,0x2f(sp)
00434d50  lbu a0,0x34(sp)
00434d54  sw t3,0x60(sp)
00434d58  lw v1,0x6c(sp)
00434d5c  lw a3,0x70(sp)
00434d60  lw t0,0x68(sp)
00434d64  beq v0,zero,0x00434e84
00434d68  _nop
00434d6c  bne t2,t0,0x00434e88
00434d70  _addiu s4,s4,0x1
00434d74  beq t1,zero,0x00434e9c
00434d78  _addiu s4,s4,-0x1
00434d7c  beq a2,zero,0x00434ea8
00434d80  _nop
00434d84  bne v0,s8,0x00434ddc
00434d88  _nop
00434d8c  beq a1,zero,0x00434e84
00434d90  _nop
00434d94  beq a0,zero,0x00434e88
00434d98  _addiu s4,s4,0x1
00434d9c  addiu s4,s4,-0x1
00434da0  lw v0,0x30(sp)
00434da4  nop
00434da8  slt v0,s0,v0
00434dac  bne v0,zero,0x00434eb4
00434db0  _li v0,0x1
00434db4  lw v0,0x38(sp)
00434db8  nop
00434dbc  slt v0,v0,s0
00434dc0  bne v0,zero,0x00434ea8
00434dc4  _nop
00434dc8  beq t3,zero,0x00434eb0
00434dcc  _nop
00434dd0  lw v0,0x40(sp)
00434dd4  b 0x00434e68
00434dd8  _nop
00434ddc  bne v0,s7,0x00434eb0
00434de0  _nop
00434de4  beq a1,zero,0x00434e84
00434de8  _nop
00434dec  beq a0,zero,0x00434e88
00434df0  _addiu s4,s4,0x1
00434df4  addiu s4,s4,-0x1
00434df8  lw t9,-0x5cb8(gp)
00434dfc  lw a1,0x30(sp)
00434e00  jalr t9
00434e04  _move a0,s0
00434e08  lw gp,0x10(sp)
00434e0c  bltz v0,0x00434eb4
00434e10  _li v0,0x1
00434e14  lw t9,-0x79f4(gp)
00434e18  lw a1,0x38(sp)
00434e1c  jalr t9
00434e20  _move a0,s0
00434e24  lw gp,0x10(sp)
00434e28  bgtz v0,0x00434eb4
00434e2c  _li v0,0x1
00434e30  lw v0,0x60(sp)
00434e34  nop
00434e38  beq v0,zero,0x00434eb0
00434e3c  _nop
00434e40  lw t9,-0x5fe4(gp)
00434e44  nop
00434e48  jalr t9
00434e4c  _move a0,s0
00434e50  lw gp,0x10(sp)
00434e54  lw a0,0x40(sp)
00434e58  lw t9,-0x5fe4(gp)
00434e5c  nop
00434e60  jalr t9
00434e64  _move s0,v0
00434e68  div s0,v0
00434e6c  bne v0,zero,0x00434e78
00434e70  _nop
00434e74  break 0x1c00
00434e78  mfhi s0
00434e7c  b 0x00434eb4
00434e80  _sltu v0,zero,s0
00434e84  addiu s4,s4,0x1
00434e88  bne s4,s6,0x00434d14
00434e8c  _addiu s3,s3,0x48
00434e90  addiu s1,s1,0x1
00434e94  bne s1,s5,0x00434cec
00434e98  _addiu s2,s2,0x5a8
00434e9c  lui v0,0xfffe
00434ea0  b 0x00434eb4
00434ea4  _ori v0,v0,0xecfe
00434ea8  b 0x00434eb4
00434eac  _li v0,0x1
00434eb0  clear v0
00434eb4  lw ra,0x9c(sp)
00434eb8  lw s8,0x98(sp)
00434ebc  lw s7,0x94(sp)
00434ec0  lw s6,0x90(sp)
00434ec4  lw s5,0x8c(sp)
00434ec8  lw s4,0x88(sp)
00434ecc  lw s3,0x84(sp)
00434ed0  lw s2,0x80(sp)
00434ed4  lw s1,0x7c(sp)
00434ed8  lw s0,0x78(sp)
00434edc  jr ra
00434ee0  _addiu sp,sp,0xa0
