# FUN_004038d8 @ 004038d8
004038d8  addiu sp,sp,-0x240
004038dc  sw ra,0x23c(sp)
004038e0  sw s8,0x238(sp)
004038e4  sw s7,0x234(sp)
004038e8  sw s6,0x230(sp)
004038ec  sw s5,0x22c(sp)
004038f0  sw s4,0x228(sp)
004038f4  sw s3,0x224(sp)
004038f8  sw s2,0x220(sp)
004038fc  sw s1,0x21c(sp)
00403900  sw s0,0x218(sp)
00403904  lui gp,0x43
00403908  addiu gp,gp,-0x4f70
0040390c  sw gp,0x10(sp)
00403910  lw t9,-0x7ee8(gp)
00403914  addiu a0,sp,0x18
00403918  clear a1
0040391c  jalr t9
00403920  _li a2,0x200
00403924  lw gp,0x10(sp)
00403928  lui s7,0x41
0040392c  lui v0,0x42
00403930  addiu s7,s7,0x594
00403934  clear s5
00403938  clear s3
0040393c  addiu s4,v0,0x33f4
00403940  lw t9,-0x7f64(gp)
00403944  lw a0,-0x7f7c(gp)
00403948  jalr t9
0040394c  _nop
00403950  lw gp,0x10(sp)
00403954  nop
00403958  lw t9,-0x7f18(gp)
0040395c  lw a0,-0x7f7c(gp)
00403960  lw v0,-0x7f0c(gp)
00403964  nop
00403968  lw s2,0x0(v0)
0040396c  jalr t9
00403970  _nop
00403974  lw gp,0x10(sp)
00403978  nop
0040397c  lw t9,-0x7f64(gp)
00403980  lw a0,-0x7dd4(gp)
00403984  jalr t9
00403988  _nop
0040398c  lw gp,0x10(sp)
00403990  lui v0,0x42
00403994  lw s1,0x34f4(v0)
00403998  lw t9,-0x7f18(gp)
0040399c  lw a0,-0x7dd4(gp)
004039a0  jalr t9
004039a4  _nop
004039a8  lw gp,0x10(sp)
004039ac  nop
004039b0  lw t9,-0x7f64(gp)
004039b4  lw a0,-0x7e58(gp)
004039b8  jalr t9
004039bc  _nop
004039c0  lw gp,0x10(sp)
004039c4  lui v0,0x42
004039c8  lw s0,0x33dc(v0)
004039cc  lw t9,-0x7f18(gp)
004039d0  lw a0,-0x7e58(gp)
004039d4  lui v0,0x42
004039d8  lw s6,0x33e4(v0)
004039dc  lui v0,0x42
004039e0  lw s8,0x33e8(v0)
004039e4  jalr t9
004039e8  _nop
004039ec  li v1,0x1
004039f0  lw gp,0x10(sp)
004039f4  bne s2,v1,0x00403a14
004039f8  _nop
004039fc  lw t9,-0x7dbc(gp)
00403a00  lui a0,0x41
00403a04  jalr t9
00403a08  _addiu a0,a0,0x614
00403a0c  b 0x00403ab8
00403a10  _nop
00403a14  lw t9,-0x7f98(gp)
00403a18  lui a0,0x41
00403a1c  jalr t9
00403a20  _addiu a0,a0,0x650
00403a24  lw gp,0x10(sp)
00403a28  beq v0,zero,0x00403a3c
00403a2c  _li v0,0x1
00403a30  lw t9,-0x7e28(gp)
00403a34  b 0x00403f04
00403a38  _li a0,0x1
00403a3c  beq s1,v0,0x00403f18
00403a40  _nop
00403a44  bne s0,zero,0x00403a68
00403a48  _lui a0,0x41
00403a4c  lw t9,-0x7dbc(gp)
00403a50  nop
00403a54  jalr t9
00403a58  _addiu a0,a0,0x668
00403a5c  lw gp,0x10(sp)
00403a60  b 0x00403f1c
00403a64  _li s0,0x1
00403a68  jal 0x00402714
00403a6c  _nop
00403a70  move s0,v0
00403a74  slti v0,v0,0x3
00403a78  lw gp,0x10(sp)
00403a7c  beq v0,zero,0x00403a8c
00403a80  _nop
00403a84  b 0x00403a90
00403a88  _addiu s6,s6,0x1
00403a8c  addiu s3,s3,0x1
00403a90  slti v0,s6,0x709
00403a94  bne v0,zero,0x00403ac4
00403a98  _move a0,s7
00403a9c  lui v0,0x42
00403aa0  lw a1,0x33e4(v0)
00403aa4  lw t9,-0x7dbc(gp)
00403aa8  lui a0,0x41
00403aac  addiu a0,a0,0x6a4
00403ab0  jalr t9
00403ab4  _move a2,s3
00403ab8  lw gp,0x10(sp)
00403abc  b 0x00403f1c
00403ac0  _clear s0
00403ac4  lw t9,-0x7f58(gp)
00403ac8  nop
00403acc  jalr t9
00403ad0  _li a1,0x4
00403ad4  lw gp,0x10(sp)
00403ad8  bne v0,zero,0x00403c6c
00403adc  _li v0,0x4
00403ae0  lw t9,-0x7ee0(gp)
00403ae4  lui a1,0x41
00403ae8  addiu a1,a1,0x1d04
00403aec  jalr t9
00403af0  _move a0,s7
00403af4  lw gp,0x10(sp)
00403af8  beq v0,zero,0x00403c38
00403afc  _move s1,v0
00403b00  lw t9,-0x7f80(gp)
00403b04  nop
00403b08  jalr t9
00403b0c  _move a0,v0
00403b10  lw gp,0x10(sp)
00403b14  move a0,v0
00403b18  lw t9,-0x7e88(gp)
00403b1c  nop
00403b20  jalr t9
00403b24  _li a1,0x2
00403b28  lw gp,0x10(sp)
00403b2c  bne v0,zero,0x00403c2c
00403b30  _addiu s2,sp,0x18
00403b34  lw t9,-0x7df4(gp)
00403b38  move a0,s2
00403b3c  li a1,0x200
00403b40  jalr t9
00403b44  _move a2,s1
00403b48  lw gp,0x10(sp)
00403b4c  beq v0,zero,0x00403be0
00403b50  _move a1,s2
00403b54  lw t9,-0x7dbc(gp)
00403b58  lui a0,0x41
00403b5c  jalr t9
00403b60  _addiu a0,a0,0x708
00403b64  lw gp,0x10(sp)
00403b68  nop
00403b6c  lw t9,-0x7f88(gp)
00403b70  nop
00403b74  jalr t9
00403b78  _move a0,s2
00403b7c  lw gp,0x10(sp)
00403b80  lui a0,0x41
00403b84  andi a2,v0,0xffff
00403b88  lw t9,-0x7e7c(gp)
00403b8c  move a1,s2
00403b90  jalr t9
00403b94  _addiu a0,a0,0x280
00403b98  lw gp,0x10(sp)
00403b9c  nop
00403ba0  lw t9,-0x7f64(gp)
00403ba4  lw a0,-0x7e58(gp)
00403ba8  jalr t9
00403bac  _nop
00403bb0  lw gp,0x10(sp)
00403bb4  move a0,s4
00403bb8  lw t9,-0x7d9c(gp)
00403bbc  nop
00403bc0  jalr t9
00403bc4  _move a1,s2
00403bc8  lw gp,0x10(sp)
00403bcc  nop
00403bd0  lw a0,-0x7e58(gp)
00403bd4  lw t9,-0x7f18(gp)
00403bd8  b 0x00403bec
00403bdc  _nop
00403be0  lw t9,-0x7e14(gp)
00403be4  lui a0,0x41
00403be8  addiu a0,a0,0x75c
00403bec  jalr t9
00403bf0  _nop
00403bf4  lw gp,0x10(sp)
00403bf8  nop
00403bfc  lw t9,-0x7f80(gp)
00403c00  nop
00403c04  jalr t9
00403c08  _move a0,s1
00403c0c  lw gp,0x10(sp)
00403c10  move a0,v0
00403c14  lw t9,-0x7e88(gp)
00403c18  nop
00403c1c  jalr t9
00403c20  _li a1,0x8
00403c24  lw gp,0x10(sp)
00403c28  nop
00403c2c  lw t9,-0x7ef8(gp)
00403c30  b 0x00403c44
00403c34  _move a0,s1
00403c38  lw t9,-0x7e14(gp)
00403c3c  lui a0,0x41
00403c40  addiu a0,a0,0x7a0
00403c44  jalr t9
00403c48  _nop
00403c4c  lw gp,0x10(sp)
00403c50  nop
00403c54  lw t9,-0x7ea0(gp)
00403c58  nop
00403c5c  jalr t9
00403c60  _move a0,s7
00403c64  lw gp,0x10(sp)
00403c68  li v0,0x4
00403c6c  beq s0,v0,0x00403e90
00403c70  _slti v0,s0,0x5
00403c74  beq v0,zero,0x00403c90
00403c78  _li v0,0x5
00403c7c  li v0,0x3
00403c80  bne s0,v0,0x00403ec0
00403c84  _nop
00403c88  b 0x00403ca8
00403c8c  _nop
00403c90  beq s0,v0,0x00403ebc
00403c94  _li v0,0x6
00403c98  bne s0,v0,0x00403ec0
00403c9c  _lui a0,0x41
00403ca0  b 0x00403ea0
00403ca4  _addiu a0,a0,0x8e0
00403ca8  bne s8,zero,0x00403cf4
00403cac  _nop
00403cb0  jal 0x00401e7c
00403cb4  _nop
00403cb8  lw gp,0x10(sp)
00403cbc  beq v0,zero,0x00403cf4
00403cc0  _nop
00403cc4  lw t9,-0x7f64(gp)
00403cc8  lw a0,-0x7e58(gp)
00403ccc  jalr t9
00403cd0  _li s8,0x1
00403cd4  lw gp,0x10(sp)
00403cd8  lui v0,0x42
00403cdc  lw t9,-0x7f18(gp)
00403ce0  lw a0,-0x7e58(gp)
00403ce4  jalr t9
00403ce8  _sw s8,0x33e8(v0)
00403cec  lw gp,0x10(sp)
00403cf0  nop
00403cf4  lw t9,-0x7f64(gp)
00403cf8  lw a0,-0x7da0(gp)
00403cfc  jalr t9
00403d00  _nop
00403d04  lw gp,0x10(sp)
00403d08  lui v0,0x42
00403d0c  lui v1,0x42
00403d10  lw t9,-0x7f18(gp)
00403d14  lw a0,-0x7da0(gp)
00403d18  lw s1,0x34f8(v0)
00403d1c  lw s2,0x33ec(v1)
00403d20  jalr t9
00403d24  _nop
00403d28  lw gp,0x10(sp)
00403d2c  beq s5,zero,0x00403d9c
00403d30  _nop
00403d34  bne s2,zero,0x00403ec0
00403d38  _nop
00403d3c  bne s1,zero,0x00403ebc
00403d40  _lui a0,0x41
00403d44  lw t9,-0x7e14(gp)
00403d48  nop
00403d4c  jalr t9
00403d50  _addiu a0,a0,0x7d4
00403d54  lw gp,0x10(sp)
00403d58  clear s5
00403d5c  clear s3
00403d60  lw t9,-0x7f64(gp)
00403d64  lw a0,-0x7e58(gp)
00403d68  jalr t9
00403d6c  _li s0,-0x1
00403d70  lw gp,0x10(sp)
00403d74  lui v0,0x42
00403d78  sw zero,0x33e8(v0)
00403d7c  lw t9,-0x7f18(gp)
00403d80  lw a0,-0x7e58(gp)
00403d84  lui v0,0x42
00403d88  jalr t9
00403d8c  _sw zero,0x33e4(v0)
00403d90  lw gp,0x10(sp)
00403d94  b 0x00403ec0
00403d98  _nop
00403d9c  beq s8,zero,0x00403ec0
00403da0  _lui a0,0x41
00403da4  lw t9,-0x7f58(gp)
00403da8  addiu a0,a0,0x2a8
00403dac  jalr t9
00403db0  _li a1,0x4
00403db4  lw gp,0x10(sp)
00403db8  bne v0,zero,0x00403ec0
00403dbc  _lui a0,0x41
00403dc0  lw t9,-0x7ea0(gp)
00403dc4  nop
00403dc8  jalr t9
00403dcc  _addiu a0,a0,0x2a8
00403dd0  lw gp,0x10(sp)
00403dd4  lui a0,0x41
00403dd8  lw t9,-0x7e14(gp)
00403ddc  nop
00403de0  jalr t9
00403de4  _addiu a0,a0,0x828
00403de8  lw gp,0x10(sp)
00403dec  nop
00403df0  lw t9,-0x7f64(gp)
00403df4  lw a0,-0x7da0(gp)
00403df8  jalr t9
00403dfc  _nop
00403e00  lw gp,0x10(sp)
00403e04  li v1,0x1
00403e08  lui v0,0x42
00403e0c  lw t9,-0x7f18(gp)
00403e10  lw a0,-0x7da0(gp)
00403e14  jalr t9
00403e18  _sw v1,0x33ec(v0)
00403e1c  lui v1,0x42
00403e20  lb v0,0x33f4(v1)
00403e24  lw gp,0x10(sp)
00403e28  beq v0,zero,0x00403e7c
00403e2c  _nop
00403e30  lw t9,-0x7f88(gp)
00403e34  nop
00403e38  jalr t9
00403e3c  _move a0,s4
00403e40  lw gp,0x10(sp)
00403e44  lui a0,0x41
00403e48  andi a2,v0,0xffff
00403e4c  lw t9,-0x7dd0(gp)
00403e50  addiu a0,a0,0x280
00403e54  jalr t9
00403e58  _move a1,s4
00403e5c  lw gp,0x10(sp)
00403e60  move a0,s4
00403e64  clear a1
00403e68  lw t9,-0x7ee8(gp)
00403e6c  nop
00403e70  jalr t9
00403e74  _li a2,0x100
00403e78  lw gp,0x10(sp)
00403e7c  lui a0,0x41
00403e80  lw t9,-0x7e20(gp)
00403e84  addiu a0,a0,0x868
00403e88  b 0x00403ea8
00403e8c  _li s5,0x1
00403e90  lui a0,0x41
00403e94  lw t9,-0x7e14(gp)
00403e98  b 0x00403ea8
00403e9c  _addiu a0,a0,0x888
00403ea0  lw t9,-0x7e14(gp)
00403ea4  nop
00403ea8  jalr t9
00403eac  _nop
00403eb0  lw gp,0x10(sp)
00403eb4  b 0x00403ec0
00403eb8  _nop
00403ebc  clear s5
00403ec0  lw t9,-0x7e28(gp)
00403ec4  nop
00403ec8  jalr t9
00403ecc  _li a0,0x1
00403ed0  lw gp,0x10(sp)
00403ed4  nop
00403ed8  lw t9,-0x7f64(gp)
00403edc  lw a0,-0x7e58(gp)
00403ee0  jalr t9
00403ee4  _nop
00403ee8  lw gp,0x10(sp)
00403eec  lui v0,0x42
00403ef0  sw s6,0x33e4(v0)
00403ef4  lw a0,-0x7e58(gp)
00403ef8  lw t9,-0x7f18(gp)
00403efc  lui v0,0x42
00403f00  sw s0,0x33f0(v0)
00403f04  jalr t9
00403f08  _nop
00403f0c  lw gp,0x10(sp)
00403f10  b 0x00403940
00403f14  _nop
00403f18  clear s0
00403f1c  lw t9,-0x7f64(gp)
00403f20  lw a0,-0x7e58(gp)
00403f24  jalr t9
00403f28  _nop
00403f2c  lw gp,0x10(sp)
00403f30  lui v0,0x42
00403f34  sw zero,0x33dc(v0)
00403f38  lw t9,-0x7f18(gp)
00403f3c  lw a0,-0x7e58(gp)
00403f40  lui v0,0x42
00403f44  lw s2,0x33e0(v0)
00403f48  jalr t9
00403f4c  _nop
00403f50  lw gp,0x10(sp)
00403f54  nop
00403f58  lw t9,-0x7f64(gp)
00403f5c  lw a0,-0x7dd4(gp)
00403f60  jalr t9
00403f64  _nop
00403f68  lw gp,0x10(sp)
00403f6c  lui v0,0x42
00403f70  lw s1,0x34f4(v0)
00403f74  lw t9,-0x7f18(gp)
00403f78  lw a0,-0x7dd4(gp)
00403f7c  jalr t9
00403f80  _nop
00403f84  lw gp,0x10(sp)
00403f88  beq s2,zero,0x00403fa0
00403f8c  _nop
00403f90  jal 0x0040288c
00403f94  _nop
00403f98  lw gp,0x10(sp)
00403f9c  nop
00403fa0  lw t9,-0x7ea0(gp)
00403fa4  lui a0,0x41
00403fa8  jalr t9
00403fac  _addiu a0,a0,0x594
00403fb0  lw gp,0x10(sp)
00403fb4  bne s0,zero,0x00404064
00403fb8  _nop
00403fbc  bne s1,zero,0x00404064
00403fc0  _lui a0,0x41
00403fc4  lw t9,-0x7e14(gp)
00403fc8  nop
00403fcc  jalr t9
00403fd0  _addiu a0,a0,0x91c
00403fd4  jal 0x00402ee4
00403fd8  _lui s0,0x42
00403fdc  lb v0,0x33f4(s0)
00403fe0  lw gp,0x10(sp)
00403fe4  beq v0,zero,0x0040403c
00403fe8  _nop
00403fec  lw t9,-0x7f88(gp)
00403ff0  nop
00403ff4  jalr t9
00403ff8  _addiu a0,s0,0x33f4
00403ffc  lw gp,0x10(sp)
00404000  lui a0,0x41
00404004  addiu a0,a0,0x280
00404008  lw t9,-0x7dd0(gp)
0040400c  andi a2,v0,0xffff
00404010  jalr t9
00404014  _addiu a1,s0,0x33f4
00404018  lw gp,0x10(sp)
0040401c  addiu a0,s0,0x33f4
00404020  clear a1
00404024  lw t9,-0x7ee8(gp)
00404028  nop
0040402c  jalr t9
00404030  _li a2,0x100
00404034  lw gp,0x10(sp)
00404038  nop
0040403c  lw t9,-0x7e08(gp)
00404040  nop
00404044  jalr t9
00404048  _clear a0
0040404c  lw gp,0x10(sp)
00404050  nop
00404054  lw t9,-0x7db0(gp)
00404058  nop
0040405c  jalr t9
00404060  _nop
00404064  lw ra,0x23c(sp)
00404068  lw s8,0x238(sp)
0040406c  lw s7,0x234(sp)
00404070  lw s6,0x230(sp)
00404074  lw s5,0x22c(sp)
00404078  lw s4,0x228(sp)
0040407c  lw s3,0x224(sp)
00404080  lw s2,0x220(sp)
00404084  lw s1,0x21c(sp)
00404088  lw s0,0x218(sp)
0040408c  jr ra
00404090  _addiu sp,sp,0x240
