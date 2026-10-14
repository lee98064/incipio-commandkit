# FUN_00412c70 @ 00412c70
00412c70  addiu sp,sp,-0x40
00412c74  sw ra,0x3c(sp)
00412c78  sw s7,0x38(sp)
00412c7c  sw s6,0x34(sp)
00412c80  sw s5,0x30(sp)
00412c84  sw s4,0x2c(sp)
00412c88  sw s3,0x28(sp)
00412c8c  sw s2,0x24(sp)
00412c90  sw s1,0x20(sp)
00412c94  sw s0,0x1c(sp)
00412c98  lui gp,0x47
00412c9c  addiu gp,gp,0x2630
00412ca0  sw gp,0x10(sp)
00412ca4  lw t9,-0x7f1c(gp)
00412ca8  move s0,a1
00412cac  move s1,a2
00412cb0  move s2,a0
00412cb4  move a0,a3
00412cb8  jalr t9
00412cbc  _move s4,a3
00412cc0  move a0,s0
00412cc4  move a1,s1
00412cc8  jal 0x00412b9c
00412ccc  _move s6,v0
00412cd0  lw gp,0x10(sp)
00412cd4  bltz v0,0x00412e5c
00412cd8  _li v0,-0x1
00412cdc  lw a0,-0x7b10(gp)
00412ce0  lw t9,-0x7f1c(gp)
00412ce4  nop
00412ce8  jalr t9
00412cec  _nop
00412cf0  move a0,s0
00412cf4  move a1,s1
00412cf8  jal 0x00411cf8
00412cfc  _move s3,v0
00412d00  lw gp,0x10(sp)
00412d04  bne v0,zero,0x00412d1c
00412d08  _move s5,v0
00412d0c  lui a0,0x45
00412d10  lw t9,-0x7af4(gp)
00412d14  b 0x00412d7c
00412d18  _addiu a0,a0,-0x3f8c
00412d1c  addu s0,s0,s1
00412d20  subu s0,s0,v0
00412d24  b 0x00412e38
00412d28  _addiu s7,s3,0x2
00412d2c  beq v0,zero,0x00412d4c
00412d30  _nop
00412d34  lw t9,-0x7af4(gp)
00412d38  lui a0,0x45
00412d3c  jalr t9
00412d40  _addiu a0,a0,-0x3f6c
00412d44  b 0x00412e48
00412d48  _nop
00412d4c  jal 0x00411cf8
00412d50  _nop
00412d54  move a0,s5
00412d58  subu s5,v0,s5
00412d5c  lw gp,0x10(sp)
00412d60  move a1,s4
00412d64  move s1,v0
00412d68  bne v0,zero,0x00412d8c
00412d6c  _move a2,s5
00412d70  lw t9,-0x7af4(gp)
00412d74  lui a0,0x45
00412d78  addiu a0,a0,-0x3f3c
00412d7c  jalr t9
00412d80  _nop
00412d84  b 0x00412e5c
00412d88  _li v0,-0x1
00412d8c  jal 0x00411cf0
00412d90  _nop
00412d94  lw gp,0x10(sp)
00412d98  beq v0,zero,0x00412e30
00412d9c  _li v1,0xd
00412da0  addiu s6,s6,0x1
00412da4  addu s6,v0,s6
00412da8  b 0x00412db4
00412dac  _li v0,0xa
00412db0  addiu s6,s6,0x1
00412db4  lb a0,0x0(s6)
00412db8  nop
00412dbc  bne a0,v1,0x00412db0
00412dc0  _nop
00412dc4  lb a0,0x1(s6)
00412dc8  nop
00412dcc  bne a0,v0,0x00412db0
00412dd0  _nop
00412dd4  lb a0,0x2(s6)
00412dd8  nop
00412ddc  bne a0,v1,0x00412db0
00412de0  _nop
00412de4  lb a0,0x3(s6)
00412de8  nop
00412dec  bne a0,v0,0x00412db4
00412df0  _addiu s6,s6,0x1
00412df4  addiu s6,s6,-0x1
00412df8  subu s1,s1,s3
00412dfc  subu s1,s1,s6
00412e00  addiu s1,s1,-0x8
00412e04  b 0x00412e18
00412e08  _clear v0
00412e0c  lbu a0,0x4(a1)
00412e10  addiu v0,v0,0x1
00412e14  sb a0,0x0(v1)
00412e18  slt a0,v0,s1
00412e1c  addu a1,s6,v0
00412e20  bne a0,zero,0x00412e0c
00412e24  _addu v1,s2,v0
00412e28  b 0x00412e5c
00412e2c  _sb zero,0x0(v1)
00412e30  subu s0,s0,s5
00412e34  move s5,s1
00412e38  move a0,s5
00412e3c  move a1,s0
00412e40  bgtz s0,0x00412d2c
00412e44  _slt v0,s0,s7
00412e48  lw v0,0x50(sp)
00412e4c  nop
00412e50  beq v0,zero,0x00412e5c
00412e54  _li v0,-0x1
00412e58  sb zero,0x0(s2)
00412e5c  lw ra,0x3c(sp)
00412e60  lw s7,0x38(sp)
00412e64  lw s6,0x34(sp)
00412e68  lw s5,0x30(sp)
00412e6c  lw s4,0x2c(sp)
00412e70  lw s3,0x28(sp)
00412e74  lw s2,0x24(sp)
00412e78  lw s1,0x20(sp)
00412e7c  lw s0,0x1c(sp)
00412e80  jr ra
00412e84  _addiu sp,sp,0x40
