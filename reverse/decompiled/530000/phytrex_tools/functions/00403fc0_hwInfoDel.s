# hwInfoDel @ 00403fc0
00403fc0  addiu sp,sp,-0x60
00403fc4  sw ra,0x5c(sp)
00403fc8  sw s8,0x58(sp)
00403fcc  move s8,sp
00403fd0  lui gp,0x42
00403fd4  addiu gp,gp,-0x1db0
00403fd8  sw gp,0x10(sp)
00403fdc  sw a0,0x60(s8)
00403fe0  addiu v0,s8,0x1c
00403fe4  move a0,v0
00403fe8  clear a1
00403fec  li a2,0x35
00403ff0  lw v0,-0x7f98(gp)
00403ff4  nop
00403ff8  move t9,v0
00403ffc  jalr t9
00404000  _nop
00404004  lw gp,0x10(s8)
00404008  lui v0,0x40
0040400c  addiu a0,v0,0x6030
00404010  li a1,0x2
00404014  lw v0,-0x7fc4(gp)
00404018  nop
0040401c  move t9,v0
00404020  jalr t9
00404024  _nop
00404028  lw gp,0x10(s8)
0040402c  sw v0,0x18(s8)
00404030  lw v0,0x18(s8)
00404034  nop
00404038  blez v0,0x004040ac
0040403c  _nop
00404040  lw a0,0x18(s8)
00404044  lui v0,0x1
00404048  ori a1,v0,0x8000
0040404c  clear a2
00404050  lw v0,-0x7f64(gp)
00404054  nop
00404058  move t9,v0
0040405c  jalr t9
00404060  _nop
00404064  lw gp,0x10(s8)
00404068  addiu v0,s8,0x1c
0040406c  lw a0,0x18(s8)
00404070  move a1,v0
00404074  li a2,0x35
00404078  lw v0,-0x7f74(gp)
0040407c  nop
00404080  move t9,v0
00404084  jalr t9
00404088  _nop
0040408c  lw gp,0x10(s8)
00404090  lw a0,0x18(s8)
00404094  lw v0,-0x7fcc(gp)
00404098  nop
0040409c  move t9,v0
004040a0  jalr t9
004040a4  _nop
004040a8  lw gp,0x10(s8)
004040ac  move sp,s8
004040b0  lw ra,0x5c(sp)
004040b4  lw s8,0x58(sp)
004040b8  addiu sp,sp,0x60
004040bc  jr ra
004040c0  _nop
