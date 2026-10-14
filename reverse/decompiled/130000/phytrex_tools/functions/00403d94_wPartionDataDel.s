# wPartionDataDel @ 00403d94
00403d94  addiu sp,sp,-0x7ff0
00403d98  sw ra,0x7fec(sp)
00403d9c  sw s8,0x7fe8(sp)
00403da0  addiu sp,sp,-0x38
00403da4  move s8,sp
00403da8  lui gp,0x42
00403dac  addiu gp,gp,-0x21a0
00403db0  sw gp,0x10(sp)
00403db4  ori v0,zero,0x8028
00403db8  addu v0,v0,s8
00403dbc  sw a0,0x0(v0)
00403dc0  addiu v0,s8,0x1c
00403dc4  move a0,v0
00403dc8  clear a1
00403dcc  ori a2,zero,0x8000
00403dd0  lw v0,-0x7f98(gp)
00403dd4  nop
00403dd8  move t9,v0
00403ddc  jalr t9
00403de0  _nop
00403de4  lw gp,0x10(s8)
00403de8  lui v0,0x40
00403dec  addiu a0,v0,0x5c80
00403df0  li a1,0x2
00403df4  lw v0,-0x7fc4(gp)
00403df8  nop
00403dfc  move t9,v0
00403e00  jalr t9
00403e04  _nop
00403e08  lw gp,0x10(s8)
00403e0c  sw v0,0x18(s8)
00403e10  lw v0,0x18(s8)
00403e14  nop
00403e18  blez v0,0x00403eb4
00403e1c  _nop
00403e20  lw a0,0x18(s8)
00403e24  lui a1,0x1
00403e28  clear a2
00403e2c  lw v0,-0x7f64(gp)
00403e30  nop
00403e34  move t9,v0
00403e38  jalr t9
00403e3c  _nop
00403e40  lw gp,0x10(s8)
00403e44  addiu v0,s8,0x1c
00403e48  lw a0,0x18(s8)
00403e4c  move a1,v0
00403e50  ori a2,zero,0x8000
00403e54  lw v0,-0x7f74(gp)
00403e58  nop
00403e5c  move t9,v0
00403e60  jalr t9
00403e64  _nop
00403e68  lw gp,0x10(s8)
00403e6c  lui v0,0x40
00403e70  addiu a0,v0,0x5cec
00403e74  lw v0,-0x7f50(gp)
00403e78  nop
00403e7c  move t9,v0
00403e80  jalr t9
00403e84  _nop
00403e88  lw gp,0x10(s8)
00403e8c  lui v0,0x40
00403e90  addiu a0,v0,0x5d04
00403e94  lw v0,-0x7f58(gp)
00403e98  nop
00403e9c  move t9,v0
00403ea0  jalr t9
00403ea4  _nop
00403ea8  lw gp,0x10(s8)
00403eac  b 0x00403ed4
00403eb0  _nop
00403eb4  lui v0,0x40
00403eb8  addiu a0,v0,0x5d2c
00403ebc  lw v0,-0x7f50(gp)
00403ec0  nop
00403ec4  move t9,v0
00403ec8  jalr t9
00403ecc  _nop
00403ed0  lw gp,0x10(s8)
00403ed4  lw a0,0x18(s8)
00403ed8  lw v0,-0x7fcc(gp)
00403edc  nop
00403ee0  move t9,v0
00403ee4  jalr t9
00403ee8  _nop
00403eec  lw gp,0x10(s8)
00403ef0  jal 0x00403c40
00403ef4  _nop
00403ef8  lw gp,0x10(s8)
00403efc  addiu sp,s8,0x38
00403f00  lw ra,0x7fec(sp)
00403f04  lw s8,0x7fe8(sp)
00403f08  addiu sp,sp,0x7ff0
00403f0c  jr ra
00403f10  _nop
