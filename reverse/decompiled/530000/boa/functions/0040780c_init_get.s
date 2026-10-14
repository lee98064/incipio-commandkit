# init_get @ 0040780c
0040780c  addiu sp,sp,-0x3198
00407810  sw ra,0x3194(sp)
00407814  sw s8,0x3190(sp)
00407818  sw s7,0x318c(sp)
0040781c  sw s6,0x3188(sp)
00407820  sw s5,0x3184(sp)
00407824  sw s4,0x3180(sp)
00407828  sw s3,0x317c(sp)
0040782c  sw s2,0x3178(sp)
00407830  sw s1,0x3174(sp)
00407834  sw s0,0x3170(sp)
00407838  lui gp,0x47
0040783c  move s8,sp
00407840  addiu gp,gp,0x2630
00407844  sw gp,0x10(sp)
00407848  lw t9,-0x7ad4(gp)
0040784c  lui a1,0x45
00407850  sw a0,0x3198(s8)
00407854  addiu a1,a1,-0x5dd0
00407858  addiu a0,s8,0x2c
0040785c  jalr t9
00407860  _li a2,0x18
00407864  lw v0,0x3198(s8)
00407868  lw s7,0x30(s8)
0040786c  lw gp,0x10(s8)
00407870  addiu s3,v0,0x8d4
00407874  addiu v0,s7,0xe
00407878  lw t9,-0x7cf0(gp)
0040787c  srl v0,v0,0x3
00407880  sll v0,v0,0x3
00407884  lui a1,0x45
00407888  subu sp,sp,v0
0040788c  addiu a1,a1,-0x5f80
00407890  jalr t9
00407894  _move a0,s3
00407898  lw gp,0x10(s8)
0040789c  beq v0,zero,0x00407930
004078a0  _addiu s6,sp,0x10
004078a4  lw v1,0x3198(s8)
004078a8  lw t9,-0x7cf0(gp)
004078ac  lui a1,0x45
004078b0  addiu a1,a1,-0x5f6c
004078b4  jalr t9
004078b8  _addiu a0,v1,0x10d5
004078bc  lw gp,0x10(s8)
004078c0  beq v0,zero,0x00407930
004078c4  _addiu s0,v0,0xd
004078c8  lw t9,-0x7cf0(gp)
004078cc  lui a1,0x45
004078d0  addiu a1,a1,-0x5f5c
004078d4  jalr t9
004078d8  _move a0,s0
004078dc  lw gp,0x10(s8)
004078e0  beq v0,zero,0x00407930
004078e4  _addiu a2,v0,0x9
004078e8  lw t9,-0x7cf0(gp)
004078ec  lui a1,0x45
004078f0  sb zero,0x0(v0)
004078f4  move a0,a2
004078f8  sw a2,0x3168(s8)
004078fc  jalr t9
00407900  _addiu a1,a1,-0x5f50
00407904  lw gp,0x10(s8)
00407908  lw a2,0x3168(s8)
0040790c  beq v0,zero,0x00407930
00407910  _nop
00407914  sb zero,0x0(v0)
00407918  lw t9,-0x7f84(gp)
0040791c  lw a0,0x3198(s8)
00407920  jalr t9
00407924  _move a1,s0
00407928  b 0x00407f90
0040792c  _nop
00407930  lw t9,-0x7cf0(gp)
00407934  lui a1,0x45
00407938  addiu a1,a1,-0x5f48
0040793c  jalr t9
00407940  _move a0,s3
00407944  lw gp,0x10(s8)
00407948  beq v0,zero,0x00407bec
0040794c  _lui a0,0x45
00407950  lw t9,-0x7b18(gp)
00407954  nop
00407958  jalr t9
0040795c  _addiu a0,a0,-0x5f3c
00407960  lw gp,0x10(s8)
00407964  lui a0,0x45
00407968  addiu a0,a0,-0x5f28
0040796c  lw t9,-0x7f20(gp)
00407970  li a1,0x501
00407974  jalr t9
00407978  _li a2,0x1a4
0040797c  move s4,v0
00407980  li v0,-0x1
00407984  lw gp,0x10(s8)
00407988  bne s4,v0,0x004079d8
0040798c  _addiu s5,s8,0x2c
00407990  lw t9,-0x7ecc(gp)
00407994  lw v0,-0x7e40(gp)
00407998  nop
0040799c  lw s1,0x0(v0)
004079a0  jalr t9
004079a4  _clear s0
004079a8  lw gp,0x10(s8)
004079ac  lw a0,0x0(v0)
004079b0  lw t9,-0x7a2c(gp)
004079b4  nop
004079b8  jalr t9
004079bc  _nop
004079c0  lw gp,0x10(s8)
004079c4  lui a1,0x45
004079c8  move a0,s1
004079cc  lw t9,-0x7c44(gp)
004079d0  b 0x00407ba0
004079d4  _addiu a1,a1,-0x5f18
004079d8  clear s2
004079dc  addiu s1,s8,0x1c
004079e0  lw t9,-0x7db4(gp)
004079e4  move a0,s6
004079e8  clear a1
004079ec  move a2,s7
004079f0  sw zero,0x0(s1)
004079f4  sw zero,0x4(s1)
004079f8  sw zero,0x8(s1)
004079fc  jalr t9
00407a00  _sw zero,0xc(s1)
00407a04  lw gp,0x10(s8)
00407a08  lui a1,0x45
00407a0c  move a2,s2
00407a10  lw t9,-0x7e28(gp)
00407a14  move a0,s1
00407a18  jalr t9
00407a1c  _addiu a1,a1,-0x5f04
00407a20  lw gp,0x10(s8)
00407a24  move a0,s1
00407a28  lw t9,-0x7f20(gp)
00407a2c  nop
00407a30  jalr t9
00407a34  _li a1,0x80
00407a38  lw gp,0x10(s8)
00407a3c  li a3,-0x1
00407a40  clear a1
00407a44  lw t9,-0x7b94(gp)
00407a48  clear a2
00407a4c  move s0,v0
00407a50  bne v0,a3,0x00407aa4
00407a54  _move a0,v0
00407a58  lw t9,-0x7ecc(gp)
00407a5c  lw v0,-0x7e40(gp)
00407a60  nop
00407a64  lw s2,0x0(v0)
00407a68  jalr t9
00407a6c  _clear s0
00407a70  lw gp,0x10(s8)
00407a74  lw a0,0x0(v0)
00407a78  lw t9,-0x7a2c(gp)
00407a7c  nop
00407a80  jalr t9
00407a84  _nop
00407a88  lw gp,0x10(s8)
00407a8c  lui a1,0x45
00407a90  move a0,s2
00407a94  lw t9,-0x7c44(gp)
00407a98  addiu a1,a1,-0x5ef4
00407a9c  b 0x00407b30
00407aa0  _move a2,s1
00407aa4  jalr t9
00407aa8  _nop
00407aac  lw gp,0x10(s8)
00407ab0  lw v1,0x0(s5)
00407ab4  move a0,s0
00407ab8  lw t9,-0x7cfc(gp)
00407abc  move a2,v1
00407ac0  move a1,s6
00407ac4  jalr t9
00407ac8  _sw v1,0x3168(s8)
00407acc  lw gp,0x10(s8)
00407ad0  lw v1,0x3168(s8)
00407ad4  move a0,s4
00407ad8  lw t9,-0x7c34(gp)
00407adc  move a2,v1
00407ae0  bgez v0,0x00407b40
00407ae4  _move a1,s6
00407ae8  lw t9,-0x7ecc(gp)
00407aec  lw v0,-0x7e40(gp)
00407af0  nop
00407af4  lw s1,0x0(v0)
00407af8  jalr t9
00407afc  _clear s0
00407b00  lw gp,0x10(s8)
00407b04  lw a0,0x0(v0)
00407b08  lw t9,-0x7a2c(gp)
00407b0c  nop
00407b10  jalr t9
00407b14  _nop
00407b18  lw gp,0x10(s8)
00407b1c  lui a1,0x45
00407b20  move a0,s1
00407b24  lw t9,-0x7c44(gp)
00407b28  addiu a1,a1,-0x5ee0
00407b2c  move a2,s2
00407b30  jalr t9
00407b34  _move a3,v0
00407b38  b 0x00407ba8
00407b3c  _nop
00407b40  jalr t9
00407b44  _addiu s2,s2,0x1
00407b48  lw gp,0x10(s8)
00407b4c  nop
00407b50  lw t9,-0x7f9c(gp)
00407b54  bgez v0,0x00407bb0
00407b58  _move a0,s0
00407b5c  lw t9,-0x7ecc(gp)
00407b60  lw v0,-0x7e40(gp)
00407b64  nop
00407b68  lw s1,0x0(v0)
00407b6c  jalr t9
00407b70  _clear s0
00407b74  lw gp,0x10(s8)
00407b78  lw a0,0x0(v0)
00407b7c  lw t9,-0x7a2c(gp)
00407b80  nop
00407b84  jalr t9
00407b88  _nop
00407b8c  lw gp,0x10(s8)
00407b90  lui a1,0x45
00407b94  move a0,s1
00407b98  lw t9,-0x7c44(gp)
00407b9c  addiu a1,a1,-0x5ecc
00407ba0  jalr t9
00407ba4  _move a2,v0
00407ba8  b 0x004083c4
00407bac  _move sp,s8
00407bb0  jalr t9
00407bb4  _addiu s5,s5,0x4
00407bb8  li v0,0x6
00407bbc  lw gp,0x10(s8)
00407bc0  bne s2,v0,0x004079e0
00407bc4  _nop
00407bc8  lw t9,-0x7f9c(gp)
00407bcc  nop
00407bd0  jalr t9
00407bd4  _move a0,s4
00407bd8  lw gp,0x10(s8)
00407bdc  lui a0,0x45
00407be0  lw t9,-0x7f20(gp)
00407be4  b 0x00407bf8
00407be8  _addiu a0,a0,-0x5f28
00407bec  lw v1,0x3198(s8)
00407bf0  lw t9,-0x7f20(gp)
00407bf4  lw a0,0x1c(v1)
00407bf8  jalr t9
00407bfc  _clear a1
00407c00  lw gp,0x10(s8)
00407c04  nop
00407c08  lw t9,-0x7ecc(gp)
00407c0c  nop
00407c10  jalr t9
00407c14  _move s0,v0
00407c18  li v1,-0x1
00407c1c  lw gp,0x10(s8)
00407c20  bne s0,v1,0x00407ca4
00407c24  _move s5,v0
00407c28  lw v0,-0x7a3c(gp)
00407c2c  nop
00407c30  lw v0,0x0(v0)
00407c34  nop
00407c38  andi v0,v0,0x1
00407c3c  beq v0,zero,0x00407c94
00407c40  _lui a1,0x45
00407c44  lw t9,-0x7aec(gp)
00407c48  lui a0,0x45
00407c4c  jalr t9
00407c50  _addiu a0,a0,-0x5eb4
00407c54  lw a0,0x3198(s8)
00407c58  lw gp,0x10(s8)
00407c5c  lw a2,0x1c(a0)
00407c60  lw v0,-0x7e40(gp)
00407c64  nop
00407c68  lw a0,0x0(v0)
00407c6c  bne a2,zero,0x00407c7c
00407c70  _nop
00407c74  lui a2,0x45
00407c78  addiu a2,a2,0x3d4
00407c7c  lw t9,-0x7c44(gp)
00407c80  lui a1,0x45
00407c84  jalr t9
00407c88  _addiu a1,a1,-0x5ea4
00407c8c  lw gp,0x10(s8)
00407c90  lui a1,0x45
00407c94  lw t9,-0x79b8(gp)
00407c98  lw a0,0x3198(s8)
00407c9c  b 0x00407f88
00407ca0  _addiu a1,a1,-0x5e90
00407ca4  lw t9,-0x7c40(gp)
00407ca8  addiu s1,s8,0x48
00407cac  move a0,s0
00407cb0  jalr t9
00407cb4  _move a1,s1
00407cb8  lw v1,0x5c(s8)
00407cbc  li v0,0x4000
00407cc0  lw gp,0x10(s8)
00407cc4  andi v1,v1,0xf000
00407cc8  bne v1,v0,0x00407fbc
00407ccc  _nop
00407cd0  lw t9,-0x7f9c(gp)
00407cd4  nop
00407cd8  jalr t9
00407cdc  _move a0,s0
00407ce0  lw a1,0x3198(s8)
00407ce4  lw gp,0x10(s8)
00407ce8  lw s0,0x1c(a1)
00407cec  lw t9,-0x7f1c(gp)
00407cf0  nop
00407cf4  jalr t9
00407cf8  _move a0,s0
00407cfc  addu v0,s0,v0
00407d00  lb v1,-0x1(v0)
00407d04  li v0,0x2f
00407d08  lw gp,0x10(s8)
00407d0c  beq v1,v0,0x00407f98
00407d10  _lui v0,0x47
00407d14  lw a0,-0x7b0c(gp)
00407d18  lw v1,-0x3a0c(v0)
00407d1c  lw s0,0x0(a0)
00407d20  bne v1,zero,0x00407d2c
00407d24  _li v1,0x7
00407d28  sw v1,-0x3a0c(v0)
00407d2c  lw t9,-0x7f1c(gp)
00407d30  move a0,s3
00407d34  jalr t9
00407d38  _clear s6
00407d3c  lw gp,0x10(s8)
00407d40  move s1,v0
00407d44  lw v0,-0x7e70(gp)
00407d48  nop
00407d4c  lw a0,0x0(v0)
00407d50  li v0,0x50
00407d54  beq a0,v0,0x00407dac
00407d58  _nop
00407d5c  lw t9,-0x7c64(gp)
00407d60  nop
00407d64  jalr t9
00407d68  _nop
00407d6c  lw gp,0x10(s8)
00407d70  nop
00407d74  lw t9,-0x7d8c(gp)
00407d78  nop
00407d7c  jalr t9
00407d80  _move a0,v0
00407d84  lw gp,0x10(s8)
00407d88  beq v0,zero,0x00407ef8
00407d8c  _move s6,v0
00407d90  lw t9,-0x7f1c(gp)
00407d94  nop
00407d98  jalr t9
00407d9c  _move a0,v0
00407da0  lw gp,0x10(s8)
00407da4  lui v1,0x47
00407da8  sw v0,-0x3a08(v1)
00407dac  lw a2,0x3198(s8)
00407db0  lw t9,-0x7f1c(gp)
00407db4  lw s2,0x70(a2)
00407db8  nop
00407dbc  movz s2,s0,s2
00407dc0  jalr t9
00407dc4  _move a0,s2
00407dc8  lw gp,0x10(s8)
00407dcc  move s0,v0
00407dd0  lw v0,-0x7e70(gp)
00407dd4  nop
00407dd8  lw v1,0x0(v0)
00407ddc  li v0,0x50
00407de0  beq v1,v0,0x00407ed8
00407de4  _lui s3,0x47
00407de8  lui s4,0x47
00407dec  lw a2,-0x3a0c(s3)
00407df0  lw v0,-0x3a08(s4)
00407df4  nop
00407df8  addu v0,a2,v0
00407dfc  addiu v0,v0,0x2
00407e00  addu v0,v0,s1
00407e04  addu v0,v0,s0
00407e08  sltiu v0,v0,0x3081
00407e0c  beq v0,zero,0x00407efc
00407e10  _li v0,0xc
00407e14  lw t9,-0x7ad4(gp)
00407e18  addiu s5,s8,0xe0
00407e1c  lui a1,0x45
00407e20  addiu a1,a1,-0x5e84
00407e24  jalr t9
00407e28  _move a0,s5
00407e2c  lw gp,0x10(s8)
00407e30  lw a0,-0x3a0c(s3)
00407e34  move a1,s2
00407e38  lw t9,-0x7ad4(gp)
00407e3c  move a2,s0
00407e40  jalr t9
00407e44  _addu a0,s5,a0
00407e48  lw gp,0x10(s8)
00407e4c  lw v0,-0x3a0c(s3)
00407e50  addiu s2,s8,0x18
00407e54  lw t9,-0x7ad4(gp)
00407e58  addu s2,s2,s0
00407e5c  addiu a0,v0,0x1
00407e60  lw a2,-0x3a08(s4)
00407e64  li v1,0x3a
00407e68  addu a0,a0,s0
00407e6c  addu v0,s2,v0
00407e70  sb v1,0xc8(v0)
00407e74  addu a0,s5,a0
00407e78  jalr t9
00407e7c  _move a1,s6
00407e80  lw v1,-0x3a0c(s3)
00407e84  lw v0,-0x3a08(s4)
00407e88  lw gp,0x10(s8)
00407e8c  lw a3,0x3198(s8)
00407e90  addu v0,v1,v0
00407e94  lw t9,-0x7ad4(gp)
00407e98  addiu v0,v0,0x1
00407e9c  addu s0,v0,s0
00407ea0  move a2,s1
00407ea4  addiu a1,a3,0x8d4
00407ea8  jalr t9
00407eac  _addu a0,s5,s0
00407eb0  lw v1,-0x3a0c(s3)
00407eb4  lw v0,-0x3a08(s4)
00407eb8  addu s1,s2,s1
00407ebc  addu s1,s1,v1
00407ec0  addu s1,s1,v0
00407ec4  li v0,0x2f
00407ec8  lw gp,0x10(s8)
00407ecc  sb v0,0xc9(s1)
00407ed0  b 0x00407f7c
00407ed4  _sb zero,0xca(s1)
00407ed8  lw a2,-0x3a0c(s3)
00407edc  nop
00407ee0  addiu v0,a2,0x1
00407ee4  addu v0,v0,s1
00407ee8  addu v0,v0,s0
00407eec  sltiu v0,v0,0x3081
00407ef0  bne v0,zero,0x00407f04
00407ef4  _addiu s4,s8,0xe0
00407ef8  li v0,0xc
00407efc  b 0x004083b4
00407f00  _sw v0,0x0(s5)
00407f04  lw t9,-0x7ad4(gp)
00407f08  lui a1,0x45
00407f0c  addiu a1,a1,-0x5e84
00407f10  jalr t9
00407f14  _move a0,s4
00407f18  lw gp,0x10(s8)
00407f1c  lw a0,-0x3a0c(s3)
00407f20  move a2,s0
00407f24  lw t9,-0x7ad4(gp)
00407f28  move a1,s2
00407f2c  jalr t9
00407f30  _addu a0,s4,a0
00407f34  lw gp,0x10(s8)
00407f38  lw a0,-0x3a0c(s3)
00407f3c  lw v0,0x3198(s8)
00407f40  lw t9,-0x7ad4(gp)
00407f44  addu a0,s0,a0
00407f48  move a2,s1
00407f4c  addiu a1,v0,0x8d4
00407f50  jalr t9
00407f54  _addu a0,s4,a0
00407f58  lw v0,-0x3a0c(s3)
00407f5c  addiu v1,s8,0x18
00407f60  addu s0,v1,s0
00407f64  addu s1,s0,s1
00407f68  addu s1,s1,v0
00407f6c  li v0,0x2f
00407f70  lw gp,0x10(s8)
00407f74  sb v0,0xc8(s1)
00407f78  sb zero,0xc9(s1)
00407f7c  lw t9,-0x7d5c(gp)
00407f80  lw a0,0x3198(s8)
00407f84  addiu a1,s8,0xe0
00407f88  jalr t9
00407f8c  _nop
00407f90  b 0x004083c0
00407f94  _clear s0
00407f98  lw a0,0x3198(s8)
00407f9c  jal 0x00406f70
00407fa0  _move a1,s1
00407fa4  lw gp,0x10(s8)
00407fa8  bltz v0,0x004083b4
00407fac  _move s0,v0
00407fb0  sltiu v0,v0,0x2
00407fb4  bne v0,zero,0x004083c0
00407fb8  _nop
00407fbc  lw v1,0x5c(s8)
00407fc0  ori v0,zero,0x8000
00407fc4  andi v1,v1,0xf000
00407fc8  beq v1,v0,0x00407ff8
00407fcc  _lui a0,0x45
00407fd0  lw v0,-0x7e40(gp)
00407fd4  lw t9,-0x7f4c(gp)
00407fd8  lw a1,0x0(v0)
00407fdc  jalr t9
00407fe0  _addiu a0,a0,-0x5e7c
00407fe4  lw gp,0x10(s8)
00407fe8  nop
00407fec  lw t9,-0x7cc8(gp)
00407ff0  b 0x0040805c
00407ff4  _nop
00407ff8  lw a0,0x3198(s8)
00407ffc  lw v1,0x8c(s8)
00408000  lw a1,0x3198(s8)
00408004  lw v0,0x6c(a0)
00408008  lw a0,0x7c(s8)
0040800c  sw v1,0x58(a1)
00408010  beq v0,zero,0x0040802c
00408014  _sw a0,0x2c(a1)
00408018  lw v0,0x20(a1)
0040801c  nop
00408020  bne v0,zero,0x0040802c
00408024  _nop
00408028  sw zero,0x6c(a1)
0040802c  lw a2,0x3198(s8)
00408030  nop
00408034  lw v0,0x2c(a2)
00408038  nop
0040803c  bne v0,zero,0x00408080
00408040  _sw zero,0x6c(a2)
00408044  lw v0,0x8(a2)
00408048  nop
0040804c  sltiu v0,v0,0x3
00408050  beq v0,zero,0x00408074
00408054  _nop
00408058  lw t9,-0x7b84(gp)
0040805c  lw a0,0x3198(s8)
00408060  jalr t9
00408064  _nop
00408068  lw gp,0x10(s8)
0040806c  b 0x004080b4
00408070  _nop
00408074  lw t9,-0x7cb0(gp)
00408078  b 0x0040805c
0040807c  _nop
00408080  lw a3,0x3198(s8)
00408084  nop
00408088  lw v0,0x20(a3)
0040808c  nop
00408090  beq v0,zero,0x004080cc
00408094  _nop
00408098  lw t9,-0x7c88(gp)
0040809c  nop
004080a0  jalr t9
004080a4  _move a0,a3
004080a8  lw gp,0x10(s8)
004080ac  bne v0,zero,0x004080cc
004080b0  _nop
004080b4  lw t9,-0x7f9c(gp)
004080b8  move a0,s0
004080bc  jalr t9
004080c0  _clear s0
004080c4  b 0x00407ba8
004080c8  _nop
004080cc  lw v0,0x3198(s8)
004080d0  nop
004080d4  lw v1,0x2c(v0)
004080d8  lui v0,0x1
004080dc  ori v0,v0,0x9001
004080e0  sltu v0,v1,v0
004080e4  bne v0,zero,0x00408100
004080e8  _li v0,0x9
004080ec  lw v1,0x3198(s8)
004080f0  nop
004080f4  sw s0,0x28(v1)
004080f8  b 0x0040814c
004080fc  _sw v0,0x0(v1)
00408100  lw t9,-0x7a80(gp)
00408104  move a0,s0
00408108  jalr t9
0040810c  _addiu a1,s8,0x48
00408110  lw a0,0x3198(s8)
00408114  lw gp,0x10(s8)
00408118  bne v0,zero,0x00408130
0040811c  _sw v0,0xa4(a0)
00408120  li v0,0x9
00408124  sw s0,0x28(a0)
00408128  b 0x0040814c
0040812c  _sw v0,0x0(a0)
00408130  lw v0,0xc(v0)
00408134  lw a1,0x3198(s8)
00408138  lw t9,-0x7f9c(gp)
0040813c  move a0,s0
00408140  jalr t9
00408144  _sw v0,0x38(a1)
00408148  lw gp,0x10(s8)
0040814c  lw a2,0x3198(s8)
00408150  nop
00408154  lw v0,0x20(a2)
00408158  nop
0040815c  bne v0,zero,0x00408190
00408160  _nop
00408164  lw t9,-0x7ce0(gp)
00408168  nop
0040816c  jalr t9
00408170  _nop
00408174  lw a3,0x3198(s8)
00408178  lw gp,0x10(s8)
0040817c  sw v0,0x20(a3)
00408180  sw zero,0x0(v0)
00408184  lw v0,0x20(a3)
00408188  b 0x004081f4
0040818c  _li v1,-0x1
00408190  lw v1,0x3198(s8)
00408194  nop
00408198  lw v0,0x6c(v1)
0040819c  nop
004081a0  bne v0,zero,0x004081b4
004081a4  _move a0,v1
004081a8  lw t9,-0x7e34(gp)
004081ac  b 0x0040821c
004081b0  _nop
004081b4  lw t9,-0x7c98(gp)
004081b8  lw a0,0x3198(s8)
004081bc  jalr t9
004081c0  _nop
004081c4  lw gp,0x10(s8)
004081c8  nop
004081cc  lw t9,-0x7ce0(gp)
004081d0  nop
004081d4  jalr t9
004081d8  _nop
004081dc  lw a0,0x3198(s8)
004081e0  lw gp,0x10(s8)
004081e4  sw v0,0x20(a0)
004081e8  sw zero,0x0(v0)
004081ec  lw v0,0x20(a0)
004081f0  li v1,-0x1
004081f4  sw v1,0x4(v0)
004081f8  lw t9,-0x7c88(gp)
004081fc  lw a0,0x3198(s8)
00408200  jalr t9
00408204  _nop
00408208  lw gp,0x10(s8)
0040820c  beq v0,zero,0x004083c0
00408210  _clear s0
00408214  lw t9,-0x7b84(gp)
00408218  lw a0,0x3198(s8)
0040821c  jalr t9
00408220  _nop
00408224  lw a1,0x3198(s8)
00408228  li v0,0x2
0040822c  lw gp,0x10(s8)
00408230  lw v1,0xc(a1)
00408234  nop
00408238  bne v1,v0,0x0040824c
0040823c  _move a0,a1
00408240  lw t9,-0x7dcc(gp)
00408244  b 0x004083a4
00408248  _nop
0040824c  lw a2,0x3198(s8)
00408250  nop
00408254  lw v0,0x38(a2)
00408258  sw zero,0x18(s8)
0040825c  beq v0,zero,0x004083bc
00408260  _li v1,0x2000
00408264  lw v0,0x50(a2)
00408268  nop
0040826c  subu v0,v1,v0
00408270  sw v0,0x18(s8)
00408274  lw v0,0x18(s8)
00408278  nop
0040827c  sltiu v0,v0,0x101
00408280  bne v0,zero,0x004083c0
00408284  _li s0,0x1
00408288  lw a3,0x20(a2)
0040828c  lw v0,0x18(s8)
00408290  sw a3,0x3160(s8)
00408294  lw a0,0x4(a3)
00408298  lw v1,0x0(a3)
0040829c  addiu a0,a0,0x1
004082a0  subu v1,a0,v1
004082a4  sltu v0,v1,v0
004082a8  beq v0,zero,0x004082b4
004082ac  _sw v1,0x3164(s8)
004082b0  sw v1,0x18(s8)
004082b4  lw a0,-0x7e58(gp)
004082b8  lw t9,-0x7efc(gp)
004082bc  nop
004082c0  jalr t9
004082c4  _nop
004082c8  lw gp,0x10(s8)
004082cc  bne v0,zero,0x0040836c
004082d0  _li v0,0x1
004082d4  lw s0,-0x7c78(gp)
004082d8  lw a3,0x3160(s8)
004082dc  sw v0,0x0(s0)
004082e0  lw v0,0x3198(s8)
004082e4  lw t9,-0x7ad4(gp)
004082e8  lw a2,0x18(s8)
004082ec  lw v1,0x50(v0)
004082f0  lw a0,0x8d0(v0)
004082f4  lw a1,0x38(v0)
004082f8  lw v0,0x0(a3)
004082fc  addu a0,a0,v1
00408300  jalr t9
00408304  _addu a1,a1,v0
00408308  lw v0,0x3198(s8)
0040830c  lw a2,0x3198(s8)
00408310  lw gp,0x10(s8)
00408314  sw zero,0x0(s0)
00408318  lw a0,0x18(s8)
0040831c  lw a1,0x50(v0)
00408320  lw v1,0x34(a2)
00408324  lw v0,0x18(s8)
00408328  addu a0,a1,a0
0040832c  sw a0,0x50(a2)
00408330  addu v0,v1,v0
00408334  sw v0,0x34(a2)
00408338  lw a3,0x3160(s8)
0040833c  lw v0,0x18(s8)
00408340  lw v1,0x0(a3)
00408344  nop
00408348  addu v0,v1,v0
0040834c  sw v0,0x0(a3)
00408350  lw v0,0x18(s8)
00408354  lw v1,0x3164(s8)
00408358  nop
0040835c  bne v0,v1,0x004083bc
00408360  _nop
00408364  b 0x0040839c
00408368  _nop
0040836c  lw t9,-0x7b14(gp)
00408370  lw a0,0x3198(s8)
00408374  jalr t9
00408378  _clear s0
0040837c  lw gp,0x10(s8)
00408380  lw a0,0x3198(s8)
00408384  lw t9,-0x7f18(gp)
00408388  nop
0040838c  jalr t9
00408390  _nop
00408394  b 0x00407ba8
00408398  _nop
0040839c  lw t9,-0x7dcc(gp)
004083a0  lw a0,0x3198(s8)
004083a4  jalr t9
004083a8  _nop
004083ac  b 0x004083c0
004083b0  _move s0,v0
004083b4  b 0x004083c0
004083b8  _clear s0
004083bc  li s0,0x1
004083c0  move sp,s8
004083c4  move v0,s0
004083c8  lw ra,0x3194(sp)
004083cc  lw s8,0x3190(sp)
004083d0  lw s7,0x318c(sp)
004083d4  lw s6,0x3188(sp)
004083d8  lw s5,0x3184(sp)
004083dc  lw s4,0x3180(sp)
004083e0  lw s3,0x317c(sp)
004083e4  lw s2,0x3178(sp)
004083e8  lw s1,0x3174(sp)
004083ec  lw s0,0x3170(sp)
004083f0  jr ra
004083f4  _addiu sp,sp,0x3198
