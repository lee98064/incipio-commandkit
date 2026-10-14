# jump_to_kernel @ 80407e24
80407e24  addiu sp,sp,-0x18
80407e28  sw ra,0x14(sp)
80407e2c  sw s0,0x10(sp)
80407e30  move s0,a1
80407e34  clear v1
80407e38  clear v0
80407e3c  lui a1,0xb800
80407e40  addu a0,a0,a1
80407e44  li a3,0x10
80407e48  addu v1,a0,v1
80407e4c  lhu a2,0x0(v1)
80407e50  addu v1,s0,v0
80407e54  sh a2,0x0(v1)
80407e58  addiu v0,v0,0x2
80407e5c  bne v0,a3,0x80407e48
80407e60  _move v1,v0
80407e64  jal 0x80407de0
80407e68  _clear a0
80407e6c  bne v0,zero,0x80407ed8
80407e70  _lui v1,0xb800
80407e74  sw v0,0x3000(v1)
80407e78  lui v0,0xb800
80407e7c  ori v0,v0,0x3528
80407e80  lw a0,0x0(v0)
80407e84  lui v1,0x100
80407e88  or v1,a0,v1
80407e8c  sw v1,0x0(v0)
80407e90  lui a0,0x8041
80407e94  lw a1,0x4(s0)
80407e98  jal 0x804079cc
80407e9c  _addiu a0,a0,-0x2430
80407ea0  jal 0x80407ce4
80407ea4  _nop
80407ea8  lw s0,0x4(s0)
80407eac  mfc0 at,Status
80407eb0  ori at,at,0x1
80407eb4  xori at,at,0x1
80407eb8  mtc0 at,Status
80407ebc  nop
80407ec0  nop
80407ec4  nop
80407ec8  jal 0x80406454
80407ecc  _nop
80407ed0  jalr s0
80407ed4  _nop
80407ed8  lw ra,0x14(sp)
80407edc  lw s0,0x10(sp)
80407ee0  jr ra
80407ee4  _addiu sp,sp,0x18
