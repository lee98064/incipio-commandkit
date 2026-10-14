# FUN_00434cb8 @ 00434cb8
00434cb8  addiu sp,sp,-0x1b8
00434cbc  sw ra,0x1b4(sp)
00434cc0  sw s4,0x1b0(sp)
00434cc4  sw s3,0x1ac(sp)
00434cc8  sw s2,0x1a8(sp)
00434ccc  sw s1,0x1a4(sp)
00434cd0  sw s0,0x1a0(sp)
00434cd4  lui gp,0x47
00434cd8  addiu gp,gp,0x2630
00434cdc  sw gp,0x10(sp)
00434ce0  lw t9,-0x7db4(gp)
00434ce4  sw a0,0x1b8(sp)
00434ce8  clear a1
00434cec  addiu a0,sp,0x9c
00434cf0  li a2,0x100
00434cf4  jalr t9
00434cf8  _lui s0,0x47
00434cfc  lw v0,-0xc8c(s0)
00434d00  li s1,0x1
00434d04  lw gp,0x10(sp)
00434d08  bne v0,s1,0x00434d84
00434d0c  _li a0,0x1
00434d10  lw t9,-0x7b54(gp)
00434d14  addiu s1,sp,0x38
00434d18  jalr t9
00434d1c  _move a1,s1
00434d20  lw gp,0x10(sp)
00434d24  li a0,0x3b
00434d28  lw t9,-0x7b54(gp)
00434d2c  nop
00434d30  jalr t9
00434d34  _addiu a1,sp,0x2c
00434d38  lw gp,0x10(sp)
00434d3c  lui a1,0x47
00434d40  move a0,s1
00434d44  lw t9,-0x7e0c(gp)
00434d48  nop
00434d4c  jalr t9
00434d50  _addiu a1,a1,-0xc70
00434d54  lw gp,0x10(sp)
00434d58  bne v0,zero,0x00434d74
00434d5c  _addiu s0,s0,-0xc8c
00434d60  lw v0,0x4(s0)
00434d64  lw v1,0x2c(sp)
00434d68  nop
00434d6c  beq v1,v0,0x00435400
00434d70  _nop
00434d74  lw t9,-0x7c08(gp)
00434d78  li a0,0x116
00434d7c  b 0x00434e0c
00434d80  _addiu a1,sp,0x38
00434d84  li s2,0x4
00434d88  lw t9,-0x7b54(gp)
00434d8c  bne v0,s2,0x00434e3c
00434d90  _addiu s3,sp,0x1c
00434d94  li a0,0x14
00434d98  jalr t9
00434d9c  _addiu a1,sp,0x34
00434da0  lw gp,0x10(sp)
00434da4  move a1,s3
00434da8  lw t9,-0x7b54(gp)
00434dac  nop
00434db0  jalr t9
00434db4  _li a0,0x19
00434db8  lw v0,0x1c(sp)
00434dbc  lw gp,0x10(sp)
00434dc0  bne v0,s1,0x00435400
00434dc4  _addiu s0,s0,-0xc8c
00434dc8  lw v0,0xc(s0)
00434dcc  lw v1,0x34(sp)
00434dd0  nop
00434dd4  beq v1,v0,0x00435400
00434dd8  _nop
00434ddc  beq v1,zero,0x00434df0
00434de0  _nop
00434de4  li a0,0x2
00434de8  bne v1,a0,0x00434e20
00434dec  _nop
00434df0  li v1,0x1
00434df4  bne v0,v1,0x00435400
00434df8  _nop
00434dfc  lw t9,-0x7c08(gp)
00434e00  sw v0,0x24(sp)
00434e04  li a0,0x112
00434e08  addiu a1,sp,0x24
00434e0c  jalr t9
00434e10  _nop
00434e14  lw gp,0x10(sp)
00434e18  b 0x00435394
00434e1c  _nop
00434e20  beq v0,zero,0x00434e30
00434e24  _nop
00434e28  bne v0,a0,0x00435400
00434e2c  _nop
00434e30  lw t9,-0x7c08(gp)
00434e34  b 0x00434e00
00434e38  _li v0,0x4
00434e3c  li a0,0x19
00434e40  jalr t9
00434e44  _move a1,s3
00434e48  lw s0,0x1c(sp)
00434e4c  lw gp,0x10(sp)
00434e50  bne s0,zero,0x00434e64
00434e54  _nop
00434e58  sw s1,0x20(sp)
00434e5c  b 0x00434fdc
00434e60  _sw s1,0x24(sp)
00434e64  bne s0,s1,0x00434eac
00434e68  _li s4,0x2
00434e6c  lw t9,-0x7b54(gp)
00434e70  li a0,0x14
00434e74  jalr t9
00434e78  _addiu a1,sp,0x34
00434e7c  lw v0,0x34(sp)
00434e80  lw gp,0x10(sp)
00434e84  beq v0,zero,0x00434e94
00434e88  _li v1,0x2
00434e8c  bne v0,v1,0x00434ea0
00434e90  _nop
00434e94  li v0,0x1
00434e98  b 0x00434ea4
00434e9c  _sw v0,0x24(sp)
00434ea0  sw s2,0x24(sp)
00434ea4  b 0x00434f30
00434ea8  _li v0,0x2
00434eac  bne s0,s4,0x00434eec
00434eb0  _move a1,s3
00434eb4  lw t9,-0x7b54(gp)
00434eb8  sw s0,0x24(sp)
00434ebc  jalr t9
00434ec0  _li a0,0x1d
00434ec4  lw v0,0x1c(sp)
00434ec8  lw gp,0x10(sp)
00434ecc  bne v0,s1,0x00434edc
00434ed0  _nop
00434ed4  b 0x00434fdc
00434ed8  _sw s2,0x20(sp)
00434edc  bne v0,s0,0x00434f2c
00434ee0  _li v0,0x8
00434ee4  b 0x00434fdc
00434ee8  _sw v0,0x20(sp)
00434eec  lw t9,-0x7b54(gp)
00434ef0  bne s0,s2,0x00434f38
00434ef4  _li v0,0x22
00434ef8  li v0,0x20
00434efc  sw v0,0x24(sp)
00434f00  move a1,s3
00434f04  jalr t9
00434f08  _li a0,0x26
00434f0c  lw v0,0x1c(sp)
00434f10  lw gp,0x10(sp)
00434f14  bne v0,s1,0x00434f24
00434f18  _nop
00434f1c  b 0x00434fdc
00434f20  _sw s0,0x20(sp)
00434f24  beq v0,s4,0x00434f30
00434f28  _li v0,0x8
00434f2c  li v0,0xc
00434f30  b 0x00434fdc
00434f34  _sw v0,0x20(sp)
00434f38  sw v0,0x24(sp)
00434f3c  li v0,0xc
00434f40  move a1,s3
00434f44  li a0,0x1d
00434f48  jalr t9
00434f4c  _sw v0,0x20(sp)
00434f50  lw gp,0x10(sp)
00434f54  li a0,0x26
00434f58  lw t9,-0x7b54(gp)
00434f5c  nop
00434f60  jalr t9
00434f64  _addiu a1,sp,0x2c
00434f68  lw v1,0x2c(sp)
00434f6c  lw gp,0x10(sp)
00434f70  andi v0,v1,0x2
00434f74  bne v0,zero,0x00434f9c
00434f78  _nop
00434f7c  lw v0,0x1c(sp)
00434f80  nop
00434f84  andi v0,v0,0x2
00434f88  beq v0,zero,0x00434f98
00434f8c  _li v0,0x8
00434f90  b 0x00434f9c
00434f94  _sw v0,0x20(sp)
00434f98  sw s2,0x20(sp)
00434f9c  lw v0,0x1c(sp)
00434fa0  li a0,0x2
00434fa4  bne v0,a0,0x00434fdc
00434fa8  _nop
00434fac  bne v1,v0,0x00434fdc
00434fb0  _li v0,0x8
00434fb4  lw t9,-0x7a08(gp)
00434fb8  lui a0,0x45
00434fbc  lui a1,0x45
00434fc0  sw v0,0x20(sp)
00434fc4  addiu a0,a0,0x3670
00434fc8  addiu a1,a1,0x6660
00434fcc  jalr t9
00434fd0  _li a2,0x235f
00434fd4  lw gp,0x10(sp)
00434fd8  nop
00434fdc  lw t9,-0x7c08(gp)
00434fe0  li a0,0x112
00434fe4  jalr t9
00434fe8  _addiu a1,sp,0x24
00434fec  lw gp,0x10(sp)
00434ff0  li a0,0x113
00434ff4  lw t9,-0x7c08(gp)
00434ff8  nop
00434ffc  jalr t9
00435000  _addiu a1,sp,0x20
00435004  lw gp,0x10(sp)
00435008  li a0,0x19
0043500c  lw t9,-0x7b54(gp)
00435010  nop
00435014  jalr t9
00435018  _addiu a1,sp,0x1c
0043501c  lw v0,0x1c(sp)
00435020  li v1,0x2
00435024  lw gp,0x10(sp)
00435028  beq v0,v1,0x00435040
0043502c  _li v1,0x4
00435030  beq v0,v1,0x00435040
00435034  _li v1,0x6
00435038  bne v0,v1,0x00435090
0043503c  _nop
00435040  lw t9,-0x7b54(gp)
00435044  li a0,0x1c
00435048  jalr t9
0043504c  _addiu a1,sp,0x30
00435050  lw v0,0x30(sp)
00435054  lw gp,0x10(sp)
00435058  andi v0,v0,0x2
0043505c  beq v0,zero,0x00435090
00435060  _addiu s0,sp,0x9c
00435064  lw t9,-0x7b54(gp)
00435068  li a0,0x1e
0043506c  jalr t9
00435070  _move a1,s0
00435074  lw gp,0x10(sp)
00435078  move a1,s0
0043507c  lw t9,-0x7c08(gp)
00435080  nop
00435084  jalr t9
00435088  _li a0,0x115
0043508c  lw gp,0x10(sp)
00435090  lw v0,0x1b8(sp)
00435094  nop
00435098  beq v0,zero,0x004350bc
0043509c  _lui s0,0x47
004350a0  lw t9,-0x7c08(gp)
004350a4  sw zero,0x1b8(sp)
004350a8  li a0,0x119
004350ac  jalr t9
004350b0  _addiu a1,sp,0x1b8
004350b4  lw gp,0x10(sp)
004350b8  lui s0,0x47
004350bc  lw v0,-0xc8c(s0)
004350c0  li v1,0x2
004350c4  bne v0,v1,0x004352e8
004350c8  _li v1,0x3
004350cc  lw t9,-0x7b54(gp)
004350d0  addiu s0,s0,-0xc8c
004350d4  li a0,0x19
004350d8  jalr t9
004350dc  _addiu a1,sp,0x24
004350e0  lw v1,0x8(s0)
004350e4  lw v0,0x24(sp)
004350e8  lw gp,0x10(sp)
004350ec  bne v1,v0,0x00435394
004350f0  _li a0,0x3
004350f4  lw t9,-0x7b54(gp)
004350f8  nop
004350fc  jalr t9
00435100  _addiu a1,sp,0x20
00435104  lw v1,0x10(s0)
00435108  lw v0,0x20(sp)
0043510c  lw gp,0x10(sp)
00435110  bne v1,v0,0x00435394
00435114  _li a0,0xd
00435118  lw t9,-0x7b54(gp)
0043511c  nop
00435120  jalr t9
00435124  _addiu a1,sp,0x2c
00435128  lw v1,0x40(s0)
0043512c  lw v0,0x2c(sp)
00435130  lw gp,0x10(sp)
00435134  bne v1,v0,0x00435394
00435138  _addiu s0,sp,0x9c
0043513c  lw t9,-0x7b54(gp)
00435140  li a0,0x4
00435144  jalr t9
00435148  _move a1,s0
0043514c  lw gp,0x10(sp)
00435150  lui a0,0x47
00435154  addiu a0,a0,-0xc48
00435158  lw t9,-0x7e0c(gp)
0043515c  nop
00435160  jalr t9
00435164  _move a1,s0
00435168  lw gp,0x10(sp)
0043516c  bne v0,zero,0x00435394
00435170  _li a0,0x5
00435174  lw t9,-0x7b54(gp)
00435178  nop
0043517c  jalr t9
00435180  _move a1,s0
00435184  lw gp,0x10(sp)
00435188  lui a0,0x47
0043518c  addiu a0,a0,-0xc43
00435190  lw t9,-0x7e0c(gp)
00435194  nop
00435198  jalr t9
0043519c  _move a1,s0
004351a0  lw gp,0x10(sp)
004351a4  bne v0,zero,0x00435394
004351a8  _li a0,0x6
004351ac  lw t9,-0x7b54(gp)
004351b0  nop
004351b4  jalr t9
004351b8  _move a1,s0
004351bc  lw gp,0x10(sp)
004351c0  lui a0,0x47
004351c4  addiu a0,a0,-0xc3e
004351c8  lw t9,-0x7e0c(gp)
004351cc  nop
004351d0  jalr t9
004351d4  _move a1,s0
004351d8  lw gp,0x10(sp)
004351dc  bne v0,zero,0x00435394
004351e0  _li a0,0x7
004351e4  lw t9,-0x7b54(gp)
004351e8  nop
004351ec  jalr t9
004351f0  _move a1,s0
004351f4  lw gp,0x10(sp)
004351f8  lui a0,0x47
004351fc  addiu a0,a0,-0xc39
00435200  lw t9,-0x7e0c(gp)
00435204  nop
00435208  jalr t9
0043520c  _move a1,s0
00435210  lw gp,0x10(sp)
00435214  bne v0,zero,0x00435394
00435218  _li a0,0x8
0043521c  lw t9,-0x7b54(gp)
00435220  nop
00435224  jalr t9
00435228  _move a1,s0
0043522c  lw gp,0x10(sp)
00435230  lui a0,0x47
00435234  addiu a0,a0,-0xc34
00435238  lw t9,-0x7e0c(gp)
0043523c  nop
00435240  jalr t9
00435244  _move a1,s0
00435248  lw gp,0x10(sp)
0043524c  bne v0,zero,0x00435394
00435250  _li a0,0x9
00435254  lw t9,-0x7b54(gp)
00435258  nop
0043525c  jalr t9
00435260  _move a1,s0
00435264  lw gp,0x10(sp)
00435268  lui a0,0x47
0043526c  addiu a0,a0,-0xc27
00435270  lw t9,-0x7e0c(gp)
00435274  nop
00435278  jalr t9
0043527c  _move a1,s0
00435280  lw gp,0x10(sp)
00435284  bne v0,zero,0x00435394
00435288  _addiu s1,sp,0x9c
0043528c  lw t9,-0x7b54(gp)
00435290  li a0,0xa
00435294  jalr t9
00435298  _move a1,s1
0043529c  lw gp,0x10(sp)
004352a0  lui a0,0x47
004352a4  addiu a0,a0,-0xc1a
004352a8  lw t9,-0x7e0c(gp)
004352ac  nop
004352b0  jalr t9
004352b4  _move a1,s0
004352b8  lw gp,0x10(sp)
004352bc  bne v0,zero,0x00435394
004352c0  _li a0,0xb
004352c4  lw t9,-0x7b54(gp)
004352c8  nop
004352cc  jalr t9
004352d0  _move a1,s1
004352d4  lw gp,0x10(sp)
004352d8  lui a0,0x47
004352dc  lw t9,-0x7e0c(gp)
004352e0  b 0x00435380
004352e4  _addiu a0,a0,-0xc0d
004352e8  bne v0,v1,0x00435400
004352ec  _addiu s0,s0,-0xc8c
004352f0  lw t9,-0x7b54(gp)
004352f4  li a0,0x19
004352f8  jalr t9
004352fc  _addiu a1,sp,0x24
00435300  lw v1,0x8(s0)
00435304  lw v0,0x24(sp)
00435308  lw gp,0x10(sp)
0043530c  bne v1,v0,0x00435394
00435310  _li a0,0x1d
00435314  lw t9,-0x7b54(gp)
00435318  nop
0043531c  jalr t9
00435320  _addiu a1,sp,0x1c
00435324  lw v1,0x14(s0)
00435328  lw v0,0x1c(sp)
0043532c  lw gp,0x10(sp)
00435330  bne v1,v0,0x00435394
00435334  _li a0,0x26
00435338  lw t9,-0x7b54(gp)
0043533c  nop
00435340  jalr t9
00435344  _addiu a1,sp,0x20
00435348  lw v1,0x18(s0)
0043534c  lw v0,0x20(sp)
00435350  lw gp,0x10(sp)
00435354  bne v1,v0,0x00435394
00435358  _addiu s0,sp,0x9c
0043535c  lw t9,-0x7b54(gp)
00435360  li a0,0x1e
00435364  jalr t9
00435368  _move a1,s0
0043536c  lw gp,0x10(sp)
00435370  lui a0,0x47
00435374  addiu a0,a0,-0xc00
00435378  lw t9,-0x7e0c(gp)
0043537c  nop
00435380  jalr t9
00435384  _move a1,s0
00435388  lw gp,0x10(sp)
0043538c  beq v0,zero,0x00435400
00435390  _nop
00435394  lw t9,-0x7c08(gp)
00435398  li a0,0x119
0043539c  addiu a1,sp,0x1b8
004353a0  jalr t9
004353a4  _sw zero,0x1b8(sp)
004353a8  lw gp,0x10(sp)
004353ac  li a0,0x10e
004353b0  addiu a1,sp,0x28
004353b4  lw t9,-0x7b54(gp)
004353b8  nop
004353bc  jalr t9
004353c0  _addiu s0,sp,0x18
004353c4  lw gp,0x10(sp)
004353c8  li a0,0x110
004353cc  lw t9,-0x7b54(gp)
004353d0  nop
004353d4  jalr t9
004353d8  _move a1,s0
004353dc  lw v0,0x18(sp)
004353e0  lw gp,0x10(sp)
004353e4  bne v0,zero,0x00435400
004353e8  _li v0,0x1
004353ec  lw t9,-0x7c08(gp)
004353f0  sw v0,0x18(sp)
004353f4  move a1,s0
004353f8  jalr t9
004353fc  _li a0,0x110
00435400  lw ra,0x1b4(sp)
00435404  lw s4,0x1b0(sp)
00435408  lw s3,0x1ac(sp)
0043540c  lw s2,0x1a8(sp)
00435410  lw s1,0x1a4(sp)
00435414  lw s0,0x1a0(sp)
00435418  jr ra
0043541c  _addiu sp,sp,0x1b8
