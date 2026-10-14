# FUN_004076bc @ 004076bc
004076bc  addiu sp,sp,-0x710
004076c0  sw ra,0x70c(sp)
004076c4  sw s8,0x708(sp)
004076c8  sw s7,0x704(sp)
004076cc  sw s6,0x700(sp)
004076d0  sw s5,0x6fc(sp)
004076d4  sw s4,0x6f8(sp)
004076d8  sw s3,0x6f4(sp)
004076dc  sw s2,0x6f0(sp)
004076e0  sw s1,0x6ec(sp)
004076e4  sw s0,0x6e8(sp)
004076e8  lui gp,0x43
004076ec  addiu gp,gp,-0x4bb0
004076f0  sw gp,0x10(sp)
004076f4  lw t9,-0x7fa4(gp)
004076f8  sw zero,0x18(sp)
004076fc  sw zero,0x24(sp)
00407700  sw zero,0x28(sp)
00407704  sw zero,0x2c(sp)
00407708  sw zero,0x30(sp)
0040770c  sw zero,0x34(sp)
00407710  sw zero,0x38(sp)
00407714  sw zero,0x3c(sp)
00407718  sw zero,0x40(sp)
0040771c  sw zero,0x44(sp)
00407720  sw zero,0x48(sp)
00407724  sw zero,0x4c(sp)
00407728  sw zero,0x50(sp)
0040772c  sw zero,0x54(sp)
00407730  sw zero,0x58(sp)
00407734  sw zero,0x5c(sp)
00407738  sw zero,0x60(sp)
0040773c  sw zero,0x64(sp)
00407740  move s0,a0
00407744  move s1,a1
00407748  move s2,a2
0040774c  jalr t9
00407750  _move s3,a3
00407754  lw gp,0x10(sp)
00407758  bne v0,zero,0x00407778
0040775c  _nop
00407760  lw t9,-0x7e8c(gp)
00407764  lui a0,0x41
00407768  jalr t9
0040776c  _addiu a0,a0,0x1174
00407770  b 0x00407f0c
00407774  _nop
00407778  lui a0,0x41
0040777c  jal 0x004021d4
00407780  _addiu a0,a0,0xf9c
00407784  lw gp,0x10(sp)
00407788  li a0,0x111
0040778c  lw t9,-0x7ea4(gp)
00407790  nop
00407794  jalr t9
00407798  _addiu a1,sp,0x580
0040779c  lw gp,0x10(sp)
004077a0  li a0,0x118
004077a4  lw t9,-0x7ea4(gp)
004077a8  nop
004077ac  jalr t9
004077b0  _addiu a1,sp,0x20
004077b4  lw gp,0x10(sp)
004077b8  li a0,0x117
004077bc  lw t9,-0x7ea4(gp)
004077c0  nop
004077c4  jalr t9
004077c8  _addiu a1,sp,0x2c
004077cc  lw gp,0x10(sp)
004077d0  li a0,0x10f
004077d4  lw t9,-0x7ea4(gp)
004077d8  nop
004077dc  jalr t9
004077e0  _addiu a1,sp,0x30
004077e4  lw gp,0x10(sp)
004077e8  li a0,0x3c
004077ec  lw t9,-0x7ea4(gp)
004077f0  nop
004077f4  jalr t9
004077f8  _addiu a1,sp,0x3c
004077fc  lw gp,0x10(sp)
00407800  li a0,0x114
00407804  lw t9,-0x7ea4(gp)
00407808  nop
0040780c  jalr t9
00407810  _addiu a1,sp,0x40
00407814  lw gp,0x10(sp)
00407818  li a0,0x2
0040781c  lw t9,-0x7ea4(gp)
00407820  nop
00407824  jalr t9
00407828  _addiu a1,sp,0x4c
0040782c  lw gp,0x10(sp)
00407830  li a0,0xba
00407834  lw t9,-0x7ea4(gp)
00407838  nop
0040783c  jalr t9
00407840  _addiu a1,sp,0x51c
00407844  lw gp,0x10(sp)
00407848  li a0,0x517
0040784c  lw t9,-0x7ea4(gp)
00407850  nop
00407854  jalr t9
00407858  _addiu a1,sp,0x68
0040785c  lw gp,0x10(sp)
00407860  beq s3,zero,0x00407878
00407864  _nop
00407868  jal 0x004021d4
0040786c  _move a0,s3
00407870  lw gp,0x10(sp)
00407874  nop
00407878  lw t9,-0x7ea4(gp)
0040787c  li a0,0x117
00407880  jalr t9
00407884  _addiu a1,sp,0x2c
00407888  lw gp,0x10(sp)
0040788c  li a0,0x112
00407890  lw t9,-0x7ea4(gp)
00407894  nop
00407898  jalr t9
0040789c  _addiu a1,sp,0x34
004078a0  lw gp,0x10(sp)
004078a4  li a0,0x113
004078a8  lw t9,-0x7ea4(gp)
004078ac  nop
004078b0  jalr t9
004078b4  _addiu a1,sp,0x38
004078b8  lw gp,0x10(sp)
004078bc  li a0,0x110
004078c0  lw t9,-0x7ea4(gp)
004078c4  nop
004078c8  jalr t9
004078cc  _addiu a1,sp,0x1c
004078d0  lw gp,0x10(sp)
004078d4  li a0,0x119
004078d8  lw t9,-0x7ea4(gp)
004078dc  nop
004078e0  jalr t9
004078e4  _addiu a1,sp,0x50
004078e8  lw gp,0x10(sp)
004078ec  li a0,0x1
004078f0  lw t9,-0x7ea4(gp)
004078f4  nop
004078f8  jalr t9
004078fc  _addiu a1,sp,0x4b8
00407900  lw gp,0x10(sp)
00407904  li a0,0x3b
00407908  lw t9,-0x7ea4(gp)
0040790c  nop
00407910  jalr t9
00407914  _addiu a1,sp,0x18
00407918  lw gp,0x10(sp)
0040791c  li a0,0x19
00407920  lw t9,-0x7ea4(gp)
00407924  nop
00407928  jalr t9
0040792c  _addiu a1,sp,0x44
00407930  lw gp,0x10(sp)
00407934  li a0,0x3
00407938  lw t9,-0x7ea4(gp)
0040793c  nop
00407940  jalr t9
00407944  _addiu a1,sp,0x48
00407948  lw gp,0x10(sp)
0040794c  li a0,0xc
00407950  lw t9,-0x7ea4(gp)
00407954  nop
00407958  jalr t9
0040795c  _addiu a1,sp,0x24
00407960  lw gp,0x10(sp)
00407964  li a0,0xd
00407968  lw t9,-0x7ea4(gp)
0040796c  nop
00407970  jalr t9
00407974  _addiu a1,sp,0x28
00407978  lw gp,0x10(sp)
0040797c  li a0,0x4
00407980  lw t9,-0x7ea4(gp)
00407984  nop
00407988  jalr t9
0040798c  _addiu a1,sp,0x134
00407990  lw gp,0x10(sp)
00407994  li a0,0x5
00407998  lw t9,-0x7ea4(gp)
0040799c  nop
004079a0  jalr t9
004079a4  _addiu a1,sp,0x198
004079a8  lw gp,0x10(sp)
004079ac  li a0,0x6
004079b0  lw t9,-0x7ea4(gp)
004079b4  nop
004079b8  jalr t9
004079bc  _addiu a1,sp,0x1fc
004079c0  lw gp,0x10(sp)
004079c4  li a0,0x7
004079c8  lw t9,-0x7ea4(gp)
004079cc  nop
004079d0  jalr t9
004079d4  _addiu a1,sp,0x260
004079d8  lw gp,0x10(sp)
004079dc  li a0,0x8
004079e0  lw t9,-0x7ea4(gp)
004079e4  nop
004079e8  jalr t9
004079ec  _addiu a1,sp,0x2c4
004079f0  lw gp,0x10(sp)
004079f4  li a0,0x9
004079f8  lw t9,-0x7ea4(gp)
004079fc  nop
00407a00  jalr t9
00407a04  _addiu a1,sp,0x328
00407a08  lw gp,0x10(sp)
00407a0c  li a0,0xa
00407a10  lw t9,-0x7ea4(gp)
00407a14  nop
00407a18  jalr t9
00407a1c  _addiu a1,sp,0x38c
00407a20  lw gp,0x10(sp)
00407a24  li a0,0xb
00407a28  lw t9,-0x7ea4(gp)
00407a2c  nop
00407a30  jalr t9
00407a34  _addiu a1,sp,0x3f0
00407a38  lw gp,0x10(sp)
00407a3c  li a0,0x1e
00407a40  lw t9,-0x7ea4(gp)
00407a44  nop
00407a48  jalr t9
00407a4c  _addiu a1,sp,0x454
00407a50  lw gp,0x10(sp)
00407a54  li a0,0x10e
00407a58  lw t9,-0x7ea4(gp)
00407a5c  nop
00407a60  jalr t9
00407a64  _addiu a1,sp,0x58
00407a68  lw gp,0x10(sp)
00407a6c  li a0,0x16
00407a70  lw t9,-0x7ea4(gp)
00407a74  nop
00407a78  jalr t9
00407a7c  _addiu a1,sp,0x54
00407a80  lw gp,0x10(sp)
00407a84  li a0,0x19
00407a88  lw t9,-0x7ea4(gp)
00407a8c  nop
00407a90  jalr t9
00407a94  _addiu a1,sp,0x5c
00407a98  lw gp,0x10(sp)
00407a9c  li a0,0x1d
00407aa0  lw t9,-0x7ea4(gp)
00407aa4  nop
00407aa8  jalr t9
00407aac  _addiu a1,sp,0x60
00407ab0  lw gp,0x10(sp)
00407ab4  li a0,0x26
00407ab8  lw t9,-0x7ea4(gp)
00407abc  nop
00407ac0  jalr t9
00407ac4  _addiu a1,sp,0x64
00407ac8  lw v0,0x54(sp)
00407acc  lw gp,0x10(sp)
00407ad0  beq v0,zero,0x00407adc
00407ad4  _li v0,0x1
00407ad8  sw v0,0x58(sp)
00407adc  bne s2,zero,0x00407b08
00407ae0  _nop
00407ae4  lw t9,-0x7f24(gp)
00407ae8  lui a1,0x41
00407aec  addiu a1,a1,0x32ec
00407af0  addiu a0,sp,0x580
00407af4  jalr t9
00407af8  _li a2,0x8
00407afc  lw gp,0x10(sp)
00407b00  bne v0,zero,0x00407ed8
00407b04  _nop
00407b08  lw t9,-0x7f3c(gp)
00407b0c  addiu a0,sp,0x5e4
00407b10  jalr t9
00407b14  _clear a1
00407b18  lw gp,0x10(sp)
00407b1c  addiu a1,sp,0xd0
00407b20  li a0,0xc9
00407b24  lw t9,-0x7ea4(gp)
00407b28  nop
00407b2c  jalr t9
00407b30  _addiu s4,sp,0x580
00407b34  lb v1,0xd4(sp)
00407b38  lb v0,0xd5(sp)
00407b3c  lw gp,0x10(sp)
00407b40  addu v0,v1,v0
00407b44  lw v1,0x5e4(sp)
00407b48  lw t9,-0x7f4c(gp)
00407b4c  addu v0,v0,v1
00407b50  move a0,v0
00407b54  jalr t9
00407b58  _sw v0,0x5e4(sp)
00407b5c  lw gp,0x10(sp)
00407b60  nop
00407b64  lw t9,-0x7f04(gp)
00407b68  nop
00407b6c  jalr t9
00407b70  _nop
00407b74  lui v1,0x98
00407b78  ori v1,v1,0x9680
00407b7c  div v0,v1
00407b80  bne v1,zero,0x00407b8c
00407b84  _nop
00407b88  break 0x1c00
00407b8c  li a2,0xa
00407b90  lui t2,0x1
00407b94  ori t2,t2,0x86a0
00407b98  li t0,0x3e8
00407b9c  li t1,0x2710
00407ba0  lui t3,0xf
00407ba4  ori t3,t3,0x4240
00407ba8  li a3,0x64
00407bac  lw gp,0x10(sp)
00407bb0  move a1,s4
00407bb4  li a0,0x111
00407bb8  lw t9,-0x7edc(gp)
00407bbc  sb zero,0x588(sp)
00407bc0  mfhi v0
00407bc4  mult v0,a2
00407bc8  mflo v0
00407bcc  divu v0,t2
00407bd0  bne t2,zero,0x00407bdc
00407bd4  _nop
00407bd8  break 0x1c00
00407bdc  mflo s6
00407be0  divu v0,v1
00407be4  bne v1,zero,0x00407bf0
00407be8  _nop
00407bec  break 0x1c00
00407bf0  mflo s5
00407bf4  divu v0,t0
00407bf8  bne t0,zero,0x00407c04
00407bfc  _nop
00407c00  break 0x1c00
00407c04  mflo t8
00407c08  divu v0,a2
00407c0c  bne a2,zero,0x00407c18
00407c10  _nop
00407c14  break 0x1c00
00407c18  mflo t7
00407c1c  divu v0,t1
00407c20  bne t1,zero,0x00407c2c
00407c24  _nop
00407c28  break 0x1c00
00407c2c  mflo t6
00407c30  divu v0,t3
00407c34  bne t3,zero,0x00407c40
00407c38  _nop
00407c3c  break 0x1c00
00407c40  mflo t5
00407c44  divu v0,a3
00407c48  bne a3,zero,0x00407c54
00407c4c  _nop
00407c50  break 0x1c00
00407c54  mflo t4
00407c58  divu s6,a2
00407c5c  bne a2,zero,0x00407c68
00407c60  _nop
00407c64  break 0x1c00
00407c68  mfhi s6
00407c6c  divu s5,a2
00407c70  bne a2,zero,0x00407c7c
00407c74  _nop
00407c78  break 0x1c00
00407c7c  mfhi s5
00407c80  addu s5,s6,s5
00407c84  divu t8,a2
00407c88  bne a2,zero,0x00407c94
00407c8c  _nop
00407c90  break 0x1c00
00407c94  mfhi s8
00407c98  divu t7,a2
00407c9c  bne a2,zero,0x00407ca8
00407ca0  _nop
00407ca4  break 0x1c00
00407ca8  addu t7,s5,s8
00407cac  mfhi s7
00407cb0  addu t7,t7,s7
00407cb4  divu t6,a2
00407cb8  bne a2,zero,0x00407cc4
00407cbc  _nop
00407cc0  break 0x1c00
00407cc4  mfhi t6
00407cc8  divu t5,a2
00407ccc  bne a2,zero,0x00407cd8
00407cd0  _nop
00407cd4  break 0x1c00
00407cd8  mfhi t8
00407cdc  addu t5,t6,t8
00407ce0  divu t4,a2
00407ce4  bne a2,zero,0x00407cf0
00407ce8  _nop
00407cec  break 0x1c00
00407cf0  li t4,0x3
00407cf4  mfhi s7
00407cf8  mult t7,t4
00407cfc  addu t4,t5,s7
00407d00  mflo t7
00407d04  addu t4,t4,t7
00407d08  divu t4,a2
00407d0c  bne a2,zero,0x00407d18
00407d10  _nop
00407d14  break 0x1c00
00407d18  mfhi t4
00407d1c  subu t4,a2,t4
00407d20  div t4,a2
00407d24  bne a2,zero,0x00407d30
00407d28  _nop
00407d2c  break 0x1c00
00407d30  mfhi t4
00407d34  addu v0,t4,v0
00407d38  divu v0,v1
00407d3c  bne v1,zero,0x00407d48
00407d40  _nop
00407d44  break 0x1c00
00407d48  mflo v1
00407d4c  divu v0,t3
00407d50  bne t3,zero,0x00407d5c
00407d54  _nop
00407d58  break 0x1c00
00407d5c  mflo t3
00407d60  divu v0,t2
00407d64  bne t2,zero,0x00407d70
00407d68  _nop
00407d6c  break 0x1c00
00407d70  mflo t2
00407d74  divu v0,t1
00407d78  bne t1,zero,0x00407d84
00407d7c  _nop
00407d80  break 0x1c00
00407d84  mflo t1
00407d88  divu v0,t0
00407d8c  bne t0,zero,0x00407d98
00407d90  _nop
00407d94  break 0x1c00
00407d98  mflo t0
00407d9c  divu v0,a3
00407da0  bne a3,zero,0x00407dac
00407da4  _nop
00407da8  break 0x1c00
00407dac  mflo a3
00407db0  divu v0,a2
00407db4  bne a2,zero,0x00407dc0
00407db8  _nop
00407dbc  break 0x1c00
00407dc0  mflo v0
00407dc4  mfhi t5
00407dc8  addiu t5,t5,0x30
00407dcc  sb t5,0x587(sp)
00407dd0  divu v0,a2
00407dd4  bne a2,zero,0x00407de0
00407dd8  _nop
00407ddc  break 0x1c00
00407de0  mfhi t4
00407de4  addiu t4,t4,0x30
00407de8  sb t4,0x586(sp)
00407dec  divu v1,a2
00407df0  bne a2,zero,0x00407dfc
00407df4  _nop
00407df8  break 0x1c00
00407dfc  mfhi v1
00407e00  addiu v1,v1,0x30
00407e04  sb v1,0x580(sp)
00407e08  divu t3,a2
00407e0c  bne a2,zero,0x00407e18
00407e10  _nop
00407e14  break 0x1c00
00407e18  mfhi t3
00407e1c  addiu t3,t3,0x30
00407e20  sb t3,0x581(sp)
00407e24  divu t2,a2
00407e28  bne a2,zero,0x00407e34
00407e2c  _nop
00407e30  break 0x1c00
00407e34  mfhi t2
00407e38  addiu t2,t2,0x30
00407e3c  sb t2,0x582(sp)
00407e40  divu t1,a2
00407e44  bne a2,zero,0x00407e50
00407e48  _nop
00407e4c  break 0x1c00
00407e50  mfhi t1
00407e54  addiu t1,t1,0x30
00407e58  sb t1,0x583(sp)
00407e5c  divu t0,a2
00407e60  bne a2,zero,0x00407e6c
00407e64  _nop
00407e68  break 0x1c00
00407e6c  mfhi t0
00407e70  addiu t0,t0,0x30
00407e74  sb t0,0x584(sp)
00407e78  divu a3,a2
00407e7c  bne a2,zero,0x00407e88
00407e80  _nop
00407e84  break 0x1c00
00407e88  mfhi a3
00407e8c  addiu a3,a3,0x30
00407e90  jalr t9
00407e94  _sb a3,0x585(sp)
00407e98  lw gp,0x10(sp)
00407e9c  nop
00407ea0  lw t9,-0x7ed8(gp)
00407ea4  nop
00407ea8  jalr t9
00407eac  _li a0,0x1
00407eb0  lw gp,0x10(sp)
00407eb4  lui a0,0x41
00407eb8  addiu a0,a0,0x1bd0
00407ebc  lw t9,-0x7e5c(gp)
00407ec0  nop
00407ec4  jalr t9
00407ec8  _move a1,s4
00407ecc  lw gp,0x10(sp)
00407ed0  bne s2,zero,0x00408d7c
00407ed4  _clear v0
00407ed8  lw t9,-0x7f84(gp)
00407edc  move a0,s0
00407ee0  jalr t9
00407ee4  _addiu a1,sp,0x648
00407ee8  lw gp,0x10(sp)
00407eec  bgez v0,0x00407f14
00407ef0  _nop
00407ef4  lw t9,-0x7e5c(gp)
00407ef8  lui a0,0x41
00407efc  addiu a0,a0,0x1be4
00407f00  move a1,s0
00407f04  jalr t9
00407f08  _nop
00407f0c  b 0x00408d7c
00407f10  _li v0,-0x1
00407f14  lw a0,0x67c(sp)
00407f18  lw t9,-0x7e98(gp)
00407f1c  nop
00407f20  jalr t9
00407f24  _addiu a0,a0,0x800
00407f28  lw gp,0x10(sp)
00407f2c  bne v0,zero,0x00407f4c
00407f30  _move s4,v0
00407f34  lw a1,0x67c(sp)
00407f38  lui a0,0x41
00407f3c  lw t9,-0x7e5c(gp)
00407f40  addiu a0,a0,0x1bf8
00407f44  b 0x00407f04
00407f48  _addiu a1,a1,0x800
00407f4c  lw v1,0x18(sp)
00407f50  li v0,0x1
00407f54  bne v1,v0,0x00407f74
00407f58  _li a2,0x5
00407f5c  lw v0,0x20(sp)
00407f60  nop
00407f64  beq v0,zero,0x00407f80
00407f68  _li a2,0x2
00407f6c  li a2,0x3
00407f70  li v0,0x6
00407f74  lw v1,0x1c(sp)
00407f78  nop
00407f7c  movz a2,v0,v1
00407f80  lw t9,-0x7f70(gp)
00407f84  addiu s5,sp,0x6c
00407f88  lui a1,0x41
00407f8c  addiu a1,a1,0x1c10
00407f90  jalr t9
00407f94  _move a0,s5
00407f98  lw gp,0x10(sp)
00407f9c  move a0,s5
00407fa0  lw t9,-0x7f9c(gp)
00407fa4  nop
00407fa8  jalr t9
00407fac  _addiu s2,sp,0x6c
00407fb0  lw gp,0x10(sp)
00407fb4  move a1,s5
00407fb8  move a2,v0
00407fbc  lw t9,-0x7e7c(gp)
00407fc0  nop
00407fc4  jalr t9
00407fc8  _move a0,s4
00407fcc  lw gp,0x10(sp)
00407fd0  nop
00407fd4  lw t9,-0x7f9c(gp)
00407fd8  nop
00407fdc  jalr t9
00407fe0  _move a0,s5
00407fe4  lw gp,0x10(sp)
00407fe8  lw a0,0x18(sp)
00407fec  lw v1,0x2c(sp)
00407ff0  lw t9,-0x7f70(gp)
00407ff4  xori a0,a0,0x1
00407ff8  clear a2
00407ffc  lui a1,0x41
00408000  movn a2,v1,a0
00408004  addiu a1,a1,0x1c1c
00408008  move a0,s2
0040800c  jalr t9
00408010  _addu s5,s4,v0
00408014  lw gp,0x10(sp)
00408018  nop
0040801c  lw t9,-0x7f9c(gp)
00408020  nop
00408024  jalr t9
00408028  _move a0,s2
0040802c  lw gp,0x10(sp)
00408030  move a2,v0
00408034  move a0,s5
00408038  lw t9,-0x7e7c(gp)
0040803c  nop
00408040  jalr t9
00408044  _move a1,s2
00408048  lw gp,0x10(sp)
0040804c  nop
00408050  lw t9,-0x7f9c(gp)
00408054  nop
00408058  jalr t9
0040805c  _move a0,s2
00408060  lw a2,0x30(sp)
00408064  addu s5,s5,v0
00408068  li v0,0x1
0040806c  lw gp,0x10(sp)
00408070  bne a2,v0,0x00408080
00408074  _li v0,0x2
00408078  b 0x00408090
0040807c  _li a2,0x6
00408080  beq a2,v0,0x00408dac
00408084  _xori v1,a2,0x3
00408088  li v0,0x86
0040808c  movz a2,v0,v1
00408090  lw t9,-0x7f70(gp)
00408094  addiu s2,sp,0x6c
00408098  lui a1,0x41
0040809c  addiu a1,a1,0x1c28
004080a0  jalr t9
004080a4  _move a0,s2
004080a8  lw gp,0x10(sp)
004080ac  nop
004080b0  lw t9,-0x7f9c(gp)
004080b4  nop
004080b8  jalr t9
004080bc  _move a0,s2
004080c0  lw gp,0x10(sp)
004080c4  move a2,v0
004080c8  move a1,s2
004080cc  lw t9,-0x7e7c(gp)
004080d0  nop
004080d4  jalr t9
004080d8  _move a0,s5
004080dc  lw gp,0x10(sp)
004080e0  nop
004080e4  lw t9,-0x7f9c(gp)
004080e8  nop
004080ec  jalr t9
004080f0  _move a0,s2
004080f4  lw gp,0x10(sp)
004080f8  lw a2,0x58(sp)
004080fc  lui a1,0x41
00408100  lw t9,-0x7f70(gp)
00408104  addiu a1,a1,0x1c3c
00408108  move a0,s2
0040810c  jalr t9
00408110  _addu s5,s5,v0
00408114  lw gp,0x10(sp)
00408118  nop
0040811c  lw t9,-0x7f9c(gp)
00408120  nop
00408124  jalr t9
00408128  _move a0,s2
0040812c  lw gp,0x10(sp)
00408130  move a2,v0
00408134  move a1,s2
00408138  lw t9,-0x7e7c(gp)
0040813c  nop
00408140  jalr t9
00408144  _move a0,s5
00408148  lw gp,0x10(sp)
0040814c  nop
00408150  lw t9,-0x7f9c(gp)
00408154  nop
00408158  jalr t9
0040815c  _move a0,s2
00408160  lw gp,0x10(sp)
00408164  lw a2,0x34(sp)
00408168  lui a1,0x41
0040816c  lw t9,-0x7f70(gp)
00408170  addiu a1,a1,0x1c58
00408174  move a0,s2
00408178  jalr t9
0040817c  _addu s5,s5,v0
00408180  lw gp,0x10(sp)
00408184  nop
00408188  lw t9,-0x7f9c(gp)
0040818c  nop
00408190  jalr t9
00408194  _move a0,s2
00408198  lw gp,0x10(sp)
0040819c  move a2,v0
004081a0  move a1,s2
004081a4  lw t9,-0x7e7c(gp)
004081a8  nop
004081ac  jalr t9
004081b0  _move a0,s5
004081b4  lw gp,0x10(sp)
004081b8  nop
004081bc  lw t9,-0x7f9c(gp)
004081c0  nop
004081c4  jalr t9
004081c8  _move a0,s2
004081cc  lw gp,0x10(sp)
004081d0  lw a2,0x38(sp)
004081d4  lui a1,0x41
004081d8  lw t9,-0x7f70(gp)
004081dc  addiu a1,a1,0x1c68
004081e0  move a0,s2
004081e4  jalr t9
004081e8  _addu s5,s5,v0
004081ec  lw gp,0x10(sp)
004081f0  nop
004081f4  lw t9,-0x7f9c(gp)
004081f8  nop
004081fc  jalr t9
00408200  _move a0,s2
00408204  lw gp,0x10(sp)
00408208  move a2,v0
0040820c  move a0,s5
00408210  lw t9,-0x7e7c(gp)
00408214  nop
00408218  jalr t9
0040821c  _move a1,s2
00408220  lw gp,0x10(sp)
00408224  nop
00408228  lw t9,-0x7f9c(gp)
0040822c  nop
00408230  jalr t9
00408234  _move a0,s2
00408238  lw v1,0x5c(sp)
0040823c  addu s5,s5,v0
00408240  li v0,0x6
00408244  lw gp,0x10(sp)
00408248  bne v1,v0,0x004082a8
0040824c  _clear a2
00408250  lw v0,0x60(sp)
00408254  li v1,0x1
00408258  beq v0,v1,0x00408278
0040825c  _li a2,0x1
00408260  li v1,0x2
00408264  beq v0,v1,0x00408278
00408268  _li a2,0x2
0040826c  xori v0,v0,0x3
00408270  li a2,0x3
00408274  movn a2,zero,v0
00408278  lw v0,0x64(sp)
0040827c  li v1,0x1
00408280  bne v0,v1,0x00408290
00408284  _li v1,0x2
00408288  b 0x004082a8
0040828c  _ori a2,a2,0x4
00408290  bne v0,v1,0x004082a0
00408294  _xori v0,v0,0x3
00408298  b 0x004082a8
0040829c  _ori a2,a2,0x8
004082a0  ori v1,a2,0xc
004082a4  movz a2,v1,v0
004082a8  lw t9,-0x7f70(gp)
004082ac  addiu s2,sp,0x6c
004082b0  lui a1,0x41
004082b4  addiu a1,a1,0x1c7c
004082b8  jalr t9
004082bc  _move a0,s2
004082c0  lw gp,0x10(sp)
004082c4  nop
004082c8  lw t9,-0x7f9c(gp)
004082cc  nop
004082d0  jalr t9
004082d4  _move a0,s2
004082d8  lw gp,0x10(sp)
004082dc  move a0,s5
004082e0  move a2,v0
004082e4  lw t9,-0x7e7c(gp)
004082e8  nop
004082ec  jalr t9
004082f0  _move a1,s2
004082f4  lw gp,0x10(sp)
004082f8  nop
004082fc  lw t9,-0x7f9c(gp)
00408300  nop
00408304  jalr t9
00408308  _move a0,s2
0040830c  lw gp,0x10(sp)
00408310  lw s6,0x38(sp)
00408314  beq s3,zero,0x00408378
00408318  _addu s5,s5,v0
0040831c  lw t9,-0x7f64(gp)
00408320  lui a1,0x41
00408324  addiu a1,a1,0xf9c
00408328  jalr t9
0040832c  _move a0,s3
00408330  lw gp,0x10(sp)
00408334  beq v0,zero,0x00408358
00408338  _move a0,s3
0040833c  lw t9,-0x7f64(gp)
00408340  lui a1,0x41
00408344  jalr t9
00408348  _addiu a1,a1,0xfd4
0040834c  lw gp,0x10(sp)
00408350  bne v0,zero,0x0040837c
00408354  _li a2,0x1
00408358  lw v1,0x18(sp)
0040835c  li v0,0x1
00408360  bne v1,v0,0x0040837c
00408364  _li a2,0x1
00408368  lw v0,0x3c(sp)
0040836c  nop
00408370  bne v0,zero,0x0040837c
00408374  _li a2,0x2
00408378  li a2,0x1
0040837c  lw t9,-0x7f70(gp)
00408380  addiu s2,sp,0x6c
00408384  lui a1,0x41
00408388  addiu a1,a1,0x1c8c
0040838c  jalr t9
00408390  _move a0,s2
00408394  lw gp,0x10(sp)
00408398  nop
0040839c  lw t9,-0x7f9c(gp)
004083a0  nop
004083a4  jalr t9
004083a8  _move a0,s2
004083ac  lw gp,0x10(sp)
004083b0  move a2,v0
004083b4  move a1,s2
004083b8  lw t9,-0x7e7c(gp)
004083bc  nop
004083c0  jalr t9
004083c4  _move a0,s5
004083c8  lw gp,0x10(sp)
004083cc  nop
004083d0  lw t9,-0x7f9c(gp)
004083d4  nop
004083d8  jalr t9
004083dc  _move a0,s2
004083e0  lw gp,0x10(sp)
004083e4  lw a2,0x40(sp)
004083e8  lui a1,0x41
004083ec  lw t9,-0x7f70(gp)
004083f0  addiu a1,a1,0x1ca4
004083f4  move a0,s2
004083f8  jalr t9
004083fc  _addu s5,s5,v0
00408400  lw gp,0x10(sp)
00408404  nop
00408408  lw t9,-0x7f9c(gp)
0040840c  nop
00408410  jalr t9
00408414  _move a0,s2
00408418  lw gp,0x10(sp)
0040841c  move a0,s5
00408420  move a2,v0
00408424  lw t9,-0x7e7c(gp)
00408428  nop
0040842c  jalr t9
00408430  _move a1,s2
00408434  lw gp,0x10(sp)
00408438  nop
0040843c  lw t9,-0x7f9c(gp)
00408440  nop
00408444  jalr t9
00408448  _move a0,s2
0040844c  addu s5,s5,v0
00408450  li v0,0x2
00408454  lw gp,0x10(sp)
00408458  bne s6,v0,0x00408944
0040845c  _li v0,0x1
00408460  lw v1,0x44(sp)
00408464  nop
00408468  beq v1,v0,0x0040847c
0040846c  _lui a0,0x41
00408470  lw t9,-0x7e8c(gp)
00408474  b 0x004084a0
00408478  _addiu a0,a0,0x1cb8
0040847c  lw v0,0x48(sp)
00408480  nop
00408484  addiu v0,v0,-0x1
00408488  sltiu v0,v0,0x2
0040848c  bne v0,zero,0x004084c8
00408490  _nop
00408494  lw t9,-0x7e8c(gp)
00408498  lui a0,0x41
0040849c  addiu a0,a0,0x1ce4
004084a0  jalr t9
004084a4  _nop
004084a8  lw gp,0x10(sp)
004084ac  nop
004084b0  lw t9,-0x7fc4(gp)
004084b4  nop
004084b8  jalr t9
004084bc  _move a0,s4
004084c0  b 0x00407f0c
004084c4  _nop
004084c8  lw v0,0x28(sp)
004084cc  lw t9,-0x7f70(gp)
004084d0  lui a1,0x41
004084d4  addiu v0,v0,0x1
004084d8  sw v1,0x6e0(sp)
004084dc  addiu a1,a1,0x1d00
004084e0  move a2,v0
004084e4  move a0,s2
004084e8  jalr t9
004084ec  _sw v0,0x28(sp)
004084f0  lw gp,0x10(sp)
004084f4  move a0,s2
004084f8  addiu s3,sp,0xd0
004084fc  lw t9,-0x7f9c(gp)
00408500  lui s7,0x41
00408504  jalr t9
00408508  _lui s8,0x41
0040850c  lw gp,0x10(sp)
00408510  move a0,s5
00408514  move a2,v0
00408518  lw t9,-0x7e7c(gp)
0040851c  move a1,s2
00408520  jalr t9
00408524  _lui s6,0x41
00408528  lw gp,0x10(sp)
0040852c  nop
00408530  lw t9,-0x7f9c(gp)
00408534  nop
00408538  jalr t9
0040853c  _move a0,s2
00408540  lw gp,0x10(sp)
00408544  addu s5,s5,v0
00408548  lw v1,0x6e0(sp)
0040854c  lw v0,0x48(sp)
00408550  lw t9,-0x7e50(gp)
00408554  bne v0,v1,0x00408750
00408558  _nop
0040855c  move a0,s2
00408560  jalr t9
00408564  _addiu a1,sp,0x134
00408568  move a0,s2
0040856c  li a1,0x5
00408570  jal 0x00403e9c
00408574  _move a2,s3
00408578  lw gp,0x10(sp)
0040857c  addiu a1,s7,0x1d18
00408580  move a2,s3
00408584  lw t9,-0x7f70(gp)
00408588  move a0,s2
0040858c  jalr t9
00408590  _sb zero,0xda(sp)
00408594  lw gp,0x10(sp)
00408598  nop
0040859c  lw t9,-0x7f9c(gp)
004085a0  nop
004085a4  jalr t9
004085a8  _move a0,s2
004085ac  lw gp,0x10(sp)
004085b0  move a2,v0
004085b4  move a1,s2
004085b8  lw t9,-0x7e7c(gp)
004085bc  nop
004085c0  jalr t9
004085c4  _move a0,s5
004085c8  lw gp,0x10(sp)
004085cc  nop
004085d0  lw t9,-0x7f9c(gp)
004085d4  nop
004085d8  jalr t9
004085dc  _move a0,s2
004085e0  lw gp,0x10(sp)
004085e4  move a0,s2
004085e8  addiu a1,sp,0x198
004085ec  lw t9,-0x7e50(gp)
004085f0  nop
004085f4  jalr t9
004085f8  _addu s5,s5,v0
004085fc  move a0,s2
00408600  li a1,0x5
00408604  jal 0x00403e9c
00408608  _move a2,s3
0040860c  lw gp,0x10(sp)
00408610  lui v0,0x41
00408614  addiu a1,v0,0x1d2c
00408618  lw t9,-0x7f70(gp)
0040861c  move a2,s3
00408620  move a0,s2
00408624  jalr t9
00408628  _sb zero,0xda(sp)
0040862c  lw gp,0x10(sp)
00408630  nop
00408634  lw t9,-0x7f9c(gp)
00408638  nop
0040863c  jalr t9
00408640  _move a0,s2
00408644  lw gp,0x10(sp)
00408648  move a2,v0
0040864c  move a1,s2
00408650  lw t9,-0x7e7c(gp)
00408654  nop
00408658  jalr t9
0040865c  _move a0,s5
00408660  lw gp,0x10(sp)
00408664  nop
00408668  lw t9,-0x7f9c(gp)
0040866c  nop
00408670  jalr t9
00408674  _move a0,s2
00408678  lw gp,0x10(sp)
0040867c  move a0,s2
00408680  addiu a1,sp,0x1fc
00408684  lw t9,-0x7e50(gp)
00408688  nop
0040868c  jalr t9
00408690  _addu s5,s5,v0
00408694  move a0,s2
00408698  li a1,0x5
0040869c  jal 0x00403e9c
004086a0  _move a2,s3
004086a4  lw gp,0x10(sp)
004086a8  addiu a1,s8,0x1d3c
004086ac  move a2,s3
004086b0  lw t9,-0x7f70(gp)
004086b4  move a0,s2
004086b8  jalr t9
004086bc  _sb zero,0xda(sp)
004086c0  lw gp,0x10(sp)
004086c4  nop
004086c8  lw t9,-0x7f9c(gp)
004086cc  nop
004086d0  jalr t9
004086d4  _move a0,s2
004086d8  lw gp,0x10(sp)
004086dc  move a2,v0
004086e0  move a1,s2
004086e4  lw t9,-0x7e7c(gp)
004086e8  nop
004086ec  jalr t9
004086f0  _move a0,s5
004086f4  lw gp,0x10(sp)
004086f8  nop
004086fc  lw t9,-0x7f9c(gp)
00408700  nop
00408704  jalr t9
00408708  _move a0,s2
0040870c  lw gp,0x10(sp)
00408710  move a0,s2
00408714  addiu a1,sp,0x260
00408718  lw t9,-0x7e50(gp)
0040871c  nop
00408720  jalr t9
00408724  _addu s5,s5,v0
00408728  li a1,0x5
0040872c  move a2,s3
00408730  jal 0x00403e9c
00408734  _move a0,s2
00408738  lw gp,0x10(sp)
0040873c  addiu a1,s6,0x1d4c
00408740  move a2,s3
00408744  lw t9,-0x7f70(gp)
00408748  b 0x00408954
0040874c  _sb zero,0xda(sp)
00408750  move a0,s2
00408754  jalr t9
00408758  _addiu a1,sp,0x2c4
0040875c  move a0,s2
00408760  li a1,0xd
00408764  jal 0x00403e9c
00408768  _move a2,s3
0040876c  lw gp,0x10(sp)
00408770  addiu a1,s7,0x1d18
00408774  move a2,s3
00408778  lw t9,-0x7f70(gp)
0040877c  move a0,s2
00408780  jalr t9
00408784  _sb zero,0xea(sp)
00408788  lw gp,0x10(sp)
0040878c  move a0,s2
00408790  lw t9,-0x7f9c(gp)
00408794  nop
00408798  jalr t9
0040879c  _addiu s7,sp,0x38c
004087a0  lw gp,0x10(sp)
004087a4  move a2,v0
004087a8  move a1,s2
004087ac  lw t9,-0x7e7c(gp)
004087b0  nop
004087b4  jalr t9
004087b8  _move a0,s5
004087bc  lw gp,0x10(sp)
004087c0  nop
004087c4  lw t9,-0x7f9c(gp)
004087c8  nop
004087cc  jalr t9
004087d0  _move a0,s2
004087d4  lw gp,0x10(sp)
004087d8  move a0,s2
004087dc  addiu a1,sp,0x328
004087e0  lw t9,-0x7e50(gp)
004087e4  nop
004087e8  jalr t9
004087ec  _addu s5,s5,v0
004087f0  move a0,s2
004087f4  li a1,0xd
004087f8  jal 0x00403e9c
004087fc  _move a2,s3
00408800  lw gp,0x10(sp)
00408804  lui v0,0x41
00408808  addiu a1,v0,0x1d2c
0040880c  lw t9,-0x7f70(gp)
00408810  move a2,s3
00408814  move a0,s2
00408818  jalr t9
0040881c  _sb zero,0xea(sp)
00408820  lw gp,0x10(sp)
00408824  nop
00408828  lw t9,-0x7f9c(gp)
0040882c  nop
00408830  jalr t9
00408834  _move a0,s2
00408838  lw gp,0x10(sp)
0040883c  move a2,v0
00408840  move a1,s2
00408844  lw t9,-0x7e7c(gp)
00408848  nop
0040884c  jalr t9
00408850  _move a0,s5
00408854  lw gp,0x10(sp)
00408858  nop
0040885c  lw t9,-0x7f9c(gp)
00408860  nop
00408864  jalr t9
00408868  _move a0,s2
0040886c  lw gp,0x10(sp)
00408870  move a0,s2
00408874  move a1,s7
00408878  lw t9,-0x7e50(gp)
0040887c  nop
00408880  jalr t9
00408884  _addu s5,s5,v0
00408888  move a0,s2
0040888c  li a1,0xd
00408890  jal 0x00403e9c
00408894  _move a2,s3
00408898  lw gp,0x10(sp)
0040889c  addiu a1,s8,0x1d3c
004088a0  move a2,s3
004088a4  lw t9,-0x7f70(gp)
004088a8  move a0,s2
004088ac  jalr t9
004088b0  _sb zero,0xea(sp)
004088b4  lw gp,0x10(sp)
004088b8  nop
004088bc  lw t9,-0x7f9c(gp)
004088c0  nop
004088c4  jalr t9
004088c8  _move a0,s2
004088cc  lw gp,0x10(sp)
004088d0  move a2,v0
004088d4  move a1,s2
004088d8  lw t9,-0x7e7c(gp)
004088dc  nop
004088e0  jalr t9
004088e4  _move a0,s5
004088e8  lw gp,0x10(sp)
004088ec  nop
004088f0  lw t9,-0x7f9c(gp)
004088f4  nop
004088f8  jalr t9
004088fc  _move a0,s2
00408900  lw gp,0x10(sp)
00408904  move a1,s7
00408908  move a0,s2
0040890c  lw t9,-0x7e50(gp)
00408910  nop
00408914  jalr t9
00408918  _addu s5,s5,v0
0040891c  li a1,0xd
00408920  move a2,s3
00408924  jal 0x00403e9c
00408928  _move a0,s2
0040892c  lw gp,0x10(sp)
00408930  addiu a1,s6,0x1d4c
00408934  move a2,s3
00408938  lw t9,-0x7f70(gp)
0040893c  b 0x00408954
00408940  _sb zero,0xea(sp)
00408944  lw t9,-0x7f70(gp)
00408948  lui a1,0x41
0040894c  addiu a1,a1,0x1d18
00408950  addiu a2,sp,0x454
00408954  jalr t9
00408958  _move a0,s2
0040895c  lw gp,0x10(sp)
00408960  nop
00408964  lw t9,-0x7f9c(gp)
00408968  nop
0040896c  jalr t9
00408970  _move a0,s2
00408974  lw gp,0x10(sp)
00408978  move a1,s2
0040897c  move a2,v0
00408980  lw t9,-0x7e7c(gp)
00408984  nop
00408988  jalr t9
0040898c  _move a0,s5
00408990  lw gp,0x10(sp)
00408994  move a0,s2
00408998  lw t9,-0x7f9c(gp)
0040899c  nop
004089a0  jalr t9
004089a4  _addiu s2,sp,0x6c
004089a8  lw gp,0x10(sp)
004089ac  lui a1,0x41
004089b0  addiu a1,a1,0x1268
004089b4  lw t9,-0x7f70(gp)
004089b8  addiu a2,sp,0x4b8
004089bc  move a0,s2
004089c0  jalr t9
004089c4  _addu s3,s5,v0
004089c8  lw gp,0x10(sp)
004089cc  nop
004089d0  lw t9,-0x7f9c(gp)
004089d4  nop
004089d8  jalr t9
004089dc  _move a0,s2
004089e0  lw gp,0x10(sp)
004089e4  move a1,s2
004089e8  move a2,v0
004089ec  lw t9,-0x7e7c(gp)
004089f0  nop
004089f4  jalr t9
004089f8  _move a0,s3
004089fc  lw gp,0x10(sp)
00408a00  nop
00408a04  lw t9,-0x7f9c(gp)
00408a08  nop
00408a0c  jalr t9
00408a10  _move a0,s2
00408a14  lw gp,0x10(sp)
00408a18  lui a1,0x41
00408a1c  addiu a1,a1,0x1d5c
00408a20  lw t9,-0x7f70(gp)
00408a24  addiu a2,sp,0x580
00408a28  move a0,s2
00408a2c  jalr t9
00408a30  _addu s3,s3,v0
00408a34  lw gp,0x10(sp)
00408a38  nop
00408a3c  lw t9,-0x7f9c(gp)
00408a40  nop
00408a44  jalr t9
00408a48  _move a0,s2
00408a4c  lw gp,0x10(sp)
00408a50  move a1,s2
00408a54  move a2,v0
00408a58  lw t9,-0x7e7c(gp)
00408a5c  nop
00408a60  jalr t9
00408a64  _move a0,s3
00408a68  lw gp,0x10(sp)
00408a6c  nop
00408a70  lw t9,-0x7f9c(gp)
00408a74  nop
00408a78  jalr t9
00408a7c  _move a0,s2
00408a80  lw gp,0x10(sp)
00408a84  lw a0,0x4c(sp)
00408a88  li v1,0x2
00408a8c  lw t9,-0x7f70(gp)
00408a90  slti a0,a0,0xf
00408a94  li a2,0x1
00408a98  lui a1,0x41
00408a9c  movz a2,v1,a0
00408aa0  addiu a1,a1,0x1d6c
00408aa4  move a0,s2
00408aa8  jalr t9
00408aac  _addu s3,s3,v0
00408ab0  lw gp,0x10(sp)
00408ab4  nop
00408ab8  lw t9,-0x7f9c(gp)
00408abc  nop
00408ac0  jalr t9
00408ac4  _move a0,s2
00408ac8  lw gp,0x10(sp)
00408acc  move a1,s2
00408ad0  move a2,v0
00408ad4  lw t9,-0x7e7c(gp)
00408ad8  nop
00408adc  jalr t9
00408ae0  _move a0,s3
00408ae4  lw gp,0x10(sp)
00408ae8  nop
00408aec  lw t9,-0x7f9c(gp)
00408af0  nop
00408af4  jalr t9
00408af8  _move a0,s2
00408afc  lw gp,0x10(sp)
00408b00  lui a1,0x41
00408b04  addiu a1,a1,0x1d7c
00408b08  lw t9,-0x7f70(gp)
00408b0c  addiu a2,sp,0x51c
00408b10  move a0,s2
00408b14  jalr t9
00408b18  _addu s3,s3,v0
00408b1c  lw gp,0x10(sp)
00408b20  nop
00408b24  lw t9,-0x7f9c(gp)
00408b28  nop
00408b2c  jalr t9
00408b30  _move a0,s2
00408b34  lw gp,0x10(sp)
00408b38  move a1,s2
00408b3c  move a2,v0
00408b40  lw t9,-0x7e7c(gp)
00408b44  nop
00408b48  jalr t9
00408b4c  _move a0,s3
00408b50  lw gp,0x10(sp)
00408b54  nop
00408b58  lw t9,-0x7f9c(gp)
00408b5c  nop
00408b60  jalr t9
00408b64  _move a0,s2
00408b68  lw gp,0x10(sp)
00408b6c  lw a2,0x50(sp)
00408b70  lui a1,0x41
00408b74  lw t9,-0x7f70(gp)
00408b78  addiu a1,a1,0x1d90
00408b7c  move a0,s2
00408b80  jalr t9
00408b84  _addu s3,s3,v0
00408b88  lw gp,0x10(sp)
00408b8c  nop
00408b90  lw t9,-0x7f9c(gp)
00408b94  nop
00408b98  jalr t9
00408b9c  _move a0,s2
00408ba0  lw gp,0x10(sp)
00408ba4  move a1,s2
00408ba8  move a2,v0
00408bac  lw t9,-0x7e7c(gp)
00408bb0  nop
00408bb4  jalr t9
00408bb8  _move a0,s3
00408bbc  lw gp,0x10(sp)
00408bc0  nop
00408bc4  lw t9,-0x7f9c(gp)
00408bc8  nop
00408bcc  jalr t9
00408bd0  _move a0,s2
00408bd4  lw gp,0x10(sp)
00408bd8  move a0,s0
00408bdc  clear a1
00408be0  lw t9,-0x7fa0(gp)
00408be4  nop
00408be8  jalr t9
00408bec  _move s5,v0
00408bf0  move s2,v0
00408bf4  li v0,-0x1
00408bf8  lw gp,0x10(sp)
00408bfc  bne s2,v0,0x00408c14
00408c00  _clear a1
00408c04  lui a0,0x41
00408c08  lw t9,-0x7e5c(gp)
00408c0c  b 0x00407f00
00408c10  _addiu a0,a0,0x1da8
00408c14  lw t9,-0x7eb8(gp)
00408c18  move a0,s2
00408c1c  jalr t9
00408c20  _clear a2
00408c24  lw gp,0x10(sp)
00408c28  lw a2,0x67c(sp)
00408c2c  addu s3,s3,s5
00408c30  lw t9,-0x7f0c(gp)
00408c34  move a0,s2
00408c38  jalr t9
00408c3c  _move a1,s3
00408c40  lw v1,0x67c(sp)
00408c44  lw gp,0x10(sp)
00408c48  beq v0,v1,0x00408c5c
00408c4c  _lui a0,0x41
00408c50  lw t9,-0x7e5c(gp)
00408c54  b 0x00407f00
00408c58  _addiu a0,a0,0x1dbc
00408c5c  lw t9,-0x7fc0(gp)
00408c60  nop
00408c64  jalr t9
00408c68  _move a0,s2
00408c6c  lw gp,0x10(sp)
00408c70  lui a1,0x41
00408c74  addiu a1,a1,0x1dd0
00408c78  lw t9,-0x7f00(gp)
00408c7c  nop
00408c80  jalr t9
00408c84  _move a0,s3
00408c88  lw gp,0x10(sp)
00408c8c  beq v0,zero,0x00408ce0
00408c90  _move s2,v0
00408c94  lw t9,-0x7ea4(gp)
00408c98  addiu s5,sp,0xd0
00408c9c  li a0,0xc9
00408ca0  move a1,s5
00408ca4  jalr t9
00408ca8  _addiu s0,sp,0x5e4
00408cac  move a0,s5
00408cb0  li a1,0x6
00408cb4  jal 0x00403e9c
00408cb8  _move a2,s0
00408cbc  lw gp,0x10(sp)
00408cc0  addiu a0,s2,0x1b
00408cc4  move a1,s0
00408cc8  lw t9,-0x7e7c(gp)
00408ccc  nop
00408cd0  jalr t9
00408cd4  _li a2,0xc
00408cd8  lw gp,0x10(sp)
00408cdc  nop
00408ce0  lw t9,-0x7fa0(gp)
00408ce4  move a0,s1
00408ce8  jalr t9
00408cec  _li a1,0x302
00408cf0  move s0,v0
00408cf4  li v0,-0x1
00408cf8  lw gp,0x10(sp)
00408cfc  bne s0,v0,0x00408d14
00408d00  _subu s3,s3,s4
00408d04  lui a0,0x41
00408d08  lw t9,-0x7e5c(gp)
00408d0c  b 0x00408d48
00408d10  _addiu a0,a0,0x1da8
00408d14  lw a2,0x67c(sp)
00408d18  lw t9,-0x7ee8(gp)
00408d1c  addu a2,s3,a2
00408d20  move a0,s0
00408d24  jalr t9
00408d28  _move a1,s4
00408d2c  lw v1,0x67c(sp)
00408d30  lw gp,0x10(sp)
00408d34  addu s3,s3,v1
00408d38  beq v0,s3,0x00408d50
00408d3c  _lui a0,0x41
00408d40  lw t9,-0x7e5c(gp)
00408d44  addiu a0,a0,0x1dd8
00408d48  b 0x00407f04
00408d4c  _move a1,s1
00408d50  lw t9,-0x7fc0(gp)
00408d54  nop
00408d58  jalr t9
00408d5c  _move a0,s0
00408d60  lw gp,0x10(sp)
00408d64  nop
00408d68  lw t9,-0x7fc4(gp)
00408d6c  nop
00408d70  jalr t9
00408d74  _move a0,s4
00408d78  clear v0
00408d7c  lw ra,0x70c(sp)
00408d80  lw s8,0x708(sp)
00408d84  lw s7,0x704(sp)
00408d88  lw s6,0x700(sp)
00408d8c  lw s5,0x6fc(sp)
00408d90  lw s4,0x6f8(sp)
00408d94  lw s3,0x6f4(sp)
00408d98  lw s2,0x6f0(sp)
00408d9c  lw s1,0x6ec(sp)
00408da0  lw s0,0x6e8(sp)
00408da4  jr ra
00408da8  _addiu sp,sp,0x710
00408dac  b 0x00408090
00408db0  _li a2,0x82
