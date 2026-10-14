# main @ 00400cd0
00400cd0  addiu sp,sp,-0x20
00400cd4  sw ra,0x1c(sp)
00400cd8  sw s8,0x18(sp)
00400cdc  move s8,sp
00400ce0  lui gp,0x42
00400ce4  addiu gp,gp,-0x21a0
00400ce8  sw gp,0x10(sp)
00400cec  sw a0,0x20(s8)
00400cf0  sw a1,0x24(s8)
00400cf4  lw v0,0x24(s8)
00400cf8  nop
00400cfc  addiu v0,v0,0x4
00400d00  lw v0,0x0(v0)
00400d04  nop
00400d08  move a0,v0
00400d0c  lui v0,0x40
00400d10  addiu a1,v0,0x50c0
00400d14  lw v0,-0x7fa4(gp)
00400d18  nop
00400d1c  move t9,v0
00400d20  jalr t9
00400d24  _nop
00400d28  lw gp,0x10(s8)
00400d2c  bne v0,zero,0x00400db4
00400d30  _nop
00400d34  lw v0,0x24(s8)
00400d38  nop
00400d3c  addiu v0,v0,0x8
00400d40  lw v0,0x0(v0)
00400d44  nop
00400d48  move a0,v0
00400d4c  lw v0,-0x7f48(gp)
00400d50  nop
00400d54  move t9,v0
00400d58  jalr t9
00400d5c  _nop
00400d60  lw gp,0x10(s8)
00400d64  bne v0,zero,0x004010f0
00400d68  _nop
00400d6c  lw v0,-0x7fb0(gp)
00400d70  nop
00400d74  lw a0,0x0(v0)
00400d78  lui v0,0x40
00400d7c  addiu v1,v0,0x50c4
00400d80  lw v0,0x24(s8)
00400d84  nop
00400d88  lw v0,0x0(v0)
00400d8c  move a1,v1
00400d90  move a2,v0
00400d94  lw v0,-0x7f78(gp)
00400d98  nop
00400d9c  move t9,v0
00400da0  jalr t9
00400da4  _nop
00400da8  lw gp,0x10(s8)
00400dac  b 0x004010f4
00400db0  _nop
00400db4  lw v0,0x24(s8)
00400db8  nop
00400dbc  addiu v0,v0,0x4
00400dc0  lw v0,0x0(v0)
00400dc4  nop
00400dc8  move a0,v0
00400dcc  lui v0,0x40
00400dd0  addiu a1,v0,0x50e0
00400dd4  lw v0,-0x7fa4(gp)
00400dd8  nop
00400ddc  move t9,v0
00400de0  jalr t9
00400de4  _nop
00400de8  lw gp,0x10(s8)
00400dec  bne v0,zero,0x00400e14
00400df0  _nop
00400df4  lw v0,-0x7fb4(gp)
00400df8  nop
00400dfc  move t9,v0
00400e00  jalr t9
00400e04  _nop
00400e08  lw gp,0x10(s8)
00400e0c  b 0x004010f4
00400e10  _nop
00400e14  lw v0,0x24(s8)
00400e18  nop
00400e1c  addiu v0,v0,0x4
00400e20  lw v0,0x0(v0)
00400e24  nop
00400e28  move a0,v0
00400e2c  lui v0,0x40
00400e30  addiu a1,v0,0x50e8
00400e34  lw v0,-0x7fa4(gp)
00400e38  nop
00400e3c  move t9,v0
00400e40  jalr t9
00400e44  _nop
00400e48  lw gp,0x10(s8)
00400e4c  bne v0,zero,0x00400e78
00400e50  _nop
00400e54  lw a0,0x24(s8)
00400e58  lw v0,-0x7f90(gp)
00400e5c  nop
00400e60  move t9,v0
00400e64  jalr t9
00400e68  _nop
00400e6c  lw gp,0x10(s8)
00400e70  b 0x004010f4
00400e74  _nop
00400e78  lw v0,0x24(s8)
00400e7c  nop
00400e80  addiu v0,v0,0x4
00400e84  lw v0,0x0(v0)
00400e88  nop
00400e8c  move a0,v0
00400e90  lui v0,0x40
00400e94  addiu a1,v0,0x50f0
00400e98  lw v0,-0x7fa4(gp)
00400e9c  nop
00400ea0  move t9,v0
00400ea4  jalr t9
00400ea8  _nop
00400eac  lw gp,0x10(s8)
00400eb0  bne v0,zero,0x00400edc
00400eb4  _nop
00400eb8  lw a0,0x24(s8)
00400ebc  lw v0,-0x7f38(gp)
00400ec0  nop
00400ec4  move t9,v0
00400ec8  jalr t9
00400ecc  _nop
00400ed0  lw gp,0x10(s8)
00400ed4  b 0x004010f4
00400ed8  _nop
00400edc  lw v0,0x24(s8)
00400ee0  nop
00400ee4  addiu v0,v0,0x4
00400ee8  lw v0,0x0(v0)
00400eec  nop
00400ef0  move a0,v0
00400ef4  lui v0,0x40
00400ef8  addiu a1,v0,0x50f8
00400efc  lw v0,-0x7fa4(gp)
00400f00  nop
00400f04  move t9,v0
00400f08  jalr t9
00400f0c  _nop
00400f10  lw gp,0x10(s8)
00400f14  bne v0,zero,0x00400f40
00400f18  _nop
00400f1c  lw a0,0x24(s8)
00400f20  lw v0,-0x7f38(gp)
00400f24  nop
00400f28  move t9,v0
00400f2c  jalr t9
00400f30  _nop
00400f34  lw gp,0x10(s8)
00400f38  b 0x004010f4
00400f3c  _nop
00400f40  lw v0,0x24(s8)
00400f44  nop
00400f48  addiu v0,v0,0x4
00400f4c  lw v0,0x0(v0)
00400f50  nop
00400f54  move a0,v0
00400f58  lui v0,0x40
00400f5c  addiu a1,v0,0x5100
00400f60  lw v0,-0x7fa4(gp)
00400f64  nop
00400f68  move t9,v0
00400f6c  jalr t9
00400f70  _nop
00400f74  lw gp,0x10(s8)
00400f78  bne v0,zero,0x00401060
00400f7c  _nop
00400f80  lw v1,0x20(s8)
00400f84  li v0,0x3
00400f88  bne v1,v0,0x00401060
00400f8c  _nop
00400f90  lw v0,0x24(s8)
00400f94  nop
00400f98  addiu v0,v0,0x8
00400f9c  lw v0,0x0(v0)
00400fa0  nop
00400fa4  move a0,v0
00400fa8  lw v0,-0x7fc0(gp)
00400fac  nop
00400fb0  move t9,v0
00400fb4  jalr t9
00400fb8  _nop
00400fbc  lw gp,0x10(s8)
00400fc0  move v1,v0
00400fc4  li v0,0xa
00400fc8  beq v1,v0,0x00400ffc
00400fcc  _nop
00400fd0  lui v0,0x40
00400fd4  addiu v0,v0,0x510c
00400fd8  move a0,v0
00400fdc  lw v0,-0x7f30(gp)
00400fe0  nop
00400fe4  move t9,v0
00400fe8  jalr t9
00400fec  _nop
00400ff0  lw gp,0x10(s8)
00400ff4  b 0x004010f4
00400ff8  _nop
00400ffc  lw v0,0x24(s8)
00401000  nop
00401004  addiu v0,v0,0x8
00401008  lw v0,0x0(v0)
0040100c  nop
00401010  move a0,v0
00401014  lw v0,-0x7f2c(gp)
00401018  nop
0040101c  move t9,v0
00401020  jalr t9
00401024  _nop
00401028  lw gp,0x10(s8)
0040102c  bne v0,zero,0x00401060
00401030  _nop
00401034  lui v0,0x40
00401038  addiu v0,v0,0x5148
0040103c  move a0,v0
00401040  lw v0,-0x7f30(gp)
00401044  nop
00401048  move t9,v0
0040104c  jalr t9
00401050  _nop
00401054  lw gp,0x10(s8)
00401058  b 0x004010f4
0040105c  _nop
00401060  lw v0,0x24(s8)
00401064  nop
00401068  addiu v0,v0,0x4
0040106c  lw v0,0x0(v0)
00401070  nop
00401074  move a0,v0
00401078  lui v0,0x40
0040107c  addiu a1,v0,0x5164
00401080  lw v0,-0x7fa4(gp)
00401084  nop
00401088  move t9,v0
0040108c  jalr t9
00401090  _nop
00401094  lw gp,0x10(s8)
00401098  bne v0,zero,0x004010f4
0040109c  _nop
004010a0  lw v0,-0x7fac(gp)
004010a4  nop
004010a8  move t9,v0
004010ac  jalr t9
004010b0  _nop
004010b4  lw gp,0x10(s8)
004010b8  bne v0,zero,0x004010f4
004010bc  _nop
004010c0  lui v0,0x40
004010c4  addiu v0,v0,0x5170
004010c8  move a0,v0
004010cc  lw v0,-0x7f30(gp)
004010d0  nop
004010d4  move t9,v0
004010d8  jalr t9
004010dc  _nop
004010e0  lw gp,0x10(s8)
004010e4  nop
004010e8  b 0x004010f4
004010ec  _nop
004010f0  nop
004010f4  move sp,s8
004010f8  lw ra,0x1c(sp)
004010fc  lw s8,0x18(sp)
00401100  addiu sp,sp,0x20
00401104  jr ra
00401108  _nop
