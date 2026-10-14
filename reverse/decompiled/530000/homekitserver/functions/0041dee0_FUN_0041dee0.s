# FUN_0041dee0 @ 0041dee0
0041dee0  addiu sp,sp,-0x160
0041dee4  sw ra,0x15c(sp)
0041dee8  sw s8,0x158(sp)
0041deec  sw s7,0x154(sp)
0041def0  sw s6,0x150(sp)
0041def4  sw s5,0x14c(sp)
0041def8  sw s4,0x148(sp)
0041defc  sw s3,0x144(sp)
0041df00  sw s2,0x140(sp)
0041df04  sw s1,0x13c(sp)
0041df08  sw s0,0x138(sp)
0041df0c  lui gp,0x62
0041df10  addiu gp,gp,-0x5cf0
0041df14  sw gp,0x18(sp)
0041df18  lw t9,-0x6780(gp)
0041df1c  lui v0,0x61
0041df20  sw zero,0x4be4(v0)
0041df24  sw a1,0x164(sp)
0041df28  jalr t9
0041df2c  _sw a2,0x168(sp)
0041df30  lw gp,0x18(sp)
0041df34  lw s1,0x20(v0)
0041df38  lui s4,0x5b
0041df3c  addiu s4,s4,-0x3be0
0041df40  clear s2
0041df44  beq s1,zero,0x0041df70
0041df48  _nop
0041df4c  lw t9,-0x7894(gp)
0041df50  lw a0,0x0(s1)
0041df54  lw s5,0x4(s1)
0041df58  jalr t9
0041df5c  _move a1,s4
0041df60  lw gp,0x18(sp)
0041df64  lw s1,0x8(s1)
0041df68  b 0x0041df44
0041df6c  _movz s2,s5,v0
0041df70  beq s2,zero,0x0041e960
0041df74  _lui v1,0xfffe
0041df78  lw t9,-0x6090(gp)
0041df7c  nop
0041df80  jalr t9
0041df84  _move a0,s2
0041df88  li v1,0x5
0041df8c  lw gp,0x18(sp)
0041df90  bne v0,v1,0x0041e95c
0041df94  _move a0,s2
0041df98  lw t9,-0x5b80(gp)
0041df9c  nop
0041dfa0  jalr t9
0041dfa4  _sw zero,0x110(sp)
0041dfa8  lw gp,0x18(sp)
0041dfac  sw v0,0x120(sp)
0041dfb0  lui s5,0x5b
0041dfb4  lw t9,-0x7b84(gp)
0041dfb8  lui s1,0x5b
0041dfbc  jalr t9
0041dfc0  _lui s4,0x5b
0041dfc4  lw gp,0x18(sp)
0041dfc8  move a0,v0
0041dfcc  lui v0,0x61
0041dfd0  lw t9,-0x718c(gp)
0041dfd4  sw a0,0x4be4(v0)
0041dfd8  jalr t9
0041dfdc  _sw a0,0x124(sp)
0041dfe0  lw gp,0x18(sp)
0041dfe4  lw a0,0x124(sp)
0041dfe8  lui a1,0x5b
0041dfec  lw t9,-0x6b5c(gp)
0041dff0  sw v0,0x11c(sp)
0041dff4  addiu a1,a1,-0x3be0
0041dff8  jalr t9
0041dffc  _move a2,v0
0041e000  clear s7
0041e004  lw gp,0x18(sp)
0041e008  addiu s5,s5,-0x3be4
0041e00c  addiu s1,s1,0x3650
0041e010  addiu s4,s4,-0x3bf4
0041e014  b 0x0041e940
0041e018  _clear v1
0041e01c  lw t9,-0x6200(gp)
0041e020  nop
0041e024  jalr t9
0041e028  _move a1,s7
0041e02c  lw gp,0x18(sp)
0041e030  move a0,v0
0041e034  sw zero,0x10c(sp)
0041e038  lw t9,-0x6780(gp)
0041e03c  nop
0041e040  jalr t9
0041e044  _clear s8
0041e048  lw v0,0x20(v0)
0041e04c  lw gp,0x18(sp)
0041e050  b 0x0041e0fc
0041e054  _sw v0,0x100(sp)
0041e058  lw t9,-0x6a90(gp)
0041e05c  lw a0,0x104(sp)
0041e060  jalr t9
0041e064  _nop
0041e068  lw gp,0x18(sp)
0041e06c  b 0x0041e0fc
0041e070  _sw v0,0x10c(sp)
0041e074  lw t9,-0x7894(gp)
0041e078  lw a0,0x108(sp)
0041e07c  jalr t9
0041e080  _move a1,s1
0041e084  lw gp,0x18(sp)
0041e088  bne v0,zero,0x0041e09c
0041e08c  _nop
0041e090  lw s8,0x104(sp)
0041e094  b 0x0041e0fc
0041e098  _clear s6
0041e09c  lw t9,-0x7894(gp)
0041e0a0  lw a0,0x108(sp)
0041e0a4  jalr t9
0041e0a8  _move a1,s4
0041e0ac  lw gp,0x18(sp)
0041e0b0  bne v0,zero,0x0041e0d4
0041e0b4  _nop
0041e0b8  lw t9,-0x6a90(gp)
0041e0bc  lw a0,0x104(sp)
0041e0c0  jalr t9
0041e0c4  _nop
0041e0c8  lw gp,0x18(sp)
0041e0cc  b 0x0041e0fc
0041e0d0  _nop
0041e0d4  lw t9,-0x7894(gp)
0041e0d8  lw a0,0x108(sp)
0041e0dc  lui a1,0x5b
0041e0e0  jalr t9
0041e0e4  _addiu a1,a1,-0x3bb8
0041e0e8  lw v1,0x104(sp)
0041e0ec  lw gp,0x18(sp)
0041e0f0  li a0,0x1
0041e0f4  movz s8,v1,v0
0041e0f8  movz s6,a0,v0
0041e0fc  lw a3,0x100(sp)
0041e100  nop
0041e104  beq a3,zero,0x0041e14c
0041e108  _move a1,s5
0041e10c  lw v0,0x0(a3)
0041e110  lw t9,-0x7894(gp)
0041e114  move a0,v0
0041e118  jalr t9
0041e11c  _sw v0,0x108(sp)
0041e120  lw v1,0x100(sp)
0041e124  lw a0,0x100(sp)
0041e128  lw gp,0x18(sp)
0041e12c  lw v1,0x4(v1)
0041e130  nop
0041e134  sw v1,0x104(sp)
0041e138  lw a0,0x8(a0)
0041e13c  beq v0,zero,0x0041e058
0041e140  _sw a0,0x100(sp)
0041e144  b 0x0041e074
0041e148  _nop
0041e14c  lw t1,-0x592c(gp)
0041e150  addiu a3,sp,0x28
0041e154  addiu v0,sp,0x70
0041e158  clear t0
0041e15c  clear v1
0041e160  addiu t1,t1,0x4
0041e164  sw a3,0x100(sp)
0041e168  sw v0,0x104(sp)
0041e16c  lw v0,0x0(t1)
0041e170  nop
0041e174  beq v0,zero,0x0041e274
0041e178  _li v0,0xb5
0041e17c  mult v1,v0
0041e180  lw a0,-0x592c(gp)
0041e184  clear a3
0041e188  mflo t2
0041e18c  addiu t2,t2,0x1
0041e190  sll t2,t2,0x3
0041e194  addu t2,a0,t2
0041e198  addiu t2,t2,0x4
0041e19c  lw t9,-0x5c9c(gp)
0041e1a0  lw a0,0x100(sp)
0041e1a4  move a1,t2
0041e1a8  sw v1,0x134(sp)
0041e1ac  sw a3,0x130(sp)
0041e1b0  sw t0,0x128(sp)
0041e1b4  sw t1,0x12c(sp)
0041e1b8  sw t2,0x124(sp)
0041e1bc  jalr t9
0041e1c0  _li a2,0x48
0041e1c4  lw a0,0x28(sp)
0041e1c8  lw gp,0x18(sp)
0041e1cc  lw v0,0x2c(sp)
0041e1d0  lw v1,0x134(sp)
0041e1d4  lw a3,0x130(sp)
0041e1d8  lw t0,0x128(sp)
0041e1dc  lw t1,0x12c(sp)
0041e1e0  lw t2,0x124(sp)
0041e1e4  beq a0,zero,0x0041e254
0041e1e8  _nop
0041e1ec  lw a0,0x10c(sp)
0041e1f0  nop
0041e1f4  bne v0,a0,0x0041e254
0041e1f8  _li a0,0x48
0041e1fc  mult a3,a0
0041e200  sw a3,0x118(sp)
0041e204  li a3,0x5a8
0041e208  lw t9,-0x5c9c(gp)
0041e20c  lw a0,0x104(sp)
0041e210  sw v1,0x114(sp)
0041e214  li a2,0x48
0041e218  mflo v0
0041e21c  mult v1,a3
0041e220  lw a3,-0x592c(gp)
0041e224  mflo a1
0041e228  addu v0,v0,a1
0041e22c  addu a1,a3,v0
0041e230  jalr t9
0041e234  _addiu a1,a1,0xc
0041e238  lw gp,0x18(sp)
0041e23c  lw s3,0x74(sp)
0041e240  lw t0,0x7c(sp)
0041e244  lw v1,0x134(sp)
0041e248  lw t1,0x12c(sp)
0041e24c  b 0x0041e268
0041e250  _addiu v1,v1,0x1
0041e254  addiu a3,a3,0x1
0041e258  li v0,0x14
0041e25c  bne a3,v0,0x0041e19c
0041e260  _addiu t2,t2,0x48
0041e264  addiu v1,v1,0x1
0041e268  li a0,0xa
0041e26c  bne v1,a0,0x0041e16c
0041e270  _addiu t1,t1,0x5a8
0041e274  beq s3,zero,0x0041e9b0
0041e278  _nop
0041e27c  bne s6,zero,0x0041e32c
0041e280  _sltiu v0,t0,0x6
0041e284  beq v0,zero,0x0041e364
0041e288  _lui a3,0x5b
0041e28c  sll t0,t0,0x2
0041e290  addiu a3,a3,-0x39ac
0041e294  addu t0,a3,t0
0041e298  lw v0,0x0(t0)
0041e29c  nop
0041e2a0  jr v0
0041e2a4  _nop
0041e2a8  lw t9,-0x6a90(gp)
0041e2ac  nop
0041e2b0  jalr t9
0041e2b4  _move a0,s8
0041e2b8  lw gp,0x18(sp)
0041e2bc  b 0x0041e364
0041e2c0  _move s0,v0
0041e2c4  lw t9,-0x6738(gp)
0041e2c8  nop
0041e2cc  jalr t9
0041e2d0  _move a0,s8
0041e2d4  lw gp,0x18(sp)
0041e2d8  move a1,v1
0041e2dc  lw t9,-0x59d0(gp)
0041e2e0  nop
0041e2e4  jalr t9
0041e2e8  _move a0,v0
0041e2ec  lw gp,0x18(sp)
0041e2f0  b 0x0041e364
0041e2f4  _move s0,v0
0041e2f8  lw t9,-0x6314(gp)
0041e2fc  nop
0041e300  jalr t9
0041e304  _move a0,s8
0041e308  lw gp,0x18(sp)
0041e30c  move a0,s8
0041e310  lw t9,-0x5d7c(gp)
0041e314  nop
0041e318  jalr t9
0041e31c  _move s0,v0
0041e320  lw gp,0x18(sp)
0041e324  b 0x0041e364
0041e328  _nop
0041e32c  li v0,0x1
0041e330  bne s6,v0,0x0041e364
0041e334  _nop
0041e338  lw t9,-0x5ca8(gp)
0041e33c  nop
0041e340  jalr t9
0041e344  _move a0,s8
0041e348  lui v1,0xff
0041e34c  sltu v0,zero,v0
0041e350  ori v1,v1,0xffff
0041e354  lw gp,0x18(sp)
0041e358  and s0,s0,v1
0041e35c  sll v0,v0,0x18
0041e360  or s0,s0,v0
0041e364  lw v1,0x118(sp)
0041e368  li v0,0x48
0041e36c  lw a0,0x114(sp)
0041e370  mult v1,v0
0041e374  li v1,0x5a8
0041e378  sw zero,0x20(sp)
0041e37c  mflo v0
0041e380  mult a0,v1
0041e384  lw v1,-0x592c(gp)
0041e388  mflo a3
0041e38c  addu v0,v0,a3
0041e390  addu v0,v1,v0
0041e394  lbu v0,0x22(v0)
0041e398  nop
0041e39c  beq v0,zero,0x0041e3dc
0041e3a0  _li v0,0x1
0041e3a4  bne s6,v0,0x0041e3dc
0041e3a8  _move a1,s3
0041e3ac  lw v1,0x168(sp)
0041e3b0  lw a0,0x164(sp)
0041e3b4  lw t9,-0x7ca8(gp)
0041e3b8  lw v0,0x0(v1)
0041e3bc  sw a0,0x10(sp)
0041e3c0  sw v0,0x14(sp)
0041e3c4  clear a0
0041e3c8  move a2,s0
0041e3cc  jalr t9
0041e3d0  _addiu a3,sp,0x20
0041e3d4  b 0x0041e4a0
0041e3d8  _nop
0041e3dc  lw v1,0x118(sp)
0041e3e0  li v0,0x48
0041e3e4  lw a0,0x114(sp)
0041e3e8  mult v1,v0
0041e3ec  li v1,0x5a8
0041e3f0  mflo v0
0041e3f4  mult a0,v1
0041e3f8  lw v1,-0x592c(gp)
0041e3fc  mflo a3
0041e400  addu v0,v0,a3
0041e404  addu v0,v1,v0
0041e408  lbu v0,0x21(v0)
0041e40c  nop
0041e410  beq v0,zero,0x0041e4ac
0041e414  _clear a0
0041e418  lw v0,0x164(sp)
0041e41c  lw t9,-0x7090(gp)
0041e420  sw v0,0x10(sp)
0041e424  move a1,s3
0041e428  move a2,s0
0041e42c  jalr t9
0041e430  _addiu a3,sp,0x20
0041e434  lw v0,0x20(sp)
0041e438  lw gp,0x18(sp)
0041e43c  bne v0,zero,0x0041e4b8
0041e440  _lui a0,0x61
0041e444  lw t9,-0x63ec(gp)
0041e448  nop
0041e44c  jalr t9
0041e450  _addiu a0,a0,0x4bc8
0041e454  lw gp,0x18(sp)
0041e458  move a1,s0
0041e45c  lw t9,-0x5914(gp)
0041e460  nop
0041e464  jalr t9
0041e468  _move a0,s3
0041e46c  lw gp,0x18(sp)
0041e470  lui a0,0x61
0041e474  lw t9,-0x77f4(gp)
0041e478  nop
0041e47c  jalr t9
0041e480  _addiu a0,a0,0x4bc8
0041e484  lw gp,0x18(sp)
0041e488  lw v1,0x168(sp)
0041e48c  move a1,s3
0041e490  lw t9,-0x69a8(gp)
0041e494  lw a0,0x0(v1)
0041e498  jalr t9
0041e49c  _move a2,s0
0041e4a0  lw gp,0x18(sp)
0041e4a4  b 0x0041e4b8
0041e4a8  _nop
0041e4ac  lui v0,0xfffe
0041e4b0  ori v0,v0,0xecfc
0041e4b4  sw v0,0x20(sp)
0041e4b8  lw a0,0x20(sp)
0041e4bc  lw t9,-0x7b84(gp)
0041e4c0  nop
0041e4c4  jalr t9
0041e4c8  _sw a0,0x108(sp)
0041e4cc  lw gp,0x18(sp)
0041e4d0  nop
0041e4d4  lw t9,-0x7b84(gp)
0041e4d8  nop
0041e4dc  jalr t9
0041e4e0  _move s8,v0
0041e4e4  lw a0,0x118(sp)
0041e4e8  li v1,0x48
0041e4ec  sw v0,0x104(sp)
0041e4f0  mult a0,v1
0041e4f4  lw v0,0x114(sp)
0041e4f8  li a1,0x5a8
0041e4fc  lw gp,0x18(sp)
0041e500  addiu a0,sp,0xb8
0041e504  li a2,0x48
0041e508  lw t9,-0x5c9c(gp)
0041e50c  mflo v1
0041e510  mult v0,a1
0041e514  mflo a1
0041e518  addu v1,v1,a1
0041e51c  lw a1,-0x592c(gp)
0041e520  nop
0041e524  addu a1,a1,v1
0041e528  jalr t9
0041e52c  _addiu a1,a1,0xc
0041e530  lw v1,0xbc(sp)
0041e534  lw gp,0x18(sp)
0041e538  lw a0,0xc4(sp)
0041e53c  lw v0,0xb8(sp)
0041e540  sw v1,0x100(sp)
0041e544  lbu a3,0xce(sp)
0041e548  lbu v1,0xcd(sp)
0041e54c  lw t9,-0x6e8c(gp)
0041e550  bne v0,zero,0x0041e670
0041e554  _sw a0,0x10c(sp)
0041e558  jalr t9
0041e55c  _li a0,0x1
0041e560  lw gp,0x18(sp)
0041e564  move a2,v0
0041e568  move a1,s4
0041e56c  lw t9,-0x6b5c(gp)
0041e570  nop
0041e574  jalr t9
0041e578  _move a0,s8
0041e57c  lw gp,0x18(sp)
0041e580  lw a0,0x100(sp)
0041e584  lui a3,0xfffe
0041e588  lw t9,-0x6e8c(gp)
0041e58c  nop
0041e590  jalr t9
0041e594  _sw a3,0x130(sp)
0041e598  lw gp,0x18(sp)
0041e59c  move a2,v0
0041e5a0  move a1,s5
0041e5a4  lw t9,-0x6b5c(gp)
0041e5a8  nop
0041e5ac  jalr t9
0041e5b0  _move a0,s8
0041e5b4  lw gp,0x18(sp)
0041e5b8  lw a3,0x130(sp)
0041e5bc  lw t9,-0x6e8c(gp)
0041e5c0  ori v1,a3,0xecf9
0041e5c4  ori a0,a3,0xecfe
0041e5c8  jalr t9
0041e5cc  _sw v1,0x134(sp)
0041e5d0  lw gp,0x18(sp)
0041e5d4  lui a1,0x5d
0041e5d8  move a2,v0
0041e5dc  lw t9,-0x6b5c(gp)
0041e5e0  addiu a1,a1,-0x2f9c
0041e5e4  jalr t9
0041e5e8  _move a0,s8
0041e5ec  lw gp,0x18(sp)
0041e5f0  lui a0,0x5b
0041e5f4  lw t9,-0x5e08(gp)
0041e5f8  nop
0041e5fc  jalr t9
0041e600  _addiu a0,a0,-0x3b64
0041e604  lw gp,0x18(sp)
0041e608  lw a0,0x104(sp)
0041e60c  lui a1,0x5b
0041e610  lw t9,-0x6b5c(gp)
0041e614  move a2,v0
0041e618  jalr t9
0041e61c  _addiu a1,a1,-0x3b38
0041e620  lw gp,0x18(sp)
0041e624  lw a3,0x130(sp)
0041e628  lw t9,-0x6e8c(gp)
0041e62c  nop
0041e630  jalr t9
0041e634  _ori a0,a3,0xecf9
0041e638  lw gp,0x18(sp)
0041e63c  lw a0,0x104(sp)
0041e640  lui a3,0x5b
0041e644  lw t9,-0x6b5c(gp)
0041e648  move a2,v0
0041e64c  jalr t9
0041e650  _addiu a1,a3,-0x3b24
0041e654  lw gp,0x18(sp)
0041e658  lui a1,0x5b
0041e65c  addiu a1,a1,-0x3b18
0041e660  lw t9,-0x6b5c(gp)
0041e664  lw a2,0x104(sp)
0041e668  b 0x0041e780
0041e66c  _move a0,s8
0041e670  sw v1,0x134(sp)
0041e674  sw a3,0x130(sp)
0041e678  jalr t9
0041e67c  _li a0,0x1
0041e680  lw gp,0x18(sp)
0041e684  move a2,v0
0041e688  move a1,s4
0041e68c  lw t9,-0x6b5c(gp)
0041e690  nop
0041e694  jalr t9
0041e698  _move a0,s8
0041e69c  lw gp,0x18(sp)
0041e6a0  lw a0,0x100(sp)
0041e6a4  lw t9,-0x6e8c(gp)
0041e6a8  nop
0041e6ac  jalr t9
0041e6b0  _nop
0041e6b4  lw gp,0x18(sp)
0041e6b8  move a2,v0
0041e6bc  move a0,s8
0041e6c0  lw t9,-0x6b5c(gp)
0041e6c4  nop
0041e6c8  jalr t9
0041e6cc  _move a1,s5
0041e6d0  lw v1,0x134(sp)
0041e6d4  lw gp,0x18(sp)
0041e6d8  lw a3,0x130(sp)
0041e6dc  bne v1,zero,0x0041e798
0041e6e0  _nop
0041e6e4  bne a3,zero,0x0041e798
0041e6e8  _nop
0041e6ec  lw t9,-0x6e8c(gp)
0041e6f0  nop
0041e6f4  jalr t9
0041e6f8  _li a0,0x1
0041e6fc  lw gp,0x18(sp)
0041e700  move a2,v0
0041e704  move a1,s4
0041e708  lw t9,-0x6b5c(gp)
0041e70c  nop
0041e710  jalr t9
0041e714  _move a0,s8
0041e718  lw gp,0x18(sp)
0041e71c  lw a0,0x100(sp)
0041e720  lui v0,0xfffe
0041e724  lw t9,-0x6e8c(gp)
0041e728  ori v1,v0,0xecfc
0041e72c  jalr t9
0041e730  _sw v1,0x134(sp)
0041e734  lw gp,0x18(sp)
0041e738  move a2,v0
0041e73c  move a1,s5
0041e740  lw t9,-0x6b5c(gp)
0041e744  nop
0041e748  jalr t9
0041e74c  _move a0,s8
0041e750  lw gp,0x18(sp)
0041e754  lui a3,0xfffe
0041e758  lw t9,-0x6e8c(gp)
0041e75c  nop
0041e760  jalr t9
0041e764  _ori a0,a3,0xecfc
0041e768  lw gp,0x18(sp)
0041e76c  lui a1,0x5d
0041e770  move a2,v0
0041e774  lw t9,-0x6b5c(gp)
0041e778  move a0,s8
0041e77c  addiu a1,a1,-0x2f9c
0041e780  jalr t9
0041e784  _nop
0041e788  lw gp,0x18(sp)
0041e78c  lw v1,0x134(sp)
0041e790  b 0x0041e9cc
0041e794  _nop
0041e798  lw t9,-0x596c(gp)
0041e79c  lw a3,0x164(sp)
0041e7a0  clear a0
0041e7a4  move a1,s3
0041e7a8  jalr t9
0041e7ac  _addiu a2,sp,0x24
0041e7b0  lw gp,0x18(sp)
0041e7b4  bne v0,zero,0x0041e7cc
0041e7b8  _nop
0041e7bc  lw v0,0x108(sp)
0041e7c0  nop
0041e7c4  beq v0,zero,0x0041e870
0041e7c8  _nop
0041e7cc  lw t9,-0x6e8c(gp)
0041e7d0  nop
0041e7d4  jalr t9
0041e7d8  _li a0,0x1
0041e7dc  lw gp,0x18(sp)
0041e7e0  move a2,v0
0041e7e4  move a1,s4
0041e7e8  lw t9,-0x6b5c(gp)
0041e7ec  nop
0041e7f0  jalr t9
0041e7f4  _move a0,s8
0041e7f8  lw gp,0x18(sp)
0041e7fc  lw a0,0x100(sp)
0041e800  lw t9,-0x6e8c(gp)
0041e804  nop
0041e808  jalr t9
0041e80c  _nop
0041e810  lw gp,0x18(sp)
0041e814  move a2,v0
0041e818  move a1,s5
0041e81c  lw t9,-0x6b5c(gp)
0041e820  nop
0041e824  jalr t9
0041e828  _move a0,s8
0041e82c  lw gp,0x18(sp)
0041e830  lw a0,0x108(sp)
0041e834  lw t9,-0x6e8c(gp)
0041e838  nop
0041e83c  jalr t9
0041e840  _nop
0041e844  lw gp,0x18(sp)
0041e848  lui a1,0x5d
0041e84c  move a2,v0
0041e850  lw t9,-0x6b5c(gp)
0041e854  move a0,s8
0041e858  jalr t9
0041e85c  _addiu a1,a1,-0x2f9c
0041e860  lui v1,0xfffe
0041e864  lw gp,0x18(sp)
0041e868  b 0x0041e9cc
0041e86c  _ori v1,v1,0xecfe
0041e870  lw v1,0x10c(sp)
0041e874  nop
0041e878  sltiu v0,v1,0x6
0041e87c  beq v0,zero,0x0041e914
0041e880  _lui a0,0x5b
0041e884  sll v0,v1,0x2
0041e888  addiu a0,a0,-0x3994
0041e88c  addu v0,a0,v0
0041e890  lw v0,0x0(v0)
0041e894  nop
0041e898  jr v0
0041e89c  _nop
0041e8a0  lw a0,0x24(sp)
0041e8a4  lw t9,-0x6e8c(gp)
0041e8a8  b 0x0041e8ec
0041e8ac  _nop
0041e8b0  lw t9,-0x7550(gp)
0041e8b4  lw a0,0x24(sp)
0041e8b8  jalr t9
0041e8bc  _nop
0041e8c0  lw gp,0x18(sp)
0041e8c4  move a1,v1
0041e8c8  lw t9,-0x760c(gp)
0041e8cc  nop
0041e8d0  jalr t9
0041e8d4  _move a0,v0
0041e8d8  b 0x0041e8f4
0041e8dc  _nop
0041e8e0  lw a0,0x24(sp)
0041e8e4  lw t9,-0x5e08(gp)
0041e8e8  nop
0041e8ec  jalr t9
0041e8f0  _nop
0041e8f4  lw gp,0x18(sp)
0041e8f8  move a2,v0
0041e8fc  move a0,s8
0041e900  lw t9,-0x6b5c(gp)
0041e904  nop
0041e908  jalr t9
0041e90c  _move a1,s1
0041e910  lw gp,0x18(sp)
0041e914  clear v1
0041e918  beq s8,zero,0x0041e93c
0041e91c  _nop
0041e920  lw t9,-0x7098(gp)
0041e924  lw a0,0x11c(sp)
0041e928  sw v1,0x134(sp)
0041e92c  jalr t9
0041e930  _move a1,s8
0041e934  lw gp,0x18(sp)
0041e938  lw v1,0x134(sp)
0041e93c  addiu s7,s7,0x1
0041e940  lw a3,0x120(sp)
0041e944  nop
0041e948  slt v0,s7,a3
0041e94c  bne v0,zero,0x0041e01c
0041e950  _move a0,s2
0041e954  b 0x0041e964
0041e958  _nop
0041e95c  lui v1,0xfffe
0041e960  ori v1,v1,0xecf5
0041e964  lw v0,0x110(sp)
0041e968  nop
0041e96c  beq v0,zero,0x0041e97c
0041e970  _nop
0041e974  lui v1,0xfffe
0041e978  ori v1,v1,0xecfe
0041e97c  lw ra,0x15c(sp)
0041e980  lw s8,0x158(sp)
0041e984  lw s7,0x154(sp)
0041e988  lw s6,0x150(sp)
0041e98c  lw s5,0x14c(sp)
0041e990  lw s4,0x148(sp)
0041e994  lw s3,0x144(sp)
0041e998  lw s2,0x140(sp)
0041e99c  lw s1,0x13c(sp)
0041e9a0  lw s0,0x138(sp)
0041e9a4  move v0,v1
0041e9a8  jr ra
0041e9ac  _addiu sp,sp,0x160
0041e9b0  lw t9,-0x7dec(gp)
0041e9b4  lw a0,0x11c(sp)
0041e9b8  jalr t9
0041e9bc  _nop
0041e9c0  lui v1,0xfffe
0041e9c4  b 0x0041e964
0041e9c8  _ori v1,v1,0xecf9
0041e9cc  lw a0,0x110(sp)
0041e9d0  nop
0041e9d4  addiu a0,a0,0x1
0041e9d8  b 0x0041e918
0041e9dc  _sw a0,0x110(sp)
