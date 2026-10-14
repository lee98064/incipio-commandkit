# main @ 00400cf0
00400cf0  addiu sp,sp,-0x20
00400cf4  sw ra,0x1c(sp)
00400cf8  sw s8,0x18(sp)
00400cfc  move s8,sp
00400d00  lui gp,0x42
00400d04  addiu gp,gp,-0x1db0
00400d08  sw gp,0x10(sp)
00400d0c  sw a0,0x20(s8)
00400d10  sw a1,0x24(s8)
00400d14  lw v0,0x24(s8)
00400d18  nop
00400d1c  addiu v0,v0,0x4
00400d20  lw v0,0x0(v0)
00400d24  nop
00400d28  move a0,v0
00400d2c  lui v0,0x40
00400d30  addiu a1,v0,0x5390
00400d34  lw v0,-0x7fa4(gp)
00400d38  nop
00400d3c  move t9,v0
00400d40  jalr t9
00400d44  _nop
00400d48  lw gp,0x10(s8)
00400d4c  bne v0,zero,0x00400dd4
00400d50  _nop
00400d54  lw v0,0x24(s8)
00400d58  nop
00400d5c  addiu v0,v0,0x8
00400d60  lw v0,0x0(v0)
00400d64  nop
00400d68  move a0,v0
00400d6c  lw v0,-0x7f48(gp)
00400d70  nop
00400d74  move t9,v0
00400d78  jalr t9
00400d7c  _nop
00400d80  lw gp,0x10(s8)
00400d84  bne v0,zero,0x00401174
00400d88  _nop
00400d8c  lw v0,-0x7fb0(gp)
00400d90  nop
00400d94  lw a0,0x0(v0)
00400d98  lui v0,0x40
00400d9c  addiu v1,v0,0x5394
00400da0  lw v0,0x24(s8)
00400da4  nop
00400da8  lw v0,0x0(v0)
00400dac  move a1,v1
00400db0  move a2,v0
00400db4  lw v0,-0x7f78(gp)
00400db8  nop
00400dbc  move t9,v0
00400dc0  jalr t9
00400dc4  _nop
00400dc8  lw gp,0x10(s8)
00400dcc  b 0x00401178
00400dd0  _nop
00400dd4  lw v0,0x24(s8)
00400dd8  nop
00400ddc  addiu v0,v0,0x4
00400de0  lw v0,0x0(v0)
00400de4  nop
00400de8  move a0,v0
00400dec  lui v0,0x40
00400df0  addiu a1,v0,0x53b0
00400df4  lw v0,-0x7fa4(gp)
00400df8  nop
00400dfc  move t9,v0
00400e00  jalr t9
00400e04  _nop
00400e08  lw gp,0x10(s8)
00400e0c  bne v0,zero,0x00400e34
00400e10  _nop
00400e14  lw v0,-0x7fb4(gp)
00400e18  nop
00400e1c  move t9,v0
00400e20  jalr t9
00400e24  _nop
00400e28  lw gp,0x10(s8)
00400e2c  b 0x00401178
00400e30  _nop
00400e34  lw v0,0x24(s8)
00400e38  nop
00400e3c  addiu v0,v0,0x4
00400e40  lw v0,0x0(v0)
00400e44  nop
00400e48  move a0,v0
00400e4c  lui v0,0x40
00400e50  addiu a1,v0,0x53b8
00400e54  lw v0,-0x7fa4(gp)
00400e58  nop
00400e5c  move t9,v0
00400e60  jalr t9
00400e64  _nop
00400e68  lw gp,0x10(s8)
00400e6c  bne v0,zero,0x00400e98
00400e70  _nop
00400e74  lw a0,0x24(s8)
00400e78  lw v0,-0x7f90(gp)
00400e7c  nop
00400e80  move t9,v0
00400e84  jalr t9
00400e88  _nop
00400e8c  lw gp,0x10(s8)
00400e90  b 0x00401178
00400e94  _nop
00400e98  lw v0,0x24(s8)
00400e9c  nop
00400ea0  addiu v0,v0,0x4
00400ea4  lw v0,0x0(v0)
00400ea8  nop
00400eac  move a0,v0
00400eb0  lui v0,0x40
00400eb4  addiu a1,v0,0x53c0
00400eb8  lw v0,-0x7fa4(gp)
00400ebc  nop
00400ec0  move t9,v0
00400ec4  jalr t9
00400ec8  _nop
00400ecc  lw gp,0x10(s8)
00400ed0  bne v0,zero,0x00400efc
00400ed4  _nop
00400ed8  lw a0,0x24(s8)
00400edc  lw v0,-0x7f44(gp)
00400ee0  nop
00400ee4  move t9,v0
00400ee8  jalr t9
00400eec  _nop
00400ef0  lw gp,0x10(s8)
00400ef4  b 0x00401178
00400ef8  _nop
00400efc  lw v0,0x24(s8)
00400f00  nop
00400f04  addiu v0,v0,0x4
00400f08  lw v0,0x0(v0)
00400f0c  nop
00400f10  move a0,v0
00400f14  lui v0,0x40
00400f18  addiu a1,v0,0x53c8
00400f1c  lw v0,-0x7fa4(gp)
00400f20  nop
00400f24  move t9,v0
00400f28  jalr t9
00400f2c  _nop
00400f30  lw gp,0x10(s8)
00400f34  bne v0,zero,0x00400f60
00400f38  _nop
00400f3c  lw a0,0x24(s8)
00400f40  lw v0,-0x7f34(gp)
00400f44  nop
00400f48  move t9,v0
00400f4c  jalr t9
00400f50  _nop
00400f54  lw gp,0x10(s8)
00400f58  b 0x00401178
00400f5c  _nop
00400f60  lw v0,0x24(s8)
00400f64  nop
00400f68  addiu v0,v0,0x4
00400f6c  lw v0,0x0(v0)
00400f70  nop
00400f74  move a0,v0
00400f78  lui v0,0x40
00400f7c  addiu a1,v0,0x53d0
00400f80  lw v0,-0x7fa4(gp)
00400f84  nop
00400f88  move t9,v0
00400f8c  jalr t9
00400f90  _nop
00400f94  lw gp,0x10(s8)
00400f98  bne v0,zero,0x00400fc4
00400f9c  _nop
00400fa0  lw a0,0x24(s8)
00400fa4  lw v0,-0x7f34(gp)
00400fa8  nop
00400fac  move t9,v0
00400fb0  jalr t9
00400fb4  _nop
00400fb8  lw gp,0x10(s8)
00400fbc  b 0x00401178
00400fc0  _nop
00400fc4  lw v0,0x24(s8)
00400fc8  nop
00400fcc  addiu v0,v0,0x4
00400fd0  lw v0,0x0(v0)
00400fd4  nop
00400fd8  move a0,v0
00400fdc  lui v0,0x40
00400fe0  addiu a1,v0,0x53d8
00400fe4  lw v0,-0x7fa4(gp)
00400fe8  nop
00400fec  move t9,v0
00400ff0  jalr t9
00400ff4  _nop
00400ff8  lw gp,0x10(s8)
00400ffc  bne v0,zero,0x004010e4
00401000  _nop
00401004  lw v1,0x20(s8)
00401008  li v0,0x3
0040100c  bne v1,v0,0x004010e4
00401010  _nop
00401014  lw v0,0x24(s8)
00401018  nop
0040101c  addiu v0,v0,0x8
00401020  lw v0,0x0(v0)
00401024  nop
00401028  move a0,v0
0040102c  lw v0,-0x7fc0(gp)
00401030  nop
00401034  move t9,v0
00401038  jalr t9
0040103c  _nop
00401040  lw gp,0x10(s8)
00401044  move v1,v0
00401048  li v0,0xa
0040104c  beq v1,v0,0x00401080
00401050  _nop
00401054  lui v0,0x40
00401058  addiu v0,v0,0x53e4
0040105c  move a0,v0
00401060  lw v0,-0x7f2c(gp)
00401064  nop
00401068  move t9,v0
0040106c  jalr t9
00401070  _nop
00401074  lw gp,0x10(s8)
00401078  b 0x00401178
0040107c  _nop
00401080  lw v0,0x24(s8)
00401084  nop
00401088  addiu v0,v0,0x8
0040108c  lw v0,0x0(v0)
00401090  nop
00401094  move a0,v0
00401098  lw v0,-0x7f28(gp)
0040109c  nop
004010a0  move t9,v0
004010a4  jalr t9
004010a8  _nop
004010ac  lw gp,0x10(s8)
004010b0  bne v0,zero,0x004010e4
004010b4  _nop
004010b8  lui v0,0x40
004010bc  addiu v0,v0,0x5420
004010c0  move a0,v0
004010c4  lw v0,-0x7f2c(gp)
004010c8  nop
004010cc  move t9,v0
004010d0  jalr t9
004010d4  _nop
004010d8  lw gp,0x10(s8)
004010dc  b 0x00401178
004010e0  _nop
004010e4  lw v0,0x24(s8)
004010e8  nop
004010ec  addiu v0,v0,0x4
004010f0  lw v0,0x0(v0)
004010f4  nop
004010f8  move a0,v0
004010fc  lui v0,0x40
00401100  addiu a1,v0,0x543c
00401104  lw v0,-0x7fa4(gp)
00401108  nop
0040110c  move t9,v0
00401110  jalr t9
00401114  _nop
00401118  lw gp,0x10(s8)
0040111c  bne v0,zero,0x00401178
00401120  _nop
00401124  lw v0,-0x7fac(gp)
00401128  nop
0040112c  move t9,v0
00401130  jalr t9
00401134  _nop
00401138  lw gp,0x10(s8)
0040113c  bne v0,zero,0x00401178
00401140  _nop
00401144  lui v0,0x40
00401148  addiu v0,v0,0x5448
0040114c  move a0,v0
00401150  lw v0,-0x7f2c(gp)
00401154  nop
00401158  move t9,v0
0040115c  jalr t9
00401160  _nop
00401164  lw gp,0x10(s8)
00401168  nop
0040116c  b 0x00401178
00401170  _nop
00401174  nop
00401178  move sp,s8
0040117c  lw ra,0x1c(sp)
00401180  lw s8,0x18(sp)
00401184  addiu sp,sp,0x20
00401188  jr ra
0040118c  _nop
