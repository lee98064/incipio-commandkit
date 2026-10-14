# FUN_0041dd50 @ 0041dd50
0041dd50  addiu sp,sp,-0x160
0041dd54  sw ra,0x15c(sp)
0041dd58  sw s8,0x158(sp)
0041dd5c  sw s7,0x154(sp)
0041dd60  sw s6,0x150(sp)
0041dd64  sw s5,0x14c(sp)
0041dd68  sw s4,0x148(sp)
0041dd6c  sw s3,0x144(sp)
0041dd70  sw s2,0x140(sp)
0041dd74  sw s1,0x13c(sp)
0041dd78  sw s0,0x138(sp)
0041dd7c  lui gp,0x62
0041dd80  addiu gp,gp,-0x6b80
0041dd84  sw gp,0x18(sp)
0041dd88  lw t9,-0x6788(gp)
0041dd8c  lui v0,0x61
0041dd90  sw zero,0x3d44(v0)
0041dd94  sw a1,0x164(sp)
0041dd98  jalr t9
0041dd9c  _sw a2,0x168(sp)
0041dda0  lw gp,0x18(sp)
0041dda4  lw s1,0x20(v0)
0041dda8  lui s4,0x5b
0041ddac  addiu s4,s4,-0x4a10
0041ddb0  clear s2
0041ddb4  beq s1,zero,0x0041dde0
0041ddb8  _nop
0041ddbc  lw t9,-0x7894(gp)
0041ddc0  lw a0,0x0(s1)
0041ddc4  lw s5,0x4(s1)
0041ddc8  jalr t9
0041ddcc  _move a1,s4
0041ddd0  lw gp,0x18(sp)
0041ddd4  lw s1,0x8(s1)
0041ddd8  b 0x0041ddb4
0041dddc  _movz s2,s5,v0
0041dde0  beq s2,zero,0x0041e7d0
0041dde4  _lui v1,0xfffe
0041dde8  lw t9,-0x60a4(gp)
0041ddec  nop
0041ddf0  jalr t9
0041ddf4  _move a0,s2
0041ddf8  li v1,0x5
0041ddfc  lw gp,0x18(sp)
0041de00  bne v0,v1,0x0041e7cc
0041de04  _move a0,s2
0041de08  lw t9,-0x5b94(gp)
0041de0c  nop
0041de10  jalr t9
0041de14  _sw zero,0x110(sp)
0041de18  lw gp,0x18(sp)
0041de1c  sw v0,0x120(sp)
0041de20  lui s5,0x5b
0041de24  lw t9,-0x7b84(gp)
0041de28  lui s1,0x5b
0041de2c  jalr t9
0041de30  _lui s4,0x5b
0041de34  lw gp,0x18(sp)
0041de38  move a0,v0
0041de3c  lui v0,0x61
0041de40  lw t9,-0x718c(gp)
0041de44  sw a0,0x3d44(v0)
0041de48  jalr t9
0041de4c  _sw a0,0x124(sp)
0041de50  lw gp,0x18(sp)
0041de54  lw a0,0x124(sp)
0041de58  lui a1,0x5b
0041de5c  lw t9,-0x6b6c(gp)
0041de60  sw v0,0x11c(sp)
0041de64  addiu a1,a1,-0x4a10
0041de68  jalr t9
0041de6c  _move a2,v0
0041de70  clear s7
0041de74  lw gp,0x18(sp)
0041de78  addiu s5,s5,-0x4a14
0041de7c  addiu s1,s1,0x27b0
0041de80  addiu s4,s4,-0x4a24
0041de84  b 0x0041e7b0
0041de88  _clear v1
0041de8c  lw t9,-0x620c(gp)
0041de90  nop
0041de94  jalr t9
0041de98  _move a1,s7
0041de9c  lw gp,0x18(sp)
0041dea0  move a0,v0
0041dea4  sw zero,0x10c(sp)
0041dea8  lw t9,-0x6788(gp)
0041deac  nop
0041deb0  jalr t9
0041deb4  _clear s8
0041deb8  lw v0,0x20(v0)
0041debc  lw gp,0x18(sp)
0041dec0  b 0x0041df6c
0041dec4  _sw v0,0x100(sp)
0041dec8  lw t9,-0x6a9c(gp)
0041decc  lw a0,0x104(sp)
0041ded0  jalr t9
0041ded4  _nop
0041ded8  lw gp,0x18(sp)
0041dedc  b 0x0041df6c
0041dee0  _sw v0,0x10c(sp)
0041dee4  lw t9,-0x7894(gp)
0041dee8  lw a0,0x108(sp)
0041deec  jalr t9
0041def0  _move a1,s1
0041def4  lw gp,0x18(sp)
0041def8  bne v0,zero,0x0041df0c
0041defc  _nop
0041df00  lw s8,0x104(sp)
0041df04  b 0x0041df6c
0041df08  _clear s6
0041df0c  lw t9,-0x7894(gp)
0041df10  lw a0,0x108(sp)
0041df14  jalr t9
0041df18  _move a1,s4
0041df1c  lw gp,0x18(sp)
0041df20  bne v0,zero,0x0041df44
0041df24  _nop
0041df28  lw t9,-0x6a9c(gp)
0041df2c  lw a0,0x104(sp)
0041df30  jalr t9
0041df34  _nop
0041df38  lw gp,0x18(sp)
0041df3c  b 0x0041df6c
0041df40  _nop
0041df44  lw t9,-0x7894(gp)
0041df48  lw a0,0x108(sp)
0041df4c  lui a1,0x5b
0041df50  jalr t9
0041df54  _addiu a1,a1,-0x49e8
0041df58  lw v1,0x104(sp)
0041df5c  lw gp,0x18(sp)
0041df60  li a0,0x1
0041df64  movz s8,v1,v0
0041df68  movz s6,a0,v0
0041df6c  lw a3,0x100(sp)
0041df70  nop
0041df74  beq a3,zero,0x0041dfbc
0041df78  _move a1,s5
0041df7c  lw v0,0x0(a3)
0041df80  lw t9,-0x7894(gp)
0041df84  move a0,v0
0041df88  jalr t9
0041df8c  _sw v0,0x108(sp)
0041df90  lw v1,0x100(sp)
0041df94  lw a0,0x100(sp)
0041df98  lw gp,0x18(sp)
0041df9c  lw v1,0x4(v1)
0041dfa0  nop
0041dfa4  sw v1,0x104(sp)
0041dfa8  lw a0,0x8(a0)
0041dfac  beq v0,zero,0x0041dec8
0041dfb0  _sw a0,0x100(sp)
0041dfb4  b 0x0041dee4
0041dfb8  _nop
0041dfbc  lw t1,-0x5944(gp)
0041dfc0  addiu a3,sp,0x28
0041dfc4  addiu v0,sp,0x70
0041dfc8  clear t0
0041dfcc  clear v1
0041dfd0  addiu t1,t1,0x4
0041dfd4  sw a3,0x100(sp)
0041dfd8  sw v0,0x104(sp)
0041dfdc  lw v0,0x0(t1)
0041dfe0  nop
0041dfe4  beq v0,zero,0x0041e0e4
0041dfe8  _li v0,0xb5
0041dfec  mult v1,v0
0041dff0  lw a0,-0x5944(gp)
0041dff4  clear a3
0041dff8  mflo t2
0041dffc  addiu t2,t2,0x1
0041e000  sll t2,t2,0x3
0041e004  addu t2,a0,t2
0041e008  addiu t2,t2,0x4
0041e00c  lw t9,-0x5cb0(gp)
0041e010  lw a0,0x100(sp)
0041e014  move a1,t2
0041e018  sw v1,0x134(sp)
0041e01c  sw a3,0x130(sp)
0041e020  sw t0,0x128(sp)
0041e024  sw t1,0x12c(sp)
0041e028  sw t2,0x124(sp)
0041e02c  jalr t9
0041e030  _li a2,0x48
0041e034  lw a0,0x28(sp)
0041e038  lw gp,0x18(sp)
0041e03c  lw v0,0x2c(sp)
0041e040  lw v1,0x134(sp)
0041e044  lw a3,0x130(sp)
0041e048  lw t0,0x128(sp)
0041e04c  lw t1,0x12c(sp)
0041e050  lw t2,0x124(sp)
0041e054  beq a0,zero,0x0041e0c4
0041e058  _nop
0041e05c  lw a0,0x10c(sp)
0041e060  nop
0041e064  bne v0,a0,0x0041e0c4
0041e068  _li a0,0x48
0041e06c  mult a3,a0
0041e070  sw a3,0x118(sp)
0041e074  li a3,0x5a8
0041e078  lw t9,-0x5cb0(gp)
0041e07c  lw a0,0x104(sp)
0041e080  sw v1,0x114(sp)
0041e084  li a2,0x48
0041e088  mflo v0
0041e08c  mult v1,a3
0041e090  lw a3,-0x5944(gp)
0041e094  mflo a1
0041e098  addu v0,v0,a1
0041e09c  addu a1,a3,v0
0041e0a0  jalr t9
0041e0a4  _addiu a1,a1,0xc
0041e0a8  lw gp,0x18(sp)
0041e0ac  lw s3,0x74(sp)
0041e0b0  lw t0,0x7c(sp)
0041e0b4  lw v1,0x134(sp)
0041e0b8  lw t1,0x12c(sp)
0041e0bc  b 0x0041e0d8
0041e0c0  _addiu v1,v1,0x1
0041e0c4  addiu a3,a3,0x1
0041e0c8  li v0,0x14
0041e0cc  bne a3,v0,0x0041e00c
0041e0d0  _addiu t2,t2,0x48
0041e0d4  addiu v1,v1,0x1
0041e0d8  li a0,0xa
0041e0dc  bne v1,a0,0x0041dfdc
0041e0e0  _addiu t1,t1,0x5a8
0041e0e4  beq s3,zero,0x0041e820
0041e0e8  _nop
0041e0ec  bne s6,zero,0x0041e19c
0041e0f0  _sltiu v0,t0,0x6
0041e0f4  beq v0,zero,0x0041e1d4
0041e0f8  _lui a3,0x5b
0041e0fc  sll t0,t0,0x2
0041e100  addiu a3,a3,-0x47dc
0041e104  addu t0,a3,t0
0041e108  lw v0,0x0(t0)
0041e10c  nop
0041e110  jr v0
0041e114  _nop
0041e118  lw t9,-0x6a9c(gp)
0041e11c  nop
0041e120  jalr t9
0041e124  _move a0,s8
0041e128  lw gp,0x18(sp)
0041e12c  b 0x0041e1d4
0041e130  _move s0,v0
0041e134  lw t9,-0x6740(gp)
0041e138  nop
0041e13c  jalr t9
0041e140  _move a0,s8
0041e144  lw gp,0x18(sp)
0041e148  move a1,v1
0041e14c  lw t9,-0x59e8(gp)
0041e150  nop
0041e154  jalr t9
0041e158  _move a0,v0
0041e15c  lw gp,0x18(sp)
0041e160  b 0x0041e1d4
0041e164  _move s0,v0
0041e168  lw t9,-0x6320(gp)
0041e16c  nop
0041e170  jalr t9
0041e174  _move a0,s8
0041e178  lw gp,0x18(sp)
0041e17c  move a0,s8
0041e180  lw t9,-0x5d90(gp)
0041e184  nop
0041e188  jalr t9
0041e18c  _move s0,v0
0041e190  lw gp,0x18(sp)
0041e194  b 0x0041e1d4
0041e198  _nop
0041e19c  li v0,0x1
0041e1a0  bne s6,v0,0x0041e1d4
0041e1a4  _nop
0041e1a8  lw t9,-0x5cbc(gp)
0041e1ac  nop
0041e1b0  jalr t9
0041e1b4  _move a0,s8
0041e1b8  lui v1,0xff
0041e1bc  sltu v0,zero,v0
0041e1c0  ori v1,v1,0xffff
0041e1c4  lw gp,0x18(sp)
0041e1c8  and s0,s0,v1
0041e1cc  sll v0,v0,0x18
0041e1d0  or s0,s0,v0
0041e1d4  lw v1,0x118(sp)
0041e1d8  li v0,0x48
0041e1dc  lw a0,0x114(sp)
0041e1e0  mult v1,v0
0041e1e4  li v1,0x5a8
0041e1e8  sw zero,0x20(sp)
0041e1ec  mflo v0
0041e1f0  mult a0,v1
0041e1f4  lw v1,-0x5944(gp)
0041e1f8  mflo a3
0041e1fc  addu v0,v0,a3
0041e200  addu v0,v1,v0
0041e204  lbu v0,0x22(v0)
0041e208  nop
0041e20c  beq v0,zero,0x0041e24c
0041e210  _li v0,0x1
0041e214  bne s6,v0,0x0041e24c
0041e218  _move a1,s3
0041e21c  lw v1,0x168(sp)
0041e220  lw a0,0x164(sp)
0041e224  lw t9,-0x7ca4(gp)
0041e228  lw v0,0x0(v1)
0041e22c  sw a0,0x10(sp)
0041e230  sw v0,0x14(sp)
0041e234  clear a0
0041e238  move a2,s0
0041e23c  jalr t9
0041e240  _addiu a3,sp,0x20
0041e244  b 0x0041e310
0041e248  _nop
0041e24c  lw v1,0x118(sp)
0041e250  li v0,0x48
0041e254  lw a0,0x114(sp)
0041e258  mult v1,v0
0041e25c  li v1,0x5a8
0041e260  mflo v0
0041e264  mult a0,v1
0041e268  lw v1,-0x5944(gp)
0041e26c  mflo a3
0041e270  addu v0,v0,a3
0041e274  addu v0,v1,v0
0041e278  lbu v0,0x21(v0)
0041e27c  nop
0041e280  beq v0,zero,0x0041e31c
0041e284  _clear a0
0041e288  lw v0,0x164(sp)
0041e28c  lw t9,-0x7094(gp)
0041e290  sw v0,0x10(sp)
0041e294  move a1,s3
0041e298  move a2,s0
0041e29c  jalr t9
0041e2a0  _addiu a3,sp,0x20
0041e2a4  lw v0,0x20(sp)
0041e2a8  lw gp,0x18(sp)
0041e2ac  bne v0,zero,0x0041e328
0041e2b0  _lui a0,0x61
0041e2b4  lw t9,-0x63f4(gp)
0041e2b8  nop
0041e2bc  jalr t9
0041e2c0  _addiu a0,a0,0x3d28
0041e2c4  lw gp,0x18(sp)
0041e2c8  move a1,s0
0041e2cc  lw t9,-0x592c(gp)
0041e2d0  nop
0041e2d4  jalr t9
0041e2d8  _move a0,s3
0041e2dc  lw gp,0x18(sp)
0041e2e0  lui a0,0x61
0041e2e4  lw t9,-0x77f4(gp)
0041e2e8  nop
0041e2ec  jalr t9
0041e2f0  _addiu a0,a0,0x3d28
0041e2f4  lw gp,0x18(sp)
0041e2f8  lw v1,0x168(sp)
0041e2fc  move a1,s3
0041e300  lw t9,-0x69b4(gp)
0041e304  lw a0,0x0(v1)
0041e308  jalr t9
0041e30c  _move a2,s0
0041e310  lw gp,0x18(sp)
0041e314  b 0x0041e328
0041e318  _nop
0041e31c  lui v0,0xfffe
0041e320  ori v0,v0,0xecfc
0041e324  sw v0,0x20(sp)
0041e328  lw a0,0x20(sp)
0041e32c  lw t9,-0x7b84(gp)
0041e330  nop
0041e334  jalr t9
0041e338  _sw a0,0x108(sp)
0041e33c  lw gp,0x18(sp)
0041e340  nop
0041e344  lw t9,-0x7b84(gp)
0041e348  nop
0041e34c  jalr t9
0041e350  _move s8,v0
0041e354  lw a0,0x118(sp)
0041e358  li v1,0x48
0041e35c  sw v0,0x104(sp)
0041e360  mult a0,v1
0041e364  lw v0,0x114(sp)
0041e368  li a1,0x5a8
0041e36c  lw gp,0x18(sp)
0041e370  addiu a0,sp,0xb8
0041e374  li a2,0x48
0041e378  lw t9,-0x5cb0(gp)
0041e37c  mflo v1
0041e380  mult v0,a1
0041e384  mflo a1
0041e388  addu v1,v1,a1
0041e38c  lw a1,-0x5944(gp)
0041e390  nop
0041e394  addu a1,a1,v1
0041e398  jalr t9
0041e39c  _addiu a1,a1,0xc
0041e3a0  lw v1,0xbc(sp)
0041e3a4  lw gp,0x18(sp)
0041e3a8  lw a0,0xc4(sp)
0041e3ac  lw v0,0xb8(sp)
0041e3b0  sw v1,0x100(sp)
0041e3b4  lbu a3,0xce(sp)
0041e3b8  lbu v1,0xcd(sp)
0041e3bc  lw t9,-0x6e90(gp)
0041e3c0  bne v0,zero,0x0041e4e0
0041e3c4  _sw a0,0x10c(sp)
0041e3c8  jalr t9
0041e3cc  _li a0,0x1
0041e3d0  lw gp,0x18(sp)
0041e3d4  move a2,v0
0041e3d8  move a1,s4
0041e3dc  lw t9,-0x6b6c(gp)
0041e3e0  nop
0041e3e4  jalr t9
0041e3e8  _move a0,s8
0041e3ec  lw gp,0x18(sp)
0041e3f0  lw a0,0x100(sp)
0041e3f4  lui a3,0xfffe
0041e3f8  lw t9,-0x6e90(gp)
0041e3fc  nop
0041e400  jalr t9
0041e404  _sw a3,0x130(sp)
0041e408  lw gp,0x18(sp)
0041e40c  move a2,v0
0041e410  move a1,s5
0041e414  lw t9,-0x6b6c(gp)
0041e418  nop
0041e41c  jalr t9
0041e420  _move a0,s8
0041e424  lw gp,0x18(sp)
0041e428  lw a3,0x130(sp)
0041e42c  lw t9,-0x6e90(gp)
0041e430  ori v1,a3,0xecf9
0041e434  ori a0,a3,0xecfe
0041e438  jalr t9
0041e43c  _sw v1,0x134(sp)
0041e440  lw gp,0x18(sp)
0041e444  lui a1,0x5d
0041e448  move a2,v0
0041e44c  lw t9,-0x6b6c(gp)
0041e450  addiu a1,a1,-0x3e3c
0041e454  jalr t9
0041e458  _move a0,s8
0041e45c  lw gp,0x18(sp)
0041e460  lui a0,0x5b
0041e464  lw t9,-0x5e1c(gp)
0041e468  nop
0041e46c  jalr t9
0041e470  _addiu a0,a0,-0x4994
0041e474  lw gp,0x18(sp)
0041e478  lw a0,0x104(sp)
0041e47c  lui a1,0x5b
0041e480  lw t9,-0x6b6c(gp)
0041e484  move a2,v0
0041e488  jalr t9
0041e48c  _addiu a1,a1,-0x4968
0041e490  lw gp,0x18(sp)
0041e494  lw a3,0x130(sp)
0041e498  lw t9,-0x6e90(gp)
0041e49c  nop
0041e4a0  jalr t9
0041e4a4  _ori a0,a3,0xecf9
0041e4a8  lw gp,0x18(sp)
0041e4ac  lw a0,0x104(sp)
0041e4b0  lui a3,0x5b
0041e4b4  lw t9,-0x6b6c(gp)
0041e4b8  move a2,v0
0041e4bc  jalr t9
0041e4c0  _addiu a1,a3,-0x4954
0041e4c4  lw gp,0x18(sp)
0041e4c8  lui a1,0x5b
0041e4cc  addiu a1,a1,-0x4948
0041e4d0  lw t9,-0x6b6c(gp)
0041e4d4  lw a2,0x104(sp)
0041e4d8  b 0x0041e5f0
0041e4dc  _move a0,s8
0041e4e0  sw v1,0x134(sp)
0041e4e4  sw a3,0x130(sp)
0041e4e8  jalr t9
0041e4ec  _li a0,0x1
0041e4f0  lw gp,0x18(sp)
0041e4f4  move a2,v0
0041e4f8  move a1,s4
0041e4fc  lw t9,-0x6b6c(gp)
0041e500  nop
0041e504  jalr t9
0041e508  _move a0,s8
0041e50c  lw gp,0x18(sp)
0041e510  lw a0,0x100(sp)
0041e514  lw t9,-0x6e90(gp)
0041e518  nop
0041e51c  jalr t9
0041e520  _nop
0041e524  lw gp,0x18(sp)
0041e528  move a2,v0
0041e52c  move a0,s8
0041e530  lw t9,-0x6b6c(gp)
0041e534  nop
0041e538  jalr t9
0041e53c  _move a1,s5
0041e540  lw v1,0x134(sp)
0041e544  lw gp,0x18(sp)
0041e548  lw a3,0x130(sp)
0041e54c  bne v1,zero,0x0041e608
0041e550  _nop
0041e554  bne a3,zero,0x0041e608
0041e558  _nop
0041e55c  lw t9,-0x6e90(gp)
0041e560  nop
0041e564  jalr t9
0041e568  _li a0,0x1
0041e56c  lw gp,0x18(sp)
0041e570  move a2,v0
0041e574  move a1,s4
0041e578  lw t9,-0x6b6c(gp)
0041e57c  nop
0041e580  jalr t9
0041e584  _move a0,s8
0041e588  lw gp,0x18(sp)
0041e58c  lw a0,0x100(sp)
0041e590  lui v0,0xfffe
0041e594  lw t9,-0x6e90(gp)
0041e598  ori v1,v0,0xecfc
0041e59c  jalr t9
0041e5a0  _sw v1,0x134(sp)
0041e5a4  lw gp,0x18(sp)
0041e5a8  move a2,v0
0041e5ac  move a1,s5
0041e5b0  lw t9,-0x6b6c(gp)
0041e5b4  nop
0041e5b8  jalr t9
0041e5bc  _move a0,s8
0041e5c0  lw gp,0x18(sp)
0041e5c4  lui a3,0xfffe
0041e5c8  lw t9,-0x6e90(gp)
0041e5cc  nop
0041e5d0  jalr t9
0041e5d4  _ori a0,a3,0xecfc
0041e5d8  lw gp,0x18(sp)
0041e5dc  lui a1,0x5d
0041e5e0  move a2,v0
0041e5e4  lw t9,-0x6b6c(gp)
0041e5e8  move a0,s8
0041e5ec  addiu a1,a1,-0x3e3c
0041e5f0  jalr t9
0041e5f4  _nop
0041e5f8  lw gp,0x18(sp)
0041e5fc  lw v1,0x134(sp)
0041e600  b 0x0041e83c
0041e604  _nop
0041e608  lw t9,-0x5984(gp)
0041e60c  lw a3,0x164(sp)
0041e610  clear a0
0041e614  move a1,s3
0041e618  jalr t9
0041e61c  _addiu a2,sp,0x24
0041e620  lw gp,0x18(sp)
0041e624  bne v0,zero,0x0041e63c
0041e628  _nop
0041e62c  lw v0,0x108(sp)
0041e630  nop
0041e634  beq v0,zero,0x0041e6e0
0041e638  _nop
0041e63c  lw t9,-0x6e90(gp)
0041e640  nop
0041e644  jalr t9
0041e648  _li a0,0x1
0041e64c  lw gp,0x18(sp)
0041e650  move a2,v0
0041e654  move a1,s4
0041e658  lw t9,-0x6b6c(gp)
0041e65c  nop
0041e660  jalr t9
0041e664  _move a0,s8
0041e668  lw gp,0x18(sp)
0041e66c  lw a0,0x100(sp)
0041e670  lw t9,-0x6e90(gp)
0041e674  nop
0041e678  jalr t9
0041e67c  _nop
0041e680  lw gp,0x18(sp)
0041e684  move a2,v0
0041e688  move a1,s5
0041e68c  lw t9,-0x6b6c(gp)
0041e690  nop
0041e694  jalr t9
0041e698  _move a0,s8
0041e69c  lw gp,0x18(sp)
0041e6a0  lw a0,0x108(sp)
0041e6a4  lw t9,-0x6e90(gp)
0041e6a8  nop
0041e6ac  jalr t9
0041e6b0  _nop
0041e6b4  lw gp,0x18(sp)
0041e6b8  lui a1,0x5d
0041e6bc  move a2,v0
0041e6c0  lw t9,-0x6b6c(gp)
0041e6c4  move a0,s8
0041e6c8  jalr t9
0041e6cc  _addiu a1,a1,-0x3e3c
0041e6d0  lui v1,0xfffe
0041e6d4  lw gp,0x18(sp)
0041e6d8  b 0x0041e83c
0041e6dc  _ori v1,v1,0xecfe
0041e6e0  lw v1,0x10c(sp)
0041e6e4  nop
0041e6e8  sltiu v0,v1,0x6
0041e6ec  beq v0,zero,0x0041e784
0041e6f0  _lui a0,0x5b
0041e6f4  sll v0,v1,0x2
0041e6f8  addiu a0,a0,-0x47c4
0041e6fc  addu v0,a0,v0
0041e700  lw v0,0x0(v0)
0041e704  nop
0041e708  jr v0
0041e70c  _nop
0041e710  lw a0,0x24(sp)
0041e714  lw t9,-0x6e90(gp)
0041e718  b 0x0041e75c
0041e71c  _nop
0041e720  lw t9,-0x7550(gp)
0041e724  lw a0,0x24(sp)
0041e728  jalr t9
0041e72c  _nop
0041e730  lw gp,0x18(sp)
0041e734  move a1,v1
0041e738  lw t9,-0x760c(gp)
0041e73c  nop
0041e740  jalr t9
0041e744  _move a0,v0
0041e748  b 0x0041e764
0041e74c  _nop
0041e750  lw a0,0x24(sp)
0041e754  lw t9,-0x5e1c(gp)
0041e758  nop
0041e75c  jalr t9
0041e760  _nop
0041e764  lw gp,0x18(sp)
0041e768  move a2,v0
0041e76c  move a0,s8
0041e770  lw t9,-0x6b6c(gp)
0041e774  nop
0041e778  jalr t9
0041e77c  _move a1,s1
0041e780  lw gp,0x18(sp)
0041e784  clear v1
0041e788  beq s8,zero,0x0041e7ac
0041e78c  _nop
0041e790  lw t9,-0x709c(gp)
0041e794  lw a0,0x11c(sp)
0041e798  sw v1,0x134(sp)
0041e79c  jalr t9
0041e7a0  _move a1,s8
0041e7a4  lw gp,0x18(sp)
0041e7a8  lw v1,0x134(sp)
0041e7ac  addiu s7,s7,0x1
0041e7b0  lw a3,0x120(sp)
0041e7b4  nop
0041e7b8  slt v0,s7,a3
0041e7bc  bne v0,zero,0x0041de8c
0041e7c0  _move a0,s2
0041e7c4  b 0x0041e7d4
0041e7c8  _nop
0041e7cc  lui v1,0xfffe
0041e7d0  ori v1,v1,0xecf5
0041e7d4  lw v0,0x110(sp)
0041e7d8  nop
0041e7dc  beq v0,zero,0x0041e7ec
0041e7e0  _nop
0041e7e4  lui v1,0xfffe
0041e7e8  ori v1,v1,0xecfe
0041e7ec  lw ra,0x15c(sp)
0041e7f0  lw s8,0x158(sp)
0041e7f4  lw s7,0x154(sp)
0041e7f8  lw s6,0x150(sp)
0041e7fc  lw s5,0x14c(sp)
0041e800  lw s4,0x148(sp)
0041e804  lw s3,0x144(sp)
0041e808  lw s2,0x140(sp)
0041e80c  lw s1,0x13c(sp)
0041e810  lw s0,0x138(sp)
0041e814  move v0,v1
0041e818  jr ra
0041e81c  _addiu sp,sp,0x160
0041e820  lw t9,-0x7dec(gp)
0041e824  lw a0,0x11c(sp)
0041e828  jalr t9
0041e82c  _nop
0041e830  lui v1,0xfffe
0041e834  b 0x0041e7d4
0041e838  _ori v1,v1,0xecf9
0041e83c  lw a0,0x110(sp)
0041e840  nop
0041e844  addiu a0,a0,0x1
0041e848  b 0x0041e788
0041e84c  _sw a0,0x110(sp)
