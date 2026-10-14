# FUN_804019e8 @ 804019e8
804019e8  addiu sp,sp,-0x98
804019ec  sw ra,0x94(sp)
804019f0  sw s8,0x90(sp)
804019f4  sw s7,0x8c(sp)
804019f8  sw s6,0x88(sp)
804019fc  sw s5,0x84(sp)
80401a00  sw s4,0x80(sp)
80401a04  sw s3,0x7c(sp)
80401a08  sw s2,0x78(sp)
80401a0c  sw s1,0x74(sp)
80401a10  sw s0,0x70(sp)
80401a14  move s8,a0
80401a18  sw a1,0x9c(sp)
80401a1c  jal 0x804086b0
80401a20  _clear a0
80401a24  sw zero,0x48(sp)
80401a28  clear s7
80401a2c  sw zero,0x3c(sp)
80401a30  sw zero,0x40(sp)
80401a34  clear s4
80401a38  lui v0,0x8041
80401a3c  addiu v0,v0,-0x2c40
80401a40  sw v0,0x4c(sp)
80401a44  lui v0,0x8041
80401a48  addiu v0,v0,-0x2bf4
80401a4c  sw v0,0x50(sp)
80401a50  lui v0,0x8041
80401a54  addiu v0,v0,-0x2bc8
80401a58  sw v0,0x54(sp)
80401a5c  lui v0,0x8041
80401a60  addiu v0,v0,0xe64
80401a64  sw v0,0x44(sp)
80401a68  lui v0,0x8041
80401a6c  addiu v0,v0,-0x2b9c
80401a70  sw v0,0x58(sp)
80401a74  lui v0,0x8041
80401a78  addiu v0,v0,-0x2d3c
80401a7c  sw v0,0x5c(sp)
80401a80  lui v0,0x8041
80401a84  addiu v0,v0,-0x2bb8
80401a88  sw v0,0x60(sp)
80401a8c  lui v0,0x8041
80401a90  addiu v0,v0,-0x2bc0
80401a94  sw v0,0x64(sp)
80401a98  lui v0,0x8041
80401a9c  addiu v0,v0,-0x2ba4
80401aa0  sw v0,0x68(sp)
80401aa4  lui v0,0x8041
80401aa8  addiu v0,v0,-0x1a24
80401aac  j 0x80402070
80401ab0  _sw v0,0x38(sp)
80401ab4  lwl a1,0x0(s0)
80401ab8  nop
80401abc  lwr a1,0x3(s0)
80401ac0  lwl a0,0x4(s0)
80401ac4  nop
80401ac8  lwr a0,0x7(s0)
80401acc  lwl v1,0x8(s0)
80401ad0  nop
80401ad4  lwr v1,0xb(s0)
80401ad8  lwl v0,0xc(s0)
80401adc  nop
80401ae0  lwr v0,0xf(s0)
80401ae4  sw a1,0x10(sp)
80401ae8  sw a0,0x14(sp)
80401aec  sw v1,0x18(sp)
80401af0  sw v0,0x1c(sp)
80401af4  lw v0,0x3c(sp)
80401af8  nop
80401afc  bne v0,zero,0x80401c00
80401b00  _addiu a0,sp,0x10
80401b04  lw s1,0x38(sp)
80401b08  clear s2
80401b0c  addiu s6,sp,0x10
80401b10  li s3,0xa
80401b14  lw a1,0x0(s1)
80401b18  lw a2,0x8(s1)
80401b1c  jal 0x80406a80
80401b20  _move a0,s6
80401b24  beq v0,zero,0x80401b40
80401b28  _li v0,0xa
80401b2c  addiu s2,s2,0x1
80401b30  bne s2,s3,0x80401b14
80401b34  _addiu s1,s1,0x18
80401b38  j 0x80401b48
80401b3c  _nop
80401b40  bne s2,v0,0x80401b5c
80401b44  _sll v0,s2,0x1
80401b48  lw s5,0x1c(sp)
80401b4c  nop
80401b50  addiu s5,s5,0x10
80401b54  j 0x8040206c
80401b58  _addu s5,s5,s4
80401b5c  addu v0,v0,s2
80401b60  addiu v0,v0,0x1
80401b64  sll v0,v0,0x3
80401b68  lw v1,0x38(sp)
80401b6c  nop
80401b70  addu v0,v1,v0
80401b74  lw v0,0x4(v0)
80401b78  nop
80401b7c  beq v0,zero,0x80401b90
80401b80  _addiu s1,s0,0x10
80401b84  lw s3,0x1c(sp)
80401b88  j 0x80401ba4
80401b8c  _sll v0,s2,0x3
80401b90  lw s3,0x1c(sp)
80401b94  nop
80401b98  addiu s3,s3,0x10
80401b9c  move s1,s0
80401ba0  sll v0,s2,0x3
80401ba4  sll s2,s2,0x5
80401ba8  subu s2,s2,v0
80401bac  lw v0,0x38(sp)
80401bb0  nop
80401bb4  addu s2,v0,s2
80401bb8  lw v0,0x14(s2)
80401bbc  lw v1,0x40(sp)
80401bc0  nop
80401bc4  or v1,v1,v0
80401bc8  sw v1,0x40(sp)
80401bcc  lui a0,0x8041
80401bd0  lw a1,0x4(s2)
80401bd4  jal 0x804077a4
80401bd8  _addiu a0,a0,-0x2cb4
80401bdc  addiu a0,sp,0x10
80401be0  lui a1,0x8041
80401be4  addiu a1,a1,-0x2ca4
80401be8  jal 0x80406a80
80401bec  _li a2,0x3
80401bf0  bne v0,zero,0x80401c50
80401bf4  _addiu a0,sp,0x10
80401bf8  j 0x80401c80
80401bfc  _nop
80401c00  lui a1,0x8041
80401c04  addiu a1,a1,-0x2c9c
80401c08  jal 0x80406a80
80401c0c  _li a2,0x4
80401c10  beq v0,zero,0x80401c30
80401c14  _addiu a0,s0,0x10
80401c18  lui a1,0x8041
80401c1c  addiu a1,a1,-0x2c94
80401c20  jal 0x80406a80
80401c24  _li a2,0x4
80401c28  bne v0,zero,0x80401c3c
80401c2c  _nop
80401c30  lw s3,0x1c(sp)
80401c34  j 0x80401cb0
80401c38  _addiu s1,s0,0x10
80401c3c  lw s3,0x1c(sp)
80401c40  nop
80401c44  addiu s3,s3,0x10
80401c48  j 0x80401cb0
80401c4c  _move s1,s0
80401c50  lui a1,0x8041
80401c54  addiu a1,a1,-0x2c8c
80401c58  jal 0x80406a80
80401c5c  _li a2,0x4
80401c60  beq v0,zero,0x80401c80
80401c64  _addiu a0,sp,0x10
80401c68  lui a1,0x8041
80401c6c  addiu a1,a1,-0x2c84
80401c70  jal 0x80406a80
80401c74  _li a2,0x4
80401c78  bne v0,zero,0x80401c98
80401c7c  _addiu a0,sp,0x10
80401c80  lw a2,0x1c(sp)
80401c84  nop
80401c88  bne a2,zero,0x80401e00
80401c8c  _clear a0
80401c90  j 0x80401e4c
80401c94  _nop
80401c98  lui a1,0x8041
80401c9c  addiu a1,a1,-0x2c7c
80401ca0  jal 0x80406a80
80401ca4  _li a2,0x4
80401ca8  beq v0,zero,0x80401c80
80401cac  _nop
80401cb0  addiu a0,sp,0x10
80401cb4  lui a1,0x8041
80401cb8  addiu a1,a1,-0x2c74
80401cbc  jal 0x80406a80
80401cc0  _li a2,0x4
80401cc4  bne v0,zero,0x80401ce8
80401cc8  _addiu a0,sp,0x10
80401ccc  lw a2,0x1c(sp)
80401cd0  nop
80401cd4  addiu a2,a2,0x10
80401cd8  bne a2,zero,0x80401d08
80401cdc  _clear v1
80401ce0  j 0x80401dc8
80401ce4  _addiu a0,sp,0x10
80401ce8  lui a1,0x8041
80401cec  addiu a1,a1,-0x2c6c
80401cf0  jal 0x80406a80
80401cf4  _li a2,0x4
80401cf8  beq v0,zero,0x80401ccc
80401cfc  _nop
80401d00  j 0x80401d3c
80401d04  _sh zero,0x20(sp)
80401d08  clear a0
80401d0c  clear v0
80401d10  addu a0,a0,s0
80401d14  lhu a0,0x0(a0)
80401d18  nop
80401d1c  addu v1,v1,a0
80401d20  andi v1,v1,0xffff
80401d24  addiu v0,v0,0x2
80401d28  sltu a1,v0,a2
80401d2c  bne a1,zero,0x80401d10
80401d30  _move a0,v0
80401d34  j 0x80401da0
80401d38  _nop
80401d3c  lw v0,0x1c(sp)
80401d40  nop
80401d44  beq v0,zero,0x80401dc4
80401d48  _clear a0
80401d4c  clear v1
80401d50  clear v0
80401d54  addiu a1,sp,0x20
80401d58  addiu a2,s0,0x10
80401d5c  addu a0,a2,a0
80401d60  lbu a3,0x0(a0)
80401d64  nop
80401d68  sb a3,0x0(a1)
80401d6c  lbu a0,0x1(a0)
80401d70  nop
80401d74  sb a0,0x1(a1)
80401d78  lhu a0,0x20(sp)
80401d7c  nop
80401d80  addu v1,v1,a0
80401d84  andi v1,v1,0xffff
80401d88  addiu v0,v0,0x2
80401d8c  lw a3,0x1c(sp)
80401d90  nop
80401d94  sltu a3,v0,a3
80401d98  bne a3,zero,0x80401d5c
80401d9c  _move a0,v0
80401da0  beq v1,zero,0x80401dc8
80401da4  _addiu a0,sp,0x10
80401da8  lui a0,0x8041
80401dac  addiu a0,a0,-0x2c64
80401db0  addiu a1,sp,0x10
80401db4  jal 0x804077a4
80401db8  _move a2,s0
80401dbc  j 0x804020b0
80401dc0  _nop
80401dc4  addiu a0,sp,0x10
80401dc8  lui a1,0x8041
80401dcc  addiu a1,a1,-0x2c74
80401dd0  jal 0x80406a80
80401dd4  _li a2,0x4
80401dd8  beq v0,zero,0x8040206c
80401ddc  _addiu a0,sp,0x10
80401de0  lui a1,0x8041
80401de4  addiu a1,a1,-0x2c6c
80401de8  jal 0x80406a80
80401dec  _li a2,0x4
80401df0  beq v0,zero,0x80402068
80401df4  _li v0,0x1
80401df8  j 0x80401e4c
80401dfc  _nop
80401e00  clear v1
80401e04  clear v0
80401e08  addu a0,a0,s0
80401e0c  lbu a0,0x10(a0)
80401e10  nop
80401e14  addu v1,v1,a0
80401e18  andi v1,v1,0xff
80401e1c  addiu v0,v0,0x1
80401e20  sltu a1,v0,a2
80401e24  bne a1,zero,0x80401e08
80401e28  _move a0,v0
80401e2c  beq v1,zero,0x80401e4c
80401e30  _lui a0,0x8041
80401e34  addiu a0,a0,-0x2c64
80401e38  addiu a1,sp,0x10
80401e3c  jal 0x804077a4
80401e40  _move a2,s0
80401e44  j 0x804020b0
80401e48  _nop
80401e4c  lw a0,0x4c(sp)
80401e50  jal 0x804077a4
80401e54  _nop
80401e58  andi v0,s3,0xfff
80401e5c  bne v0,zero,0x80401e88
80401e60  _addu v0,s3,s8
80401e64  lw v1,0x0(v0)
80401e68  lui v0,0xdead
80401e6c  ori v0,v0,0xc0de
80401e70  bne v1,v0,0x80401e88
80401e74  _lui v0,0x8041
80401e78  addiu a0,v0,-0x2c30
80401e7c  jal 0x804077a4
80401e80  _move a1,s3
80401e84  addiu s3,s3,0x4
80401e88  lw a0,0x50(sp)
80401e8c  lw a1,0x18(sp)
80401e90  move a2,s1
80401e94  jal 0x804077a4
80401e98  _move a3,s3
80401e9c  addiu a0,sp,0x10
80401ea0  lw a1,0x54(sp)
80401ea4  jal 0x80406a80
80401ea8  _li a2,0x4
80401eac  beq v0,zero,0x80401ec8
80401eb0  _addiu a0,sp,0x10
80401eb4  lw a1,0x64(sp)
80401eb8  jal 0x80406a80
80401ebc  _li a2,0x4
80401ec0  bne v0,zero,0x80401f58
80401ec4  _addiu a0,sp,0x10
80401ec8  jal 0x80407a10
80401ecc  _addiu s0,sp,0x24
80401ed0  move s7,v0
80401ed4  lw a0,0x60(sp)
80401ed8  jal 0x804077a4
80401edc  _move a1,v0
80401ee0  lwl a1,0x0(s1)
80401ee4  nop
80401ee8  lwr a1,0x3(s1)
80401eec  lwl a0,0x4(s1)
80401ef0  nop
80401ef4  lwr a0,0x7(s1)
80401ef8  lwl v1,0x8(s1)
80401efc  nop
80401f00  lwr v1,0xb(s1)
80401f04  lwl v0,0xc(s1)
80401f08  nop
80401f0c  lwr v0,0xf(s1)
80401f10  sw a1,0x0(s0)
80401f14  sw a0,0x4(s0)
80401f18  sw v1,0x8(s0)
80401f1c  jal 0x80407a70
80401f20  _sw v0,0xc(s0)
80401f24  sw v0,0x2c(sp)
80401f28  lw a1,0x0(s0)
80401f2c  lw a0,0x4(s0)
80401f30  lw v1,0xc(s0)
80401f34  swl a1,0x0(s1)
80401f38  swr a1,0x3(s1)
80401f3c  swl a0,0x4(s1)
80401f40  swr a0,0x7(s1)
80401f44  swl v0,0x8(s1)
80401f48  swr v0,0xb(s1)
80401f4c  swl v1,0xc(s1)
80401f50  j 0x80401f84
80401f54  _swr v1,0xf(s1)
80401f58  lw a1,0x68(sp)
80401f5c  jal 0x80406a80
80401f60  _li a2,0x4
80401f64  bne v0,zero,0x80401f84
80401f68  _nop
80401f6c  jal 0x80407a10
80401f70  _nop
80401f74  move s7,v0
80401f78  lw a0,0x60(sp)
80401f7c  jal 0x804077a4
80401f80  _move a1,v0
80401f84  lw v0,0x18(sp)
80401f88  nop
80401f8c  addu v0,s7,v0
80401f90  lw v1,0x44(sp)
80401f94  nop
80401f98  lw a3,0xc(v1)
80401f9c  addu v1,v0,s3
80401fa0  sltu v1,a3,v1
80401fa4  beq v1,zero,0x80402004
80401fa8  _clear a0
80401fac  move a1,v0
80401fb0  move a2,s1
80401fb4  jal 0x80404b40
80401fb8  _subu a3,a3,v0
80401fbc  beq v0,zero,0x8040201c
80401fc0  _li a0,0x1
80401fc4  lw v0,0x44(sp)
80401fc8  nop
80401fcc  lw a3,0xc(v0)
80401fd0  lw v0,0x18(sp)
80401fd4  nop
80401fd8  addu v0,s7,v0
80401fdc  addu a2,s1,a3
80401fe0  subu a3,s3,a3
80401fe4  clear a1
80401fe8  subu a2,a2,v0
80401fec  jal 0x80404b40
80401ff0  _addu a3,a3,v0
80401ff4  bne v0,zero,0x804020a8
80401ff8  _li v1,0x1
80401ffc  j 0x8040201c
80402000  _nop
80402004  move a1,v0
80402008  move a2,s1
8040200c  jal 0x80404b40
80402010  _move a3,s3
80402014  bne v0,zero,0x804020a8
80402018  _li v1,0x1
8040201c  lw v1,0x48(sp)
80402020  nop
80402024  beq v1,zero,0x80402050
80402028  _lui a0,0x8041
8040202c  lw a0,0x58(sp)
80402030  lw a1,0x5c(sp)
80402034  jal 0x804077a4
80402038  _nop
8040203c  lw s5,0x1c(sp)
80402040  nop
80402044  addiu s5,s5,0x10
80402048  j 0x8040206c
8040204c  _addu s5,s5,s4
80402050  addiu a0,a0,-0x2b80
80402054  lui a1,0x8041
80402058  jal 0x804077a4
8040205c  _addiu a1,a1,-0x2d3c
80402060  j 0x804020b0
80402064  _nop
80402068  sw v0,0x3c(sp)
8040206c  move s4,s5
80402070  addiu s5,s4,0x10
80402074  lw v1,0x9c(sp)
80402078  nop
8040207c  sltu v0,s5,v1
80402080  bne v0,zero,0x80401ab4
80402084  _addu s0,s4,s8
80402088  lw v0,0x40(sp)
8040208c  nop
80402090  beq v0,zero,0x804020b0
80402094  _nop
80402098  jal 0x804011e8
8040209c  _nop
804020a0  j 0x804020b0
804020a4  _nop
804020a8  j 0x8040202c
804020ac  _sw v1,0x48(sp)
804020b0  lw ra,0x94(sp)
804020b4  lw s8,0x90(sp)
804020b8  lw s7,0x8c(sp)
804020bc  lw s6,0x88(sp)
804020c0  lw s5,0x84(sp)
804020c4  lw s4,0x80(sp)
804020c8  lw s3,0x7c(sp)
804020cc  lw s2,0x78(sp)
804020d0  lw s1,0x74(sp)
804020d4  lw s0,0x70(sp)
804020d8  jr ra
804020dc  _addiu sp,sp,0x98
