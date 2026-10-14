# FUN_00403b80 @ 00403b80
00403b80  addiu sp,sp,-0x240
00403b84  sw ra,0x23c(sp)
00403b88  sw s8,0x238(sp)
00403b8c  sw s7,0x234(sp)
00403b90  sw s6,0x230(sp)
00403b94  sw s5,0x22c(sp)
00403b98  sw s4,0x228(sp)
00403b9c  sw s3,0x224(sp)
00403ba0  sw s2,0x220(sp)
00403ba4  sw s1,0x21c(sp)
00403ba8  sw s0,0x218(sp)
00403bac  lui gp,0x43
00403bb0  addiu gp,gp,-0x4c90
00403bb4  sw gp,0x10(sp)
00403bb8  lw t9,-0x7ee0(gp)
00403bbc  addiu a0,sp,0x18
00403bc0  clear a1
00403bc4  jalr t9
00403bc8  _li a2,0x200
00403bcc  lw gp,0x10(sp)
00403bd0  lui s7,0x41
00403bd4  lui v0,0x42
00403bd8  addiu s7,s7,0x864
00403bdc  clear s5
00403be0  clear s3
00403be4  addiu s4,v0,0x36d4
00403be8  lw t9,-0x7f64(gp)
00403bec  lw a0,-0x7f7c(gp)
00403bf0  jalr t9
00403bf4  _nop
00403bf8  lw gp,0x10(sp)
00403bfc  nop
00403c00  lw t9,-0x7f10(gp)
00403c04  lw a0,-0x7f7c(gp)
00403c08  lw v0,-0x7f04(gp)
00403c0c  nop
00403c10  lw s2,0x0(v0)
00403c14  jalr t9
00403c18  _nop
00403c1c  lw gp,0x10(sp)
00403c20  nop
00403c24  lw t9,-0x7f64(gp)
00403c28  lw a0,-0x7dc8(gp)
00403c2c  jalr t9
00403c30  _nop
00403c34  lw gp,0x10(sp)
00403c38  lui v0,0x42
00403c3c  lw s1,0x37d4(v0)
00403c40  lw t9,-0x7f10(gp)
00403c44  lw a0,-0x7dc8(gp)
00403c48  jalr t9
00403c4c  _nop
00403c50  lw gp,0x10(sp)
00403c54  nop
00403c58  lw t9,-0x7f64(gp)
00403c5c  lw a0,-0x7e50(gp)
00403c60  jalr t9
00403c64  _nop
00403c68  lw gp,0x10(sp)
00403c6c  lui v0,0x42
00403c70  lw s0,0x36bc(v0)
00403c74  lw t9,-0x7f10(gp)
00403c78  lw a0,-0x7e50(gp)
00403c7c  lui v0,0x42
00403c80  lw s6,0x36c4(v0)
00403c84  lui v0,0x42
00403c88  lw s8,0x36c8(v0)
00403c8c  jalr t9
00403c90  _nop
00403c94  li v1,0x1
00403c98  lw gp,0x10(sp)
00403c9c  bne s2,v1,0x00403cbc
00403ca0  _nop
00403ca4  lw t9,-0x7db0(gp)
00403ca8  lui a0,0x41
00403cac  jalr t9
00403cb0  _addiu a0,a0,0x8e4
00403cb4  b 0x00403d60
00403cb8  _nop
00403cbc  lw t9,-0x7f98(gp)
00403cc0  lui a0,0x41
00403cc4  jalr t9
00403cc8  _addiu a0,a0,0x920
00403ccc  lw gp,0x10(sp)
00403cd0  beq v0,zero,0x00403ce4
00403cd4  _li v0,0x1
00403cd8  lw t9,-0x7e20(gp)
00403cdc  b 0x004041ac
00403ce0  _li a0,0x1
00403ce4  beq s1,v0,0x004041c0
00403ce8  _nop
00403cec  bne s0,zero,0x00403d10
00403cf0  _lui a0,0x41
00403cf4  lw t9,-0x7db0(gp)
00403cf8  nop
00403cfc  jalr t9
00403d00  _addiu a0,a0,0x938
00403d04  lw gp,0x10(sp)
00403d08  b 0x004041c4
00403d0c  _li s0,0x1
00403d10  jal 0x00402784
00403d14  _nop
00403d18  move s0,v0
00403d1c  slti v0,v0,0x3
00403d20  lw gp,0x10(sp)
00403d24  beq v0,zero,0x00403d34
00403d28  _nop
00403d2c  b 0x00403d38
00403d30  _addiu s6,s6,0x1
00403d34  addiu s3,s3,0x1
00403d38  slti v0,s6,0x709
00403d3c  bne v0,zero,0x00403d6c
00403d40  _move a0,s7
00403d44  lui v0,0x42
00403d48  lw a1,0x36c4(v0)
00403d4c  lw t9,-0x7db0(gp)
00403d50  lui a0,0x41
00403d54  addiu a0,a0,0x974
00403d58  jalr t9
00403d5c  _move a2,s3
00403d60  lw gp,0x10(sp)
00403d64  b 0x004041c4
00403d68  _clear s0
00403d6c  lw t9,-0x7f58(gp)
00403d70  nop
00403d74  jalr t9
00403d78  _li a1,0x4
00403d7c  lw gp,0x10(sp)
00403d80  bne v0,zero,0x00403f14
00403d84  _li v0,0x4
00403d88  lw t9,-0x7ed8(gp)
00403d8c  lui a1,0x41
00403d90  addiu a1,a1,0x1fe4
00403d94  jalr t9
00403d98  _move a0,s7
00403d9c  lw gp,0x10(sp)
00403da0  beq v0,zero,0x00403ee0
00403da4  _move s1,v0
00403da8  lw t9,-0x7f80(gp)
00403dac  nop
00403db0  jalr t9
00403db4  _move a0,v0
00403db8  lw gp,0x10(sp)
00403dbc  move a0,v0
00403dc0  lw t9,-0x7e80(gp)
00403dc4  nop
00403dc8  jalr t9
00403dcc  _li a1,0x2
00403dd0  lw gp,0x10(sp)
00403dd4  bne v0,zero,0x00403ed4
00403dd8  _addiu s2,sp,0x18
00403ddc  lw t9,-0x7de8(gp)
00403de0  move a0,s2
00403de4  li a1,0x200
00403de8  jalr t9
00403dec  _move a2,s1
00403df0  lw gp,0x10(sp)
00403df4  beq v0,zero,0x00403e88
00403df8  _move a1,s2
00403dfc  lw t9,-0x7db0(gp)
00403e00  lui a0,0x41
00403e04  jalr t9
00403e08  _addiu a0,a0,0x9d8
00403e0c  lw gp,0x10(sp)
00403e10  nop
00403e14  lw t9,-0x7f88(gp)
00403e18  nop
00403e1c  jalr t9
00403e20  _move a0,s2
00403e24  lw gp,0x10(sp)
00403e28  lui a0,0x41
00403e2c  andi a2,v0,0xffff
00403e30  lw t9,-0x7e74(gp)
00403e34  move a1,s2
00403e38  jalr t9
00403e3c  _addiu a0,a0,0x540
00403e40  lw gp,0x10(sp)
00403e44  nop
00403e48  lw t9,-0x7f64(gp)
00403e4c  lw a0,-0x7e50(gp)
00403e50  jalr t9
00403e54  _nop
00403e58  lw gp,0x10(sp)
00403e5c  move a0,s4
00403e60  lw t9,-0x7d90(gp)
00403e64  nop
00403e68  jalr t9
00403e6c  _move a1,s2
00403e70  lw gp,0x10(sp)
00403e74  nop
00403e78  lw a0,-0x7e50(gp)
00403e7c  lw t9,-0x7f10(gp)
00403e80  b 0x00403e94
00403e84  _nop
00403e88  lw t9,-0x7e0c(gp)
00403e8c  lui a0,0x41
00403e90  addiu a0,a0,0xa2c
00403e94  jalr t9
00403e98  _nop
00403e9c  lw gp,0x10(sp)
00403ea0  nop
00403ea4  lw t9,-0x7f80(gp)
00403ea8  nop
00403eac  jalr t9
00403eb0  _move a0,s1
00403eb4  lw gp,0x10(sp)
00403eb8  move a0,v0
00403ebc  lw t9,-0x7e80(gp)
00403ec0  nop
00403ec4  jalr t9
00403ec8  _li a1,0x8
00403ecc  lw gp,0x10(sp)
00403ed0  nop
00403ed4  lw t9,-0x7ef0(gp)
00403ed8  b 0x00403eec
00403edc  _move a0,s1
00403ee0  lw t9,-0x7e0c(gp)
00403ee4  lui a0,0x41
00403ee8  addiu a0,a0,0xa70
00403eec  jalr t9
00403ef0  _nop
00403ef4  lw gp,0x10(sp)
00403ef8  nop
00403efc  lw t9,-0x7e98(gp)
00403f00  nop
00403f04  jalr t9
00403f08  _move a0,s7
00403f0c  lw gp,0x10(sp)
00403f10  li v0,0x4
00403f14  beq s0,v0,0x00404138
00403f18  _slti v0,s0,0x5
00403f1c  beq v0,zero,0x00403f38
00403f20  _li v0,0x5
00403f24  li v0,0x3
00403f28  bne s0,v0,0x00404168
00403f2c  _nop
00403f30  b 0x00403f50
00403f34  _nop
00403f38  beq s0,v0,0x00404164
00403f3c  _li v0,0x6
00403f40  bne s0,v0,0x00404168
00403f44  _lui a0,0x41
00403f48  b 0x00404148
00403f4c  _addiu a0,a0,0xbb0
00403f50  bne s8,zero,0x00403f9c
00403f54  _nop
00403f58  jal 0x00401eec
00403f5c  _nop
00403f60  lw gp,0x10(sp)
00403f64  beq v0,zero,0x00403f9c
00403f68  _nop
00403f6c  lw t9,-0x7f64(gp)
00403f70  lw a0,-0x7e50(gp)
00403f74  jalr t9
00403f78  _li s8,0x1
00403f7c  lw gp,0x10(sp)
00403f80  lui v0,0x42
00403f84  lw t9,-0x7f10(gp)
00403f88  lw a0,-0x7e50(gp)
00403f8c  jalr t9
00403f90  _sw s8,0x36c8(v0)
00403f94  lw gp,0x10(sp)
00403f98  nop
00403f9c  lw t9,-0x7f64(gp)
00403fa0  lw a0,-0x7d94(gp)
00403fa4  jalr t9
00403fa8  _nop
00403fac  lw gp,0x10(sp)
00403fb0  lui v0,0x42
00403fb4  lui v1,0x42
00403fb8  lw t9,-0x7f10(gp)
00403fbc  lw a0,-0x7d94(gp)
00403fc0  lw s1,0x37d8(v0)
00403fc4  lw s2,0x36cc(v1)
00403fc8  jalr t9
00403fcc  _nop
00403fd0  lw gp,0x10(sp)
00403fd4  beq s5,zero,0x00404044
00403fd8  _nop
00403fdc  bne s2,zero,0x00404168
00403fe0  _nop
00403fe4  bne s1,zero,0x00404164
00403fe8  _lui a0,0x41
00403fec  lw t9,-0x7e0c(gp)
00403ff0  nop
00403ff4  jalr t9
00403ff8  _addiu a0,a0,0xaa4
00403ffc  lw gp,0x10(sp)
00404000  clear s5
00404004  clear s3
00404008  lw t9,-0x7f64(gp)
0040400c  lw a0,-0x7e50(gp)
00404010  jalr t9
00404014  _li s0,-0x1
00404018  lw gp,0x10(sp)
0040401c  lui v0,0x42
00404020  sw zero,0x36c8(v0)
00404024  lw t9,-0x7f10(gp)
00404028  lw a0,-0x7e50(gp)
0040402c  lui v0,0x42
00404030  jalr t9
00404034  _sw zero,0x36c4(v0)
00404038  lw gp,0x10(sp)
0040403c  b 0x00404168
00404040  _nop
00404044  beq s8,zero,0x00404168
00404048  _lui a0,0x41
0040404c  lw t9,-0x7f58(gp)
00404050  addiu a0,a0,0x568
00404054  jalr t9
00404058  _li a1,0x4
0040405c  lw gp,0x10(sp)
00404060  bne v0,zero,0x00404168
00404064  _lui a0,0x41
00404068  lw t9,-0x7e98(gp)
0040406c  nop
00404070  jalr t9
00404074  _addiu a0,a0,0x568
00404078  lw gp,0x10(sp)
0040407c  lui a0,0x41
00404080  lw t9,-0x7e0c(gp)
00404084  nop
00404088  jalr t9
0040408c  _addiu a0,a0,0xaf8
00404090  lw gp,0x10(sp)
00404094  nop
00404098  lw t9,-0x7f64(gp)
0040409c  lw a0,-0x7d94(gp)
004040a0  jalr t9
004040a4  _nop
004040a8  lw gp,0x10(sp)
004040ac  li v1,0x1
004040b0  lui v0,0x42
004040b4  lw t9,-0x7f10(gp)
004040b8  lw a0,-0x7d94(gp)
004040bc  jalr t9
004040c0  _sw v1,0x36cc(v0)
004040c4  lui v1,0x42
004040c8  lb v0,0x36d4(v1)
004040cc  lw gp,0x10(sp)
004040d0  beq v0,zero,0x00404124
004040d4  _nop
004040d8  lw t9,-0x7f88(gp)
004040dc  nop
004040e0  jalr t9
004040e4  _move a0,s4
004040e8  lw gp,0x10(sp)
004040ec  lui a0,0x41
004040f0  andi a2,v0,0xffff
004040f4  lw t9,-0x7dc4(gp)
004040f8  addiu a0,a0,0x540
004040fc  jalr t9
00404100  _move a1,s4
00404104  lw gp,0x10(sp)
00404108  move a0,s4
0040410c  clear a1
00404110  lw t9,-0x7ee0(gp)
00404114  nop
00404118  jalr t9
0040411c  _li a2,0x100
00404120  lw gp,0x10(sp)
00404124  lui a0,0x41
00404128  lw t9,-0x7e18(gp)
0040412c  addiu a0,a0,0xb38
00404130  b 0x00404150
00404134  _li s5,0x1
00404138  lui a0,0x41
0040413c  lw t9,-0x7e0c(gp)
00404140  b 0x00404150
00404144  _addiu a0,a0,0xb58
00404148  lw t9,-0x7e0c(gp)
0040414c  nop
00404150  jalr t9
00404154  _nop
00404158  lw gp,0x10(sp)
0040415c  b 0x00404168
00404160  _nop
00404164  clear s5
00404168  lw t9,-0x7e20(gp)
0040416c  nop
00404170  jalr t9
00404174  _li a0,0x1
00404178  lw gp,0x10(sp)
0040417c  nop
00404180  lw t9,-0x7f64(gp)
00404184  lw a0,-0x7e50(gp)
00404188  jalr t9
0040418c  _nop
00404190  lw gp,0x10(sp)
00404194  lui v0,0x42
00404198  sw s6,0x36c4(v0)
0040419c  lw a0,-0x7e50(gp)
004041a0  lw t9,-0x7f10(gp)
004041a4  lui v0,0x42
004041a8  sw s0,0x36d0(v0)
004041ac  jalr t9
004041b0  _nop
004041b4  lw gp,0x10(sp)
004041b8  b 0x00403be8
004041bc  _nop
004041c0  clear s0
004041c4  lw t9,-0x7f64(gp)
004041c8  lw a0,-0x7e50(gp)
004041cc  jalr t9
004041d0  _nop
004041d4  lw gp,0x10(sp)
004041d8  lui v0,0x42
004041dc  sw zero,0x36bc(v0)
004041e0  lw t9,-0x7f10(gp)
004041e4  lw a0,-0x7e50(gp)
004041e8  lui v0,0x42
004041ec  lw s2,0x36c0(v0)
004041f0  jalr t9
004041f4  _nop
004041f8  lw gp,0x10(sp)
004041fc  nop
00404200  lw t9,-0x7f64(gp)
00404204  lw a0,-0x7dc8(gp)
00404208  jalr t9
0040420c  _nop
00404210  lw gp,0x10(sp)
00404214  lui v0,0x42
00404218  lw s1,0x37d4(v0)
0040421c  lw t9,-0x7f10(gp)
00404220  lw a0,-0x7dc8(gp)
00404224  jalr t9
00404228  _nop
0040422c  lw gp,0x10(sp)
00404230  beq s2,zero,0x00404248
00404234  _nop
00404238  jal 0x004028fc
0040423c  _nop
00404240  lw gp,0x10(sp)
00404244  nop
00404248  lw t9,-0x7e98(gp)
0040424c  lui a0,0x41
00404250  jalr t9
00404254  _addiu a0,a0,0x864
00404258  lw gp,0x10(sp)
0040425c  bne s0,zero,0x0040430c
00404260  _nop
00404264  bne s1,zero,0x0040430c
00404268  _lui a0,0x41
0040426c  lw t9,-0x7e0c(gp)
00404270  nop
00404274  jalr t9
00404278  _addiu a0,a0,0xbec
0040427c  jal 0x0040318c
00404280  _lui s0,0x42
00404284  lb v0,0x36d4(s0)
00404288  lw gp,0x10(sp)
0040428c  beq v0,zero,0x004042e4
00404290  _nop
00404294  lw t9,-0x7f88(gp)
00404298  nop
0040429c  jalr t9
004042a0  _addiu a0,s0,0x36d4
004042a4  lw gp,0x10(sp)
004042a8  lui a0,0x41
004042ac  addiu a0,a0,0x540
004042b0  lw t9,-0x7dc4(gp)
004042b4  andi a2,v0,0xffff
004042b8  jalr t9
004042bc  _addiu a1,s0,0x36d4
004042c0  lw gp,0x10(sp)
004042c4  addiu a0,s0,0x36d4
004042c8  clear a1
004042cc  lw t9,-0x7ee0(gp)
004042d0  nop
004042d4  jalr t9
004042d8  _li a2,0x100
004042dc  lw gp,0x10(sp)
004042e0  nop
004042e4  lw t9,-0x7e00(gp)
004042e8  nop
004042ec  jalr t9
004042f0  _clear a0
004042f4  lw gp,0x10(sp)
004042f8  nop
004042fc  lw t9,-0x7da4(gp)
00404300  nop
00404304  jalr t9
00404308  _nop
0040430c  lw ra,0x23c(sp)
00404310  lw s8,0x238(sp)
00404314  lw s7,0x234(sp)
00404318  lw s6,0x230(sp)
0040431c  lw s5,0x22c(sp)
00404320  lw s4,0x228(sp)
00404324  lw s3,0x224(sp)
00404328  lw s2,0x220(sp)
0040432c  lw s1,0x21c(sp)
00404330  lw s0,0x218(sp)
00404334  jr ra
00404338  _addiu sp,sp,0x240
