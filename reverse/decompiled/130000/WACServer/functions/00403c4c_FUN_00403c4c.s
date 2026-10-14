# FUN_00403c4c @ 00403c4c
00403c4c  addiu sp,sp,-0xc8
00403c50  sw ra,0xc4(sp)
00403c54  sw s8,0xc0(sp)
00403c58  sw s7,0xbc(sp)
00403c5c  sw s6,0xb8(sp)
00403c60  sw s5,0xb4(sp)
00403c64  sw s4,0xb0(sp)
00403c68  sw s3,0xac(sp)
00403c6c  sw s2,0xa8(sp)
00403c70  sw s1,0xa4(sp)
00403c74  sw s0,0xa0(sp)
00403c78  lui gp,0x44
00403c7c  addiu gp,gp,-0x4fc0
00403c80  sw gp,0x38(sp)
00403c84  addiu v0,a0,0x24
00403c88  addiu v1,a0,0x8
00403c8c  move s0,a0
00403c90  sw v0,0x78(sp)
00403c94  addiu a0,a0,0x34
00403c98  addiu a1,sp,0x4c
00403c9c  addiu v0,sp,0x40
00403ca0  sw v1,0x80(sp)
00403ca4  sw a0,0x8c(sp)
00403ca8  clear s3
00403cac  sw a1,0x88(sp)
00403cb0  b 0x00404c3c
00403cb4  _sw v0,0x84(sp)
00403cb8  beq v0,zero,0x00404c4c
00403cbc  _lui v1,0x42
00403cc0  sll v0,s3,0x2
00403cc4  addiu v1,v1,-0x2d20
00403cc8  addu v0,v1,v0
00403ccc  lw v0,0x0(v0)
00403cd0  nop
00403cd4  jr v0
00403cd8  _nop
00403cdc  lw t9,-0x7e58(gp)
00403ce0  lw a0,0x78(sp)
00403ce4  sw zero,0x40(sp)
00403ce8  clear a1
00403cec  jalr t9
00403cf0  _clear a2
00403cf4  lw gp,0x38(sp)
00403cf8  bne v0,zero,0x00403e94
00403cfc  _li s1,0x1
00403d00  sb s1,0x20(s0)
00403d04  lw t9,-0x7e58(gp)
00403d08  lw a0,0x80(sp)
00403d0c  clear a1
00403d10  jalr t9
00403d14  _clear a2
00403d18  lw gp,0x38(sp)
00403d1c  bne v0,zero,0x00403e94
00403d20  _nop
00403d24  lw t9,0x44(s0)
00403d28  sb s1,0x18(s0)
00403d2c  beq t9,zero,0x00403d48
00403d30  _sw zero,0x38(s0)
00403d34  move a0,s0
00403d38  jalr t9
00403d3c  _clear a1
00403d40  lw gp,0x38(sp)
00403d44  nop
00403d48  lw t9,-0x7ed0(gp)
00403d4c  nop
00403d50  jalr t9
00403d54  _nop
00403d58  lw gp,0x38(sp)
00403d5c  bne v0,zero,0x00403e94
00403d60  _li s1,0x1
00403d64  lw v0,0x0(s0)
00403d68  lw t9,-0x7dcc(gp)
00403d6c  lbu v1,0x6(v0)
00403d70  lw a0,0x18(v0)
00403d74  lw a1,0x1c(v0)
00403d78  lw a2,0x20(v0)
00403d7c  sw v1,0x10(sp)
00403d80  lbu v1,0x7(v0)
00403d84  move a3,v0
00403d88  sw v1,0x14(sp)
00403d8c  lbu v1,0x8(v0)
00403d90  sw s1,0x1c(sp)
00403d94  sw v1,0x18(sp)
00403d98  lbu v1,0xb(v0)
00403d9c  nop
00403da0  sw v1,0x20(sp)
00403da4  lbu v1,0x9(v0)
00403da8  nop
00403dac  sw v1,0x24(sp)
00403db0  lbu v0,0xa(v0)
00403db4  addiu v1,sp,0x54
00403db8  sw v1,0x34(sp)
00403dbc  sw v0,0x28(sp)
00403dc0  lw v0,0x84(sp)
00403dc4  sw s1,0x2c(sp)
00403dc8  jalr t9
00403dcc  _sw v0,0x30(sp)
00403dd0  lw gp,0x38(sp)
00403dd4  bne v0,zero,0x00403e94
00403dd8  _nop
00403ddc  lw t9,-0x7d7c(gp)
00403de0  lw a0,0x40(sp)
00403de4  lw a1,0x54(sp)
00403de8  jalr t9
00403dec  _nop
00403df0  lw gp,0x38(sp)
00403df4  bne v0,zero,0x00403e94
00403df8  _nop
00403dfc  lw t9,-0x7dc0(gp)
00403e00  nop
00403e04  jalr t9
00403e08  _li a0,0x3c
00403e0c  lw gp,0x38(sp)
00403e10  lui a0,0x42
00403e14  lui a1,0x40
00403e18  lw t9,-0x7f04(gp)
00403e1c  sw v0,0x4(s0)
00403e20  move a3,v0
00403e24  addiu a0,a0,-0x2e40
00403e28  addiu a1,a1,0x3b80
00403e2c  jalr t9
00403e30  _move a2,s0
00403e34  lw gp,0x38(sp)
00403e38  bne v0,zero,0x00403e94
00403e3c  _nop
00403e40  lw t9,-0x7e34(gp)
00403e44  lw a0,0x4(s0)
00403e48  jalr t9
00403e4c  _nop
00403e50  lw gp,0x38(sp)
00403e54  bne v0,zero,0x00403e94
00403e58  _nop
00403e5c  lw t9,-0x7f00(gp)
00403e60  nop
00403e64  jalr t9
00403e68  _nop
00403e6c  lw gp,0x38(sp)
00403e70  bne v0,zero,0x00403e94
00403e74  _lui v1,0x43
00403e78  lw t9,-0x7f70(gp)
00403e7c  sb s1,0x35e0(v1)
00403e80  move a0,s0
00403e84  jalr t9
00403e88  _li a1,0x1
00403e8c  lw gp,0x38(sp)
00403e90  movz s3,s1,v0
00403e94  lw a0,0x40(sp)
00403e98  b 0x00403ffc
00403e9c  _nop
00403ea0  lw t9,0x44(s0)
00403ea4  nop
00403ea8  beq t9,zero,0x00403ec0
00403eac  _move a0,s0
00403eb0  jalr t9
00403eb4  _li a1,0x1
00403eb8  lw gp,0x38(sp)
00403ebc  nop
00403ec0  lw t9,-0x7dc8(gp)
00403ec4  lw a0,0x78(sp)
00403ec8  jalr t9
00403ecc  _nop
00403ed0  lw gp,0x38(sp)
00403ed4  lw a0,0x1c(s0)
00403ed8  lui a1,0x42
00403edc  lw t9,-0x7e10(gp)
00403ee0  nop
00403ee4  jalr t9
00403ee8  _addiu a1,a1,-0x2e28
00403eec  lw gp,0x38(sp)
00403ef0  bne v0,zero,0x00404c4c
00403ef4  _nop
00403ef8  b 0x00404c3c
00403efc  _li s3,0x2
00403f00  lw t9,-0x7f64(gp)
00403f04  lw a0,0x8c(sp)
00403f08  sw zero,0x54(sp)
00403f0c  sw zero,0x4c(sp)
00403f10  sw zero,0x48(sp)
00403f14  sw zero,0x44(sp)
00403f18  jalr t9
00403f1c  _li a1,0x1
00403f20  lw gp,0x38(sp)
00403f24  bne v0,zero,0x00403fcc
00403f28  _addiu a3,sp,0x48
00403f2c  lw v0,0x1c(s0)
00403f30  lw a0,0x34(s0)
00403f34  lw t9,-0x7e70(gp)
00403f38  lw a2,0x808(v0)
00403f3c  lw a1,0x804(v0)
00403f40  addiu v0,sp,0x44
00403f44  sw v0,0x10(sp)
00403f48  lw v0,0x84(sp)
00403f4c  jalr t9
00403f50  _sw v0,0x14(sp)
00403f54  lw gp,0x38(sp)
00403f58  bne v0,zero,0x00403fcc
00403f5c  _nop
00403f60  lbu v1,0x40(sp)
00403f64  nop
00403f68  beq v1,zero,0x00403fcc
00403f6c  _lui a0,0x42
00403f70  lw v1,0x88(sp)
00403f74  lw t9,-0x7ef0(gp)
00403f78  lw a1,0x48(sp)
00403f7c  lw a2,0x44(sp)
00403f80  sw v1,0x10(sp)
00403f84  addiu a0,a0,-0x2e1c
00403f88  jalr t9
00403f8c  _addiu a3,sp,0x54
00403f90  lw gp,0x38(sp)
00403f94  bne v0,zero,0x00403fcc
00403f98  _nop
00403f9c  lw a1,0x54(sp)
00403fa0  nop
00403fa4  beq a1,zero,0x00403fcc
00403fa8  _nop
00403fac  lw t9,-0x7e50(gp)
00403fb0  lw a0,0x4(s0)
00403fb4  lw a2,0x4c(sp)
00403fb8  jalr t9
00403fbc  _nop
00403fc0  lw gp,0x38(sp)
00403fc4  li v1,0x3
00403fc8  movz s3,v1,v0
00403fcc  lw a0,0x48(sp)
00403fd0  nop
00403fd4  beq a0,zero,0x00403ff4
00403fd8  _nop
00403fdc  lw t9,-0x7fb8(gp)
00403fe0  nop
00403fe4  jalr t9
00403fe8  _sw v0,0x90(sp)
00403fec  lw gp,0x38(sp)
00403ff0  lw v0,0x90(sp)
00403ff4  lw a0,0x54(sp)
00403ff8  nop
00403ffc  beq a0,zero,0x00404020
00404000  _nop
00404004  lw t9,-0x7fb8(gp)
00404008  nop
0040400c  jalr t9
00404010  _sw v0,0x90(sp)
00404014  lw gp,0x38(sp)
00404018  lw v0,0x90(sp)
0040401c  nop
00404020  beq v0,zero,0x00404c3c
00404024  _nop
00404028  b 0x00404c4c
0040402c  _nop
00404030  lw t9,-0x7dc8(gp)
00404034  lw a0,0x78(sp)
00404038  jalr t9
0040403c  _nop
00404040  lw gp,0x38(sp)
00404044  lw a0,0x1c(s0)
00404048  lui a1,0x42
0040404c  lw t9,-0x7e10(gp)
00404050  nop
00404054  jalr t9
00404058  _addiu a1,a1,-0x2e00
0040405c  lw gp,0x38(sp)
00404060  bne v0,zero,0x00404c4c
00404064  _nop
00404068  lw t9,0x44(s0)
0040406c  nop
00404070  beq t9,zero,0x00404d54
00404074  _move a0,s0
00404078  jalr t9
0040407c  _li a1,0x2
00404080  lw gp,0x38(sp)
00404084  b 0x00404c3c
00404088  _li s3,0x4
0040408c  lw t9,-0x7db4(gp)
00404090  sw zero,0x44(sp)
00404094  sw zero,0x48(sp)
00404098  jalr t9
0040409c  _move a0,s0
004040a0  lw gp,0x38(sp)
004040a4  bne v0,zero,0x004049bc
004040a8  _move s1,v0
004040ac  lw v0,0x1c(s0)
004040b0  lw t9,-0x7dc0(gp)
004040b4  lw a0,0x808(v0)
004040b8  jalr t9
004040bc  _nop
004040c0  lw gp,0x38(sp)
004040c4  bne v0,zero,0x004040e0
004040c8  _move s2,v0
004040cc  clear s4
004040d0  clear s7
004040d4  clear s6
004040d8  b 0x004049d8
004040dc  _clear s8
004040e0  lw v0,0x1c(s0)
004040e4  lw t9,-0x7d74(gp)
004040e8  lw a0,0x34(s0)
004040ec  lw a2,0x808(v0)
004040f0  lw a1,0x804(v0)
004040f4  jalr t9
004040f8  _move a3,s2
004040fc  lw gp,0x38(sp)
00404100  bne v0,zero,0x004049bc
00404104  _move s1,v0
00404108  lw v0,0x1c(s0)
0040410c  nop
00404110  lw v0,0x808(v0)
00404114  sw s2,0x4c(sp)
00404118  addu a0,s2,v0
0040411c  bne v0,zero,0x0040413c
00404120  _sw a0,0x58(sp)
00404124  clear s4
00404128  clear s7
0040412c  clear s6
00404130  clear s8
00404134  b 0x00404258
00404138  _li s5,-0x1a31
0040413c  addiu a1,sp,0x54
00404140  addiu v0,sp,0x50
00404144  clear s4
00404148  clear s7
0040414c  clear s6
00404150  clear s8
00404154  sw a1,0x5c(sp)
00404158  sw v0,0x60(sp)
0040415c  b 0x00404220
00404160  _li s5,0xc
00404164  lw a0,0x50(sp)
00404168  lw t9,-0x7e1c(gp)
0040416c  nop
00404170  jalr t9
00404174  _addiu a0,a0,0x1
00404178  lw gp,0x38(sp)
0040417c  bne v0,zero,0x0040418c
00404180  _move a0,v0
00404184  b 0x00404258
00404188  _li s5,-0x1a48
0040418c  lw t9,-0x7d98(gp)
00404190  lw a1,0x54(sp)
00404194  lw a2,0x50(sp)
00404198  sw v0,0x9c(sp)
0040419c  jalr t9
004041a0  _sw v0,0x98(sp)
004041a4  lbu v0,0x40(sp)
004041a8  li a0,0x9
004041ac  lw gp,0x38(sp)
004041b0  lw v1,0x9c(sp)
004041b4  lw a3,0x98(sp)
004041b8  beq v0,a0,0x0040421c
004041bc  _sltiu a0,v0,0xa
004041c0  beq a0,zero,0x004041dc
004041c4  _li a0,0xb
004041c8  li a1,0x8
004041cc  bne v0,a1,0x00404200
004041d0  _nop
004041d4  b 0x004041f0
004041d8  _move s7,v1
004041dc  beq v0,a0,0x004041f8
004041e0  _nop
004041e4  bne v0,s5,0x00404200
004041e8  _nop
004041ec  move s8,v1
004041f0  b 0x0040421c
004041f4  _move v1,s4
004041f8  b 0x004041f0
004041fc  _move s6,v1
00404200  lw t9,-0x7fb8(gp)
00404204  move a0,a3
00404208  jalr t9
0040420c  _sw s4,0x9c(sp)
00404210  lw gp,0x38(sp)
00404214  lw v1,0x9c(sp)
00404218  nop
0040421c  move s4,v1
00404220  lw a1,0x60(sp)
00404224  lw v0,0x88(sp)
00404228  lw t9,-0x7f1c(gp)
0040422c  sw a1,0x10(sp)
00404230  lw a0,0x4c(sp)
00404234  lw a1,0x58(sp)
00404238  lw a2,0x84(sp)
0040423c  lw a3,0x5c(sp)
00404240  jalr t9
00404244  _sw v0,0x14(sp)
00404248  lw gp,0x38(sp)
0040424c  beq v0,zero,0x00404164
00404250  _li a1,0x1
00404254  clear s5
00404258  lw t9,-0x7fb8(gp)
0040425c  nop
00404260  jalr t9
00404264  _move a0,s2
00404268  lw gp,0x38(sp)
0040426c  bne s5,zero,0x004049d0
00404270  _nop
00404274  beq s8,zero,0x004049d0
00404278  _nop
0040427c  lw t9,0x44(s0)
00404280  nop
00404284  beq t9,zero,0x00404298
00404288  _move a0,s0
0040428c  jalr t9
00404290  _li a1,0x3
00404294  lw gp,0x38(sp)
00404298  lw v1,0x0(s0)
0040429c  nop
004042a0  sw v1,0x58(sp)
004042a4  lbu s5,0x28(v1)
004042a8  nop
004042ac  beq s5,zero,0x00404868
004042b0  _addiu a0,sp,0x44
004042b4  lw a0,0x18(v1)
004042b8  nop
004042bc  bne a0,zero,0x004042cc
004042c0  _clear s2
004042c4  b 0x004042ec
004042c8  _sw zero,0x5c(sp)
004042cc  lw t9,-0x7e0c(gp)
004042d0  nop
004042d4  jalr t9
004042d8  _li a1,0xff
004042dc  lw gp,0x38(sp)
004042e0  andi v0,v0,0xff
004042e4  sw v0,0x5c(sp)
004042e8  addiu s2,v0,0x2
004042ec  lw a1,0x58(sp)
004042f0  nop
004042f4  lw a0,0x20(a1)
004042f8  nop
004042fc  beq a0,zero,0x00404324
00404300  _sw zero,0x60(sp)
00404304  lw t9,-0x7e0c(gp)
00404308  li a1,0xff
0040430c  jalr t9
00404310  _addiu s2,s2,0x2
00404314  lw gp,0x38(sp)
00404318  andi v0,v0,0xff
0040431c  sw v0,0x60(sp)
00404320  addu s2,s2,v0
00404324  lw v0,0x58(sp)
00404328  nop
0040432c  lw a0,0x1c(v0)
00404330  nop
00404334  beq a0,zero,0x0040435c
00404338  _sw zero,0x64(sp)
0040433c  lw t9,-0x7e0c(gp)
00404340  li a1,0xff
00404344  jalr t9
00404348  _addiu s2,s2,0x2
0040434c  lw gp,0x38(sp)
00404350  andi v0,v0,0xff
00404354  sw v0,0x64(sp)
00404358  addu s2,s2,v0
0040435c  lw v1,0x58(sp)
00404360  nop
00404364  lw a0,0xc(v1)
00404368  nop
0040436c  beq a0,zero,0x00404394
00404370  _sw zero,0x68(sp)
00404374  lw t9,-0x7e0c(gp)
00404378  li a1,0xff
0040437c  jalr t9
00404380  _addiu s2,s2,0x2
00404384  lw gp,0x38(sp)
00404388  andi v0,v0,0xff
0040438c  sw v0,0x68(sp)
00404390  addu s2,s2,v0
00404394  lw a1,0x58(sp)
00404398  nop
0040439c  lw a0,0x10(a1)
004043a0  nop
004043a4  beq a0,zero,0x004043cc
004043a8  _sw zero,0x6c(sp)
004043ac  lw t9,-0x7e0c(gp)
004043b0  li a1,0xff
004043b4  jalr t9
004043b8  _addiu s2,s2,0x2
004043bc  lw gp,0x38(sp)
004043c0  andi v0,v0,0xff
004043c4  sw v0,0x6c(sp)
004043c8  addu s2,s2,v0
004043cc  lw v0,0x58(sp)
004043d0  nop
004043d4  lw a0,0x14(v0)
004043d8  nop
004043dc  beq a0,zero,0x00404404
004043e0  _sw zero,0x70(sp)
004043e4  lw t9,-0x7e0c(gp)
004043e8  li a1,0xff
004043ec  jalr t9
004043f0  _addiu s2,s2,0x2
004043f4  lw gp,0x38(sp)
004043f8  andi v0,v0,0xff
004043fc  sw v0,0x70(sp)
00404400  addu s2,s2,v0
00404404  lw v1,0x58(sp)
00404408  nop
0040440c  lw a0,0x2c(v1)
00404410  nop
00404414  beq a0,zero,0x0040443c
00404418  _sw zero,0x74(sp)
0040441c  lw t9,-0x7e0c(gp)
00404420  li a1,0xff
00404424  jalr t9
00404428  _addiu s2,s2,0x2
0040442c  lw gp,0x38(sp)
00404430  andi v0,v0,0xff
00404434  sw v0,0x74(sp)
00404438  addu s2,s2,v0
0040443c  lw t9,-0x7e1c(gp)
00404440  move a0,s5
00404444  jalr t9
00404448  _li a1,0x4
0040444c  lw gp,0x38(sp)
00404450  sw v0,0x7c(sp)
00404454  bne v0,zero,0x004044a8
00404458  _clear s5
0040445c  b 0x004049dc
00404460  _li s1,-0x1a48
00404464  lw a0,0x58(sp)
00404468  lw t9,-0x7e0c(gp)
0040446c  lw v1,0x24(a0)
00404470  nop
00404474  addu v0,v1,v0
00404478  lw a0,0x0(v0)
0040447c  jalr t9
00404480  _li a1,0xff
00404484  lw a1,0x7c(sp)
00404488  andi v0,v0,0xff
0040448c  addiu v1,s5,0x1
00404490  addiu a0,v0,0x2
00404494  addu s5,a1,s5
00404498  lw gp,0x38(sp)
0040449c  addu s2,s2,a0
004044a0  sb v0,0x0(s5)
004044a4  andi s5,v1,0xff
004044a8  lw v1,0x58(sp)
004044ac  nop
004044b0  lbu v0,0x28(v1)
004044b4  nop
004044b8  sltu v0,s5,v0
004044bc  bne v0,zero,0x00404464
004044c0  _sll v0,s5,0x2
004044c4  lw t9,-0x7e1c(gp)
004044c8  move a0,s2
004044cc  jalr t9
004044d0  _li a1,0x1
004044d4  lw gp,0x38(sp)
004044d8  beq v0,zero,0x00404d5c
004044dc  _move s5,v0
004044e0  lw a0,0x5c(sp)
004044e4  nop
004044e8  beq a0,zero,0x00404530
004044ec  _move v1,v0
004044f0  li v0,0x8
004044f4  sb v0,0x0(s5)
004044f8  lw a1,0x5c(sp)
004044fc  lw t9,-0x7d98(gp)
00404500  addiu v1,s5,0x2
00404504  sb a1,0x1(s5)
00404508  lw v0,0x58(sp)
0040450c  lw a2,0x5c(sp)
00404510  move a0,v1
00404514  lw a1,0x18(v0)
00404518  jalr t9
0040451c  _sw v1,0x9c(sp)
00404520  lw v1,0x9c(sp)
00404524  lw a0,0x5c(sp)
00404528  lw gp,0x38(sp)
0040452c  addu v1,v1,a0
00404530  lw a1,0x60(sp)
00404534  nop
00404538  beq a1,zero,0x00404578
0040453c  _li v0,0x5
00404540  sb v0,0x0(v1)
00404544  sb a1,0x1(v1)
00404548  lw v0,0x58(sp)
0040454c  lw t9,-0x7d98(gp)
00404550  lw a2,0x60(sp)
00404554  lw a1,0x20(v0)
00404558  addiu v1,v1,0x2
0040455c  move a0,v1
00404560  jalr t9
00404564  _sw v1,0x9c(sp)
00404568  lw v1,0x9c(sp)
0040456c  lw a0,0x60(sp)
00404570  lw gp,0x38(sp)
00404574  addu v1,v1,a0
00404578  lw a1,0x64(sp)
0040457c  nop
00404580  beq a1,zero,0x004045c0
00404584  _li v0,0x7
00404588  sb v0,0x0(v1)
0040458c  sb a1,0x1(v1)
00404590  lw v0,0x58(sp)
00404594  lw t9,-0x7d98(gp)
00404598  lw a2,0x64(sp)
0040459c  lw a1,0x1c(v0)
004045a0  addiu v1,v1,0x2
004045a4  move a0,v1
004045a8  jalr t9
004045ac  _sw v1,0x9c(sp)
004045b0  lw v1,0x9c(sp)
004045b4  lw a0,0x64(sp)
004045b8  lw gp,0x38(sp)
004045bc  addu v1,v1,a0
004045c0  lw a1,0x70(sp)
004045c4  nop
004045c8  beq a1,zero,0x00404608
004045cc  _li v0,0xa
004045d0  sb v0,0x0(v1)
004045d4  sb a1,0x1(v1)
004045d8  lw v0,0x58(sp)
004045dc  lw t9,-0x7d98(gp)
004045e0  lw a2,0x70(sp)
004045e4  lw a1,0x14(v0)
004045e8  addiu v1,v1,0x2
004045ec  move a0,v1
004045f0  jalr t9
004045f4  _sw v1,0x9c(sp)
004045f8  lw v1,0x9c(sp)
004045fc  lw a0,0x70(sp)
00404600  lw gp,0x38(sp)
00404604  addu v1,v1,a0
00404608  lw a1,0x68(sp)
0040460c  nop
00404610  beq a1,zero,0x00404650
00404614  _li v0,0x2
00404618  sb v0,0x0(v1)
0040461c  sb a1,0x1(v1)
00404620  lw v0,0x58(sp)
00404624  lw t9,-0x7d98(gp)
00404628  lw a2,0x68(sp)
0040462c  lw a1,0xc(v0)
00404630  addiu v1,v1,0x2
00404634  move a0,v1
00404638  jalr t9
0040463c  _sw v1,0x9c(sp)
00404640  lw v1,0x9c(sp)
00404644  lw a0,0x68(sp)
00404648  lw gp,0x38(sp)
0040464c  addu v1,v1,a0
00404650  lw a1,0x6c(sp)
00404654  nop
00404658  beq a1,zero,0x00404698
0040465c  _li v0,0x3
00404660  sb v0,0x0(v1)
00404664  sb a1,0x1(v1)
00404668  lw v0,0x58(sp)
0040466c  lw t9,-0x7d98(gp)
00404670  lw a2,0x6c(sp)
00404674  lw a1,0x10(v0)
00404678  addiu v1,v1,0x2
0040467c  move a0,v1
00404680  jalr t9
00404684  _sw v1,0x9c(sp)
00404688  lw v1,0x9c(sp)
0040468c  lw a0,0x6c(sp)
00404690  lw gp,0x38(sp)
00404694  addu v1,v1,a0
00404698  clear a3
0040469c  b 0x00404718
004046a0  _li t1,0x6
004046a4  sb t1,0x0(v1)
004046a8  lw a1,0x7c(sp)
004046ac  lw t9,-0x7d98(gp)
004046b0  addu t0,a1,a3
004046b4  lbu a0,0x0(t0)
004046b8  nop
004046bc  sb a0,0x1(v1)
004046c0  lw a1,0x58(sp)
004046c4  lbu a2,0x0(t0)
004046c8  addiu v1,v1,0x2
004046cc  lw a0,0x24(a1)
004046d0  nop
004046d4  addu v0,a0,v0
004046d8  lw a1,0x0(v0)
004046dc  move a0,v1
004046e0  sw v1,0x9c(sp)
004046e4  sw a3,0x98(sp)
004046e8  sw t0,0x90(sp)
004046ec  jalr t9
004046f0  _sw t1,0x94(sp)
004046f4  lw t0,0x90(sp)
004046f8  lw a3,0x98(sp)
004046fc  lw v1,0x9c(sp)
00404700  lbu v0,0x0(t0)
00404704  lw gp,0x38(sp)
00404708  lw t1,0x94(sp)
0040470c  addiu a3,a3,0x1
00404710  andi a3,a3,0xff
00404714  addu v1,v1,v0
00404718  lw a0,0x58(sp)
0040471c  nop
00404720  lbu v0,0x28(a0)
00404724  nop
00404728  sltu v0,a3,v0
0040472c  bne v0,zero,0x004046a4
00404730  _sll v0,a3,0x2
00404734  lw a1,0x74(sp)
00404738  nop
0040473c  beq a1,zero,0x00404778
00404740  _li v0,0x1
00404744  sb v0,0x0(v1)
00404748  sb a1,0x1(v1)
0040474c  lw a1,0x2c(a0)
00404750  lw t9,-0x7d98(gp)
00404754  lw a2,0x74(sp)
00404758  addiu v1,v1,0x2
0040475c  move a0,v1
00404760  jalr t9
00404764  _sw v1,0x9c(sp)
00404768  lw v1,0x9c(sp)
0040476c  lw v0,0x74(sp)
00404770  lw gp,0x38(sp)
00404774  addu v1,v1,v0
00404778  subu v1,v1,s2
0040477c  beq v1,s5,0x0040479c
00404780  _move a0,s5
00404784  lw t9,-0x7fb8(gp)
00404788  nop
0040478c  jalr t9
00404790  _li s1,-0x1a57
00404794  lw gp,0x38(sp)
00404798  nop
0040479c  lw t9,-0x7fb8(gp)
004047a0  lw a0,0x7c(sp)
004047a4  jalr t9
004047a8  _nop
004047ac  lw gp,0x38(sp)
004047b0  bne s1,zero,0x004049dc
004047b4  _nop
004047b8  beq s5,zero,0x004049d8
004047bc  _nop
004047c0  beq s2,zero,0x004049d8
004047c4  _nop
004047c8  lw t9,-0x7dc0(gp)
004047cc  nop
004047d0  jalr t9
004047d4  _move a0,s2
004047d8  lw gp,0x38(sp)
004047dc  beq v0,zero,0x004049dc
004047e0  _move a1,s5
004047e4  lw t9,-0x7fac(gp)
004047e8  lw a0,0x34(s0)
004047ec  move a2,s2
004047f0  move a3,v0
004047f4  jalr t9
004047f8  _sw v0,0x9c(sp)
004047fc  lw gp,0x38(sp)
00404800  lw v1,0x9c(sp)
00404804  addiu v0,sp,0x48
00404808  lw t9,-0x7ef0(gp)
0040480c  lui a0,0x42
00404810  move a1,v1
00404814  move a2,s2
00404818  addiu a3,sp,0x44
0040481c  addiu a0,a0,-0x2df8
00404820  jalr t9
00404824  _sw v0,0x10(sp)
00404828  lw gp,0x38(sp)
0040482c  lw v1,0x9c(sp)
00404830  move s1,v0
00404834  lw t9,-0x7fb8(gp)
00404838  nop
0040483c  jalr t9
00404840  _move a0,v1
00404844  lw gp,0x38(sp)
00404848  nop
0040484c  lw t9,-0x7fb8(gp)
00404850  nop
00404854  jalr t9
00404858  _move a0,s5
0040485c  lw gp,0x38(sp)
00404860  b 0x00404880
00404864  _nop
00404868  lw t9,-0x7e30(gp)
0040486c  nop
00404870  jalr t9
00404874  _addiu a1,sp,0x48
00404878  lw gp,0x38(sp)
0040487c  move s1,v0
00404880  bne s1,zero,0x004049dc
00404884  _nop
00404888  lw t9,-0x7e50(gp)
0040488c  lw a0,0x4(s0)
00404890  lw a1,0x44(sp)
00404894  lw a2,0x48(sp)
00404898  jalr t9
0040489c  _nop
004048a0  lw gp,0x38(sp)
004048a4  bne v0,zero,0x004049dc
004048a8  _move s1,v0
004048ac  lw t9,-0x7ee0(gp)
004048b0  lw a0,0x4(s0)
004048b4  jalr t9
004048b8  _nop
004048bc  lw gp,0x38(sp)
004048c0  bne v0,zero,0x004049dc
004048c4  _move s1,v0
004048c8  lw t9,-0x7dc8(gp)
004048cc  lw a0,0x80(sp)
004048d0  jalr t9
004048d4  _nop
004048d8  lw gp,0x38(sp)
004048dc  lw a0,0x4(s0)
004048e0  lw t9,-0x7e68(gp)
004048e4  nop
004048e8  jalr t9
004048ec  _nop
004048f0  lw gp,0x38(sp)
004048f4  nop
004048f8  lw t9,-0x7d60(gp)
004048fc  nop
00404900  jalr t9
00404904  _nop
00404908  lw gp,0x38(sp)
0040490c  bne v0,zero,0x004049dc
00404910  _move s1,v0
00404914  beq s7,zero,0x00404938
00404918  _nop
0040491c  lw t9,-0x7fc4(gp)
00404920  nop
00404924  jalr t9
00404928  _move a0,s7
0040492c  lw gp,0x38(sp)
00404930  bne v0,zero,0x004049dc
00404934  _move s1,v0
00404938  beq s4,zero,0x00404974
0040493c  _nop
00404940  lw v0,0x0(s0)
00404944  nop
00404948  lbu v0,0x7(v0)
0040494c  nop
00404950  beq v0,zero,0x00404974
00404954  _nop
00404958  lw t9,-0x7d40(gp)
0040495c  nop
00404960  jalr t9
00404964  _move a0,s4
00404968  lw gp,0x38(sp)
0040496c  bne v0,zero,0x004049dc
00404970  _move s1,v0
00404974  beq s6,zero,0x00404994
00404978  _clear v0
0040497c  lw t9,-0x7f74(gp)
00404980  nop
00404984  jalr t9
00404988  _move a0,s6
0040498c  lw gp,0x38(sp)
00404990  nop
00404994  lw t9,-0x7e84(gp)
00404998  move a2,v0
0040499c  move a0,s8
004049a0  jalr t9
004049a4  _move a1,s6
004049a8  move s1,v0
004049ac  li v0,0x5
004049b0  lw gp,0x38(sp)
004049b4  b 0x004049dc
004049b8  _movz s3,v0,s1
004049bc  clear s4
004049c0  clear s7
004049c4  clear s6
004049c8  b 0x004049dc
004049cc  _clear s8
004049d0  b 0x004049dc
004049d4  _li s1,-0x1a38
004049d8  li s1,-0x1a48
004049dc  lw a0,0x4(s0)
004049e0  nop
004049e4  beq a0,zero,0x00404a00
004049e8  _nop
004049ec  lw t9,-0x7fb8(gp)
004049f0  nop
004049f4  jalr t9
004049f8  _nop
004049fc  lw gp,0x38(sp)
00404a00  lw a0,0x44(sp)
00404a04  nop
00404a08  beq a0,zero,0x00404a24
00404a0c  _nop
00404a10  lw t9,-0x7fb8(gp)
00404a14  nop
00404a18  jalr t9
00404a1c  _nop
00404a20  lw gp,0x38(sp)
00404a24  beq s8,zero,0x00404a40
00404a28  _nop
00404a2c  lw t9,-0x7fb8(gp)
00404a30  nop
00404a34  jalr t9
00404a38  _move a0,s8
00404a3c  lw gp,0x38(sp)
00404a40  beq s6,zero,0x00404a5c
00404a44  _nop
00404a48  lw t9,-0x7fb8(gp)
00404a4c  nop
00404a50  jalr t9
00404a54  _move a0,s6
00404a58  lw gp,0x38(sp)
00404a5c  beq s7,zero,0x00404a78
00404a60  _nop
00404a64  lw t9,-0x7fb8(gp)
00404a68  nop
00404a6c  jalr t9
00404a70  _move a0,s7
00404a74  lw gp,0x38(sp)
00404a78  beq s4,zero,0x00404c08
00404a7c  _move a0,s4
00404a80  lw t9,-0x7fb8(gp)
00404a84  b 0x00404bfc
00404a88  _nop
00404a8c  lw t9,-0x7dc0(gp)
00404a90  nop
00404a94  jalr t9
00404a98  _li a0,0x3c
00404a9c  lw gp,0x38(sp)
00404aa0  lui a0,0x42
00404aa4  lui a1,0x40
00404aa8  lw t9,-0x7f04(gp)
00404aac  sw v0,0x4(s0)
00404ab0  move a3,v0
00404ab4  addiu a0,a0,-0x2e40
00404ab8  addiu a1,a1,0x3b80
00404abc  jalr t9
00404ac0  _move a2,s0
00404ac4  lw gp,0x38(sp)
00404ac8  bne v0,zero,0x00404c4c
00404acc  _nop
00404ad0  lw t9,-0x7e34(gp)
00404ad4  lw a0,0x4(s0)
00404ad8  jalr t9
00404adc  _nop
00404ae0  lw gp,0x38(sp)
00404ae4  bne v0,zero,0x00404c4c
00404ae8  _lui v1,0x43
00404aec  lbu a1,0x35e0(v1)
00404af0  lw t9,-0x7f70(gp)
00404af4  move a0,s0
00404af8  addiu a1,a1,0x1
00404afc  andi a1,a1,0xff
00404b00  jalr t9
00404b04  _sb a1,0x35e0(v1)
00404b08  lw gp,0x38(sp)
00404b0c  bne v0,zero,0x00404c4c
00404b10  _nop
00404b14  lw t9,-0x7dc8(gp)
00404b18  lw a0,0x78(sp)
00404b1c  jalr t9
00404b20  _nop
00404b24  lw gp,0x38(sp)
00404b28  lw a0,0x1c(s0)
00404b2c  lui a1,0x42
00404b30  lw t9,-0x7e10(gp)
00404b34  nop
00404b38  jalr t9
00404b3c  _addiu a1,a1,-0x2de4
00404b40  lw gp,0x38(sp)
00404b44  beq v0,zero,0x00404d74
00404b48  _nop
00404b4c  b 0x00404c4c
00404b50  _nop
00404b54  lw t9,-0x7db4(gp)
00404b58  sw zero,0x50(sp)
00404b5c  sw zero,0x54(sp)
00404b60  jalr t9
00404b64  _move a0,s0
00404b68  lw gp,0x38(sp)
00404b6c  bne v0,zero,0x00404be4
00404b70  _move s1,v0
00404b74  lw t9,-0x7e30(gp)
00404b78  addiu a0,sp,0x50
00404b7c  jalr t9
00404b80  _addiu a1,sp,0x54
00404b84  lw gp,0x38(sp)
00404b88  bne v0,zero,0x00404be4
00404b8c  _move s1,v0
00404b90  lw t9,-0x7e50(gp)
00404b94  lw a0,0x4(s0)
00404b98  lw a1,0x50(sp)
00404b9c  lw a2,0x54(sp)
00404ba0  jalr t9
00404ba4  _nop
00404ba8  lw gp,0x38(sp)
00404bac  bne v0,zero,0x00404be4
00404bb0  _move s1,v0
00404bb4  lw t9,-0x7ee0(gp)
00404bb8  lw a0,0x4(s0)
00404bbc  jalr t9
00404bc0  _nop
00404bc4  lw gp,0x38(sp)
00404bc8  bne v0,zero,0x00404be4
00404bcc  _move s1,v0
00404bd0  lw t9,-0x7dc8(gp)
00404bd4  lw a0,0x80(sp)
00404bd8  jalr t9
00404bdc  _li s3,0x7
00404be0  lw gp,0x38(sp)
00404be4  lw a0,0x50(sp)
00404be8  nop
00404bec  beq a0,zero,0x00404c08
00404bf0  _nop
00404bf4  lw t9,-0x7fb8(gp)
00404bf8  nop
00404bfc  jalr t9
00404c00  _nop
00404c04  lw gp,0x38(sp)
00404c08  beq s1,zero,0x00404c3c
00404c0c  _nop
00404c10  b 0x00404c4c
00404c14  _nop
00404c18  lw t9,0x44(s0)
00404c1c  nop
00404c20  beq t9,zero,0x00404c4c
00404c24  _move a0,s0
00404c28  jalr t9
00404c2c  _li a1,0x4
00404c30  lw gp,0x38(sp)
00404c34  b 0x00404c4c
00404c38  _nop
00404c3c  lbu v0,0x40(s0)
00404c40  nop
00404c44  beq v0,zero,0x00403cb8
00404c48  _sltiu v0,s3,0x8
00404c4c  lw t9,-0x7db4(gp)
00404c50  nop
00404c54  jalr t9
00404c58  _move a0,s0
00404c5c  lw gp,0x38(sp)
00404c60  nop
00404c64  lw t9,-0x7e48(gp)
00404c68  nop
00404c6c  jalr t9
00404c70  _nop
00404c74  lw gp,0x38(sp)
00404c78  lw a0,0x4(s0)
00404c7c  lw t9,-0x7e68(gp)
00404c80  nop
00404c84  jalr t9
00404c88  _nop
00404c8c  lw a0,0x4(s0)
00404c90  lw gp,0x38(sp)
00404c94  beq a0,zero,0x00404cb4
00404c98  _nop
00404c9c  lw t9,-0x7fb8(gp)
00404ca0  nop
00404ca4  jalr t9
00404ca8  _nop
00404cac  lw gp,0x38(sp)
00404cb0  nop
00404cb4  lw t9,-0x7e08(gp)
00404cb8  nop
00404cbc  jalr t9
00404cc0  _nop
00404cc4  lbu v0,0x20(s0)
00404cc8  lw gp,0x38(sp)
00404ccc  beq v0,zero,0x00404ce8
00404cd0  _nop
00404cd4  lw t9,-0x7db8(gp)
00404cd8  lw a0,0x78(sp)
00404cdc  jalr t9
00404ce0  _nop
00404ce4  lw gp,0x38(sp)
00404ce8  lbu v0,0x18(s0)
00404cec  nop
00404cf0  beq v0,zero,0x00404d08
00404cf4  _nop
00404cf8  lw t9,-0x7db8(gp)
00404cfc  lw a0,0x80(sp)
00404d00  jalr t9
00404d04  _nop
00404d08  lw t9,0x44(s0)
00404d0c  nop
00404d10  beq t9,zero,0x00404d20
00404d14  _move a0,s0
00404d18  jalr t9
00404d1c  _li a1,0x5
00404d20  lw ra,0xc4(sp)
00404d24  lw s8,0xc0(sp)
00404d28  lw s7,0xbc(sp)
00404d2c  lw s6,0xb8(sp)
00404d30  lw s5,0xb4(sp)
00404d34  lw s4,0xb0(sp)
00404d38  lw s3,0xac(sp)
00404d3c  lw s2,0xa8(sp)
00404d40  lw s1,0xa4(sp)
00404d44  lw s0,0xa0(sp)
00404d48  clear v0
00404d4c  jr ra
00404d50  _addiu sp,sp,0xc8
00404d54  b 0x00404c3c
00404d58  _li s3,0x4
00404d5c  lw a0,0x7c(sp)
00404d60  nop
00404d64  beq a0,zero,0x004049d8
00404d68  _li s1,-0x1a48
00404d6c  b 0x0040479c
00404d70  _nop
00404d74  b 0x00404c3c
00404d78  _li s3,0x6
