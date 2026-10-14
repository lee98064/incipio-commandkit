# swapWlanMibSetting @ 0041e1f0
0041e1f0  addiu sp,sp,-0x90
0041e1f4  sw ra,0x8c(sp)
0041e1f8  sw s3,0x88(sp)
0041e1fc  sw s2,0x84(sp)
0041e200  sw s1,0x80(sp)
0041e204  sw s0,0x7c(sp)
0041e208  lui gp,0x47
0041e20c  addiu gp,gp,0x2630
0041e210  sw gp,0x10(sp)
0041e214  lw t9,-0x7e90(gp)
0041e218  andi s3,a0,0xff
0041e21c  jalr t9
0041e220  _andi s2,a1,0xff
0041e224  lw gp,0x10(sp)
0041e228  nop
0041e22c  lw t9,-0x7b1c(gp)
0041e230  nop
0041e234  jalr t9
0041e238  _li a0,0x3b46
0041e23c  lw gp,0x10(sp)
0041e240  beq v0,zero,0x0041e2dc
0041e244  _move s0,v0
0041e248  li v0,0x3b46
0041e24c  mult s3,v0
0041e250  lw s1,-0x7a30(gp)
0041e254  lw t9,-0x7ad4(gp)
0041e258  move a0,s0
0041e25c  lw a1,0x0(s1)
0041e260  li a2,0x3b46
0041e264  addiu a1,a1,0x2e4c
0041e268  mflo s3
0041e26c  addu a1,a1,s3
0041e270  mult s2,v0
0041e274  jalr t9
0041e278  _mflo s2
0041e27c  lw gp,0x10(sp)
0041e280  lw a1,0x0(s1)
0041e284  li a2,0x3b46
0041e288  lw t9,-0x7ad4(gp)
0041e28c  addiu a1,a1,0x2e4c
0041e290  addu a0,a1,s3
0041e294  jalr t9
0041e298  _addu a1,a1,s2
0041e29c  lw gp,0x10(sp)
0041e2a0  lw a0,0x0(s1)
0041e2a4  move a1,s0
0041e2a8  lw t9,-0x7ad4(gp)
0041e2ac  addiu a0,a0,0x2e4c
0041e2b0  addu a0,a0,s2
0041e2b4  jalr t9
0041e2b8  _li a2,0x3b46
0041e2bc  lw gp,0x10(sp)
0041e2c0  nop
0041e2c4  lw t9,-0x7fb0(gp)
0041e2c8  nop
0041e2cc  jalr t9
0041e2d0  _move a0,s0
0041e2d4  lw gp,0x10(sp)
0041e2d8  nop
0041e2dc  lw t9,-0x7dd8(gp)
0041e2e0  addiu s2,sp,0x18
0041e2e4  jalr t9
0041e2e8  _addiu s3,sp,0x1c
0041e2ec  lw gp,0x10(sp)
0041e2f0  li a0,0x834
0041e2f4  move a1,s2
0041e2f8  lw t9,-0x7b54(gp)
0041e2fc  addiu s0,sp,0x20
0041e300  jalr t9
0041e304  _addiu s1,sp,0x24
0041e308  lw gp,0x10(sp)
0041e30c  li a0,0x844
0041e310  lw t9,-0x7b54(gp)
0041e314  nop
0041e318  jalr t9
0041e31c  _move a1,s3
0041e320  lw gp,0x10(sp)
0041e324  move a1,s0
0041e328  lw t9,-0x7b54(gp)
0041e32c  nop
0041e330  jalr t9
0041e334  _li a0,0x835
0041e338  lw gp,0x10(sp)
0041e33c  li a0,0x847
0041e340  lw t9,-0x7b54(gp)
0041e344  nop
0041e348  jalr t9
0041e34c  _move a1,s1
0041e350  lw gp,0x10(sp)
0041e354  move a1,s3
0041e358  lw t9,-0x7c08(gp)
0041e35c  nop
0041e360  jalr t9
0041e364  _li a0,0x834
0041e368  lw gp,0x10(sp)
0041e36c  move a1,s2
0041e370  lw t9,-0x7c08(gp)
0041e374  nop
0041e378  jalr t9
0041e37c  _li a0,0x844
0041e380  lw gp,0x10(sp)
0041e384  move a1,s1
0041e388  lw t9,-0x7c08(gp)
0041e38c  nop
0041e390  jalr t9
0041e394  _li a0,0x835
0041e398  lw gp,0x10(sp)
0041e39c  move a1,s0
0041e3a0  lw t9,-0x7c08(gp)
0041e3a4  nop
0041e3a8  jalr t9
0041e3ac  _li a0,0x847
0041e3b0  lw gp,0x10(sp)
0041e3b4  nop
0041e3b8  lw t9,-0x7b1c(gp)
0041e3bc  nop
0041e3c0  jalr t9
0041e3c4  _li a0,0x424
0041e3c8  lw gp,0x10(sp)
0041e3cc  beq v0,zero,0x0041e448
0041e3d0  _move s0,v0
0041e3d4  lw s1,-0x7a30(gp)
0041e3d8  lw t9,-0x7ad4(gp)
0041e3dc  move a0,v0
0041e3e0  lw a1,0x0(s1)
0041e3e4  li a2,0x424
0041e3e8  jalr t9
0041e3ec  _addiu a1,a1,0xeae
0041e3f0  lw gp,0x10(sp)
0041e3f4  lw a0,0x0(s1)
0041e3f8  li a2,0x424
0041e3fc  lw t9,-0x7ad4(gp)
0041e400  addiu a1,a0,0x12d4
0041e404  jalr t9
0041e408  _addiu a0,a0,0xeae
0041e40c  lw gp,0x10(sp)
0041e410  lw a0,0x0(s1)
0041e414  move a1,s0
0041e418  lw t9,-0x7ad4(gp)
0041e41c  addiu a0,a0,0x12d4
0041e420  jalr t9
0041e424  _li a2,0x424
0041e428  lw gp,0x10(sp)
0041e42c  nop
0041e430  lw t9,-0x7fb0(gp)
0041e434  nop
0041e438  jalr t9
0041e43c  _move a0,s0
0041e440  lw gp,0x10(sp)
0041e444  nop
0041e448  lw t9,-0x7db4(gp)
0041e44c  addiu s0,sp,0x30
0041e450  move a0,s0
0041e454  clear a1
0041e458  jalr t9
0041e45c  _li a2,0x21
0041e460  lw gp,0x10(sp)
0041e464  addiu s1,sp,0x54
0041e468  li a2,0x21
0041e46c  lw t9,-0x7db4(gp)
0041e470  move a0,s1
0041e474  jalr t9
0041e478  _clear a1
0041e47c  lw gp,0x10(sp)
0041e480  addiu s2,sp,0x28
0041e484  li a0,0xfa
0041e488  lw t9,-0x7b54(gp)
0041e48c  move a1,s2
0041e490  jalr t9
0041e494  _addiu s3,sp,0x2c
0041e498  lw gp,0x10(sp)
0041e49c  li a0,0xfc
0041e4a0  lw t9,-0x7b54(gp)
0041e4a4  nop
0041e4a8  jalr t9
0041e4ac  _move a1,s3
0041e4b0  lw gp,0x10(sp)
0041e4b4  move a1,s0
0041e4b8  lw t9,-0x7b54(gp)
0041e4bc  nop
0041e4c0  jalr t9
0041e4c4  _li a0,0xfb
0041e4c8  lw gp,0x10(sp)
0041e4cc  li a0,0xfd
0041e4d0  lw t9,-0x7b54(gp)
0041e4d4  nop
0041e4d8  jalr t9
0041e4dc  _move a1,s1
0041e4e0  lw gp,0x10(sp)
0041e4e4  move a1,s3
0041e4e8  lw t9,-0x7c08(gp)
0041e4ec  nop
0041e4f0  jalr t9
0041e4f4  _li a0,0xfa
0041e4f8  lw gp,0x10(sp)
0041e4fc  move a1,s2
0041e500  lw t9,-0x7c08(gp)
0041e504  nop
0041e508  jalr t9
0041e50c  _li a0,0xfc
0041e510  lw gp,0x10(sp)
0041e514  move a1,s1
0041e518  lw t9,-0x7c08(gp)
0041e51c  nop
0041e520  jalr t9
0041e524  _li a0,0xfb
0041e528  lw gp,0x10(sp)
0041e52c  move a1,s0
0041e530  lw t9,-0x7c08(gp)
0041e534  nop
0041e538  jalr t9
0041e53c  _li a0,0xfd
0041e540  lw gp,0x10(sp)
0041e544  nop
0041e548  lw t9,-0x7e90(gp)
0041e54c  nop
0041e550  jalr t9
0041e554  _nop
0041e558  lw gp,0x10(sp)
0041e55c  nop
0041e560  lw t9,-0x7b1c(gp)
0041e564  nop
0041e568  jalr t9
0041e56c  _li a0,0x6e
0041e570  lw gp,0x10(sp)
0041e574  beq v0,zero,0x0041e5f0
0041e578  _move s0,v0
0041e57c  lw s1,-0x7a30(gp)
0041e580  lw t9,-0x7ad4(gp)
0041e584  move a0,v0
0041e588  lw a1,0x0(s1)
0041e58c  li a2,0x6e
0041e590  jalr t9
0041e594  _addiu a1,a1,0x1752
0041e598  lw gp,0x10(sp)
0041e59c  lw a0,0x0(s1)
0041e5a0  li a2,0x6e
0041e5a4  lw t9,-0x7ad4(gp)
0041e5a8  addiu a1,a0,0x17c0
0041e5ac  jalr t9
0041e5b0  _addiu a0,a0,0x1752
0041e5b4  lw gp,0x10(sp)
0041e5b8  lw a0,0x0(s1)
0041e5bc  move a1,s0
0041e5c0  lw t9,-0x7ad4(gp)
0041e5c4  addiu a0,a0,0x17c0
0041e5c8  jalr t9
0041e5cc  _li a2,0x6e
0041e5d0  lw gp,0x10(sp)
0041e5d4  nop
0041e5d8  lw t9,-0x7fb0(gp)
0041e5dc  nop
0041e5e0  jalr t9
0041e5e4  _move a0,s0
0041e5e8  lw gp,0x10(sp)
0041e5ec  nop
0041e5f0  lw t9,-0x7dd8(gp)
0041e5f4  nop
0041e5f8  jalr t9
0041e5fc  _nop
0041e600  lw ra,0x8c(sp)
0041e604  lw s3,0x88(sp)
0041e608  lw s2,0x84(sp)
0041e60c  lw s1,0x80(sp)
0041e610  lw s0,0x7c(sp)
0041e614  jr ra
0041e618  _addiu sp,sp,0x90
