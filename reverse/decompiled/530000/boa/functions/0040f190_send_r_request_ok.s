# send_r_request_ok @ 0040f190
0040f190  addiu sp,sp,-0x20
0040f194  sw ra,0x1c(sp)
0040f198  sw s0,0x18(sp)
0040f19c  lui gp,0x47
0040f1a0  addiu gp,gp,0x2630
0040f1a4  sw gp,0x10(sp)
0040f1a8  lw v0,0x8(a0)
0040f1ac  li v1,0xc8
0040f1b0  sw v1,0x10(a0)
0040f1b4  li v1,0x1
0040f1b8  beq v0,v1,0x0040f2d0
0040f1bc  _move s0,a0
0040f1c0  li v1,0x3
0040f1c4  beq v0,v1,0x0040f1d4
0040f1c8  _lui a1,0x45
0040f1cc  b 0x0040f1dc
0040f1d0  _addiu a1,a1,-0x51b0
0040f1d4  lui a1,0x45
0040f1d8  addiu a1,a1,-0x5198
0040f1dc  lw t9,-0x7a44(gp)
0040f1e0  nop
0040f1e4  jalr t9
0040f1e8  _move a0,s0
0040f1ec  lw gp,0x10(sp)
0040f1f0  lui a1,0x45
0040f1f4  addiu a1,a1,-0x60cc
0040f1f8  lw t9,-0x7a44(gp)
0040f1fc  nop
0040f200  jalr t9
0040f204  _move a0,s0
0040f208  jal 0x0040d688
0040f20c  _move a0,s0
0040f210  lw gp,0x10(sp)
0040f214  lui a1,0x45
0040f218  addiu a1,a1,-0x45d0
0040f21c  lw t9,-0x7a44(gp)
0040f220  nop
0040f224  jalr t9
0040f228  _move a0,s0
0040f22c  lw gp,0x10(sp)
0040f230  lui a1,0x45
0040f234  addiu a1,a1,-0x45bc
0040f238  lw t9,-0x7a44(gp)
0040f23c  nop
0040f240  jalr t9
0040f244  _move a0,s0
0040f248  lw v0,0x14(s0)
0040f24c  lw gp,0x10(sp)
0040f250  bne v0,zero,0x0040f280
0040f254  _lui v1,0x45
0040f258  lw a0,0x1c(s0)
0040f25c  nop
0040f260  beq a0,zero,0x0040f294
0040f264  _lui a1,0x45
0040f268  lw t9,-0x7d18(gp)
0040f26c  addiu a1,a1,-0x4588
0040f270  jalr t9
0040f274  _li a2,0xc
0040f278  b 0x0040f294
0040f27c  _nop
0040f280  addiu v1,v1,-0x4708
0040f284  sw v1,0x90(s0)
0040f288  li v1,0x2
0040f28c  beq v0,v1,0x0040f29c
0040f290  _nop
0040f294  jal 0x0040d608
0040f298  _move a0,s0
0040f29c  jal 0x0040ebc4
0040f2a0  _move a0,s0
0040f2a4  jal 0x0040ec18
0040f2a8  _move a0,s0
0040f2ac  lw gp,0x10(sp)
0040f2b0  move a0,s0
0040f2b4  lw ra,0x1c(sp)
0040f2b8  lw t9,-0x7a44(gp)
0040f2bc  lw s0,0x18(sp)
0040f2c0  lui a1,0x45
0040f2c4  addiu a1,a1,-0x4c0c
0040f2c8  jr t9
0040f2cc  _addiu sp,sp,0x20
0040f2d0  lw ra,0x1c(sp)
0040f2d4  lw s0,0x18(sp)
0040f2d8  jr ra
0040f2dc  _addiu sp,sp,0x20
