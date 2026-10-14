# FUN_00407688 @ 00407688
00407688  addiu sp,sp,-0x710
0040768c  sw ra,0x70c(sp)
00407690  sw s8,0x708(sp)
00407694  sw s7,0x704(sp)
00407698  sw s6,0x700(sp)
0040769c  sw s5,0x6fc(sp)
004076a0  sw s4,0x6f8(sp)
004076a4  sw s3,0x6f4(sp)
004076a8  sw s2,0x6f0(sp)
004076ac  sw s1,0x6ec(sp)
004076b0  sw s0,0x6e8(sp)
004076b4  lui gp,0x43
004076b8  addiu gp,gp,-0x4be0
004076bc  sw gp,0x10(sp)
004076c0  lw t9,-0x7fa4(gp)
004076c4  sw zero,0x18(sp)
004076c8  sw zero,0x24(sp)
004076cc  sw zero,0x28(sp)
004076d0  sw zero,0x2c(sp)
004076d4  sw zero,0x30(sp)
004076d8  sw zero,0x34(sp)
004076dc  sw zero,0x38(sp)
004076e0  sw zero,0x3c(sp)
004076e4  sw zero,0x40(sp)
004076e8  sw zero,0x44(sp)
004076ec  sw zero,0x48(sp)
004076f0  sw zero,0x4c(sp)
004076f4  sw zero,0x50(sp)
004076f8  sw zero,0x54(sp)
004076fc  sw zero,0x58(sp)
00407700  sw zero,0x5c(sp)
00407704  sw zero,0x60(sp)
00407708  sw zero,0x64(sp)
0040770c  move s0,a0
00407710  move s1,a1
00407714  move s2,a2
00407718  jalr t9
0040771c  _move s3,a3
00407720  lw gp,0x10(sp)
00407724  bne v0,zero,0x00407744
00407728  _nop
0040772c  lw t9,-0x7e8c(gp)
00407730  lui a0,0x41
00407734  jalr t9
00407738  _addiu a0,a0,0x1144
0040773c  b 0x00407ed8
00407740  _nop
00407744  lui a0,0x41
00407748  jal 0x004021d4
0040774c  _addiu a0,a0,0xf6c
00407750  lw gp,0x10(sp)
00407754  li a0,0x111
00407758  lw t9,-0x7ea4(gp)
0040775c  nop
00407760  jalr t9
00407764  _addiu a1,sp,0x580
00407768  lw gp,0x10(sp)
0040776c  li a0,0x118
00407770  lw t9,-0x7ea4(gp)
00407774  nop
00407778  jalr t9
0040777c  _addiu a1,sp,0x20
00407780  lw gp,0x10(sp)
00407784  li a0,0x117
00407788  lw t9,-0x7ea4(gp)
0040778c  nop
00407790  jalr t9
00407794  _addiu a1,sp,0x2c
00407798  lw gp,0x10(sp)
0040779c  li a0,0x10f
004077a0  lw t9,-0x7ea4(gp)
004077a4  nop
004077a8  jalr t9
004077ac  _addiu a1,sp,0x30
004077b0  lw gp,0x10(sp)
004077b4  li a0,0x3c
004077b8  lw t9,-0x7ea4(gp)
004077bc  nop
004077c0  jalr t9
004077c4  _addiu a1,sp,0x3c
004077c8  lw gp,0x10(sp)
004077cc  li a0,0x114
004077d0  lw t9,-0x7ea4(gp)
004077d4  nop
004077d8  jalr t9
004077dc  _addiu a1,sp,0x40
004077e0  lw gp,0x10(sp)
004077e4  li a0,0x2
004077e8  lw t9,-0x7ea4(gp)
004077ec  nop
004077f0  jalr t9
004077f4  _addiu a1,sp,0x4c
004077f8  lw gp,0x10(sp)
004077fc  li a0,0xba
00407800  lw t9,-0x7ea4(gp)
00407804  nop
00407808  jalr t9
0040780c  _addiu a1,sp,0x51c
00407810  lw gp,0x10(sp)
00407814  li a0,0x517
00407818  lw t9,-0x7ea4(gp)
0040781c  nop
00407820  jalr t9
00407824  _addiu a1,sp,0x68
00407828  lw gp,0x10(sp)
0040782c  beq s3,zero,0x00407844
00407830  _nop
00407834  jal 0x004021d4
00407838  _move a0,s3
0040783c  lw gp,0x10(sp)
00407840  nop
00407844  lw t9,-0x7ea4(gp)
00407848  li a0,0x117
0040784c  jalr t9
00407850  _addiu a1,sp,0x2c
00407854  lw gp,0x10(sp)
00407858  li a0,0x112
0040785c  lw t9,-0x7ea4(gp)
00407860  nop
00407864  jalr t9
00407868  _addiu a1,sp,0x34
0040786c  lw gp,0x10(sp)
00407870  li a0,0x113
00407874  lw t9,-0x7ea4(gp)
00407878  nop
0040787c  jalr t9
00407880  _addiu a1,sp,0x38
00407884  lw gp,0x10(sp)
00407888  li a0,0x110
0040788c  lw t9,-0x7ea4(gp)
00407890  nop
00407894  jalr t9
00407898  _addiu a1,sp,0x1c
0040789c  lw gp,0x10(sp)
004078a0  li a0,0x119
004078a4  lw t9,-0x7ea4(gp)
004078a8  nop
004078ac  jalr t9
004078b0  _addiu a1,sp,0x50
004078b4  lw gp,0x10(sp)
004078b8  li a0,0x1
004078bc  lw t9,-0x7ea4(gp)
004078c0  nop
004078c4  jalr t9
004078c8  _addiu a1,sp,0x4b8
004078cc  lw gp,0x10(sp)
004078d0  li a0,0x3b
004078d4  lw t9,-0x7ea4(gp)
004078d8  nop
004078dc  jalr t9
004078e0  _addiu a1,sp,0x18
004078e4  lw gp,0x10(sp)
004078e8  li a0,0x19
004078ec  lw t9,-0x7ea4(gp)
004078f0  nop
004078f4  jalr t9
004078f8  _addiu a1,sp,0x44
004078fc  lw gp,0x10(sp)
00407900  li a0,0x3
00407904  lw t9,-0x7ea4(gp)
00407908  nop
0040790c  jalr t9
00407910  _addiu a1,sp,0x48
00407914  lw gp,0x10(sp)
00407918  li a0,0xc
0040791c  lw t9,-0x7ea4(gp)
00407920  nop
00407924  jalr t9
00407928  _addiu a1,sp,0x24
0040792c  lw gp,0x10(sp)
00407930  li a0,0xd
00407934  lw t9,-0x7ea4(gp)
00407938  nop
0040793c  jalr t9
00407940  _addiu a1,sp,0x28
00407944  lw gp,0x10(sp)
00407948  li a0,0x4
0040794c  lw t9,-0x7ea4(gp)
00407950  nop
00407954  jalr t9
00407958  _addiu a1,sp,0x134
0040795c  lw gp,0x10(sp)
00407960  li a0,0x5
00407964  lw t9,-0x7ea4(gp)
00407968  nop
0040796c  jalr t9
00407970  _addiu a1,sp,0x198
00407974  lw gp,0x10(sp)
00407978  li a0,0x6
0040797c  lw t9,-0x7ea4(gp)
00407980  nop
00407984  jalr t9
00407988  _addiu a1,sp,0x1fc
0040798c  lw gp,0x10(sp)
00407990  li a0,0x7
00407994  lw t9,-0x7ea4(gp)
00407998  nop
0040799c  jalr t9
004079a0  _addiu a1,sp,0x260
004079a4  lw gp,0x10(sp)
004079a8  li a0,0x8
004079ac  lw t9,-0x7ea4(gp)
004079b0  nop
004079b4  jalr t9
004079b8  _addiu a1,sp,0x2c4
004079bc  lw gp,0x10(sp)
004079c0  li a0,0x9
004079c4  lw t9,-0x7ea4(gp)
004079c8  nop
004079cc  jalr t9
004079d0  _addiu a1,sp,0x328
004079d4  lw gp,0x10(sp)
004079d8  li a0,0xa
004079dc  lw t9,-0x7ea4(gp)
004079e0  nop
004079e4  jalr t9
004079e8  _addiu a1,sp,0x38c
004079ec  lw gp,0x10(sp)
004079f0  li a0,0xb
004079f4  lw t9,-0x7ea4(gp)
004079f8  nop
004079fc  jalr t9
00407a00  _addiu a1,sp,0x3f0
00407a04  lw gp,0x10(sp)
00407a08  li a0,0x1e
00407a0c  lw t9,-0x7ea4(gp)
00407a10  nop
00407a14  jalr t9
00407a18  _addiu a1,sp,0x454
00407a1c  lw gp,0x10(sp)
00407a20  li a0,0x10e
00407a24  lw t9,-0x7ea4(gp)
00407a28  nop
00407a2c  jalr t9
00407a30  _addiu a1,sp,0x58
00407a34  lw gp,0x10(sp)
00407a38  li a0,0x16
00407a3c  lw t9,-0x7ea4(gp)
00407a40  nop
00407a44  jalr t9
00407a48  _addiu a1,sp,0x54
00407a4c  lw gp,0x10(sp)
00407a50  li a0,0x19
00407a54  lw t9,-0x7ea4(gp)
00407a58  nop
00407a5c  jalr t9
00407a60  _addiu a1,sp,0x5c
00407a64  lw gp,0x10(sp)
00407a68  li a0,0x1d
00407a6c  lw t9,-0x7ea4(gp)
00407a70  nop
00407a74  jalr t9
00407a78  _addiu a1,sp,0x60
00407a7c  lw gp,0x10(sp)
00407a80  li a0,0x26
00407a84  lw t9,-0x7ea4(gp)
00407a88  nop
00407a8c  jalr t9
00407a90  _addiu a1,sp,0x64
00407a94  lw v0,0x54(sp)
00407a98  lw gp,0x10(sp)
00407a9c  beq v0,zero,0x00407aa8
00407aa0  _li v0,0x1
00407aa4  sw v0,0x58(sp)
00407aa8  bne s2,zero,0x00407ad4
00407aac  _nop
00407ab0  lw t9,-0x7f24(gp)
00407ab4  lui a1,0x41
00407ab8  addiu a1,a1,0x32bc
00407abc  addiu a0,sp,0x580
00407ac0  jalr t9
00407ac4  _li a2,0x8
00407ac8  lw gp,0x10(sp)
00407acc  bne v0,zero,0x00407ea4
00407ad0  _nop
00407ad4  lw t9,-0x7f3c(gp)
00407ad8  addiu a0,sp,0x5e4
00407adc  jalr t9
00407ae0  _clear a1
00407ae4  lw gp,0x10(sp)
00407ae8  addiu a1,sp,0xd0
00407aec  li a0,0xc9
00407af0  lw t9,-0x7ea4(gp)
00407af4  nop
00407af8  jalr t9
00407afc  _addiu s4,sp,0x580
00407b00  lb v1,0xd4(sp)
00407b04  lb v0,0xd5(sp)
00407b08  lw gp,0x10(sp)
00407b0c  addu v0,v1,v0
00407b10  lw v1,0x5e4(sp)
00407b14  lw t9,-0x7f4c(gp)
00407b18  addu v0,v0,v1
00407b1c  move a0,v0
00407b20  jalr t9
00407b24  _sw v0,0x5e4(sp)
00407b28  lw gp,0x10(sp)
00407b2c  nop
00407b30  lw t9,-0x7f04(gp)
00407b34  nop
00407b38  jalr t9
00407b3c  _nop
00407b40  lui v1,0x98
00407b44  ori v1,v1,0x9680
00407b48  div v0,v1
00407b4c  bne v1,zero,0x00407b58
00407b50  _nop
00407b54  break 0x1c00
00407b58  li a2,0xa
00407b5c  lui t2,0x1
00407b60  ori t2,t2,0x86a0
00407b64  li t0,0x3e8
00407b68  li t1,0x2710
00407b6c  lui t3,0xf
00407b70  ori t3,t3,0x4240
00407b74  li a3,0x64
00407b78  lw gp,0x10(sp)
00407b7c  move a1,s4
00407b80  li a0,0x111
00407b84  lw t9,-0x7edc(gp)
00407b88  sb zero,0x588(sp)
00407b8c  mfhi v0
00407b90  mult v0,a2
00407b94  mflo v0
00407b98  divu v0,t2
00407b9c  bne t2,zero,0x00407ba8
00407ba0  _nop
00407ba4  break 0x1c00
00407ba8  mflo s6
00407bac  divu v0,v1
00407bb0  bne v1,zero,0x00407bbc
00407bb4  _nop
00407bb8  break 0x1c00
00407bbc  mflo s5
00407bc0  divu v0,t0
00407bc4  bne t0,zero,0x00407bd0
00407bc8  _nop
00407bcc  break 0x1c00
00407bd0  mflo t8
00407bd4  divu v0,a2
00407bd8  bne a2,zero,0x00407be4
00407bdc  _nop
00407be0  break 0x1c00
00407be4  mflo t7
00407be8  divu v0,t1
00407bec  bne t1,zero,0x00407bf8
00407bf0  _nop
00407bf4  break 0x1c00
00407bf8  mflo t6
00407bfc  divu v0,t3
00407c00  bne t3,zero,0x00407c0c
00407c04  _nop
00407c08  break 0x1c00
00407c0c  mflo t5
00407c10  divu v0,a3
00407c14  bne a3,zero,0x00407c20
00407c18  _nop
00407c1c  break 0x1c00
00407c20  mflo t4
00407c24  divu s6,a2
00407c28  bne a2,zero,0x00407c34
00407c2c  _nop
00407c30  break 0x1c00
00407c34  mfhi s6
00407c38  divu s5,a2
00407c3c  bne a2,zero,0x00407c48
00407c40  _nop
00407c44  break 0x1c00
00407c48  mfhi s5
00407c4c  addu s5,s6,s5
00407c50  divu t8,a2
00407c54  bne a2,zero,0x00407c60
00407c58  _nop
00407c5c  break 0x1c00
00407c60  mfhi s8
00407c64  divu t7,a2
00407c68  bne a2,zero,0x00407c74
00407c6c  _nop
00407c70  break 0x1c00
00407c74  addu t7,s5,s8
00407c78  mfhi s7
00407c7c  addu t7,t7,s7
00407c80  divu t6,a2
00407c84  bne a2,zero,0x00407c90
00407c88  _nop
00407c8c  break 0x1c00
00407c90  mfhi t6
00407c94  divu t5,a2
00407c98  bne a2,zero,0x00407ca4
00407c9c  _nop
00407ca0  break 0x1c00
00407ca4  mfhi t8
00407ca8  addu t5,t6,t8
00407cac  divu t4,a2
00407cb0  bne a2,zero,0x00407cbc
00407cb4  _nop
00407cb8  break 0x1c00
00407cbc  li t4,0x3
00407cc0  mfhi s7
00407cc4  mult t7,t4
00407cc8  addu t4,t5,s7
00407ccc  mflo t7
00407cd0  addu t4,t4,t7
00407cd4  divu t4,a2
00407cd8  bne a2,zero,0x00407ce4
00407cdc  _nop
00407ce0  break 0x1c00
00407ce4  mfhi t4
00407ce8  subu t4,a2,t4
00407cec  div t4,a2
00407cf0  bne a2,zero,0x00407cfc
00407cf4  _nop
00407cf8  break 0x1c00
00407cfc  mfhi t4
00407d00  addu v0,t4,v0
00407d04  divu v0,v1
00407d08  bne v1,zero,0x00407d14
00407d0c  _nop
00407d10  break 0x1c00
00407d14  mflo v1
00407d18  divu v0,t3
00407d1c  bne t3,zero,0x00407d28
00407d20  _nop
00407d24  break 0x1c00
00407d28  mflo t3
00407d2c  divu v0,t2
00407d30  bne t2,zero,0x00407d3c
00407d34  _nop
00407d38  break 0x1c00
00407d3c  mflo t2
00407d40  divu v0,t1
00407d44  bne t1,zero,0x00407d50
00407d48  _nop
00407d4c  break 0x1c00
00407d50  mflo t1
00407d54  divu v0,t0
00407d58  bne t0,zero,0x00407d64
00407d5c  _nop
00407d60  break 0x1c00
00407d64  mflo t0
00407d68  divu v0,a3
00407d6c  bne a3,zero,0x00407d78
00407d70  _nop
00407d74  break 0x1c00
00407d78  mflo a3
00407d7c  divu v0,a2
00407d80  bne a2,zero,0x00407d8c
00407d84  _nop
00407d88  break 0x1c00
00407d8c  mflo v0
00407d90  mfhi t5
00407d94  addiu t5,t5,0x30
00407d98  sb t5,0x587(sp)
00407d9c  divu v0,a2
00407da0  bne a2,zero,0x00407dac
00407da4  _nop
00407da8  break 0x1c00
00407dac  mfhi t4
00407db0  addiu t4,t4,0x30
00407db4  sb t4,0x586(sp)
00407db8  divu v1,a2
00407dbc  bne a2,zero,0x00407dc8
00407dc0  _nop
00407dc4  break 0x1c00
00407dc8  mfhi v1
00407dcc  addiu v1,v1,0x30
00407dd0  sb v1,0x580(sp)
00407dd4  divu t3,a2
00407dd8  bne a2,zero,0x00407de4
00407ddc  _nop
00407de0  break 0x1c00
00407de4  mfhi t3
00407de8  addiu t3,t3,0x30
00407dec  sb t3,0x581(sp)
00407df0  divu t2,a2
00407df4  bne a2,zero,0x00407e00
00407df8  _nop
00407dfc  break 0x1c00
00407e00  mfhi t2
00407e04  addiu t2,t2,0x30
00407e08  sb t2,0x582(sp)
00407e0c  divu t1,a2
00407e10  bne a2,zero,0x00407e1c
00407e14  _nop
00407e18  break 0x1c00
00407e1c  mfhi t1
00407e20  addiu t1,t1,0x30
00407e24  sb t1,0x583(sp)
00407e28  divu t0,a2
00407e2c  bne a2,zero,0x00407e38
00407e30  _nop
00407e34  break 0x1c00
00407e38  mfhi t0
00407e3c  addiu t0,t0,0x30
00407e40  sb t0,0x584(sp)
00407e44  divu a3,a2
00407e48  bne a2,zero,0x00407e54
00407e4c  _nop
00407e50  break 0x1c00
00407e54  mfhi a3
00407e58  addiu a3,a3,0x30
00407e5c  jalr t9
00407e60  _sb a3,0x585(sp)
00407e64  lw gp,0x10(sp)
00407e68  nop
00407e6c  lw t9,-0x7ed8(gp)
00407e70  nop
00407e74  jalr t9
00407e78  _li a0,0x1
00407e7c  lw gp,0x10(sp)
00407e80  lui a0,0x41
00407e84  addiu a0,a0,0x1ba0
00407e88  lw t9,-0x7e5c(gp)
00407e8c  nop
00407e90  jalr t9
00407e94  _move a1,s4
00407e98  lw gp,0x10(sp)
00407e9c  bne s2,zero,0x00408d48
00407ea0  _clear v0
00407ea4  lw t9,-0x7f84(gp)
00407ea8  move a0,s0
00407eac  jalr t9
00407eb0  _addiu a1,sp,0x648
00407eb4  lw gp,0x10(sp)
00407eb8  bgez v0,0x00407ee0
00407ebc  _nop
00407ec0  lw t9,-0x7e5c(gp)
00407ec4  lui a0,0x41
00407ec8  addiu a0,a0,0x1bb4
00407ecc  move a1,s0
00407ed0  jalr t9
00407ed4  _nop
00407ed8  b 0x00408d48
00407edc  _li v0,-0x1
00407ee0  lw a0,0x67c(sp)
00407ee4  lw t9,-0x7e98(gp)
00407ee8  nop
00407eec  jalr t9
00407ef0  _addiu a0,a0,0x800
00407ef4  lw gp,0x10(sp)
00407ef8  bne v0,zero,0x00407f18
00407efc  _move s4,v0
00407f00  lw a1,0x67c(sp)
00407f04  lui a0,0x41
00407f08  lw t9,-0x7e5c(gp)
00407f0c  addiu a0,a0,0x1bc8
00407f10  b 0x00407ed0
00407f14  _addiu a1,a1,0x800
00407f18  lw v1,0x18(sp)
00407f1c  li v0,0x1
00407f20  bne v1,v0,0x00407f40
00407f24  _li a2,0x5
00407f28  lw v0,0x20(sp)
00407f2c  nop
00407f30  beq v0,zero,0x00407f4c
00407f34  _li a2,0x2
00407f38  li a2,0x3
00407f3c  li v0,0x6
00407f40  lw v1,0x1c(sp)
00407f44  nop
00407f48  movz a2,v0,v1
00407f4c  lw t9,-0x7f70(gp)
00407f50  addiu s5,sp,0x6c
00407f54  lui a1,0x41
00407f58  addiu a1,a1,0x1be0
00407f5c  jalr t9
00407f60  _move a0,s5
00407f64  lw gp,0x10(sp)
00407f68  move a0,s5
00407f6c  lw t9,-0x7f9c(gp)
00407f70  nop
00407f74  jalr t9
00407f78  _addiu s2,sp,0x6c
00407f7c  lw gp,0x10(sp)
00407f80  move a1,s5
00407f84  move a2,v0
00407f88  lw t9,-0x7e7c(gp)
00407f8c  nop
00407f90  jalr t9
00407f94  _move a0,s4
00407f98  lw gp,0x10(sp)
00407f9c  nop
00407fa0  lw t9,-0x7f9c(gp)
00407fa4  nop
00407fa8  jalr t9
00407fac  _move a0,s5
00407fb0  lw gp,0x10(sp)
00407fb4  lw a0,0x18(sp)
00407fb8  lw v1,0x2c(sp)
00407fbc  lw t9,-0x7f70(gp)
00407fc0  xori a0,a0,0x1
00407fc4  clear a2
00407fc8  lui a1,0x41
00407fcc  movn a2,v1,a0
00407fd0  addiu a1,a1,0x1bec
00407fd4  move a0,s2
00407fd8  jalr t9
00407fdc  _addu s5,s4,v0
00407fe0  lw gp,0x10(sp)
00407fe4  nop
00407fe8  lw t9,-0x7f9c(gp)
00407fec  nop
00407ff0  jalr t9
00407ff4  _move a0,s2
00407ff8  lw gp,0x10(sp)
00407ffc  move a2,v0
00408000  move a0,s5
00408004  lw t9,-0x7e7c(gp)
00408008  nop
0040800c  jalr t9
00408010  _move a1,s2
00408014  lw gp,0x10(sp)
00408018  nop
0040801c  lw t9,-0x7f9c(gp)
00408020  nop
00408024  jalr t9
00408028  _move a0,s2
0040802c  lw a2,0x30(sp)
00408030  addu s5,s5,v0
00408034  li v0,0x1
00408038  lw gp,0x10(sp)
0040803c  bne a2,v0,0x0040804c
00408040  _li v0,0x2
00408044  b 0x0040805c
00408048  _li a2,0x6
0040804c  beq a2,v0,0x00408d78
00408050  _xori v1,a2,0x3
00408054  li v0,0x86
00408058  movz a2,v0,v1
0040805c  lw t9,-0x7f70(gp)
00408060  addiu s2,sp,0x6c
00408064  lui a1,0x41
00408068  addiu a1,a1,0x1bf8
0040806c  jalr t9
00408070  _move a0,s2
00408074  lw gp,0x10(sp)
00408078  nop
0040807c  lw t9,-0x7f9c(gp)
00408080  nop
00408084  jalr t9
00408088  _move a0,s2
0040808c  lw gp,0x10(sp)
00408090  move a2,v0
00408094  move a1,s2
00408098  lw t9,-0x7e7c(gp)
0040809c  nop
004080a0  jalr t9
004080a4  _move a0,s5
004080a8  lw gp,0x10(sp)
004080ac  nop
004080b0  lw t9,-0x7f9c(gp)
004080b4  nop
004080b8  jalr t9
004080bc  _move a0,s2
004080c0  lw gp,0x10(sp)
004080c4  lw a2,0x58(sp)
004080c8  lui a1,0x41
004080cc  lw t9,-0x7f70(gp)
004080d0  addiu a1,a1,0x1c0c
004080d4  move a0,s2
004080d8  jalr t9
004080dc  _addu s5,s5,v0
004080e0  lw gp,0x10(sp)
004080e4  nop
004080e8  lw t9,-0x7f9c(gp)
004080ec  nop
004080f0  jalr t9
004080f4  _move a0,s2
004080f8  lw gp,0x10(sp)
004080fc  move a2,v0
00408100  move a1,s2
00408104  lw t9,-0x7e7c(gp)
00408108  nop
0040810c  jalr t9
00408110  _move a0,s5
00408114  lw gp,0x10(sp)
00408118  nop
0040811c  lw t9,-0x7f9c(gp)
00408120  nop
00408124  jalr t9
00408128  _move a0,s2
0040812c  lw gp,0x10(sp)
00408130  lw a2,0x34(sp)
00408134  lui a1,0x41
00408138  lw t9,-0x7f70(gp)
0040813c  addiu a1,a1,0x1c28
00408140  move a0,s2
00408144  jalr t9
00408148  _addu s5,s5,v0
0040814c  lw gp,0x10(sp)
00408150  nop
00408154  lw t9,-0x7f9c(gp)
00408158  nop
0040815c  jalr t9
00408160  _move a0,s2
00408164  lw gp,0x10(sp)
00408168  move a2,v0
0040816c  move a1,s2
00408170  lw t9,-0x7e7c(gp)
00408174  nop
00408178  jalr t9
0040817c  _move a0,s5
00408180  lw gp,0x10(sp)
00408184  nop
00408188  lw t9,-0x7f9c(gp)
0040818c  nop
00408190  jalr t9
00408194  _move a0,s2
00408198  lw gp,0x10(sp)
0040819c  lw a2,0x38(sp)
004081a0  lui a1,0x41
004081a4  lw t9,-0x7f70(gp)
004081a8  addiu a1,a1,0x1c38
004081ac  move a0,s2
004081b0  jalr t9
004081b4  _addu s5,s5,v0
004081b8  lw gp,0x10(sp)
004081bc  nop
004081c0  lw t9,-0x7f9c(gp)
004081c4  nop
004081c8  jalr t9
004081cc  _move a0,s2
004081d0  lw gp,0x10(sp)
004081d4  move a2,v0
004081d8  move a0,s5
004081dc  lw t9,-0x7e7c(gp)
004081e0  nop
004081e4  jalr t9
004081e8  _move a1,s2
004081ec  lw gp,0x10(sp)
004081f0  nop
004081f4  lw t9,-0x7f9c(gp)
004081f8  nop
004081fc  jalr t9
00408200  _move a0,s2
00408204  lw v1,0x5c(sp)
00408208  addu s5,s5,v0
0040820c  li v0,0x6
00408210  lw gp,0x10(sp)
00408214  bne v1,v0,0x00408274
00408218  _clear a2
0040821c  lw v0,0x60(sp)
00408220  li v1,0x1
00408224  beq v0,v1,0x00408244
00408228  _li a2,0x1
0040822c  li v1,0x2
00408230  beq v0,v1,0x00408244
00408234  _li a2,0x2
00408238  xori v0,v0,0x3
0040823c  li a2,0x3
00408240  movn a2,zero,v0
00408244  lw v0,0x64(sp)
00408248  li v1,0x1
0040824c  bne v0,v1,0x0040825c
00408250  _li v1,0x2
00408254  b 0x00408274
00408258  _ori a2,a2,0x4
0040825c  bne v0,v1,0x0040826c
00408260  _xori v0,v0,0x3
00408264  b 0x00408274
00408268  _ori a2,a2,0x8
0040826c  ori v1,a2,0xc
00408270  movz a2,v1,v0
00408274  lw t9,-0x7f70(gp)
00408278  addiu s2,sp,0x6c
0040827c  lui a1,0x41
00408280  addiu a1,a1,0x1c4c
00408284  jalr t9
00408288  _move a0,s2
0040828c  lw gp,0x10(sp)
00408290  nop
00408294  lw t9,-0x7f9c(gp)
00408298  nop
0040829c  jalr t9
004082a0  _move a0,s2
004082a4  lw gp,0x10(sp)
004082a8  move a0,s5
004082ac  move a2,v0
004082b0  lw t9,-0x7e7c(gp)
004082b4  nop
004082b8  jalr t9
004082bc  _move a1,s2
004082c0  lw gp,0x10(sp)
004082c4  nop
004082c8  lw t9,-0x7f9c(gp)
004082cc  nop
004082d0  jalr t9
004082d4  _move a0,s2
004082d8  lw gp,0x10(sp)
004082dc  lw s6,0x38(sp)
004082e0  beq s3,zero,0x00408344
004082e4  _addu s5,s5,v0
004082e8  lw t9,-0x7f64(gp)
004082ec  lui a1,0x41
004082f0  addiu a1,a1,0xf6c
004082f4  jalr t9
004082f8  _move a0,s3
004082fc  lw gp,0x10(sp)
00408300  beq v0,zero,0x00408324
00408304  _move a0,s3
00408308  lw t9,-0x7f64(gp)
0040830c  lui a1,0x41
00408310  jalr t9
00408314  _addiu a1,a1,0xfa4
00408318  lw gp,0x10(sp)
0040831c  bne v0,zero,0x00408348
00408320  _li a2,0x1
00408324  lw v1,0x18(sp)
00408328  li v0,0x1
0040832c  bne v1,v0,0x00408348
00408330  _li a2,0x1
00408334  lw v0,0x3c(sp)
00408338  nop
0040833c  bne v0,zero,0x00408348
00408340  _li a2,0x2
00408344  li a2,0x1
00408348  lw t9,-0x7f70(gp)
0040834c  addiu s2,sp,0x6c
00408350  lui a1,0x41
00408354  addiu a1,a1,0x1c5c
00408358  jalr t9
0040835c  _move a0,s2
00408360  lw gp,0x10(sp)
00408364  nop
00408368  lw t9,-0x7f9c(gp)
0040836c  nop
00408370  jalr t9
00408374  _move a0,s2
00408378  lw gp,0x10(sp)
0040837c  move a2,v0
00408380  move a1,s2
00408384  lw t9,-0x7e7c(gp)
00408388  nop
0040838c  jalr t9
00408390  _move a0,s5
00408394  lw gp,0x10(sp)
00408398  nop
0040839c  lw t9,-0x7f9c(gp)
004083a0  nop
004083a4  jalr t9
004083a8  _move a0,s2
004083ac  lw gp,0x10(sp)
004083b0  lw a2,0x40(sp)
004083b4  lui a1,0x41
004083b8  lw t9,-0x7f70(gp)
004083bc  addiu a1,a1,0x1c74
004083c0  move a0,s2
004083c4  jalr t9
004083c8  _addu s5,s5,v0
004083cc  lw gp,0x10(sp)
004083d0  nop
004083d4  lw t9,-0x7f9c(gp)
004083d8  nop
004083dc  jalr t9
004083e0  _move a0,s2
004083e4  lw gp,0x10(sp)
004083e8  move a0,s5
004083ec  move a2,v0
004083f0  lw t9,-0x7e7c(gp)
004083f4  nop
004083f8  jalr t9
004083fc  _move a1,s2
00408400  lw gp,0x10(sp)
00408404  nop
00408408  lw t9,-0x7f9c(gp)
0040840c  nop
00408410  jalr t9
00408414  _move a0,s2
00408418  addu s5,s5,v0
0040841c  li v0,0x2
00408420  lw gp,0x10(sp)
00408424  bne s6,v0,0x00408910
00408428  _li v0,0x1
0040842c  lw v1,0x44(sp)
00408430  nop
00408434  beq v1,v0,0x00408448
00408438  _lui a0,0x41
0040843c  lw t9,-0x7e8c(gp)
00408440  b 0x0040846c
00408444  _addiu a0,a0,0x1c88
00408448  lw v0,0x48(sp)
0040844c  nop
00408450  addiu v0,v0,-0x1
00408454  sltiu v0,v0,0x2
00408458  bne v0,zero,0x00408494
0040845c  _nop
00408460  lw t9,-0x7e8c(gp)
00408464  lui a0,0x41
00408468  addiu a0,a0,0x1cb4
0040846c  jalr t9
00408470  _nop
00408474  lw gp,0x10(sp)
00408478  nop
0040847c  lw t9,-0x7fc4(gp)
00408480  nop
00408484  jalr t9
00408488  _move a0,s4
0040848c  b 0x00407ed8
00408490  _nop
00408494  lw v0,0x28(sp)
00408498  lw t9,-0x7f70(gp)
0040849c  lui a1,0x41
004084a0  addiu v0,v0,0x1
004084a4  sw v1,0x6e0(sp)
004084a8  addiu a1,a1,0x1cd0
004084ac  move a2,v0
004084b0  move a0,s2
004084b4  jalr t9
004084b8  _sw v0,0x28(sp)
004084bc  lw gp,0x10(sp)
004084c0  move a0,s2
004084c4  addiu s3,sp,0xd0
004084c8  lw t9,-0x7f9c(gp)
004084cc  lui s7,0x41
004084d0  jalr t9
004084d4  _lui s8,0x41
004084d8  lw gp,0x10(sp)
004084dc  move a0,s5
004084e0  move a2,v0
004084e4  lw t9,-0x7e7c(gp)
004084e8  move a1,s2
004084ec  jalr t9
004084f0  _lui s6,0x41
004084f4  lw gp,0x10(sp)
004084f8  nop
004084fc  lw t9,-0x7f9c(gp)
00408500  nop
00408504  jalr t9
00408508  _move a0,s2
0040850c  lw gp,0x10(sp)
00408510  addu s5,s5,v0
00408514  lw v1,0x6e0(sp)
00408518  lw v0,0x48(sp)
0040851c  lw t9,-0x7e50(gp)
00408520  bne v0,v1,0x0040871c
00408524  _nop
00408528  move a0,s2
0040852c  jalr t9
00408530  _addiu a1,sp,0x134
00408534  move a0,s2
00408538  li a1,0x5
0040853c  jal 0x00403e68
00408540  _move a2,s3
00408544  lw gp,0x10(sp)
00408548  addiu a1,s7,0x1ce8
0040854c  move a2,s3
00408550  lw t9,-0x7f70(gp)
00408554  move a0,s2
00408558  jalr t9
0040855c  _sb zero,0xda(sp)
00408560  lw gp,0x10(sp)
00408564  nop
00408568  lw t9,-0x7f9c(gp)
0040856c  nop
00408570  jalr t9
00408574  _move a0,s2
00408578  lw gp,0x10(sp)
0040857c  move a2,v0
00408580  move a1,s2
00408584  lw t9,-0x7e7c(gp)
00408588  nop
0040858c  jalr t9
00408590  _move a0,s5
00408594  lw gp,0x10(sp)
00408598  nop
0040859c  lw t9,-0x7f9c(gp)
004085a0  nop
004085a4  jalr t9
004085a8  _move a0,s2
004085ac  lw gp,0x10(sp)
004085b0  move a0,s2
004085b4  addiu a1,sp,0x198
004085b8  lw t9,-0x7e50(gp)
004085bc  nop
004085c0  jalr t9
004085c4  _addu s5,s5,v0
004085c8  move a0,s2
004085cc  li a1,0x5
004085d0  jal 0x00403e68
004085d4  _move a2,s3
004085d8  lw gp,0x10(sp)
004085dc  lui v0,0x41
004085e0  addiu a1,v0,0x1cfc
004085e4  lw t9,-0x7f70(gp)
004085e8  move a2,s3
004085ec  move a0,s2
004085f0  jalr t9
004085f4  _sb zero,0xda(sp)
004085f8  lw gp,0x10(sp)
004085fc  nop
00408600  lw t9,-0x7f9c(gp)
00408604  nop
00408608  jalr t9
0040860c  _move a0,s2
00408610  lw gp,0x10(sp)
00408614  move a2,v0
00408618  move a1,s2
0040861c  lw t9,-0x7e7c(gp)
00408620  nop
00408624  jalr t9
00408628  _move a0,s5
0040862c  lw gp,0x10(sp)
00408630  nop
00408634  lw t9,-0x7f9c(gp)
00408638  nop
0040863c  jalr t9
00408640  _move a0,s2
00408644  lw gp,0x10(sp)
00408648  move a0,s2
0040864c  addiu a1,sp,0x1fc
00408650  lw t9,-0x7e50(gp)
00408654  nop
00408658  jalr t9
0040865c  _addu s5,s5,v0
00408660  move a0,s2
00408664  li a1,0x5
00408668  jal 0x00403e68
0040866c  _move a2,s3
00408670  lw gp,0x10(sp)
00408674  addiu a1,s8,0x1d0c
00408678  move a2,s3
0040867c  lw t9,-0x7f70(gp)
00408680  move a0,s2
00408684  jalr t9
00408688  _sb zero,0xda(sp)
0040868c  lw gp,0x10(sp)
00408690  nop
00408694  lw t9,-0x7f9c(gp)
00408698  nop
0040869c  jalr t9
004086a0  _move a0,s2
004086a4  lw gp,0x10(sp)
004086a8  move a2,v0
004086ac  move a1,s2
004086b0  lw t9,-0x7e7c(gp)
004086b4  nop
004086b8  jalr t9
004086bc  _move a0,s5
004086c0  lw gp,0x10(sp)
004086c4  nop
004086c8  lw t9,-0x7f9c(gp)
004086cc  nop
004086d0  jalr t9
004086d4  _move a0,s2
004086d8  lw gp,0x10(sp)
004086dc  move a0,s2
004086e0  addiu a1,sp,0x260
004086e4  lw t9,-0x7e50(gp)
004086e8  nop
004086ec  jalr t9
004086f0  _addu s5,s5,v0
004086f4  li a1,0x5
004086f8  move a2,s3
004086fc  jal 0x00403e68
00408700  _move a0,s2
00408704  lw gp,0x10(sp)
00408708  addiu a1,s6,0x1d1c
0040870c  move a2,s3
00408710  lw t9,-0x7f70(gp)
00408714  b 0x00408920
00408718  _sb zero,0xda(sp)
0040871c  move a0,s2
00408720  jalr t9
00408724  _addiu a1,sp,0x2c4
00408728  move a0,s2
0040872c  li a1,0xd
00408730  jal 0x00403e68
00408734  _move a2,s3
00408738  lw gp,0x10(sp)
0040873c  addiu a1,s7,0x1ce8
00408740  move a2,s3
00408744  lw t9,-0x7f70(gp)
00408748  move a0,s2
0040874c  jalr t9
00408750  _sb zero,0xea(sp)
00408754  lw gp,0x10(sp)
00408758  move a0,s2
0040875c  lw t9,-0x7f9c(gp)
00408760  nop
00408764  jalr t9
00408768  _addiu s7,sp,0x38c
0040876c  lw gp,0x10(sp)
00408770  move a2,v0
00408774  move a1,s2
00408778  lw t9,-0x7e7c(gp)
0040877c  nop
00408780  jalr t9
00408784  _move a0,s5
00408788  lw gp,0x10(sp)
0040878c  nop
00408790  lw t9,-0x7f9c(gp)
00408794  nop
00408798  jalr t9
0040879c  _move a0,s2
004087a0  lw gp,0x10(sp)
004087a4  move a0,s2
004087a8  addiu a1,sp,0x328
004087ac  lw t9,-0x7e50(gp)
004087b0  nop
004087b4  jalr t9
004087b8  _addu s5,s5,v0
004087bc  move a0,s2
004087c0  li a1,0xd
004087c4  jal 0x00403e68
004087c8  _move a2,s3
004087cc  lw gp,0x10(sp)
004087d0  lui v0,0x41
004087d4  addiu a1,v0,0x1cfc
004087d8  lw t9,-0x7f70(gp)
004087dc  move a2,s3
004087e0  move a0,s2
004087e4  jalr t9
004087e8  _sb zero,0xea(sp)
004087ec  lw gp,0x10(sp)
004087f0  nop
004087f4  lw t9,-0x7f9c(gp)
004087f8  nop
004087fc  jalr t9
00408800  _move a0,s2
00408804  lw gp,0x10(sp)
00408808  move a2,v0
0040880c  move a1,s2
00408810  lw t9,-0x7e7c(gp)
00408814  nop
00408818  jalr t9
0040881c  _move a0,s5
00408820  lw gp,0x10(sp)
00408824  nop
00408828  lw t9,-0x7f9c(gp)
0040882c  nop
00408830  jalr t9
00408834  _move a0,s2
00408838  lw gp,0x10(sp)
0040883c  move a0,s2
00408840  move a1,s7
00408844  lw t9,-0x7e50(gp)
00408848  nop
0040884c  jalr t9
00408850  _addu s5,s5,v0
00408854  move a0,s2
00408858  li a1,0xd
0040885c  jal 0x00403e68
00408860  _move a2,s3
00408864  lw gp,0x10(sp)
00408868  addiu a1,s8,0x1d0c
0040886c  move a2,s3
00408870  lw t9,-0x7f70(gp)
00408874  move a0,s2
00408878  jalr t9
0040887c  _sb zero,0xea(sp)
00408880  lw gp,0x10(sp)
00408884  nop
00408888  lw t9,-0x7f9c(gp)
0040888c  nop
00408890  jalr t9
00408894  _move a0,s2
00408898  lw gp,0x10(sp)
0040889c  move a2,v0
004088a0  move a1,s2
004088a4  lw t9,-0x7e7c(gp)
004088a8  nop
004088ac  jalr t9
004088b0  _move a0,s5
004088b4  lw gp,0x10(sp)
004088b8  nop
004088bc  lw t9,-0x7f9c(gp)
004088c0  nop
004088c4  jalr t9
004088c8  _move a0,s2
004088cc  lw gp,0x10(sp)
004088d0  move a1,s7
004088d4  move a0,s2
004088d8  lw t9,-0x7e50(gp)
004088dc  nop
004088e0  jalr t9
004088e4  _addu s5,s5,v0
004088e8  li a1,0xd
004088ec  move a2,s3
004088f0  jal 0x00403e68
004088f4  _move a0,s2
004088f8  lw gp,0x10(sp)
004088fc  addiu a1,s6,0x1d1c
00408900  move a2,s3
00408904  lw t9,-0x7f70(gp)
00408908  b 0x00408920
0040890c  _sb zero,0xea(sp)
00408910  lw t9,-0x7f70(gp)
00408914  lui a1,0x41
00408918  addiu a1,a1,0x1ce8
0040891c  addiu a2,sp,0x454
00408920  jalr t9
00408924  _move a0,s2
00408928  lw gp,0x10(sp)
0040892c  nop
00408930  lw t9,-0x7f9c(gp)
00408934  nop
00408938  jalr t9
0040893c  _move a0,s2
00408940  lw gp,0x10(sp)
00408944  move a1,s2
00408948  move a2,v0
0040894c  lw t9,-0x7e7c(gp)
00408950  nop
00408954  jalr t9
00408958  _move a0,s5
0040895c  lw gp,0x10(sp)
00408960  move a0,s2
00408964  lw t9,-0x7f9c(gp)
00408968  nop
0040896c  jalr t9
00408970  _addiu s2,sp,0x6c
00408974  lw gp,0x10(sp)
00408978  lui a1,0x41
0040897c  addiu a1,a1,0x1238
00408980  lw t9,-0x7f70(gp)
00408984  addiu a2,sp,0x4b8
00408988  move a0,s2
0040898c  jalr t9
00408990  _addu s3,s5,v0
00408994  lw gp,0x10(sp)
00408998  nop
0040899c  lw t9,-0x7f9c(gp)
004089a0  nop
004089a4  jalr t9
004089a8  _move a0,s2
004089ac  lw gp,0x10(sp)
004089b0  move a1,s2
004089b4  move a2,v0
004089b8  lw t9,-0x7e7c(gp)
004089bc  nop
004089c0  jalr t9
004089c4  _move a0,s3
004089c8  lw gp,0x10(sp)
004089cc  nop
004089d0  lw t9,-0x7f9c(gp)
004089d4  nop
004089d8  jalr t9
004089dc  _move a0,s2
004089e0  lw gp,0x10(sp)
004089e4  lui a1,0x41
004089e8  addiu a1,a1,0x1d2c
004089ec  lw t9,-0x7f70(gp)
004089f0  addiu a2,sp,0x580
004089f4  move a0,s2
004089f8  jalr t9
004089fc  _addu s3,s3,v0
00408a00  lw gp,0x10(sp)
00408a04  nop
00408a08  lw t9,-0x7f9c(gp)
00408a0c  nop
00408a10  jalr t9
00408a14  _move a0,s2
00408a18  lw gp,0x10(sp)
00408a1c  move a1,s2
00408a20  move a2,v0
00408a24  lw t9,-0x7e7c(gp)
00408a28  nop
00408a2c  jalr t9
00408a30  _move a0,s3
00408a34  lw gp,0x10(sp)
00408a38  nop
00408a3c  lw t9,-0x7f9c(gp)
00408a40  nop
00408a44  jalr t9
00408a48  _move a0,s2
00408a4c  lw gp,0x10(sp)
00408a50  lw a0,0x4c(sp)
00408a54  li v1,0x2
00408a58  lw t9,-0x7f70(gp)
00408a5c  slti a0,a0,0xf
00408a60  li a2,0x1
00408a64  lui a1,0x41
00408a68  movz a2,v1,a0
00408a6c  addiu a1,a1,0x1d3c
00408a70  move a0,s2
00408a74  jalr t9
00408a78  _addu s3,s3,v0
00408a7c  lw gp,0x10(sp)
00408a80  nop
00408a84  lw t9,-0x7f9c(gp)
00408a88  nop
00408a8c  jalr t9
00408a90  _move a0,s2
00408a94  lw gp,0x10(sp)
00408a98  move a1,s2
00408a9c  move a2,v0
00408aa0  lw t9,-0x7e7c(gp)
00408aa4  nop
00408aa8  jalr t9
00408aac  _move a0,s3
00408ab0  lw gp,0x10(sp)
00408ab4  nop
00408ab8  lw t9,-0x7f9c(gp)
00408abc  nop
00408ac0  jalr t9
00408ac4  _move a0,s2
00408ac8  lw gp,0x10(sp)
00408acc  lui a1,0x41
00408ad0  addiu a1,a1,0x1d4c
00408ad4  lw t9,-0x7f70(gp)
00408ad8  addiu a2,sp,0x51c
00408adc  move a0,s2
00408ae0  jalr t9
00408ae4  _addu s3,s3,v0
00408ae8  lw gp,0x10(sp)
00408aec  nop
00408af0  lw t9,-0x7f9c(gp)
00408af4  nop
00408af8  jalr t9
00408afc  _move a0,s2
00408b00  lw gp,0x10(sp)
00408b04  move a1,s2
00408b08  move a2,v0
00408b0c  lw t9,-0x7e7c(gp)
00408b10  nop
00408b14  jalr t9
00408b18  _move a0,s3
00408b1c  lw gp,0x10(sp)
00408b20  nop
00408b24  lw t9,-0x7f9c(gp)
00408b28  nop
00408b2c  jalr t9
00408b30  _move a0,s2
00408b34  lw gp,0x10(sp)
00408b38  lw a2,0x50(sp)
00408b3c  lui a1,0x41
00408b40  lw t9,-0x7f70(gp)
00408b44  addiu a1,a1,0x1d60
00408b48  move a0,s2
00408b4c  jalr t9
00408b50  _addu s3,s3,v0
00408b54  lw gp,0x10(sp)
00408b58  nop
00408b5c  lw t9,-0x7f9c(gp)
00408b60  nop
00408b64  jalr t9
00408b68  _move a0,s2
00408b6c  lw gp,0x10(sp)
00408b70  move a1,s2
00408b74  move a2,v0
00408b78  lw t9,-0x7e7c(gp)
00408b7c  nop
00408b80  jalr t9
00408b84  _move a0,s3
00408b88  lw gp,0x10(sp)
00408b8c  nop
00408b90  lw t9,-0x7f9c(gp)
00408b94  nop
00408b98  jalr t9
00408b9c  _move a0,s2
00408ba0  lw gp,0x10(sp)
00408ba4  move a0,s0
00408ba8  clear a1
00408bac  lw t9,-0x7fa0(gp)
00408bb0  nop
00408bb4  jalr t9
00408bb8  _move s5,v0
00408bbc  move s2,v0
00408bc0  li v0,-0x1
00408bc4  lw gp,0x10(sp)
00408bc8  bne s2,v0,0x00408be0
00408bcc  _clear a1
00408bd0  lui a0,0x41
00408bd4  lw t9,-0x7e5c(gp)
00408bd8  b 0x00407ecc
00408bdc  _addiu a0,a0,0x1d78
00408be0  lw t9,-0x7eb8(gp)
00408be4  move a0,s2
00408be8  jalr t9
00408bec  _clear a2
00408bf0  lw gp,0x10(sp)
00408bf4  lw a2,0x67c(sp)
00408bf8  addu s3,s3,s5
00408bfc  lw t9,-0x7f0c(gp)
00408c00  move a0,s2
00408c04  jalr t9
00408c08  _move a1,s3
00408c0c  lw v1,0x67c(sp)
00408c10  lw gp,0x10(sp)
00408c14  beq v0,v1,0x00408c28
00408c18  _lui a0,0x41
00408c1c  lw t9,-0x7e5c(gp)
00408c20  b 0x00407ecc
00408c24  _addiu a0,a0,0x1d8c
00408c28  lw t9,-0x7fc0(gp)
00408c2c  nop
00408c30  jalr t9
00408c34  _move a0,s2
00408c38  lw gp,0x10(sp)
00408c3c  lui a1,0x41
00408c40  addiu a1,a1,0x1da0
00408c44  lw t9,-0x7f00(gp)
00408c48  nop
00408c4c  jalr t9
00408c50  _move a0,s3
00408c54  lw gp,0x10(sp)
00408c58  beq v0,zero,0x00408cac
00408c5c  _move s2,v0
00408c60  lw t9,-0x7ea4(gp)
00408c64  addiu s5,sp,0xd0
00408c68  li a0,0xc9
00408c6c  move a1,s5
00408c70  jalr t9
00408c74  _addiu s0,sp,0x5e4
00408c78  move a0,s5
00408c7c  li a1,0x6
00408c80  jal 0x00403e68
00408c84  _move a2,s0
00408c88  lw gp,0x10(sp)
00408c8c  addiu a0,s2,0x1b
00408c90  move a1,s0
00408c94  lw t9,-0x7e7c(gp)
00408c98  nop
00408c9c  jalr t9
00408ca0  _li a2,0xc
00408ca4  lw gp,0x10(sp)
00408ca8  nop
00408cac  lw t9,-0x7fa0(gp)
00408cb0  move a0,s1
00408cb4  jalr t9
00408cb8  _li a1,0x302
00408cbc  move s0,v0
00408cc0  li v0,-0x1
00408cc4  lw gp,0x10(sp)
00408cc8  bne s0,v0,0x00408ce0
00408ccc  _subu s3,s3,s4
00408cd0  lui a0,0x41
00408cd4  lw t9,-0x7e5c(gp)
00408cd8  b 0x00408d14
00408cdc  _addiu a0,a0,0x1d78
00408ce0  lw a2,0x67c(sp)
00408ce4  lw t9,-0x7ee8(gp)
00408ce8  addu a2,s3,a2
00408cec  move a0,s0
00408cf0  jalr t9
00408cf4  _move a1,s4
00408cf8  lw v1,0x67c(sp)
00408cfc  lw gp,0x10(sp)
00408d00  addu s3,s3,v1
00408d04  beq v0,s3,0x00408d1c
00408d08  _lui a0,0x41
00408d0c  lw t9,-0x7e5c(gp)
00408d10  addiu a0,a0,0x1da8
00408d14  b 0x00407ed0
00408d18  _move a1,s1
00408d1c  lw t9,-0x7fc0(gp)
00408d20  nop
00408d24  jalr t9
00408d28  _move a0,s0
00408d2c  lw gp,0x10(sp)
00408d30  nop
00408d34  lw t9,-0x7fc4(gp)
00408d38  nop
00408d3c  jalr t9
00408d40  _move a0,s4
00408d44  clear v0
00408d48  lw ra,0x70c(sp)
00408d4c  lw s8,0x708(sp)
00408d50  lw s7,0x704(sp)
00408d54  lw s6,0x700(sp)
00408d58  lw s5,0x6fc(sp)
00408d5c  lw s4,0x6f8(sp)
00408d60  lw s3,0x6f4(sp)
00408d64  lw s2,0x6f0(sp)
00408d68  lw s1,0x6ec(sp)
00408d6c  lw s0,0x6e8(sp)
00408d70  jr ra
00408d74  _addiu sp,sp,0x710
00408d78  b 0x0040805c
00408d7c  _li a2,0x82
