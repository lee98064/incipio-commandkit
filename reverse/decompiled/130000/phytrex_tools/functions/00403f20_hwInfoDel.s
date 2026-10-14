# hwInfoDel @ 00403f20
00403f20  addiu sp,sp,-0x60
00403f24  sw ra,0x5c(sp)
00403f28  sw s8,0x58(sp)
00403f2c  move s8,sp
00403f30  lui gp,0x42
00403f34  addiu gp,gp,-0x21a0
00403f38  sw gp,0x10(sp)
00403f3c  sw a0,0x60(s8)
00403f40  addiu v0,s8,0x1c
00403f44  move a0,v0
00403f48  clear a1
00403f4c  li a2,0x35
00403f50  lw v0,-0x7f98(gp)
00403f54  nop
00403f58  move t9,v0
00403f5c  jalr t9
00403f60  _nop
00403f64  lw gp,0x10(s8)
00403f68  lui v0,0x40
00403f6c  addiu a0,v0,0x5d40
00403f70  li a1,0x2
00403f74  lw v0,-0x7fc4(gp)
00403f78  nop
00403f7c  move t9,v0
00403f80  jalr t9
00403f84  _nop
00403f88  lw gp,0x10(s8)
00403f8c  sw v0,0x18(s8)
00403f90  lw v0,0x18(s8)
00403f94  nop
00403f98  blez v0,0x0040400c
00403f9c  _nop
00403fa0  lw a0,0x18(s8)
00403fa4  lui v0,0x1
00403fa8  ori a1,v0,0x8000
00403fac  clear a2
00403fb0  lw v0,-0x7f64(gp)
00403fb4  nop
00403fb8  move t9,v0
00403fbc  jalr t9
00403fc0  _nop
00403fc4  lw gp,0x10(s8)
00403fc8  addiu v0,s8,0x1c
00403fcc  lw a0,0x18(s8)
00403fd0  move a1,v0
00403fd4  li a2,0x35
00403fd8  lw v0,-0x7f74(gp)
00403fdc  nop
00403fe0  move t9,v0
00403fe4  jalr t9
00403fe8  _nop
00403fec  lw gp,0x10(s8)
00403ff0  lw a0,0x18(s8)
00403ff4  lw v0,-0x7fcc(gp)
00403ff8  nop
00403ffc  move t9,v0
00404000  jalr t9
00404004  _nop
00404008  lw gp,0x10(s8)
0040400c  move sp,s8
00404010  lw ra,0x5c(sp)
00404014  lw s8,0x58(sp)
00404018  addiu sp,sp,0x60
0040401c  jr ra
00404020  _nop
