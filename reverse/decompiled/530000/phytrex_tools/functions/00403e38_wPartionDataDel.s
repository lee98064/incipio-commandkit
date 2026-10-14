# wPartionDataDel @ 00403e38
00403e38  addiu sp,sp,-0x7ff0
00403e3c  sw ra,0x7fec(sp)
00403e40  sw s8,0x7fe8(sp)
00403e44  addiu sp,sp,-0x38
00403e48  move s8,sp
00403e4c  lui gp,0x42
00403e50  addiu gp,gp,-0x1db0
00403e54  sw gp,0x10(sp)
00403e58  ori v0,zero,0x8028
00403e5c  addu v0,v0,s8
00403e60  sw a0,0x0(v0)
00403e64  addiu v0,s8,0x1c
00403e68  move a0,v0
00403e6c  clear a1
00403e70  ori a2,zero,0x8000
00403e74  lw v0,-0x7f98(gp)
00403e78  nop
00403e7c  move t9,v0
00403e80  jalr t9
00403e84  _nop
00403e88  lw gp,0x10(s8)
00403e8c  lui v0,0x40
00403e90  addiu a0,v0,0x5f70
00403e94  li a1,0x2
00403e98  lw v0,-0x7fc4(gp)
00403e9c  nop
00403ea0  move t9,v0
00403ea4  jalr t9
00403ea8  _nop
00403eac  lw gp,0x10(s8)
00403eb0  sw v0,0x18(s8)
00403eb4  lw v0,0x18(s8)
00403eb8  nop
00403ebc  blez v0,0x00403f58
00403ec0  _nop
00403ec4  lw a0,0x18(s8)
00403ec8  lui a1,0x1
00403ecc  clear a2
00403ed0  lw v0,-0x7f64(gp)
00403ed4  nop
00403ed8  move t9,v0
00403edc  jalr t9
00403ee0  _nop
00403ee4  lw gp,0x10(s8)
00403ee8  addiu v0,s8,0x1c
00403eec  lw a0,0x18(s8)
00403ef0  move a1,v0
00403ef4  ori a2,zero,0x8000
00403ef8  lw v0,-0x7f74(gp)
00403efc  nop
00403f00  move t9,v0
00403f04  jalr t9
00403f08  _nop
00403f0c  lw gp,0x10(s8)
00403f10  lui v0,0x40
00403f14  addiu a0,v0,0x5fdc
00403f18  lw v0,-0x7f50(gp)
00403f1c  nop
00403f20  move t9,v0
00403f24  jalr t9
00403f28  _nop
00403f2c  lw gp,0x10(s8)
00403f30  lui v0,0x40
00403f34  addiu a0,v0,0x5ff4
00403f38  lw v0,-0x7f58(gp)
00403f3c  nop
00403f40  move t9,v0
00403f44  jalr t9
00403f48  _nop
00403f4c  lw gp,0x10(s8)
00403f50  b 0x00403f78
00403f54  _nop
00403f58  lui v0,0x40
00403f5c  addiu a0,v0,0x601c
00403f60  lw v0,-0x7f50(gp)
00403f64  nop
00403f68  move t9,v0
00403f6c  jalr t9
00403f70  _nop
00403f74  lw gp,0x10(s8)
00403f78  lw a0,0x18(s8)
00403f7c  lw v0,-0x7fcc(gp)
00403f80  nop
00403f84  move t9,v0
00403f88  jalr t9
00403f8c  _nop
00403f90  lw gp,0x10(s8)
00403f94  jal 0x00403ce0
00403f98  _nop
00403f9c  lw gp,0x10(s8)
00403fa0  addiu sp,s8,0x38
00403fa4  lw ra,0x7fec(sp)
00403fa8  lw s8,0x7fe8(sp)
00403fac  addiu sp,sp,0x7ff0
00403fb0  jr ra
00403fb4  _nop
