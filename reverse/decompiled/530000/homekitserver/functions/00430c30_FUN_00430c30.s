# FUN_00430c30 @ 00430c30
00430c30  addiu sp,sp,-0xa8
00430c34  sw ra,0xa4(sp)
00430c38  sw s8,0xa0(sp)
00430c3c  sw s7,0x9c(sp)
00430c40  sw s6,0x98(sp)
00430c44  sw s5,0x94(sp)
00430c48  sw s4,0x90(sp)
00430c4c  sw s3,0x8c(sp)
00430c50  sw s2,0x88(sp)
00430c54  sw s1,0x84(sp)
00430c58  sw s0,0x80(sp)
00430c5c  lui gp,0x62
00430c60  addiu gp,gp,-0x5cf0
00430c64  sw gp,0x10(sp)
00430c68  lw t9,-0x7244(gp)
00430c6c  addiu s1,sp,0x30
00430c70  move s4,a0
00430c74  clear a1
00430c78  move a0,s1
00430c7c  jalr t9
00430c80  _li a2,0x20
00430c84  lw gp,0x10(sp)
00430c88  lui s0,0x61
00430c8c  addiu s0,s0,0x5948
00430c90  lw t9,-0x7244(gp)
00430c94  li v0,0x2
00430c98  move a0,s0
00430c9c  clear a1
00430ca0  li a2,0x100
00430ca4  sw v0,0x38(sp)
00430ca8  jalr t9
00430cac  _sw zero,0x34(sp)
00430cb0  lw gp,0x10(sp)
00430cb4  lui s3,0x61
00430cb8  addiu s3,s3,0x5a48
00430cbc  lw t9,-0x7244(gp)
00430cc0  move a0,s3
00430cc4  clear a1
00430cc8  li a2,0x400
00430ccc  jalr t9
00430cd0  _lui s2,0x61
00430cd4  move a2,s3
00430cd8  addiu a3,s2,0x5944
00430cdc  move a0,s4
00430ce0  jal 0x00430a14
00430ce4  _move a1,s0
00430ce8  lw gp,0x10(sp)
00430cec  lui a0,0x5b
00430cf0  addiu a0,a0,-0x230c
00430cf4  lw t9,-0x7c28(gp)
00430cf8  nop
00430cfc  jalr t9
00430d00  _move a1,s0
00430d04  lw gp,0x10(sp)
00430d08  lw a1,0x5944(s2)
00430d0c  lui a0,0x5b
00430d10  lw t9,-0x7c28(gp)
00430d14  nop
00430d18  jalr t9
00430d1c  _addiu a0,a0,-0x22fc
00430d20  lw gp,0x10(sp)
00430d24  lui a0,0x5b
00430d28  lw t9,-0x5bfc(gp)
00430d2c  nop
00430d30  jalr t9
00430d34  _addiu a0,a0,-0x22ec
00430d38  lw gp,0x10(sp)
00430d3c  beq v0,zero,0x00430d5c
00430d40  _move a2,s1
00430d44  lw t9,-0x7ca0(gp)
00430d48  lui a0,0x5b
00430d4c  jalr t9
00430d50  _addiu a0,a0,-0x22c8
00430d54  b 0x00431128
00430d58  _nop
00430d5c  lw t9,-0x7e34(gp)
00430d60  move a0,s0
00430d64  clear a1
00430d68  jalr t9
00430d6c  _addiu a3,sp,0x1c
00430d70  lw gp,0x10(sp)
00430d74  beq v0,zero,0x00430db0
00430d78  _lui s8,0x5b
00430d7c  lw t9,-0x6d90(gp)
00430d80  move a0,v0
00430d84  lw v0,-0x6b48(gp)
00430d88  nop
00430d8c  lw s0,0x0(v0)
00430d90  jalr t9
00430d94  _nop
00430d98  lw gp,0x10(sp)
00430d9c  lui a1,0x5b
00430da0  move a0,s0
00430da4  lw t9,-0x73b4(gp)
00430da8  b 0x00430f8c
00430dac  _addiu a1,a1,-0x22bc
00430db0  lui s7,0x5b
00430db4  lui s6,0x5b
00430db8  addiu s8,s8,-0x22a0
00430dbc  addiu s7,s7,-0x22a8
00430dc0  addiu s6,s6,-0x2298
00430dc4  lw s0,0x1c(sp)
00430dc8  clear s2
00430dcc  clear s1
00430dd0  li s5,0x2
00430dd4  b 0x00430e3c
00430dd8  _addiu s3,sp,0x50
00430ddc  lw a0,0x4(s0)
00430de0  lw v0,0x14(s0)
00430de4  bne a0,s5,0x00430dfc
00430de8  _move s4,s8
00430dec  move s1,v0
00430df0  addiu a1,v0,0x4
00430df4  b 0x00430e04
00430df8  _move s4,s7
00430dfc  move s2,v0
00430e00  addiu a1,v0,0x8
00430e04  lw t9,-0x7d48(gp)
00430e08  move a2,s3
00430e0c  jalr t9
00430e10  _li a3,0x2e
00430e14  lw gp,0x10(sp)
00430e18  move a1,s4
00430e1c  move a0,s6
00430e20  lw t9,-0x7c28(gp)
00430e24  nop
00430e28  jalr t9
00430e2c  _move a2,s3
00430e30  lw gp,0x10(sp)
00430e34  lw s0,0x1c(s0)
00430e38  nop
00430e3c  bne s0,zero,0x00430ddc
00430e40  _nop
00430e44  lw t9,-0x60fc(gp)
00430e48  lw a0,0x1c(sp)
00430e4c  jalr t9
00430e50  _nop
00430e54  lw gp,0x10(sp)
00430e58  bne s2,zero,0x00431128
00430e5c  _li a0,0x2
00430e60  lw t9,-0x75d8(gp)
00430e64  li a1,0x2
00430e68  jalr t9
00430e6c  _clear a2
00430e70  lui s0,0x61
00430e74  li s3,-0x1
00430e78  lw gp,0x10(sp)
00430e7c  bne v0,s3,0x00430ecc
00430e80  _sw v0,0x593c(s0)
00430e84  lw t9,-0x5aec(gp)
00430e88  lw v0,-0x6b48(gp)
00430e8c  nop
00430e90  lw s0,0x0(v0)
00430e94  jalr t9
00430e98  _nop
00430e9c  lw gp,0x10(sp)
00430ea0  lw a0,0x0(v0)
00430ea4  lw t9,-0x7bc8(gp)
00430ea8  nop
00430eac  jalr t9
00430eb0  _nop
00430eb4  lw gp,0x10(sp)
00430eb8  lui a1,0x5b
00430ebc  move a0,s0
00430ec0  lw t9,-0x73b4(gp)
00430ec4  b 0x00430f8c
00430ec8  _addiu a1,a1,-0x228c
00430ecc  lui s2,0x61
00430ed0  lw v0,0x5944(s2)
00430ed4  addiu s4,sp,0x20
00430ed8  li v1,0x2
00430edc  sh v1,0x20(sp)
00430ee0  sw zero,0x4(s4)
00430ee4  sh v0,0x22(sp)
00430ee8  sw zero,0x8(s4)
00430eec  sw zero,0xc(s4)
00430ef0  lw v0,0x4(s1)
00430ef4  lw t9,-0x7264(gp)
00430ef8  move a0,v0
00430efc  jalr t9
00430f00  _sw v0,0x24(sp)
00430f04  lw gp,0x10(sp)
00430f08  lui a0,0x5b
00430f0c  addiu a0,a0,-0x2278
00430f10  lw t9,-0x7c28(gp)
00430f14  nop
00430f18  jalr t9
00430f1c  _move a1,v0
00430f20  lw gp,0x10(sp)
00430f24  lw a0,0x593c(s0)
00430f28  move a1,s4
00430f2c  lw t9,-0x5cd8(gp)
00430f30  nop
00430f34  jalr t9
00430f38  _li a2,0x10
00430f3c  lw gp,0x10(sp)
00430f40  bne v0,s3,0x00430f9c
00430f44  _nop
00430f48  lw t9,-0x5aec(gp)
00430f4c  lw v0,-0x6b48(gp)
00430f50  nop
00430f54  lw s0,0x0(v0)
00430f58  jalr t9
00430f5c  _nop
00430f60  lw gp,0x10(sp)
00430f64  lw a0,0x0(v0)
00430f68  lw t9,-0x7bc8(gp)
00430f6c  nop
00430f70  jalr t9
00430f74  _nop
00430f78  lw gp,0x10(sp)
00430f7c  lui a1,0x5b
00430f80  move a0,s0
00430f84  lw t9,-0x73b4(gp)
00430f88  addiu a1,a1,-0x2254
00430f8c  jalr t9
00430f90  _move a2,v0
00430f94  b 0x00431128
00430f98  _nop
00430f9c  lw v1,0x5944(s2)
00430fa0  li v0,0x50
00430fa4  beq v1,v0,0x0043113c
00430fa8  _li v0,0x1
00430fac  lw t9,-0x7150(gp)
00430fb0  lw s1,-0x6b48(gp)
00430fb4  jalr t9
00430fb8  _nop
00430fbc  lw gp,0x10(sp)
00430fc0  lw a1,0x0(s1)
00430fc4  lui a0,0x5b
00430fc8  lw t9,-0x7054(gp)
00430fcc  nop
00430fd0  jalr t9
00430fd4  _addiu a0,a0,-0x2240
00430fd8  lw gp,0x10(sp)
00430fdc  nop
00430fe0  lw t9,-0x6038(gp)
00430fe4  nop
00430fe8  jalr t9
00430fec  _nop
00430ff0  lw gp,0x10(sp)
00430ff4  nop
00430ff8  lw t9,-0x6f1c(gp)
00430ffc  nop
00431000  jalr t9
00431004  _nop
00431008  lw gp,0x10(sp)
0043100c  nop
00431010  lw t9,-0x6860(gp)
00431014  nop
00431018  jalr t9
0043101c  _move a0,v0
00431020  lui v1,0x61
00431024  lw gp,0x10(sp)
00431028  beq v0,zero,0x0043106c
0043102c  _sw v0,0x5940(v1)
00431030  lw t9,-0x7334(gp)
00431034  nop
00431038  jalr t9
0043103c  _move a0,v0
00431040  lui v1,0x61
00431044  lw gp,0x10(sp)
00431048  beq v0,zero,0x0043106c
0043104c  _sw v0,0x5938(v1)
00431050  lw t9,-0x69c4(gp)
00431054  lw a1,0x593c(s0)
00431058  jalr t9
0043105c  _move a0,v0
00431060  lw gp,0x10(sp)
00431064  bne v0,zero,0x0043107c
00431068  _lui s0,0x1
0043106c  lw a0,0x0(s1)
00431070  lw t9,-0x5a0c(gp)
00431074  b 0x00431120
00431078  _nop
0043107c  lw t9,-0x6288(gp)
00431080  nop
00431084  jalr t9
00431088  _addiu s1,sp,0x18
0043108c  b 0x004310c8
00431090  _nop
00431094  jalr t9
00431098  _nop
0043109c  div v0,s0
004310a0  bne s0,zero,0x004310ac
004310a4  _nop
004310a8  break 0x1c00
004310ac  lw gp,0x10(sp)
004310b0  move a0,s1
004310b4  li a1,0x2
004310b8  lw t9,-0x6854(gp)
004310bc  mfhi v0
004310c0  jalr t9
004310c4  _sh v0,0x18(sp)
004310c8  lw gp,0x10(sp)
004310cc  nop
004310d0  lw t9,-0x79a8(gp)
004310d4  nop
004310d8  jalr t9
004310dc  _nop
004310e0  lw gp,0x10(sp)
004310e4  nop
004310e8  lw t9,-0x7654(gp)
004310ec  beq v0,zero,0x00431094
004310f0  _lui v0,0x61
004310f4  lw t9,-0x588c(gp)
004310f8  lw a0,0x5938(v0)
004310fc  jalr t9
00431100  _nop
00431104  li v1,0x1
00431108  lw gp,0x10(sp)
0043110c  beq v0,v1,0x00431138
00431110  _nop
00431114  lw v0,-0x6b48(gp)
00431118  lw t9,-0x5a0c(gp)
0043111c  lw a0,0x0(v0)
00431120  jalr t9
00431124  _nop
00431128  jal 0x00430944
0043112c  _nop
00431130  b 0x0043113c
00431134  _li v0,-0x1
00431138  li v0,0x1
0043113c  lw ra,0xa4(sp)
00431140  lw s8,0xa0(sp)
00431144  lw s7,0x9c(sp)
00431148  lw s6,0x98(sp)
0043114c  lw s5,0x94(sp)
00431150  lw s4,0x90(sp)
00431154  lw s3,0x8c(sp)
00431158  lw s2,0x88(sp)
0043115c  lw s1,0x84(sp)
00431160  lw s0,0x80(sp)
00431164  jr ra
00431168  _addiu sp,sp,0xa8
