# FUN_00440908 @ 00440908
00440908  addiu sp,sp,-0x258
0044090c  sw ra,0x254(sp)
00440910  sw s8,0x250(sp)
00440914  sw s7,0x24c(sp)
00440918  sw s6,0x248(sp)
0044091c  sw s5,0x244(sp)
00440920  sw s4,0x240(sp)
00440924  sw s3,0x23c(sp)
00440928  sw s2,0x238(sp)
0044092c  sw s1,0x234(sp)
00440930  sw s0,0x230(sp)
00440934  lui gp,0x47
00440938  addiu gp,gp,0x2630
0044093c  sw gp,0x28(sp)
00440940  lw t9,-0x7db4(gp)
00440944  move s0,a0
00440948  clear a1
0044094c  addiu a0,sp,0x118
00440950  jalr t9
00440954  _li a2,0x100
00440958  lw gp,0x28(sp)
0044095c  lui s1,0x45
00440960  lui a1,0x45
00440964  lw t9,-0x7fbc(gp)
00440968  addiu a1,a1,-0x3b10
0044096c  move a0,s0
00440970  jalr t9
00440974  _addiu a2,s1,-0x4cd4
00440978  lw gp,0x28(sp)
0044097c  lui a1,0x45
00440980  addiu a1,a1,0x6124
00440984  lw t9,-0x7fbc(gp)
00440988  move a0,s0
0044098c  addiu a2,s1,-0x4cd4
00440990  jalr t9
00440994  _move s3,v0
00440998  lb v0,0x0(v0)
0044099c  lw gp,0x28(sp)
004409a0  beq v0,zero,0x00440ba0
004409a4  _lui s8,0x45
004409a8  addiu s8,s8,0x612c
004409ac  addiu s1,s1,-0x4cd4
004409b0  clear s2
004409b4  addiu s7,sp,0x34
004409b8  li s6,-0x2
004409bc  li s5,-0x1
004409c0  li s4,0x6
004409c4  lw t9,-0x7fbc(gp)
004409c8  move a2,s1
004409cc  move a0,s0
004409d0  jalr t9
004409d4  _move a1,s8
004409d8  lb v1,0x0(v0)
004409dc  lw gp,0x28(sp)
004409e0  beq v1,zero,0x00440a00
004409e4  _nop
004409e8  lw t9,-0x79d0(gp)
004409ec  lw a0,-0x7da0(gp)
004409f0  jalr t9
004409f4  _move a1,v0
004409f8  lw gp,0x28(sp)
004409fc  nop
00440a00  lw t9,-0x7a5c(gp)
00440a04  lw a0,-0x7da0(gp)
00440a08  jalr t9
00440a0c  _move a1,s7
00440a10  lw gp,0x28(sp)
00440a14  nop
00440a18  lw t9,-0x7b24(gp)
00440a1c  beq v0,s6,0x00440a34
00440a20  _li a0,0x1
00440a24  bne v0,s5,0x00440a90
00440a28  _nop
00440a2c  b 0x00440a58
00440a30  _lui a0,0x45
00440a34  lw t9,-0x7af4(gp)
00440a38  lui a0,0x45
00440a3c  jalr t9
00440a40  _addiu a0,a0,0x6134
00440a44  lw gp,0x28(sp)
00440a48  lui a1,0x45
00440a4c  lw t9,-0x79d0(gp)
00440a50  b 0x00440a7c
00440a54  _addiu a1,a1,0x6138
00440a58  lw t9,-0x7af4(gp)
00440a5c  nop
00440a60  jalr t9
00440a64  _addiu a0,a0,0x6134
00440a68  lw gp,0x28(sp)
00440a6c  lui a1,0x45
00440a70  addiu a1,a1,0x615c
00440a74  lw t9,-0x79d0(gp)
00440a78  nop
00440a7c  jalr t9
00440a80  _addiu a0,sp,0x118
00440a84  lw gp,0x28(sp)
00440a88  b 0x00441804
00440a8c  _clear s1
00440a90  lw v0,0x34(sp)
00440a94  nop
00440a98  beq v0,zero,0x00440ac8
00440a9c  _nop
00440aa0  bne s2,s4,0x00440ab4
00440aa4  _lui a1,0x45
00440aa8  lw t9,-0x79d0(gp)
00440aac  b 0x00440a7c
00440ab0  _addiu a1,a1,0x6178
00440ab4  jalr t9
00440ab8  _addiu s2,s2,0x1
00440abc  lw gp,0x28(sp)
00440ac0  b 0x004409c4
00440ac4  _nop
00440ac8  clear s1
00440acc  li s6,0x1
00440ad0  addiu s5,sp,0x30
00440ad4  li s4,0xff
00440ad8  li s2,0xb
00440adc  lw t9,-0x7d08(gp)
00440ae0  lw a0,-0x7da0(gp)
00440ae4  sb s6,0x30(sp)
00440ae8  jalr t9
00440aec  _move a1,s5
00440af0  lw gp,0x28(sp)
00440af4  nop
00440af8  lw t9,-0x7b24(gp)
00440afc  bgez v0,0x00440b14
00440b00  _li a0,0x1
00440b04  lui a1,0x45
00440b08  lw t9,-0x79d0(gp)
00440b0c  b 0x00440b34
00440b10  _addiu a1,a1,0x37e8
00440b14  lbu v0,0x30(sp)
00440b18  nop
00440b1c  bne v0,s4,0x00440b78
00440b20  _nop
00440b24  bne s1,s2,0x00440b64
00440b28  _lui a1,0x45
00440b2c  lw t9,-0x79d0(gp)
00440b30  addiu a1,a1,0x6190
00440b34  jalr t9
00440b38  _addiu a0,sp,0x118
00440b3c  lw gp,0x28(sp)
00440b40  lui s2,0x47
00440b44  lw a0,-0xc90(s2)
00440b48  lw t9,-0x7fb0(gp)
00440b4c  nop
00440b50  jalr t9
00440b54  _clear s1
00440b58  lw gp,0x28(sp)
00440b5c  b 0x00441804
00440b60  _sw zero,-0xc90(s2)
00440b64  jalr t9
00440b68  _addiu s1,s1,0x1
00440b6c  lw gp,0x28(sp)
00440b70  b 0x00440adc
00440b74  _nop
00440b78  lb v0,0x0(s3)
00440b7c  nop
00440b80  beq v0,zero,0x004418bc
00440b84  _move a0,s0
00440b88  lw t9,-0x79b8(gp)
00440b8c  nop
00440b90  jalr t9
00440b94  _move a1,s3
00440b98  b 0x004418bc
00440b9c  _nop
00440ba0  lw t9,-0x7fbc(gp)
00440ba4  lui a1,0x45
00440ba8  addiu a1,a1,-0x3550
00440bac  addiu a2,s1,-0x4cd4
00440bb0  jalr t9
00440bb4  _move a0,s0
00440bb8  lb v0,0x0(v0)
00440bbc  lw gp,0x28(sp)
00440bc0  beq v0,zero,0x004418bc
00440bc4  _li v0,0x834
00440bc8  lw s2,-0x7cf4(gp)
00440bcc  lw t9,-0x7b54(gp)
00440bd0  lw v1,0x0(s2)
00440bd4  li s1,0x844
00440bd8  addiu a1,sp,0x44
00440bdc  movz s1,v0,v1
00440be0  move a0,s1
00440be4  sw zero,0x48(sp)
00440be8  sw zero,0x4c(sp)
00440bec  jalr t9
00440bf0  _sw zero,0x40(sp)
00440bf4  lw gp,0x28(sp)
00440bf8  move a0,s1
00440bfc  lw t9,-0x7c08(gp)
00440c00  nop
00440c04  jalr t9
00440c08  _addiu a1,sp,0x40
00440c0c  lw gp,0x28(sp)
00440c10  lw v0,0x0(s2)
00440c14  addiu a1,sp,0x48
00440c18  lw t9,-0x7b54(gp)
00440c1c  beq v0,zero,0x00440c28
00440c20  _li a0,0xfa
00440c24  li a0,0xfc
00440c28  jalr t9
00440c2c  _clear s1
00440c30  lw gp,0x28(sp)
00440c34  li a0,0x3b
00440c38  addiu a1,sp,0x4c
00440c3c  lw t9,-0x7b54(gp)
00440c40  nop
00440c44  jalr t9
00440c48  _sw zero,0x50(sp)
00440c4c  lw gp,0x28(sp)
00440c50  li a0,0xc0
00440c54  lw t9,-0x7b54(gp)
00440c58  nop
00440c5c  jalr t9
00440c60  _addiu a1,sp,0x50
00440c64  lw v1,0x48(sp)
00440c68  li v0,0x1
00440c6c  lw gp,0x28(sp)
00440c70  bne v1,v0,0x00440ca4
00440c74  _nop
00440c78  lw s1,0x4c(sp)
00440c7c  nop
00440c80  beq s1,zero,0x00440ca0
00440c84  _li v0,0x3
00440c88  beq s1,v0,0x00440ca0
00440c8c  _li v0,0x4
00440c90  beq s1,v0,0x00440ca0
00440c94  _xori s1,s1,0x5
00440c98  b 0x00440ca4
00440c9c  _sltiu s1,s1,0x1
00440ca0  li s1,0x1
00440ca4  lw t9,-0x7fbc(gp)
00440ca8  lui a1,0x45
00440cac  lui a2,0x45
00440cb0  addiu a1,a1,0x61a0
00440cb4  addiu a2,a2,-0x4cd4
00440cb8  jalr t9
00440cbc  _move a0,s0
00440cc0  lw gp,0x28(sp)
00440cc4  beq s1,zero,0x00440d08
00440cc8  _move s5,v0
00440ccc  lw t9,-0x79d0(gp)
00440cd0  addiu a2,sp,0x74
00440cd4  move a0,a2
00440cd8  move a1,v0
00440cdc  jalr t9
00440ce0  _sw a2,0x21c(sp)
00440ce4  lw gp,0x28(sp)
00440ce8  lw a2,0x21c(sp)
00440cec  lui a1,0x45
00440cf0  lw t9,-0x7e28(gp)
00440cf4  addiu a1,a1,0x61a8
00440cf8  jalr t9
00440cfc  _move a0,s5
00440d00  lw gp,0x28(sp)
00440d04  nop
00440d08  lw t9,-0x7ac0(gp)
00440d0c  move a0,s5
00440d10  jalr t9
00440d14  _clear s4
00440d18  lw gp,0x28(sp)
00440d1c  lui a1,0x45
00440d20  lui a2,0x45
00440d24  lw t9,-0x7fbc(gp)
00440d28  addiu a1,a1,0x61b0
00440d2c  addiu a2,a2,-0x4cd4
00440d30  jalr t9
00440d34  _move a0,s0
00440d38  lui t0,0x45
00440d3c  lw gp,0x28(sp)
00440d40  sw v0,0x218(sp)
00440d44  addiu t0,t0,-0x36e4
00440d48  lui v1,0x47
00440d4c  li s8,0xff
00440d50  addiu s7,sp,0x118
00440d54  li t1,0xac
00440d58  li t2,0x56
00440d5c  b 0x00440e40
00440d60  _li t3,0x2b
00440d64  mflo s2
00440d68  addu s2,v0,s2
00440d6c  lbu t5,0x5(s2)
00440d70  mult s4,t2
00440d74  lbu a3,0x4(s2)
00440d78  sw t5,0x10(sp)
00440d7c  mflo t4
00440d80  addiu t4,t4,0x1
00440d84  sll t4,t4,0x1
00440d88  mult s4,t3
00440d8c  addu t4,v0,t4
00440d90  lbu t4,0x4(t4)
00440d94  addiu s4,s4,0x1
00440d98  sw t4,0x14(sp)
00440d9c  lbu t4,0x7(s2)
00440da0  nop
00440da4  sw t4,0x18(sp)
00440da8  mflo t5
00440dac  addiu t4,t5,0x1
00440db0  sll t4,t4,0x2
00440db4  addu v0,v0,t4
00440db8  lbu v0,0x4(v0)
00440dbc  nop
00440dc0  sw v0,0x1c(sp)
00440dc4  lbu v0,0x9(s2)
00440dc8  sw v1,0x21c(sp)
00440dcc  sw t0,0x22c(sp)
00440dd0  sw t1,0x220(sp)
00440dd4  sw t2,0x224(sp)
00440dd8  sw t3,0x228(sp)
00440ddc  jalr t9
00440de0  _sw v0,0x20(sp)
00440de4  lw gp,0x28(sp)
00440de8  lw a0,0x218(sp)
00440dec  lw t9,-0x7e0c(gp)
00440df0  nop
00440df4  jalr t9
00440df8  _move a1,s7
00440dfc  lw gp,0x28(sp)
00440e00  lw v1,0x21c(sp)
00440e04  lw t0,0x22c(sp)
00440e08  lw t1,0x220(sp)
00440e0c  lw t2,0x224(sp)
00440e10  lw t3,0x228(sp)
00440e14  bne v0,zero,0x00440e40
00440e18  _addiu a0,sp,0x94
00440e1c  lw t9,-0x7ad4(gp)
00440e20  lhu a2,0x30(s2)
00440e24  jalr t9
00440e28  _addiu a1,s2,0xa
00440e2c  lhu v0,0x30(s2)
00440e30  lw gp,0x28(sp)
00440e34  addu v0,sp,v0
00440e38  b 0x00440e68
00440e3c  _sb zero,0x94(v0)
00440e40  lw v0,-0xc90(v1)
00440e44  lw t9,-0x7a4c(gp)
00440e48  move a0,s7
00440e4c  lbu a3,0x0(v0)
00440e50  li a1,0xc8
00440e54  slt t4,s4,a3
00440e58  beq t4,zero,0x00440e68
00440e5c  _move a2,t0
00440e60  bne a3,s8,0x00440d64
00440e64  _mult s4,t1
00440e68  lw t9,-0x7c08(gp)
00440e6c  addiu s2,sp,0x94
00440e70  li a0,0x1
00440e74  jalr t9
00440e78  _move a1,s2
00440e7c  lw gp,0x28(sp)
00440e80  beq s1,zero,0x00440ebc
00440e84  _nop
00440e88  lw v0,-0x7cf4(gp)
00440e8c  lw t9,-0x7c08(gp)
00440e90  lw v0,0x0(v0)
00440e94  nop
00440e98  bne v0,zero,0x00440ea8
00440e9c  _move a1,s2
00440ea0  b 0x00440eac
00440ea4  _li a0,0xfb
00440ea8  li a0,0xfd
00440eac  jalr t9
00440eb0  _nop
00440eb4  lw gp,0x28(sp)
00440eb8  nop
00440ebc  lw t9,-0x7c04(gp)
00440ec0  li a0,0x4
00440ec4  jalr t9
00440ec8  _lui s2,0x45
00440ecc  lw gp,0x28(sp)
00440ed0  lui a1,0x45
00440ed4  addiu a1,a1,0x61c0
00440ed8  lw t9,-0x7fbc(gp)
00440edc  move a0,s0
00440ee0  jalr t9
00440ee4  _addiu a2,s2,-0x4cd4
00440ee8  lb v1,0x0(v0)
00440eec  lw gp,0x28(sp)
00440ef0  beq v1,zero,0x004417b8
00440ef4  _lui s4,0x47
00440ef8  lw v1,-0xc90(s4)
00440efc  nop
00440f00  bne v1,zero,0x00440f14
00440f04  _lui a1,0x45
00440f08  lw t9,-0x79d0(gp)
00440f0c  b 0x00441538
00440f10  _addiu a1,a1,0x61c8
00440f14  lw t9,-0x7d6c(gp)
00440f18  lui a1,0x45
00440f1c  move a0,v0
00440f20  addiu a1,a1,0x61e0
00440f24  jalr t9
00440f28  _addiu a2,sp,0x38
00440f2c  lw v0,-0xc90(s4)
00440f30  lw v1,0x38(sp)
00440f34  lw gp,0x28(sp)
00440f38  lbu v0,0x0(v0)
00440f3c  nop
00440f40  slt v0,v1,v0
00440f44  bne v0,zero,0x00440f58
00440f48  _lui a1,0x45
00440f4c  lw t9,-0x79d0(gp)
00440f50  b 0x00441538
00440f54  _addiu a1,a1,0x61e8
00440f58  lw t9,-0x7fbc(gp)
00440f5c  lui a1,0x45
00440f60  addiu a1,a1,0x61a0
00440f64  move a0,s0
00440f68  jalr t9
00440f6c  _addiu a2,s2,-0x4cd4
00440f70  lw gp,0x28(sp)
00440f74  lui a1,0x45
00440f78  addiu a1,a1,0x27d8
00440f7c  lw t9,-0x7fbc(gp)
00440f80  addiu a2,s2,-0x4cd4
00440f84  move a0,s0
00440f88  jalr t9
00440f8c  _move s4,v0
00440f90  lb v1,0x0(v0)
00440f94  lw gp,0x28(sp)
00440f98  beq v1,zero,0x00440fb8
00440f9c  _nop
00440fa0  lw t9,-0x7ef4(gp)
00440fa4  nop
00440fa8  jalr t9
00440fac  _move a0,v0
00440fb0  lw gp,0x28(sp)
00440fb4  andi s6,v0,0xff
00440fb8  lw t9,-0x7e28(gp)
00440fbc  addiu s2,sp,0x60
00440fc0  lui a1,0x45
00440fc4  addiu a1,a1,0x49b8
00440fc8  move a0,s2
00440fcc  jalr t9
00440fd0  _move a2,s6
00440fd4  lw gp,0x28(sp)
00440fd8  lui a2,0x45
00440fdc  move a1,s2
00440fe0  lw t9,-0x7fbc(gp)
00440fe4  addiu a2,a2,-0x4cd4
00440fe8  jalr t9
00440fec  _move a0,s0
00440ff0  lb v1,0x0(v0)
00440ff4  lw gp,0x28(sp)
00440ff8  beq v1,zero,0x0044107c
00440ffc  _nop
00441000  lw t9,-0x7ef4(gp)
00441004  nop
00441008  jalr t9
0044100c  _move a0,v0
00441010  lw gp,0x28(sp)
00441014  bne v0,zero,0x0044103c
00441018  _li v1,0x1
0044101c  lw t9,-0x7c08(gp)
00441020  sw zero,0x5c(sp)
00441024  li a0,0x19
00441028  jalr t9
0044102c  _addiu a1,sp,0x5c
00441030  lw gp,0x28(sp)
00441034  b 0x0044107c
00441038  _nop
0044103c  bne v0,v1,0x00441058
00441040  _move a2,s6
00441044  move a0,s0
00441048  jal 0x00435420
0044104c  _addiu a1,sp,0x118
00441050  b 0x00441070
00441054  _nop
00441058  addiu v0,v0,-0x2
0044105c  sltiu v0,v0,0x5
00441060  beq v0,zero,0x0044107c
00441064  _move a0,s0
00441068  jal 0x0043886c
0044106c  _addiu a1,sp,0x118
00441070  lw gp,0x28(sp)
00441074  bltz v0,0x00441804
00441078  _nop
0044107c  lw v1,0x38(sp)
00441080  li v0,0xac
00441084  mult v1,v0
00441088  lui v1,0x47
0044108c  lw v1,-0xc90(v1)
00441090  mflo v0
00441094  addu v0,v1,v0
00441098  lhu v0,0x6e(v0)
0044109c  nop
004410a0  andi v0,v0,0x1
004410a4  beq v0,zero,0x004410b4
004410a8  _li v0,0x1
004410ac  b 0x004410b8
004410b0  _sw zero,0x54(sp)
004410b4  sw v0,0x54(sp)
004410b8  lw t9,-0x7c08(gp)
004410bc  li a0,0x3c
004410c0  jalr t9
004410c4  _addiu a1,sp,0x54
004410c8  lw gp,0x28(sp)
004410cc  bne v0,zero,0x004410e0
004410d0  _lui a1,0x45
004410d4  lw t9,-0x79d0(gp)
004410d8  b 0x00441538
004410dc  _addiu a1,a1,0x5694
004410e0  lw v0,0x54(sp)
004410e4  li s2,0x1
004410e8  bne v0,s2,0x0044118c
004410ec  _li a0,0x2
004410f0  lw v0,0x38(sp)
004410f4  li s2,0xac
004410f8  lui s5,0x47
004410fc  mult v0,s2
00441100  lw v1,-0xc90(s5)
00441104  lw t9,-0x7c08(gp)
00441108  addiu a1,sp,0x58
0044110c  mflo v0
00441110  addu v0,v1,v0
00441114  lbu v0,0x70(v0)
00441118  jalr t9
0044111c  _sw v0,0x58(sp)
00441120  lw gp,0x28(sp)
00441124  bne v0,zero,0x00441138
00441128  _lui a1,0x45
0044112c  lw t9,-0x79d0(gp)
00441130  b 0x00441538
00441134  _addiu a1,a1,0x5654
00441138  lw v1,0x38(sp)
0044113c  lw v0,-0xc90(s5)
00441140  mult v1,s2
00441144  mflo s2
00441148  addu v0,v0,s2
0044114c  lw v0,0x68(v0)
00441150  nop
00441154  andi v1,v0,0x40
00441158  beq v1,zero,0x00441168
0044115c  _nop
00441160  b 0x00441170
00441164  _li v0,0x2
00441168  andi v0,v0,0x2
0044116c  sltu v0,zero,v0
00441170  lw t9,-0x7c08(gp)
00441174  sw v0,0x5c(sp)
00441178  li a0,0x11c
0044117c  jalr t9
00441180  _addiu a1,sp,0x5c
00441184  b 0x004412b0
00441188  _nop
0044118c  beq s1,zero,0x004412b0
00441190  _move a0,s4
00441194  lw t9,-0x7ac0(gp)
00441198  nop
0044119c  jalr t9
004411a0  _li s6,0xac
004411a4  lw v1,0x38(sp)
004411a8  lui s7,0x47
004411ac  lw v0,-0xc90(s7)
004411b0  mult v1,s6
004411b4  lw gp,0x28(sp)
004411b8  li a0,0x2
004411bc  addiu a1,sp,0x58
004411c0  lw t9,-0x7c08(gp)
004411c4  mflo v1
004411c8  addu v0,v0,v1
004411cc  lbu v0,0x70(v0)
004411d0  jalr t9
004411d4  _sw v0,0x58(sp)
004411d8  lw gp,0x28(sp)
004411dc  bne v0,zero,0x00441204
004411e0  _addiu a1,sp,0x5c
004411e4  lw t9,-0x79d0(gp)
004411e8  lui a1,0x45
004411ec  addiu a1,a1,0x5654
004411f0  jalr t9
004411f4  _addiu a0,sp,0x118
004411f8  lw gp,0x28(sp)
004411fc  b 0x00441804
00441200  _li s1,0x1
00441204  lw v1,0x38(sp)
00441208  lw v0,-0xc90(s7)
0044120c  lw t9,-0x7c08(gp)
00441210  mult v1,s6
00441214  li a0,0x11d
00441218  mflo s6
0044121c  addu v0,v0,s6
00441220  lw v0,0x68(v0)
00441224  nop
00441228  andi v0,v0,0x4
0044122c  sltiu v0,v0,0x1
00441230  jalr t9
00441234  _sw v0,0x5c(sp)
00441238  lw v0,0x58(sp)
0044123c  lw gp,0x28(sp)
00441240  slti v1,v0,0x5
00441244  beq v1,zero,0x00441264
00441248  _slti v0,v0,0xa
0044124c  lw v0,0x5c(sp)
00441250  nop
00441254  beq v0,zero,0x0044127c
00441258  _nop
0044125c  b 0x004412a0
00441260  _nop
00441264  bne v0,zero,0x004412a0
00441268  _nop
0044126c  lw v0,0x5c(sp)
00441270  nop
00441274  bne v0,s2,0x004412a0
00441278  _nop
0044127c  lw t9,-0x7c08(gp)
00441280  li a0,0x11d
00441284  addiu v0,v0,0x1
00441288  andi v0,v0,0x1
0044128c  sw v0,0x5c(sp)
00441290  jalr t9
00441294  _addiu a1,sp,0x5c
00441298  lw gp,0x28(sp)
0044129c  nop
004412a0  lw t9,-0x7ac0(gp)
004412a4  nop
004412a8  jalr t9
004412ac  _move a0,s5
004412b0  jal 0x0043c750
004412b4  _nop
004412b8  lw gp,0x28(sp)
004412bc  beq s1,zero,0x004412fc
004412c0  _addiu s2,sp,0xe4
004412c4  lw t9,-0x7e28(gp)
004412c8  lui a1,0x45
004412cc  addiu a1,a1,0x61fc
004412d0  move a0,s2
004412d4  jalr t9
004412d8  _move a2,s4
004412dc  lw gp,0x28(sp)
004412e0  nop
004412e4  lw t9,-0x7b18(gp)
004412e8  nop
004412ec  jalr t9
004412f0  _move a0,s2
004412f4  lw gp,0x28(sp)
004412f8  nop
004412fc  lw t9,-0x7e28(gp)
00441300  addiu s2,sp,0xe4
00441304  lui a1,0x45
00441308  addiu a1,a1,0x6214
0044130c  move a2,s4
00441310  jalr t9
00441314  _move a0,s2
00441318  lw gp,0x28(sp)
0044131c  nop
00441320  lw t9,-0x7b18(gp)
00441324  nop
00441328  jalr t9
0044132c  _move a0,s2
00441330  lw gp,0x28(sp)
00441334  lui a1,0x45
00441338  addiu a1,a1,0x6228
0044133c  lw t9,-0x7e28(gp)
00441340  move a2,s4
00441344  jalr t9
00441348  _move a0,s2
0044134c  lw gp,0x28(sp)
00441350  nop
00441354  lw t9,-0x7b18(gp)
00441358  nop
0044135c  jalr t9
00441360  _move a0,s2
00441364  lw gp,0x28(sp)
00441368  lui a1,0x45
0044136c  addiu a1,a1,0x623c
00441370  lw t9,-0x7e28(gp)
00441374  move a0,s2
00441378  jalr t9
0044137c  _move a2,s4
00441380  lw gp,0x28(sp)
00441384  nop
00441388  lw t9,-0x7b18(gp)
0044138c  nop
00441390  jalr t9
00441394  _move a0,s2
00441398  lw gp,0x28(sp)
0044139c  beq s1,zero,0x0044140c
004413a0  _lui a1,0x45
004413a4  lw t9,-0x7e28(gp)
004413a8  addiu a1,a1,0x624c
004413ac  move a2,s4
004413b0  jalr t9
004413b4  _move a0,s2
004413b8  lw gp,0x28(sp)
004413bc  nop
004413c0  lw t9,-0x7b18(gp)
004413c4  nop
004413c8  jalr t9
004413cc  _move a0,s2
004413d0  lw gp,0x28(sp)
004413d4  lui a1,0x45
004413d8  addiu a1,a1,0x6264
004413dc  lw t9,-0x7e28(gp)
004413e0  move a2,s4
004413e4  jalr t9
004413e8  _move a0,s2
004413ec  lw gp,0x28(sp)
004413f0  nop
004413f4  lw t9,-0x7b18(gp)
004413f8  nop
004413fc  jalr t9
00441400  _move a0,s2
00441404  lw gp,0x28(sp)
00441408  nop
0044140c  lw t9,-0x7b24(gp)
00441410  li a0,0x3
00441414  jalr t9
00441418  _lui s4,0x45
0044141c  lw gp,0x28(sp)
00441420  lui a0,0x45
00441424  addiu a0,a0,0x6278
00441428  lw t9,-0x7b18(gp)
0044142c  clear s2
00441430  jalr t9
00441434  _li s8,0x2
00441438  lw gp,0x28(sp)
0044143c  addiu v0,sp,0x50
00441440  li a0,0x1
00441444  lw t9,-0x7b24(gp)
00441448  sw v0,0x218(sp)
0044144c  jalr t9
00441450  _addiu s4,s4,0x625c
00441454  lw gp,0x28(sp)
00441458  lui a0,0x45
0044145c  addiu a0,a0,0x6298
00441460  lw t9,-0x7b18(gp)
00441464  li s7,0x4
00441468  jalr t9
0044146c  _li s6,0x3
00441470  lw gp,0x28(sp)
00441474  li a0,0x1
00441478  lw t9,-0x7b24(gp)
0044147c  nop
00441480  jalr t9
00441484  _li s5,0xb
00441488  lw v0,0x38(sp)
0044148c  lw gp,0x28(sp)
00441490  sb v0,0x50(sp)
00441494  lw a0,-0x7da0(gp)
00441498  lw t9,-0x7cf0(gp)
0044149c  beq s1,zero,0x004414d0
004414a0  _move a1,s4
004414a4  jalr t9
004414a8  _nop
004414ac  lw gp,0x28(sp)
004414b0  bne v0,zero,0x004414d0
004414b4  _nop
004414b8  lw t9,-0x7c68(gp)
004414bc  lw a0,-0x7da0(gp)
004414c0  jalr t9
004414c4  _move a1,s4
004414c8  lw gp,0x28(sp)
004414cc  nop
004414d0  lw t9,-0x7c24(gp)
004414d4  lw a0,-0x7da0(gp)
004414d8  lw a1,0x218(sp)
004414dc  jalr t9
004414e0  _nop
004414e4  lw gp,0x28(sp)
004414e8  nop
004414ec  lw t9,-0x7b24(gp)
004414f0  bgez v0,0x00441508
004414f4  _li a0,0x1
004414f8  lui a1,0x45
004414fc  lw t9,-0x79d0(gp)
00441500  b 0x00441538
00441504  _addiu a1,a1,0x62ac
00441508  lbu v0,0x50(sp)
0044150c  nop
00441510  beq v0,s8,0x00441560
00441514  _nop
00441518  beq v0,s7,0x00441560
0044151c  _nop
00441520  beq v0,s6,0x00441560
00441524  _nop
00441528  bne s2,s5,0x0044154c
0044152c  _lui a1,0x45
00441530  lw t9,-0x79d0(gp)
00441534  addiu a1,a1,0x62c4
00441538  jalr t9
0044153c  _addiu a0,sp,0x118
00441540  lw gp,0x28(sp)
00441544  b 0x00441804
00441548  _nop
0044154c  jalr t9
00441550  _addiu s2,s2,0x1
00441554  lw gp,0x28(sp)
00441558  b 0x00441494
0044155c  _nop
00441560  lw t9,-0x7b54(gp)
00441564  sw zero,0x34(sp)
00441568  li a0,0x19
0044156c  jalr t9
00441570  _addiu a1,sp,0x3c
00441574  lw v0,0x3c(sp)
00441578  li v1,0x2
0044157c  lw gp,0x28(sp)
00441580  beq v0,v1,0x004415e4
00441584  _li v1,0x4
00441588  beq v0,v1,0x004415e4
0044158c  _li v1,0x7
00441590  bne v0,v1,0x00441610
00441594  _nop
00441598  b 0x004415e8
0044159c  _clear s2
004415a0  jalr t9
004415a4  _nop
004415a8  lw gp,0x28(sp)
004415ac  lbu v0,0xb8(sp)
004415b0  lw t9,-0x7b24(gp)
004415b4  bne v0,s4,0x004415d0
004415b8  _li a0,0x1
004415bc  slti s2,s2,0x10
004415c0  bne s2,zero,0x00441610
004415c4  _li v0,0x1
004415c8  b 0x00441610
004415cc  _sw v0,0x34(sp)
004415d0  jalr t9
004415d4  _addiu s2,s2,0x1
004415d8  lw gp,0x28(sp)
004415dc  b 0x004415f8
004415e0  _nop
004415e4  clear s2
004415e8  li s6,0x10
004415ec  addiu s5,sp,0xb8
004415f0  li s4,0x4
004415f4  addiu s2,s2,0x1
004415f8  lw t9,-0x7edc(gp)
004415fc  lw a0,-0x7da0(gp)
00441600  bne s2,s6,0x004415a0
00441604  _move a1,s5
00441608  li v0,0x1
0044160c  sw v0,0x34(sp)
00441610  lw v0,0x34(sp)
00441614  nop
00441618  beq v0,zero,0x00441628
0044161c  _lui s2,0x45
00441620  b 0x00441630
00441624  _addiu s2,s2,0x62c4
00441628  lui s2,0x45
0044162c  addiu s2,s2,0x62d8
00441630  lw v0,-0x7cf4(gp)
00441634  lw t9,-0x7c08(gp)
00441638  li v1,0x834
0044163c  lw a0,0x0(v0)
00441640  li v0,0x844
00441644  addiu a1,sp,0x44
00441648  movz v0,v1,a0
0044164c  jalr t9
00441650  _move a0,v0
00441654  jal 0x0043c750
00441658  _nop
0044165c  lw gp,0x28(sp)
00441660  li v1,0x1
00441664  lw v0,-0x7c7c(gp)
00441668  nop
0044166c  sw v1,0x0(v0)
00441670  lb v0,0x0(s3)
00441674  nop
00441678  bne v0,zero,0x00441698
0044167c  _lui a1,0x45
00441680  lw t9,-0x79d0(gp)
00441684  addiu a1,a1,-0x22a8
00441688  jalr t9
0044168c  _move a0,s3
00441690  lw gp,0x28(sp)
00441694  nop
00441698  lw t9,-0x7cd4(gp)
0044169c  lui a1,0x45
004416a0  move a2,s2
004416a4  addiu a1,a1,0x62f0
004416a8  jalr t9
004416ac  _move a0,s0
004416b0  lw gp,0x28(sp)
004416b4  lui a1,0x45
004416b8  addiu a1,a1,0x6314
004416bc  lw t9,-0x7cd4(gp)
004416c0  nop
004416c4  jalr t9
004416c8  _move a0,s0
004416cc  lw gp,0x28(sp)
004416d0  lui a1,0x45
004416d4  addiu a1,a1,-0x216c
004416d8  lw t9,-0x7cd4(gp)
004416dc  move a0,s0
004416e0  jalr t9
004416e4  _move a2,s3
004416e8  lw v0,0x34(sp)
004416ec  lw gp,0x28(sp)
004416f0  bne v0,zero,0x0044171c
004416f4  _lui a1,0x45
004416f8  lw v0,-0x7cf4(gp)
004416fc  lw t9,-0x7cd4(gp)
00441700  lw a2,0x0(v0)
00441704  addiu a1,a1,0x6370
00441708  jalr t9
0044170c  _move a0,s0
00441710  lw gp,0x28(sp)
00441714  lw v0,0x34(sp)
00441718  nop
0044171c  beq v0,zero,0x00441738
00441720  _lui a1,0x45
00441724  lw t9,-0x7cd4(gp)
00441728  addiu a1,a1,0x63f4
0044172c  jalr t9
00441730  _move a0,s0
00441734  lw gp,0x28(sp)
00441738  lw v0,0x34(sp)
0044173c  nop
00441740  bne v0,zero,0x00441764
00441744  _lui a1,0x45
00441748  lw t9,-0x7cd4(gp)
0044174c  addiu a1,a1,0x6464
00441750  jalr t9
00441754  _move a0,s0
00441758  lw gp,0x28(sp)
0044175c  lw v0,0x34(sp)
00441760  nop
00441764  bne v0,zero,0x00441788
00441768  _move a2,s3
0044176c  lw t9,-0x7cd4(gp)
00441770  lui a1,0x45
00441774  addiu a1,a1,0x64d4
00441778  jalr t9
0044177c  _move a0,s0
00441780  lw gp,0x28(sp)
00441784  nop
00441788  lw t9,-0x7cd4(gp)
0044178c  lui a1,0x45
00441790  move a0,s0
00441794  jalr t9
00441798  _addiu a1,a1,-0x2074
0044179c  lw gp,0x28(sp)
004417a0  lui a0,0x45
004417a4  lw t9,-0x7c58(gp)
004417a8  nop
004417ac  jalr t9
004417b0  _addiu a0,a0,-0x3bc8
004417b4  lw gp,0x28(sp)
004417b8  beq s1,zero,0x004418bc
004417bc  _nop
004417c0  lw t9,-0x7ac0(gp)
004417c4  nop
004417c8  jalr t9
004417cc  _addiu a0,sp,0x74
004417d0  lw gp,0x28(sp)
004417d4  lui a1,0x45
004417d8  lw t9,-0x7cf0(gp)
004417dc  lw a0,-0x7da0(gp)
004417e0  jalr t9
004417e4  _addiu a1,a1,0x625c
004417e8  beq v0,zero,0x004418bc
004417ec  _nop
004417f0  sb zero,0x3(v0)
004417f4  sb zero,0x0(v0)
004417f8  sb zero,0x1(v0)
004417fc  b 0x004418bc
00441800  _sb zero,0x2(v0)
00441804  lw v0,-0x7cf4(gp)
00441808  lw t9,-0x7c08(gp)
0044180c  li v1,0x834
00441810  lw a0,0x0(v0)
00441814  li v0,0x844
00441818  addiu a1,sp,0x44
0044181c  movz v0,v1,a0
00441820  jalr t9
00441824  _move a0,v0
00441828  jal 0x0043c750
0044182c  _nop
00441830  lw gp,0x28(sp)
00441834  beq s1,zero,0x0044187c
00441838  _nop
0044183c  lw t9,-0x7ac0(gp)
00441840  nop
00441844  jalr t9
00441848  _addiu a0,sp,0x74
0044184c  lw gp,0x28(sp)
00441850  lui a1,0x45
00441854  lw t9,-0x7cf0(gp)
00441858  lw a0,-0x7da0(gp)
0044185c  jalr t9
00441860  _addiu a1,a1,0x625c
00441864  beq v0,zero,0x0044187c
00441868  _nop
0044186c  sb zero,0x3(v0)
00441870  sb zero,0x0(v0)
00441874  sb zero,0x1(v0)
00441878  sb zero,0x2(v0)
0044187c  jal 0x004340e4
00441880  _move a0,s0
00441884  lw gp,0x28(sp)
00441888  lui a1,0x45
0044188c  addiu a1,a1,-0x271c
00441890  lw t9,-0x7cd4(gp)
00441894  move a0,s0
00441898  jalr t9
0044189c  _addiu a2,sp,0x118
004418a0  lw gp,0x28(sp)
004418a4  lui a1,0x45
004418a8  move a0,s0
004418ac  lw t9,-0x7cd4(gp)
004418b0  nop
004418b4  jalr t9
004418b8  _addiu a1,a1,-0x2050
004418bc  lw ra,0x254(sp)
004418c0  lw s8,0x250(sp)
004418c4  lw s7,0x24c(sp)
004418c8  lw s6,0x248(sp)
004418cc  lw s5,0x244(sp)
004418d0  lw s4,0x240(sp)
004418d4  lw s3,0x23c(sp)
004418d8  lw s2,0x238(sp)
004418dc  lw s1,0x234(sp)
004418e0  lw s0,0x230(sp)
004418e4  jr ra
004418e8  _addiu sp,sp,0x258
