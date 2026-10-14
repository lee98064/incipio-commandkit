# checkFWInfo @ 00430e5c
00430e5c  addiu sp,sp,-0x28
00430e60  sw ra,0x24(sp)
00430e64  lui gp,0x62
00430e68  addiu gp,gp,-0x6b80
00430e6c  sw gp,0x10(sp)
00430e70  jal 0x00430ca0
00430e74  _sw a0,0x18(sp)
00430e78  lw gp,0x10(sp)
00430e7c  lw a0,0x18(sp)
00430e80  blez v0,0x00430ea8
00430e84  _lui a1,0x61
00430e88  lw t9,-0x74f0(gp)
00430e8c  nop
00430e90  jalr t9
00430e94  _addiu a1,a1,0x4880
00430e98  jal 0x0042fe30
00430e9c  _nop
00430ea0  bgtz v0,0x00430eac
00430ea4  _li v1,0x1
00430ea8  li v1,-0x1
00430eac  lw ra,0x24(sp)
00430eb0  move v0,v1
00430eb4  jr ra
00430eb8  _addiu sp,sp,0x28
