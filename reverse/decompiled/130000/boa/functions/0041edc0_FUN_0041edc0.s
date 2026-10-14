# FUN_0041edc0 @ 0041edc0
0041edc0  addiu sp,sp,-0x40
0041edc4  sw ra,0x3c(sp)
0041edc8  sw s2,0x38(sp)
0041edcc  sw s1,0x34(sp)
0041edd0  sw s0,0x30(sp)
0041edd4  lui gp,0x47
0041edd8  addiu gp,gp,0x2630
0041eddc  sw gp,0x10(sp)
0041ede0  li v0,0x1
0041ede4  bne a0,v0,0x0041ef38
0041ede8  _lui s0,0x45
0041edec  lw t9,-0x7b18(gp)
0041edf0  lui a0,0x45
0041edf4  jalr t9
0041edf8  _addiu a0,a0,0x510
0041edfc  lw gp,0x10(sp)
0041ee00  lui a0,0x45
0041ee04  lw t9,-0x7af4(gp)
0041ee08  nop
0041ee0c  jalr t9
0041ee10  _addiu a0,a0,0x528
0041ee14  lw gp,0x10(sp)
0041ee18  lui a0,0x45
0041ee1c  addiu a1,s0,0x7484
0041ee20  lw t9,-0x7d9c(gp)
0041ee24  nop
0041ee28  jalr t9
0041ee2c  _addiu a0,a0,0x534
0041ee30  lw gp,0x10(sp)
0041ee34  beq v0,zero,0x0041eef0
0041ee38  _move s0,v0
0041ee3c  lw t9,-0x7ab8(gp)
0041ee40  addiu s1,sp,0x1c
0041ee44  move a0,s1
0041ee48  li a1,0x14
0041ee4c  jalr t9
0041ee50  _move a2,v0
0041ee54  lw gp,0x10(sp)
0041ee58  lui a1,0x45
0041ee5c  move a0,s1
0041ee60  lw t9,-0x7d6c(gp)
0041ee64  addiu a1,a1,0xf08
0041ee68  jalr t9
0041ee6c  _addiu a2,sp,0x18
0041ee70  lw gp,0x10(sp)
0041ee74  beq v0,zero,0x0041eea8
0041ee78  _nop
0041ee7c  lw a0,0x18(sp)
0041ee80  nop
0041ee84  slti v0,a0,0x2
0041ee88  bne v0,zero,0x0041eea8
0041ee8c  _nop
0041ee90  lw t9,-0x7c4c(gp)
0041ee94  nop
0041ee98  jalr t9
0041ee9c  _li a1,0xf
0041eea0  lw gp,0x10(sp)
0041eea4  nop
0041eea8  lw t9,-0x7dd4(gp)
0041eeac  nop
0041eeb0  jalr t9
0041eeb4  _move a0,s0
0041eeb8  lw gp,0x10(sp)
0041eebc  lui a0,0x45
0041eec0  lw t9,-0x7d30(gp)
0041eec4  nop
0041eec8  jalr t9
0041eecc  _addiu a0,a0,0x548
0041eed0  lw gp,0x10(sp)
0041eed4  lui a0,0x45
0041eed8  lw t9,-0x7d30(gp)
0041eedc  nop
0041eee0  jalr t9
0041eee4  _addiu a0,a0,0x554
0041eee8  lw gp,0x10(sp)
0041eeec  nop
0041eef0  lw t9,-0x7b18(gp)
0041eef4  lui a0,0x45
0041eef8  jalr t9
0041eefc  _addiu a0,a0,0x568
0041ef00  lw gp,0x10(sp)
0041ef04  nop
0041ef08  lw t9,-0x7d34(gp)
0041ef0c  nop
0041ef10  jalr t9
0041ef14  _nop
0041ef18  lw gp,0x10(sp)
0041ef1c  nop
0041ef20  lw t9,-0x7b24(gp)
0041ef24  nop
0041ef28  jalr t9
0041ef2c  _li a0,0x1
0041ef30  b 0x0041f650
0041ef34  _nop
0041ef38  lw t9,-0x7af4(gp)
0041ef3c  lui a0,0x45
0041ef40  jalr t9
0041ef44  _addiu a0,a0,0x574
0041ef48  lw gp,0x10(sp)
0041ef4c  li a0,0x1
0041ef50  li a1,0x18
0041ef54  lw t9,-0x7c4c(gp)
0041ef58  nop
0041ef5c  jalr t9
0041ef60  _addiu s0,s0,0x7484
0041ef64  lw gp,0x10(sp)
0041ef68  li a0,0x1
0041ef6c  lw t9,-0x7c4c(gp)
0041ef70  nop
0041ef74  jalr t9
0041ef78  _li a1,0x17
0041ef7c  lw gp,0x10(sp)
0041ef80  li a0,0x2
0041ef84  lw t9,-0x7c4c(gp)
0041ef88  nop
0041ef8c  jalr t9
0041ef90  _li a1,0x17
0041ef94  lw gp,0x10(sp)
0041ef98  li a0,0x3
0041ef9c  lw t9,-0x7c4c(gp)
0041efa0  nop
0041efa4  jalr t9
0041efa8  _li a1,0x17
0041efac  lw gp,0x10(sp)
0041efb0  li a0,0x4
0041efb4  lw t9,-0x7c4c(gp)
0041efb8  nop
0041efbc  jalr t9
0041efc0  _li a1,0x17
0041efc4  lw gp,0x10(sp)
0041efc8  li a0,0x5
0041efcc  lw t9,-0x7c4c(gp)
0041efd0  nop
0041efd4  jalr t9
0041efd8  _li a1,0x17
0041efdc  lw gp,0x10(sp)
0041efe0  li a0,0x6
0041efe4  lw t9,-0x7c4c(gp)
0041efe8  nop
0041efec  jalr t9
0041eff0  _li a1,0x17
0041eff4  lw gp,0x10(sp)
0041eff8  li a1,0x17
0041effc  lw t9,-0x7c4c(gp)
0041f000  nop
0041f004  jalr t9
0041f008  _li a0,0x7
0041f00c  lw gp,0x10(sp)
0041f010  lui a0,0x45
0041f014  lw t9,-0x7af4(gp)
0041f018  nop
0041f01c  jalr t9
0041f020  _addiu a0,a0,0x584
0041f024  lw gp,0x10(sp)
0041f028  lui a0,0x45
0041f02c  addiu a0,a0,0x590
0041f030  lw t9,-0x7d9c(gp)
0041f034  nop
0041f038  jalr t9
0041f03c  _move a1,s0
0041f040  lw gp,0x10(sp)
0041f044  beq v0,zero,0x0041f0e8
0041f048  _move s1,v0
0041f04c  lw t9,-0x7ab8(gp)
0041f050  addiu s2,sp,0x1c
0041f054  move a0,s2
0041f058  li a1,0x14
0041f05c  jalr t9
0041f060  _move a2,v0
0041f064  lw gp,0x10(sp)
0041f068  lui a1,0x45
0041f06c  move a0,s2
0041f070  lw t9,-0x7d6c(gp)
0041f074  addiu a1,a1,0xf08
0041f078  jalr t9
0041f07c  _addiu a2,sp,0x18
0041f080  lw gp,0x10(sp)
0041f084  beq v0,zero,0x0041f0b8
0041f088  _nop
0041f08c  lw a0,0x18(sp)
0041f090  nop
0041f094  slti v0,a0,0x2
0041f098  bne v0,zero,0x0041f0b8
0041f09c  _nop
0041f0a0  lw t9,-0x7c4c(gp)
0041f0a4  nop
0041f0a8  jalr t9
0041f0ac  _li a1,0xf
0041f0b0  lw gp,0x10(sp)
0041f0b4  nop
0041f0b8  lw t9,-0x7dd4(gp)
0041f0bc  nop
0041f0c0  jalr t9
0041f0c4  _move a0,s1
0041f0c8  lw gp,0x10(sp)
0041f0cc  lui a0,0x45
0041f0d0  lw t9,-0x7d30(gp)
0041f0d4  nop
0041f0d8  jalr t9
0041f0dc  _addiu a0,a0,0x5a4
0041f0e0  lw gp,0x10(sp)
0041f0e4  nop
0041f0e8  lw t9,-0x7af4(gp)
0041f0ec  lui a0,0x45
0041f0f0  jalr t9
0041f0f4  _addiu a0,a0,0x5b0
0041f0f8  lw gp,0x10(sp)
0041f0fc  lui a0,0x45
0041f100  addiu a0,a0,0x5bc
0041f104  lw t9,-0x7d9c(gp)
0041f108  nop
0041f10c  jalr t9
0041f110  _move a1,s0
0041f114  lw gp,0x10(sp)
0041f118  beq v0,zero,0x0041f1bc
0041f11c  _move s1,v0
0041f120  lw t9,-0x7ab8(gp)
0041f124  addiu s2,sp,0x1c
0041f128  move a0,s2
0041f12c  li a1,0x14
0041f130  jalr t9
0041f134  _move a2,v0
0041f138  lw gp,0x10(sp)
0041f13c  lui a1,0x45
0041f140  move a0,s2
0041f144  lw t9,-0x7d6c(gp)
0041f148  addiu a1,a1,0xf08
0041f14c  jalr t9
0041f150  _addiu a2,sp,0x18
0041f154  lw gp,0x10(sp)
0041f158  beq v0,zero,0x0041f18c
0041f15c  _nop
0041f160  lw a0,0x18(sp)
0041f164  nop
0041f168  slti v0,a0,0x2
0041f16c  bne v0,zero,0x0041f18c
0041f170  _nop
0041f174  lw t9,-0x7c4c(gp)
0041f178  nop
0041f17c  jalr t9
0041f180  _li a1,0xf
0041f184  lw gp,0x10(sp)
0041f188  nop
0041f18c  lw t9,-0x7dd4(gp)
0041f190  nop
0041f194  jalr t9
0041f198  _move a0,s1
0041f19c  lw gp,0x10(sp)
0041f1a0  lui a0,0x45
0041f1a4  lw t9,-0x7d30(gp)
0041f1a8  nop
0041f1ac  jalr t9
0041f1b0  _addiu a0,a0,0x5d4
0041f1b4  lw gp,0x10(sp)
0041f1b8  nop
0041f1bc  lw t9,-0x7af4(gp)
0041f1c0  lui a0,0x45
0041f1c4  jalr t9
0041f1c8  _addiu a0,a0,0x5e0
0041f1cc  lw gp,0x10(sp)
0041f1d0  lui a0,0x45
0041f1d4  addiu a0,a0,0x5f0
0041f1d8  lw t9,-0x7d9c(gp)
0041f1dc  nop
0041f1e0  jalr t9
0041f1e4  _move a1,s0
0041f1e8  lw gp,0x10(sp)
0041f1ec  beq v0,zero,0x0041f290
0041f1f0  _move s1,v0
0041f1f4  lw t9,-0x7ab8(gp)
0041f1f8  addiu s2,sp,0x1c
0041f1fc  move a0,s2
0041f200  li a1,0x14
0041f204  jalr t9
0041f208  _move a2,v0
0041f20c  lw gp,0x10(sp)
0041f210  lui a1,0x45
0041f214  move a0,s2
0041f218  lw t9,-0x7d6c(gp)
0041f21c  addiu a1,a1,0xf08
0041f220  jalr t9
0041f224  _addiu a2,sp,0x18
0041f228  lw gp,0x10(sp)
0041f22c  beq v0,zero,0x0041f260
0041f230  _nop
0041f234  lw a0,0x18(sp)
0041f238  nop
0041f23c  slti v0,a0,0x2
0041f240  bne v0,zero,0x0041f260
0041f244  _nop
0041f248  lw t9,-0x7c4c(gp)
0041f24c  nop
0041f250  jalr t9
0041f254  _li a1,0xf
0041f258  lw gp,0x10(sp)
0041f25c  nop
0041f260  lw t9,-0x7dd4(gp)
0041f264  nop
0041f268  jalr t9
0041f26c  _move a0,s1
0041f270  lw gp,0x10(sp)
0041f274  lui a0,0x45
0041f278  lw t9,-0x7d30(gp)
0041f27c  nop
0041f280  jalr t9
0041f284  _addiu a0,a0,0x608
0041f288  lw gp,0x10(sp)
0041f28c  nop
0041f290  lw t9,-0x7af4(gp)
0041f294  lui a0,0x45
0041f298  jalr t9
0041f29c  _addiu a0,a0,0x618
0041f2a0  lw gp,0x10(sp)
0041f2a4  lui a0,0x45
0041f2a8  addiu a0,a0,0x628
0041f2ac  lw t9,-0x7d9c(gp)
0041f2b0  nop
0041f2b4  jalr t9
0041f2b8  _move a1,s0
0041f2bc  lw gp,0x10(sp)
0041f2c0  beq v0,zero,0x0041f364
0041f2c4  _move s1,v0
0041f2c8  lw t9,-0x7ab8(gp)
0041f2cc  addiu s2,sp,0x1c
0041f2d0  move a0,s2
0041f2d4  li a1,0x14
0041f2d8  jalr t9
0041f2dc  _move a2,v0
0041f2e0  lw gp,0x10(sp)
0041f2e4  lui a1,0x45
0041f2e8  move a0,s2
0041f2ec  lw t9,-0x7d6c(gp)
0041f2f0  addiu a1,a1,0xf08
0041f2f4  jalr t9
0041f2f8  _addiu a2,sp,0x18
0041f2fc  lw gp,0x10(sp)
0041f300  beq v0,zero,0x0041f334
0041f304  _nop
0041f308  lw a0,0x18(sp)
0041f30c  nop
0041f310  slti v0,a0,0x2
0041f314  bne v0,zero,0x0041f334
0041f318  _nop
0041f31c  lw t9,-0x7c4c(gp)
0041f320  nop
0041f324  jalr t9
0041f328  _li a1,0xf
0041f32c  lw gp,0x10(sp)
0041f330  nop
0041f334  lw t9,-0x7dd4(gp)
0041f338  nop
0041f33c  jalr t9
0041f340  _move a0,s1
0041f344  lw gp,0x10(sp)
0041f348  lui a0,0x45
0041f34c  lw t9,-0x7d30(gp)
0041f350  nop
0041f354  jalr t9
0041f358  _addiu a0,a0,0x640
0041f35c  lw gp,0x10(sp)
0041f360  nop
0041f364  lw t9,-0x7af4(gp)
0041f368  lui a0,0x45
0041f36c  jalr t9
0041f370  _addiu a0,a0,0x650
0041f374  lw gp,0x10(sp)
0041f378  lui a0,0x45
0041f37c  addiu a0,a0,0x65c
0041f380  lw t9,-0x7d9c(gp)
0041f384  nop
0041f388  jalr t9
0041f38c  _move a1,s0
0041f390  lw gp,0x10(sp)
0041f394  beq v0,zero,0x0041f438
0041f398  _move s1,v0
0041f39c  lw t9,-0x7ab8(gp)
0041f3a0  addiu s2,sp,0x1c
0041f3a4  move a0,s2
0041f3a8  li a1,0x14
0041f3ac  jalr t9
0041f3b0  _move a2,v0
0041f3b4  lw gp,0x10(sp)
0041f3b8  lui a1,0x45
0041f3bc  move a0,s2
0041f3c0  lw t9,-0x7d6c(gp)
0041f3c4  addiu a1,a1,0xf08
0041f3c8  jalr t9
0041f3cc  _addiu a2,sp,0x18
0041f3d0  lw gp,0x10(sp)
0041f3d4  beq v0,zero,0x0041f408
0041f3d8  _nop
0041f3dc  lw a0,0x18(sp)
0041f3e0  nop
0041f3e4  slti v0,a0,0x2
0041f3e8  bne v0,zero,0x0041f408
0041f3ec  _nop
0041f3f0  lw t9,-0x7c4c(gp)
0041f3f4  nop
0041f3f8  jalr t9
0041f3fc  _li a1,0xf
0041f400  lw gp,0x10(sp)
0041f404  nop
0041f408  lw t9,-0x7dd4(gp)
0041f40c  nop
0041f410  jalr t9
0041f414  _move a0,s1
0041f418  lw gp,0x10(sp)
0041f41c  lui a0,0x45
0041f420  lw t9,-0x7d30(gp)
0041f424  nop
0041f428  jalr t9
0041f42c  _addiu a0,a0,0x674
0041f430  lw gp,0x10(sp)
0041f434  nop
0041f438  lw t9,-0x7af4(gp)
0041f43c  lui a0,0x45
0041f440  jalr t9
0041f444  _addiu a0,a0,0x680
0041f448  lw gp,0x10(sp)
0041f44c  lui a0,0x45
0041f450  addiu a0,a0,0x690
0041f454  lw t9,-0x7d9c(gp)
0041f458  nop
0041f45c  jalr t9
0041f460  _move a1,s0
0041f464  lw gp,0x10(sp)
0041f468  beq v0,zero,0x0041f50c
0041f46c  _move s1,v0
0041f470  lw t9,-0x7ab8(gp)
0041f474  addiu s2,sp,0x1c
0041f478  move a0,s2
0041f47c  li a1,0x14
0041f480  jalr t9
0041f484  _move a2,v0
0041f488  lw gp,0x10(sp)
0041f48c  lui a1,0x45
0041f490  move a0,s2
0041f494  lw t9,-0x7d6c(gp)
0041f498  addiu a1,a1,0xf08
0041f49c  jalr t9
0041f4a0  _addiu a2,sp,0x18
0041f4a4  lw gp,0x10(sp)
0041f4a8  beq v0,zero,0x0041f4dc
0041f4ac  _nop
0041f4b0  lw a0,0x18(sp)
0041f4b4  nop
0041f4b8  slti v0,a0,0x2
0041f4bc  bne v0,zero,0x0041f4dc
0041f4c0  _nop
0041f4c4  lw t9,-0x7c4c(gp)
0041f4c8  nop
0041f4cc  jalr t9
0041f4d0  _li a1,0xf
0041f4d4  lw gp,0x10(sp)
0041f4d8  nop
0041f4dc  lw t9,-0x7dd4(gp)
0041f4e0  nop
0041f4e4  jalr t9
0041f4e8  _move a0,s1
0041f4ec  lw gp,0x10(sp)
0041f4f0  lui a0,0x45
0041f4f4  lw t9,-0x7d30(gp)
0041f4f8  nop
0041f4fc  jalr t9
0041f500  _addiu a0,a0,0x6a8
0041f504  lw gp,0x10(sp)
0041f508  nop
0041f50c  lw t9,-0x7af4(gp)
0041f510  lui a0,0x45
0041f514  jalr t9
0041f518  _addiu a0,a0,0x6b8
0041f51c  lw gp,0x10(sp)
0041f520  lui a0,0x45
0041f524  move a1,s0
0041f528  lw t9,-0x7d9c(gp)
0041f52c  nop
0041f530  jalr t9
0041f534  _addiu a0,a0,0x6c4
0041f538  lw gp,0x10(sp)
0041f53c  beq v0,zero,0x0041f5e0
0041f540  _move s0,v0
0041f544  lw t9,-0x7ab8(gp)
0041f548  addiu s1,sp,0x1c
0041f54c  move a0,s1
0041f550  li a1,0x14
0041f554  jalr t9
0041f558  _move a2,v0
0041f55c  lw gp,0x10(sp)
0041f560  lui a1,0x45
0041f564  move a0,s1
0041f568  lw t9,-0x7d6c(gp)
0041f56c  addiu a1,a1,0xf08
0041f570  jalr t9
0041f574  _addiu a2,sp,0x18
0041f578  lw gp,0x10(sp)
0041f57c  beq v0,zero,0x0041f5b0
0041f580  _nop
0041f584  lw a0,0x18(sp)
0041f588  nop
0041f58c  slti v0,a0,0x2
0041f590  bne v0,zero,0x0041f5b0
0041f594  _nop
0041f598  lw t9,-0x7c4c(gp)
0041f59c  nop
0041f5a0  jalr t9
0041f5a4  _li a1,0xf
0041f5a8  lw gp,0x10(sp)
0041f5ac  nop
0041f5b0  lw t9,-0x7dd4(gp)
0041f5b4  nop
0041f5b8  jalr t9
0041f5bc  _move a0,s0
0041f5c0  lw gp,0x10(sp)
0041f5c4  lui a0,0x45
0041f5c8  lw t9,-0x7d30(gp)
0041f5cc  nop
0041f5d0  jalr t9
0041f5d4  _addiu a0,a0,0x6d8
0041f5d8  lw gp,0x10(sp)
0041f5dc  nop
0041f5e0  lw t9,-0x7d34(gp)
0041f5e4  nop
0041f5e8  jalr t9
0041f5ec  _nop
0041f5f0  lw gp,0x10(sp)
0041f5f4  li a1,0x1
0041f5f8  lw t9,-0x7cf8(gp)
0041f5fc  nop
0041f600  jalr t9
0041f604  _li a0,0xf
0041f608  lw gp,0x10(sp)
0041f60c  nop
0041f610  lw t9,-0x7d24(gp)
0041f614  nop
0041f618  jalr t9
0041f61c  _nop
0041f620  lw gp,0x10(sp)
0041f624  nop
0041f628  lw t9,-0x7b24(gp)
0041f62c  nop
0041f630  jalr t9
0041f634  _li a0,0x1
0041f638  lw gp,0x10(sp)
0041f63c  li a0,0x1
0041f640  lw t9,-0x7cf8(gp)
0041f644  nop
0041f648  jalr t9
0041f64c  _li a1,0x1
0041f650  lw ra,0x3c(sp)
0041f654  lw s2,0x38(sp)
0041f658  lw s1,0x34(sp)
0041f65c  lw s0,0x30(sp)
0041f660  clear v0
0041f664  jr ra
0041f668  _addiu sp,sp,0x40
