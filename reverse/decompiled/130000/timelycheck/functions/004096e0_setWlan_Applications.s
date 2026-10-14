# setWlan_Applications @ 004096e0
004096e0  addiu sp,sp,-0x608
004096e4  sw ra,0x604(sp)
004096e8  sw s8,0x600(sp)
004096ec  sw s7,0x5fc(sp)
004096f0  sw s6,0x5f8(sp)
004096f4  sw s5,0x5f4(sp)
004096f8  sw s4,0x5f0(sp)
004096fc  sw s3,0x5ec(sp)
00409700  sw s2,0x5e8(sp)
00409704  sw s1,0x5e4(sp)
00409708  sw s0,0x5e0(sp)
0040970c  lui gp,0x43
00409710  addiu gp,gp,0x3060
00409714  sw gp,0x28(sp)
00409718  lw t9,-0x7f4c(gp)
0040971c  move s0,a1
00409720  sw a0,0x608(sp)
00409724  clear a1
00409728  addiu a0,sp,0x368
0040972c  jalr t9
00409730  _li a2,0xc8
00409734  lw gp,0x28(sp)
00409738  addiu s3,sp,0xc8
0040973c  move a0,s3
00409740  lw t9,-0x7f4c(gp)
00409744  clear a1
00409748  li a2,0x1e
0040974c  sw zero,0x30(sp)
00409750  sw zero,0x34(sp)
00409754  sw zero,0x38(sp)
00409758  sw zero,0x3c(sp)
0040975c  sw zero,0x40(sp)
00409760  sw zero,0x44(sp)
00409764  sw zero,0x48(sp)
00409768  sw zero,0x4c(sp)
0040976c  sw zero,0x50(sp)
00409770  sw zero,0x54(sp)
00409774  sw zero,0x58(sp)
00409778  sw zero,0x5c(sp)
0040977c  sw zero,0x60(sp)
00409780  sw zero,0x64(sp)
00409784  sw zero,0x68(sp)
00409788  sw zero,0x6c(sp)
0040978c  sw zero,0x70(sp)
00409790  sw zero,0x74(sp)
00409794  sw zero,0x78(sp)
00409798  sw zero,0x7c(sp)
0040979c  jalr t9
004097a0  _sw zero,0x80(sp)
004097a4  lw gp,0x28(sp)
004097a8  addiu a0,sp,0xe8
004097ac  clear a1
004097b0  lw t9,-0x7f4c(gp)
004097b4  li a2,0x1e
004097b8  jalr t9
004097bc  _addiu s4,sp,0x4f8
004097c0  lw gp,0x28(sp)
004097c4  addiu a0,sp,0x108
004097c8  clear a1
004097cc  lw t9,-0x7f4c(gp)
004097d0  li a2,0x1e
004097d4  jalr t9
004097d8  _addiu s2,sp,0x128
004097dc  lw gp,0x28(sp)
004097e0  addiu a0,sp,0x430
004097e4  clear a1
004097e8  lw t9,-0x7f4c(gp)
004097ec  li a2,0xc8
004097f0  jalr t9
004097f4  _addiu s5,sp,0x2a0
004097f8  lw gp,0x28(sp)
004097fc  move a0,s4
00409800  clear a1
00409804  lw t9,-0x7f4c(gp)
00409808  li a2,0xc8
0040980c  jalr t9
00409810  _addiu s1,sp,0x84
00409814  lw gp,0x28(sp)
00409818  move a0,s2
0040981c  clear a1
00409820  lw t9,-0x7f4c(gp)
00409824  nop
00409828  jalr t9
0040982c  _li a2,0x1e
00409830  lw gp,0x28(sp)
00409834  li a2,0x40
00409838  addiu a0,sp,0x198
0040983c  lw t9,-0x7f4c(gp)
00409840  clear a1
00409844  sw zero,0x88(sp)
00409848  sw zero,0xa8(sp)
0040984c  sw zero,0xac(sp)
00409850  sw zero,0xb0(sp)
00409854  sw zero,0xb4(sp)
00409858  sw zero,0xb8(sp)
0040985c  sw zero,0xbc(sp)
00409860  sw zero,0xc0(sp)
00409864  jalr t9
00409868  _sw zero,0xc4(sp)
0040986c  lw gp,0x28(sp)
00409870  move a1,s0
00409874  move a0,s5
00409878  lw t9,-0x7e58(gp)
0040987c  sw zero,0x84(sp)
00409880  jalr t9
00409884  _lui s0,0x41
00409888  lw gp,0x28(sp)
0040988c  addiu s0,s0,0x7b24
00409890  move a0,s5
00409894  lw t9,-0x7e68(gp)
00409898  move a1,s0
0040989c  jalr t9
004098a0  _move a2,s1
004098a4  lw gp,0x28(sp)
004098a8  beq v0,zero,0x00409980
004098ac  _nop
004098b0  lui s7,0x41
004098b4  lui s6,0x42
004098b8  move s5,s1
004098bc  addiu s7,s7,0x7f80
004098c0  addiu s6,s6,-0x7794
004098c4  addiu s1,sp,0x98
004098c8  lw t9,-0x7e58(gp)
004098cc  move a1,v0
004098d0  jalr t9
004098d4  _move a0,s1
004098d8  lw gp,0x28(sp)
004098dc  move a0,s1
004098e0  move a1,s7
004098e4  lw t9,-0x7f0c(gp)
004098e8  nop
004098ec  jalr t9
004098f0  _li a2,0x4
004098f4  lw gp,0x28(sp)
004098f8  bne v0,zero,0x00409944
004098fc  _move a0,s3
00409900  lb v1,0x4f8(sp)
00409904  lw t9,-0x7f78(gp)
00409908  move a1,s6
0040990c  lw v0,-0x7e58(gp)
00409910  bne v1,zero,0x00409928
00409914  _move a2,s1
00409918  move a0,s4
0040991c  move a1,s1
00409920  b 0x00409950
00409924  _move t9,v0
00409928  jalr t9
0040992c  _nop
00409930  lw gp,0x28(sp)
00409934  move a0,s4
00409938  lw t9,-0x7ef0(gp)
0040993c  b 0x00409950
00409940  _move a1,s3
00409944  lw t9,-0x7e58(gp)
00409948  move a0,s2
0040994c  move a1,s1
00409950  jalr t9
00409954  _nop
00409958  lw gp,0x28(sp)
0040995c  clear a0
00409960  move a1,s0
00409964  lw t9,-0x7e68(gp)
00409968  nop
0040996c  jalr t9
00409970  _move a2,s5
00409974  lw gp,0x28(sp)
00409978  bne v0,zero,0x004098c8
0040997c  _nop
00409980  lw t9,-0x7fb4(gp)
00409984  lui s1,0x42
00409988  jalr t9
0040998c  _addiu a0,s1,-0x7700
00409990  lw gp,0x28(sp)
00409994  beq v0,zero,0x00409a28
00409998  _nop
0040999c  lw t9,-0x7e80(gp)
004099a0  nop
004099a4  jalr t9
004099a8  _addiu a0,s1,-0x7700
004099ac  li v1,-0x1
004099b0  lw gp,0x28(sp)
004099b4  beq v0,v1,0x00409a10
004099b8  _addiu a3,sp,0x8c
004099bc  lw t9,-0x7f78(gp)
004099c0  lui a1,0x41
004099c4  move a0,a3
004099c8  addiu a1,a1,0x7aa4
004099cc  move a2,v0
004099d0  jalr t9
004099d4  _sw a3,0x5d4(sp)
004099d8  lw gp,0x28(sp)
004099dc  lui v0,0x42
004099e0  lw a3,0x5d4(sp)
004099e4  lw t9,-0x7f84(gp)
004099e8  addiu v0,v0,-0x66c4
004099ec  lui a1,0x41
004099f0  lui a2,0x41
004099f4  sw v0,0x10(sp)
004099f8  addiu a1,a1,0x7a70
004099fc  addiu a2,a2,0x7a78
00409a00  jalr t9
00409a04  _clear a0
00409a08  lw gp,0x28(sp)
00409a0c  nop
00409a10  lw t9,-0x7f18(gp)
00409a14  lui a0,0x42
00409a18  jalr t9
00409a1c  _addiu a0,a0,-0x7700
00409a20  lw gp,0x28(sp)
00409a24  nop
00409a28  lw t9,-0x7e58(gp)
00409a2c  addiu s1,sp,0x2a0
00409a30  move a0,s1
00409a34  addiu a1,sp,0x4f8
00409a38  jalr t9
00409a3c  _sw zero,0x84(sp)
00409a40  lw gp,0x28(sp)
00409a44  move a0,s1
00409a48  move a1,s0
00409a4c  lw t9,-0x7e68(gp)
00409a50  nop
00409a54  jalr t9
00409a58  _addiu a2,sp,0x84
00409a5c  lw gp,0x28(sp)
00409a60  beq v0,zero,0x00409f30
00409a64  _lui s1,0x42
00409a68  lui s5,0x42
00409a6c  lui s4,0x42
00409a70  lui s3,0x42
00409a74  addiu s1,s1,-0x66c4
00409a78  addiu s5,s5,-0x769c
00409a7c  addiu s4,s4,-0x7684
00409a80  addiu s3,s3,-0x766c
00409a84  lw t9,-0x7e58(gp)
00409a88  addiu s6,sp,0x98
00409a8c  move a1,v0
00409a90  jalr t9
00409a94  _move a0,s6
00409a98  lw gp,0x28(sp)
00409a9c  lui a1,0x41
00409aa0  move a0,s6
00409aa4  lw t9,-0x7f0c(gp)
00409aa8  addiu a1,a1,0x7f80
00409aac  jalr t9
00409ab0  _li a2,0x4
00409ab4  lw gp,0x28(sp)
00409ab8  bne v0,zero,0x00409d30
00409abc  _lui s8,0x41
00409ac0  lw t9,-0x7f78(gp)
00409ac4  addiu s2,sp,0x1d8
00409ac8  lui a1,0x42
00409acc  move a2,s6
00409ad0  move a0,s2
00409ad4  jalr t9
00409ad8  _addiu a1,a1,-0x76e8
00409adc  lw gp,0x28(sp)
00409ae0  nop
00409ae4  lw t9,-0x7fb4(gp)
00409ae8  nop
00409aec  jalr t9
00409af0  _move a0,s2
00409af4  lw gp,0x28(sp)
00409af8  beq v0,zero,0x00409c40
00409afc  _nop
00409b00  lw t9,-0x7e80(gp)
00409b04  nop
00409b08  jalr t9
00409b0c  _move a0,s2
00409b10  li v1,-0x1
00409b14  lw gp,0x28(sp)
00409b18  beq v0,v1,0x00409b6c
00409b1c  _addiu a3,sp,0x8c
00409b20  lw t9,-0x7f78(gp)
00409b24  lui a1,0x41
00409b28  move a0,a3
00409b2c  addiu a1,a1,0x7aa4
00409b30  move a2,v0
00409b34  jalr t9
00409b38  _sw a3,0x5d4(sp)
00409b3c  lw gp,0x28(sp)
00409b40  lw a3,0x5d4(sp)
00409b44  lui a1,0x41
00409b48  lw t9,-0x7f84(gp)
00409b4c  lui a2,0x41
00409b50  sw s1,0x10(sp)
00409b54  addiu a1,a1,0x7a70
00409b58  addiu a2,a2,0x7a78
00409b5c  jalr t9
00409b60  _clear a0
00409b64  lw gp,0x28(sp)
00409b68  nop
00409b6c  lw t9,-0x7f18(gp)
00409b70  addiu a0,sp,0x1d8
00409b74  jalr t9
00409b78  _addiu s2,sp,0x23c
00409b7c  lw gp,0x28(sp)
00409b80  lui a1,0x42
00409b84  addiu a1,a1,-0x76d0
00409b88  lw t9,-0x7f78(gp)
00409b8c  move a0,s2
00409b90  jalr t9
00409b94  _addiu a2,sp,0x98
00409b98  lw gp,0x28(sp)
00409b9c  nop
00409ba0  lw t9,-0x7fb4(gp)
00409ba4  nop
00409ba8  jalr t9
00409bac  _move a0,s2
00409bb0  lw gp,0x28(sp)
00409bb4  beq v0,zero,0x00409c40
00409bb8  _nop
00409bbc  lw t9,-0x7e80(gp)
00409bc0  nop
00409bc4  jalr t9
00409bc8  _move a0,s2
00409bcc  li v1,-0x1
00409bd0  lw gp,0x28(sp)
00409bd4  beq v0,v1,0x00409c28
00409bd8  _addiu a3,sp,0x8c
00409bdc  lw t9,-0x7f78(gp)
00409be0  lui a1,0x41
00409be4  move a0,a3
00409be8  addiu a1,a1,0x7aa4
00409bec  move a2,v0
00409bf0  jalr t9
00409bf4  _sw a3,0x5d4(sp)
00409bf8  lw gp,0x28(sp)
00409bfc  lw a3,0x5d4(sp)
00409c00  lui a1,0x41
00409c04  lw t9,-0x7f84(gp)
00409c08  lui a2,0x41
00409c0c  sw s1,0x10(sp)
00409c10  addiu a1,a1,0x7a70
00409c14  addiu a2,a2,0x7a78
00409c18  jalr t9
00409c1c  _clear a0
00409c20  lw gp,0x28(sp)
00409c24  nop
00409c28  lw t9,-0x7f18(gp)
00409c2c  nop
00409c30  jalr t9
00409c34  _addiu a0,sp,0x23c
00409c38  lw gp,0x28(sp)
00409c3c  nop
00409c40  lw t9,-0x7f78(gp)
00409c44  addiu s2,sp,0x23c
00409c48  lui a1,0x42
00409c4c  move a0,s2
00409c50  addiu a1,a1,-0x76b4
00409c54  jalr t9
00409c58  _addiu a2,sp,0x98
00409c5c  lw gp,0x28(sp)
00409c60  nop
00409c64  lw t9,-0x7fb4(gp)
00409c68  nop
00409c6c  jalr t9
00409c70  _move a0,s2
00409c74  lw gp,0x28(sp)
00409c78  beq v0,zero,0x00409d04
00409c7c  _nop
00409c80  lw t9,-0x7e80(gp)
00409c84  nop
00409c88  jalr t9
00409c8c  _move a0,s2
00409c90  li v1,-0x1
00409c94  lw gp,0x28(sp)
00409c98  beq v0,v1,0x00409cec
00409c9c  _addiu a3,sp,0x8c
00409ca0  lw t9,-0x7f78(gp)
00409ca4  lui a1,0x41
00409ca8  move a0,a3
00409cac  addiu a1,a1,0x7aa4
00409cb0  move a2,v0
00409cb4  jalr t9
00409cb8  _sw a3,0x5d4(sp)
00409cbc  lw gp,0x28(sp)
00409cc0  lw a3,0x5d4(sp)
00409cc4  lui a1,0x41
00409cc8  lw t9,-0x7f84(gp)
00409ccc  lui a2,0x41
00409cd0  sw s1,0x10(sp)
00409cd4  addiu a1,a1,0x7a70
00409cd8  addiu a2,a2,0x7a78
00409cdc  jalr t9
00409ce0  _clear a0
00409ce4  lw gp,0x28(sp)
00409ce8  nop
00409cec  lw t9,-0x7f18(gp)
00409cf0  nop
00409cf4  jalr t9
00409cf8  _addiu a0,sp,0x23c
00409cfc  lw gp,0x28(sp)
00409d00  nop
00409d04  lw t9,-0x7f84(gp)
00409d08  lui a0,0x41
00409d0c  lui a1,0x41
00409d10  lui a2,0x42
00409d14  addiu a0,a0,0x7d50
00409d18  addiu a1,a1,0x7b58
00409d1c  addiu a2,a2,-0x72a8
00409d20  jalr t9
00409d24  _move a3,s1
00409d28  lw gp,0x28(sp)
00409d2c  lui s8,0x41
00409d30  lui s7,0x41
00409d34  addiu s8,s8,0x7a70
00409d38  addiu s7,s7,0x7a78
00409d3c  li s6,-0x1
00409d40  addiu s2,sp,0x8c
00409d44  lw t9,-0x7fb4(gp)
00409d48  nop
00409d4c  jalr t9
00409d50  _move a0,s5
00409d54  lw gp,0x28(sp)
00409d58  nop
00409d5c  lw v1,-0x7e80(gp)
00409d60  lw t9,-0x7fb4(gp)
00409d64  beq v0,zero,0x00409dd0
00409d68  _move a0,s5
00409d6c  move t9,v1
00409d70  jalr t9
00409d74  _nop
00409d78  lw gp,0x28(sp)
00409d7c  lui a1,0x41
00409d80  move a0,s2
00409d84  lw t9,-0x7f78(gp)
00409d88  addiu a1,a1,0x7aa4
00409d8c  beq v0,s6,0x00409f10
00409d90  _move a2,v0
00409d94  jalr t9
00409d98  _nop
00409d9c  lw gp,0x28(sp)
00409da0  clear a0
00409da4  sw s1,0x10(sp)
00409da8  lw t9,-0x7f84(gp)
00409dac  move a1,s8
00409db0  move a2,s7
00409db4  jalr t9
00409db8  _move a3,s2
00409dbc  lw gp,0x28(sp)
00409dc0  nop
00409dc4  lw t9,-0x7f18(gp)
00409dc8  b 0x00409ecc
00409dcc  _move a0,s5
00409dd0  jalr t9
00409dd4  _move a0,s4
00409dd8  lw gp,0x28(sp)
00409ddc  nop
00409de0  lw v1,-0x7e80(gp)
00409de4  lw t9,-0x7fb4(gp)
00409de8  beq v0,zero,0x00409e54
00409dec  _move a0,s4
00409df0  move t9,v1
00409df4  jalr t9
00409df8  _nop
00409dfc  lw gp,0x28(sp)
00409e00  lui a1,0x41
00409e04  move a0,s2
00409e08  lw t9,-0x7f78(gp)
00409e0c  addiu a1,a1,0x7aa4
00409e10  beq v0,s6,0x00409f10
00409e14  _move a2,v0
00409e18  jalr t9
00409e1c  _nop
00409e20  lw gp,0x28(sp)
00409e24  clear a0
00409e28  sw s1,0x10(sp)
00409e2c  lw t9,-0x7f84(gp)
00409e30  move a1,s8
00409e34  move a2,s7
00409e38  jalr t9
00409e3c  _move a3,s2
00409e40  lw gp,0x28(sp)
00409e44  nop
00409e48  lw t9,-0x7f18(gp)
00409e4c  b 0x00409ecc
00409e50  _move a0,s4
00409e54  jalr t9
00409e58  _move a0,s3
00409e5c  lw gp,0x28(sp)
00409e60  nop
00409e64  lw t9,-0x7e80(gp)
00409e68  beq v0,zero,0x00409f10
00409e6c  _move a0,s3
00409e70  jalr t9
00409e74  _nop
00409e78  lw gp,0x28(sp)
00409e7c  lui a1,0x41
00409e80  move a0,s2
00409e84  lw t9,-0x7f78(gp)
00409e88  addiu a1,a1,0x7aa4
00409e8c  beq v0,s6,0x00409f10
00409e90  _move a2,v0
00409e94  jalr t9
00409e98  _nop
00409e9c  lw gp,0x28(sp)
00409ea0  clear a0
00409ea4  sw s1,0x10(sp)
00409ea8  lw t9,-0x7f84(gp)
00409eac  move a1,s8
00409eb0  move a2,s7
00409eb4  jalr t9
00409eb8  _move a3,s2
00409ebc  lw gp,0x28(sp)
00409ec0  move a0,s3
00409ec4  lw t9,-0x7f18(gp)
00409ec8  nop
00409ecc  jalr t9
00409ed0  _nop
00409ed4  lw gp,0x28(sp)
00409ed8  nop
00409edc  lw t9,-0x7ebc(gp)
00409ee0  nop
00409ee4  jalr t9
00409ee8  _li a0,0x1
00409eec  lw gp,0x28(sp)
00409ef0  lui a0,0x42
00409ef4  lw t9,-0x7ea4(gp)
00409ef8  nop
00409efc  jalr t9
00409f00  _addiu a0,a0,-0x764c
00409f04  lw gp,0x28(sp)
00409f08  bgtz v0,0x00409d44
00409f0c  _nop
00409f10  lw t9,-0x7e68(gp)
00409f14  clear a0
00409f18  move a1,s0
00409f1c  jalr t9
00409f20  _addiu a2,sp,0x84
00409f24  lw gp,0x28(sp)
00409f28  bne v0,zero,0x00409a84
00409f2c  _nop
00409f30  lw t9,-0x7fb4(gp)
00409f34  lui s1,0x42
00409f38  jalr t9
00409f3c  _addiu a0,s1,-0x7644
00409f40  lw gp,0x28(sp)
00409f44  beq v0,zero,0x00409fd8
00409f48  _nop
00409f4c  lw t9,-0x7e80(gp)
00409f50  nop
00409f54  jalr t9
00409f58  _addiu a0,s1,-0x7644
00409f5c  li v1,-0x1
00409f60  lw gp,0x28(sp)
00409f64  beq v0,v1,0x00409fc0
00409f68  _addiu a3,sp,0x8c
00409f6c  lw t9,-0x7f78(gp)
00409f70  lui a1,0x41
00409f74  move a0,a3
00409f78  addiu a1,a1,0x7aa4
00409f7c  move a2,v0
00409f80  jalr t9
00409f84  _sw a3,0x5d4(sp)
00409f88  lw gp,0x28(sp)
00409f8c  lui v0,0x42
00409f90  lw a3,0x5d4(sp)
00409f94  lw t9,-0x7f84(gp)
00409f98  addiu v0,v0,-0x66c4
00409f9c  lui a1,0x41
00409fa0  lui a2,0x41
00409fa4  sw v0,0x10(sp)
00409fa8  addiu a1,a1,0x7a70
00409fac  addiu a2,a2,0x7a78
00409fb0  jalr t9
00409fb4  _clear a0
00409fb8  lw gp,0x28(sp)
00409fbc  nop
00409fc0  lw t9,-0x7f18(gp)
00409fc4  lui a0,0x42
00409fc8  jalr t9
00409fcc  _addiu a0,a0,-0x7644
00409fd0  lw gp,0x28(sp)
00409fd4  nop
00409fd8  lw t9,-0x7eb4(gp)
00409fdc  lui a0,0x42
00409fe0  jalr t9
00409fe4  _addiu a0,a0,-0x7630
00409fe8  lw gp,0x28(sp)
00409fec  lw a0,0x608(sp)
00409ff0  lui a1,0x41
00409ff4  lw t9,-0x7f64(gp)
00409ff8  nop
00409ffc  jalr t9
0040a000  _addiu a1,a1,0x7a70
0040a004  lw gp,0x28(sp)
0040a008  beq v0,zero,0x0040b2b4
0040a00c  _nop
0040a010  lw t9,-0x7ea8(gp)
0040a014  lui a0,0x42
0040a018  jalr t9
0040a01c  _addiu a0,a0,-0x761c
0040a020  lw gp,0x28(sp)
0040a024  lui a0,0x41
0040a028  lw t9,-0x7e94(gp)
0040a02c  nop
0040a030  jalr t9
0040a034  _addiu a0,a0,0x7ad4
0040a038  lw gp,0x28(sp)
0040a03c  beq v0,zero,0x0040a134
0040a040  _li a0,0x16
0040a044  lw t9,-0x7ec0(gp)
0040a048  nop
0040a04c  jalr t9
0040a050  _addiu a1,sp,0x34
0040a054  lw gp,0x28(sp)
0040a058  li a0,0x3b
0040a05c  lw t9,-0x7ec0(gp)
0040a060  nop
0040a064  jalr t9
0040a068  _addiu a1,sp,0x30
0040a06c  lw gp,0x28(sp)
0040a070  li a0,0x3e
0040a074  lw t9,-0x7ec0(gp)
0040a078  nop
0040a07c  jalr t9
0040a080  _addiu a1,sp,0x3c
0040a084  lw gp,0x28(sp)
0040a088  li a0,0x10e
0040a08c  lw t9,-0x7ec0(gp)
0040a090  nop
0040a094  jalr t9
0040a098  _addiu a1,sp,0x40
0040a09c  lw gp,0x28(sp)
0040a0a0  li a0,0x23
0040a0a4  lw t9,-0x7ec0(gp)
0040a0a8  nop
0040a0ac  jalr t9
0040a0b0  _addiu a1,sp,0x48
0040a0b4  lw gp,0x28(sp)
0040a0b8  li a0,0x19
0040a0bc  lw t9,-0x7ec0(gp)
0040a0c0  nop
0040a0c4  jalr t9
0040a0c8  _addiu a1,sp,0x4c
0040a0cc  lw gp,0x28(sp)
0040a0d0  li a0,0x2d
0040a0d4  lw t9,-0x7ec0(gp)
0040a0d8  nop
0040a0dc  jalr t9
0040a0e0  _addiu a1,sp,0x50
0040a0e4  lw gp,0x28(sp)
0040a0e8  li a0,0x3c
0040a0ec  lw t9,-0x7ec0(gp)
0040a0f0  nop
0040a0f4  jalr t9
0040a0f8  _addiu a1,sp,0x44
0040a0fc  lw gp,0x28(sp)
0040a100  li a0,0x1c
0040a104  lw t9,-0x7ec0(gp)
0040a108  nop
0040a10c  jalr t9
0040a110  _addiu a1,sp,0x38
0040a114  lw gp,0x28(sp)
0040a118  li a0,0x117
0040a11c  lw t9,-0x7ec0(gp)
0040a120  nop
0040a124  jalr t9
0040a128  _addiu a1,sp,0x88
0040a12c  lw gp,0x28(sp)
0040a130  nop
0040a134  lw t9,-0x7e58(gp)
0040a138  addiu s1,sp,0x2a0
0040a13c  move a0,s1
0040a140  addiu a1,sp,0x4f8
0040a144  jalr t9
0040a148  _sw zero,0x84(sp)
0040a14c  lw gp,0x28(sp)
0040a150  move a0,s1
0040a154  move a1,s0
0040a158  lw t9,-0x7e68(gp)
0040a15c  addiu a2,sp,0x84
0040a160  jalr t9
0040a164  _clear s1
0040a168  lw gp,0x28(sp)
0040a16c  beq v0,zero,0x0040aab4
0040a170  _nop
0040a174  lui s6,0x42
0040a178  lui s5,0x42
0040a17c  addiu s6,s6,-0x75e0
0040a180  addiu s5,s5,-0x66c4
0040a184  clear s2
0040a188  sw zero,0x5c0(sp)
0040a18c  clear s8
0040a190  clear s4
0040a194  sw zero,0x5c8(sp)
0040a198  sw zero,0x5d0(sp)
0040a19c  sw zero,0x5cc(sp)
0040a1a0  lw t9,-0x7e58(gp)
0040a1a4  addiu s3,sp,0x98
0040a1a8  move a1,v0
0040a1ac  jalr t9
0040a1b0  _move a0,s3
0040a1b4  lw gp,0x28(sp)
0040a1b8  lui a1,0x41
0040a1bc  move a0,s3
0040a1c0  lw t9,-0x7f0c(gp)
0040a1c4  addiu a1,a1,0x7f80
0040a1c8  jalr t9
0040a1cc  _li a2,0x4
0040a1d0  lw gp,0x28(sp)
0040a1d4  bne v0,zero,0x0040a830
0040a1d8  _move a0,s3
0040a1dc  lw t9,-0x7fa4(gp)
0040a1e0  nop
0040a1e4  jalr t9
0040a1e8  _clear s7
0040a1ec  sltiu v0,v0,0x9
0040a1f0  lw gp,0x28(sp)
0040a1f4  bne v0,zero,0x0040a204
0040a1f8  _nop
0040a1fc  lb s7,0x9e(sp)
0040a200  lb s2,0x9f(sp)
0040a204  lw t9,-0x7e94(gp)
0040a208  addiu s3,sp,0x98
0040a20c  jalr t9
0040a210  _move a0,s3
0040a214  lw gp,0x28(sp)
0040a218  beq v0,zero,0x0040a830
0040a21c  _li a0,0x16
0040a220  lw t9,-0x7ec0(gp)
0040a224  nop
0040a228  jalr t9
0040a22c  _addiu a1,sp,0x54
0040a230  lw gp,0x28(sp)
0040a234  li a0,0x3b
0040a238  lw t9,-0x7ec0(gp)
0040a23c  nop
0040a240  jalr t9
0040a244  _addiu a1,sp,0x58
0040a248  lw gp,0x28(sp)
0040a24c  li a0,0x3f
0040a250  lw t9,-0x7ec0(gp)
0040a254  nop
0040a258  jalr t9
0040a25c  _addiu a1,sp,0x5c
0040a260  lw gp,0x28(sp)
0040a264  li a0,0x40
0040a268  lw t9,-0x7ec0(gp)
0040a26c  nop
0040a270  jalr t9
0040a274  _addiu a1,sp,0x60
0040a278  lw gp,0x28(sp)
0040a27c  li a0,0x19
0040a280  lw t9,-0x7ec0(gp)
0040a284  nop
0040a288  jalr t9
0040a28c  _addiu a1,sp,0x64
0040a290  lw gp,0x28(sp)
0040a294  li a0,0x1c
0040a298  lw t9,-0x7ec0(gp)
0040a29c  nop
0040a2a0  jalr t9
0040a2a4  _addiu a1,sp,0x6c
0040a2a8  lw v0,0x54(sp)
0040a2ac  lw gp,0x28(sp)
0040a2b0  bne v0,zero,0x0040a408
0040a2b4  _nop
0040a2b8  lw v0,0x58(sp)
0040a2bc  nop
0040a2c0  addiu v0,v0,-0x2
0040a2c4  sltiu v0,v0,0x2
0040a2c8  beq v0,zero,0x0040a408
0040a2cc  _nop
0040a2d0  lw v0,0x5c(sp)
0040a2d4  nop
0040a2d8  beq v0,zero,0x0040a408
0040a2dc  _nop
0040a2e0  lw v0,0x60(sp)
0040a2e4  nop
0040a2e8  beq v0,zero,0x0040a408
0040a2ec  _nop
0040a2f0  lw t9,-0x7ec0(gp)
0040a2f4  li a0,0x45
0040a2f8  jalr t9
0040a2fc  _addiu a1,sp,0x68
0040a300  lw v0,0x68(sp)
0040a304  lw gp,0x28(sp)
0040a308  addiu v0,v0,-0x3
0040a30c  sltiu v0,v0,0x2
0040a310  beq v0,zero,0x0040a408
0040a314  _addiu v0,sp,0x1d8
0040a318  lw t9,-0x7f78(gp)
0040a31c  lui a1,0x42
0040a320  move a2,s3
0040a324  move a0,v0
0040a328  addiu a1,a1,-0x7600
0040a32c  jalr t9
0040a330  _sw v0,0x5c4(sp)
0040a334  lw gp,0x28(sp)
0040a338  lw v1,0x5c4(sp)
0040a33c  lui a0,0x42
0040a340  lw t9,-0x7f84(gp)
0040a344  addiu a0,a0,-0x75e4
0040a348  lui a1,0x41
0040a34c  lui a2,0x42
0040a350  sw v1,0x10(sp)
0040a354  move a3,s3
0040a358  sw a0,0x14(sp)
0040a35c  addiu a1,a1,0x7e44
0040a360  clear a0
0040a364  addiu a2,a2,-0x75e8
0040a368  jalr t9
0040a36c  _sw s5,0x18(sp)
0040a370  lw gp,0x28(sp)
0040a374  lw a1,0x5c4(sp)
0040a378  lui a3,0x42
0040a37c  lw t9,-0x7f84(gp)
0040a380  addiu a3,a3,-0x75e4
0040a384  move a2,s3
0040a388  sw a1,0x14(sp)
0040a38c  sw a3,0x10(sp)
0040a390  clear a0
0040a394  move a1,s6
0040a398  addiu a3,sp,0x128
0040a39c  jalr t9
0040a3a0  _sw s5,0x18(sp)
0040a3a4  lw gp,0x28(sp)
0040a3a8  addiu a0,sp,0x23c
0040a3ac  lui a1,0x42
0040a3b0  lw t9,-0x7f78(gp)
0040a3b4  move a2,s3
0040a3b8  addiu a1,a1,-0x76e8
0040a3bc  jalr t9
0040a3c0  _sw a0,0x5c4(sp)
0040a3c4  lw gp,0x28(sp)
0040a3c8  clear s3
0040a3cc  lw t9,-0x7fb4(gp)
0040a3d0  lw a0,0x5c4(sp)
0040a3d4  jalr t9
0040a3d8  _addiu s3,s3,0x1
0040a3dc  lw gp,0x28(sp)
0040a3e0  nop
0040a3e4  lw t9,-0x7ebc(gp)
0040a3e8  bne v0,zero,0x0040a408
0040a3ec  _li a0,0x1
0040a3f0  jalr t9
0040a3f4  _nop
0040a3f8  li t9,0xa
0040a3fc  lw gp,0x28(sp)
0040a400  bne s3,t9,0x0040a3cc
0040a404  _nop
0040a408  lw v0,0x64(sp)
0040a40c  nop
0040a410  slti v1,v0,0x2
0040a414  beq v1,zero,0x0040a46c
0040a418  _li v1,0x7
0040a41c  lw t9,-0x7ec0(gp)
0040a420  li a0,0x23
0040a424  jalr t9
0040a428  _addiu a1,sp,0x70
0040a42c  lw gp,0x28(sp)
0040a430  li a0,0x2d
0040a434  lw t9,-0x7ec0(gp)
0040a438  nop
0040a43c  jalr t9
0040a440  _addiu a1,sp,0x74
0040a444  lw v0,0x70(sp)
0040a448  lw gp,0x28(sp)
0040a44c  bne v0,zero,0x0040a488
0040a450  _li s3,0x1
0040a454  lw v0,0x74(sp)
0040a458  nop
0040a45c  bne v0,zero,0x0040a488
0040a460  _nop
0040a464  b 0x0040a610
0040a468  _clear s3
0040a46c  beq v0,v1,0x0040b2e8
0040a470  _li v0,0x1
0040a474  lw v1,0x6c(sp)
0040a478  nop
0040a47c  bne v1,v0,0x0040a488
0040a480  _clear s3
0040a484  li s3,0x1
0040a488  lw v0,0x54(sp)
0040a48c  nop
0040a490  bne v0,zero,0x0040a614
0040a494  _li v0,0x76
0040a498  lw t9,-0x7f78(gp)
0040a49c  addiu v1,sp,0x1d8
0040a4a0  addiu a3,sp,0x98
0040a4a4  lui a1,0x42
0040a4a8  move a0,v1
0040a4ac  move a2,a3
0040a4b0  addiu a1,a1,-0x75d8
0040a4b4  sw v1,0x5dc(sp)
0040a4b8  jalr t9
0040a4bc  _sw a3,0x5d4(sp)
0040a4c0  lw gp,0x28(sp)
0040a4c4  lw v1,0x5dc(sp)
0040a4c8  lw a3,0x5d4(sp)
0040a4cc  lw t9,-0x7f84(gp)
0040a4d0  lui a1,0x41
0040a4d4  lui a2,0x42
0040a4d8  sw v1,0x10(sp)
0040a4dc  sw s5,0x14(sp)
0040a4e0  clear a0
0040a4e4  addiu a1,a1,0x7e44
0040a4e8  jalr t9
0040a4ec  _addiu a2,a2,-0x75e8
0040a4f0  lw v1,0x58(sp)
0040a4f4  li v0,0x1
0040a4f8  lw gp,0x28(sp)
0040a4fc  bne v1,v0,0x0040a540
0040a500  _move a1,s6
0040a504  lw t9,-0x7ec0(gp)
0040a508  li a0,0x3c
0040a50c  jalr t9
0040a510  _addiu a1,sp,0x78
0040a514  lw gp,0x28(sp)
0040a518  lw v0,0x78(sp)
0040a51c  lw t9,-0x7e58(gp)
0040a520  bne v0,zero,0x0040a534
0040a524  _addiu a0,sp,0xe8
0040a528  lui a1,0x42
0040a52c  b 0x0040a548
0040a530  _addiu a1,a1,-0x75c4
0040a534  lui a1,0x42
0040a538  b 0x0040a548
0040a53c  _addiu a1,a1,-0x75b4
0040a540  lw t9,-0x7e58(gp)
0040a544  addiu a0,sp,0xe8
0040a548  jalr t9
0040a54c  _nop
0040a550  li v0,0x76
0040a554  lw gp,0x28(sp)
0040a558  bne s7,v0,0x0040a588
0040a55c  _li v0,0x61
0040a560  bne s2,v0,0x0040a588
0040a564  _nop
0040a568  lw v0,0x30(sp)
0040a56c  nop
0040a570  beq v0,zero,0x0040a588
0040a574  _xori v0,v0,0x3
0040a578  lw a0,0x5c8(sp)
0040a57c  li v1,0x1
0040a580  movn a0,v1,v0
0040a584  sw a0,0x5c8(sp)
0040a588  lw v1,0x58(sp)
0040a58c  li v0,0x2
0040a590  beq v1,v0,0x0040a610
0040a594  _nop
0040a598  lw a1,0x5c8(sp)
0040a59c  nop
0040a5a0  bne a1,zero,0x0040a610
0040a5a4  _nop
0040a5a8  lw v1,0x6c(sp)
0040a5ac  nop
0040a5b0  bne v1,v0,0x0040a5c0
0040a5b4  _nop
0040a5b8  beq s3,zero,0x0040a614
0040a5bc  _li v0,0x76
0040a5c0  lw t9,-0x7f84(gp)
0040a5c4  addiu v0,sp,0xe8
0040a5c8  sw v0,0x10(sp)
0040a5cc  addiu v0,sp,0x1d8
0040a5d0  sw v0,0x14(sp)
0040a5d4  sw s5,0x18(sp)
0040a5d8  clear a0
0040a5dc  move a1,s6
0040a5e0  addiu a2,sp,0x98
0040a5e4  jalr t9
0040a5e8  _addiu a3,sp,0x128
0040a5ec  li v0,0x76
0040a5f0  lw gp,0x28(sp)
0040a5f4  bne s7,v0,0x0040a684
0040a5f8  _li s1,0x1
0040a5fc  li v0,0x61
0040a600  beq s2,v0,0x0040a69c
0040a604  _nop
0040a608  b 0x0040a61c
0040a60c  _sw s1,0x5cc(sp)
0040a610  li v0,0x76
0040a614  bne s7,v0,0x0040a68c
0040a618  _li v0,0x78
0040a61c  li v0,0x78
0040a620  bne s2,v0,0x0040b2f0
0040a624  _li v0,0x61
0040a628  lw v0,0x54(sp)
0040a62c  nop
0040a630  bne v0,zero,0x0040a830
0040a634  _addiu a0,sp,0xe8
0040a638  lw t9,-0x7f64(gp)
0040a63c  nop
0040a640  jalr t9
0040a644  _move a1,s6
0040a648  lw gp,0x28(sp)
0040a64c  bne v0,zero,0x0040a65c
0040a650  _nop
0040a654  beq s3,zero,0x0040a830
0040a658  _nop
0040a65c  lw t9,-0x7ef0(gp)
0040a660  addiu s3,sp,0x108
0040a664  move a0,s3
0040a668  jalr t9
0040a66c  _move a1,s0
0040a670  lw gp,0x28(sp)
0040a674  move a0,s3
0040a678  lw t9,-0x7ef0(gp)
0040a67c  b 0x0040a6ec
0040a680  _addiu a1,sp,0x98
0040a684  sw s1,0x5cc(sp)
0040a688  li v0,0x78
0040a68c  bne s2,v0,0x0040a730
0040a690  _li a0,0x3e
0040a694  b 0x0040a830
0040a698  _nop
0040a69c  li a3,0x1
0040a6a0  sw a3,0x5d0(sp)
0040a6a4  lw v0,0x54(sp)
0040a6a8  nop
0040a6ac  bne v0,zero,0x0040a830
0040a6b0  _nop
0040a6b4  lw v0,0x3c(sp)
0040a6b8  nop
0040a6bc  beq v0,zero,0x0040a6d4
0040a6c0  _nop
0040a6c4  lw t9,0x5d0(sp)
0040a6c8  nop
0040a6cc  beq t9,zero,0x0040a830
0040a6d0  _nop
0040a6d4  lb v0,0x430(sp)
0040a6d8  addiu s3,sp,0x430
0040a6dc  bne v0,zero,0x0040a700
0040a6e0  _addiu a1,sp,0x98
0040a6e4  lw t9,-0x7e58(gp)
0040a6e8  move a0,s3
0040a6ec  jalr t9
0040a6f0  _nop
0040a6f4  lw gp,0x28(sp)
0040a6f8  b 0x0040a830
0040a6fc  _nop
0040a700  lw t9,-0x7f78(gp)
0040a704  addiu s7,sp,0xc8
0040a708  move a2,a1
0040a70c  lui a1,0x42
0040a710  move a0,s7
0040a714  jalr t9
0040a718  _addiu a1,a1,-0x7794
0040a71c  lw gp,0x28(sp)
0040a720  move a0,s3
0040a724  lw t9,-0x7ef0(gp)
0040a728  b 0x0040a6ec
0040a72c  _move a1,s7
0040a730  lw t9,-0x7ec0(gp)
0040a734  nop
0040a738  jalr t9
0040a73c  _addiu a1,sp,0x80
0040a740  lw gp,0x28(sp)
0040a744  li a0,0x10e
0040a748  lw t9,-0x7ec0(gp)
0040a74c  nop
0040a750  jalr t9
0040a754  _addiu a1,sp,0x7c
0040a758  lw v0,0x5cc(sp)
0040a75c  lw gp,0x28(sp)
0040a760  bne v0,zero,0x0040a788
0040a764  _nop
0040a768  lw v0,0x80(sp)
0040a76c  nop
0040a770  beq v0,zero,0x0040a788
0040a774  _nop
0040a778  lw v0,0x7c(sp)
0040a77c  nop
0040a780  bne v0,zero,0x0040b300
0040a784  _li v0,0x61
0040a788  lb v0,0x430(sp)
0040a78c  addiu s3,sp,0x430
0040a790  bne v0,zero,0x0040a7a4
0040a794  _addiu a1,sp,0x98
0040a798  lw t9,-0x7e58(gp)
0040a79c  b 0x0040a7d4
0040a7a0  _move a0,s3
0040a7a4  lw t9,-0x7f78(gp)
0040a7a8  addiu s7,sp,0xc8
0040a7ac  move a2,a1
0040a7b0  lui a1,0x42
0040a7b4  move a0,s7
0040a7b8  jalr t9
0040a7bc  _addiu a1,a1,-0x7794
0040a7c0  lw gp,0x28(sp)
0040a7c4  move a0,s3
0040a7c8  move a1,s7
0040a7cc  lw t9,-0x7ef0(gp)
0040a7d0  nop
0040a7d4  jalr t9
0040a7d8  _nop
0040a7dc  lw gp,0x28(sp)
0040a7e0  b 0x0040b300
0040a7e4  _li v0,0x61
0040a7e8  lw a0,0x54(sp)
0040a7ec  lw v0,0x58(sp)
0040a7f0  nop
0040a7f4  beq v0,zero,0x0040a818
0040a7f8  _movz s4,v1,a0
0040a7fc  li v1,0x3
0040a800  beq v0,v1,0x0040a818
0040a804  _li v1,0x4
0040a808  beq v0,v1,0x0040a818
0040a80c  _li v1,0x6
0040a810  bne v0,v1,0x0040a81c
0040a814  _nop
0040a818  li s8,0x1
0040a81c  lw a0,0x5c0(sp)
0040a820  lw v1,0x80(sp)
0040a824  li v0,0x1
0040a828  movz a0,v0,v1
0040a82c  sw a0,0x5c0(sp)
0040a830  lw t9,-0x7e68(gp)
0040a834  addiu s3,sp,0x84
0040a838  clear a0
0040a83c  move a1,s0
0040a840  jalr t9
0040a844  _move a2,s3
0040a848  lw gp,0x28(sp)
0040a84c  bne v0,zero,0x0040a1a0
0040a850  _nop
0040a854  li v0,0x1
0040a858  bne s4,v0,0x0040aab4
0040a85c  _nop
0040a860  bne s8,s4,0x0040aab4
0040a864  _nop
0040a868  lw a1,0x5c0(sp)
0040a86c  nop
0040a870  bne a1,s8,0x0040aab4
0040a874  _addiu a1,sp,0x430
0040a878  lw t9,-0x7e58(gp)
0040a87c  addiu s1,sp,0x2a0
0040a880  move a0,s1
0040a884  jalr t9
0040a888  _sw zero,0x84(sp)
0040a88c  lw gp,0x28(sp)
0040a890  move a2,s3
0040a894  move a0,s1
0040a898  lw t9,-0x7e68(gp)
0040a89c  nop
0040a8a0  jalr t9
0040a8a4  _move a1,s0
0040a8a8  lw gp,0x28(sp)
0040a8ac  beq v0,zero,0x0040aa14
0040a8b0  _move a2,v0
0040a8b4  lui s4,0x42
0040a8b8  addiu a3,sp,0x30
0040a8bc  addiu s4,s4,-0x7794
0040a8c0  addiu s2,sp,0x368
0040a8c4  addiu s1,sp,0xc8
0040a8c8  sw a3,0x5c0(sp)
0040a8cc  addiu s8,sp,0x3c
0040a8d0  li s7,0x3
0040a8d4  li s6,0x4
0040a8d8  li s5,0x6
0040a8dc  lw t9,-0x7f64(gp)
0040a8e0  lui a1,0x41
0040a8e4  move a0,a2
0040a8e8  sw a2,0x5d4(sp)
0040a8ec  jalr t9
0040a8f0  _addiu a1,a1,0x7ad4
0040a8f4  lw gp,0x28(sp)
0040a8f8  lw a2,0x5d4(sp)
0040a8fc  beq v0,zero,0x0040a928
0040a900  _nop
0040a904  lw t9,-0x7f64(gp)
0040a908  lui a1,0x41
0040a90c  move a0,a2
0040a910  jalr t9
0040a914  _addiu a1,a1,0x7fac
0040a918  lw gp,0x28(sp)
0040a91c  lw a2,0x5d4(sp)
0040a920  bne v0,zero,0x0040a9a4
0040a924  _nop
0040a928  lw t9,-0x7e94(gp)
0040a92c  move a0,a2
0040a930  jalr t9
0040a934  _sw a2,0x5d4(sp)
0040a938  lw gp,0x28(sp)
0040a93c  lw a1,0x5c0(sp)
0040a940  lw t9,-0x7ec0(gp)
0040a944  nop
0040a948  jalr t9
0040a94c  _li a0,0x3b
0040a950  lw gp,0x28(sp)
0040a954  li a0,0x3e
0040a958  lw t9,-0x7ec0(gp)
0040a95c  nop
0040a960  jalr t9
0040a964  _move a1,s8
0040a968  lw v0,0x30(sp)
0040a96c  lw gp,0x28(sp)
0040a970  lw a2,0x5d4(sp)
0040a974  beq v0,zero,0x0040a994
0040a978  _nop
0040a97c  beq v0,s7,0x0040a994
0040a980  _nop
0040a984  beq v0,s6,0x0040a994
0040a988  _nop
0040a98c  bne v0,s5,0x0040a9f4
0040a990  _nop
0040a994  lw v0,0x3c(sp)
0040a998  nop
0040a99c  bne v0,zero,0x0040a9f4
0040a9a0  _nop
0040a9a4  lb v0,0x368(sp)
0040a9a8  nop
0040a9ac  bne v0,zero,0x0040a9c0
0040a9b0  _move a0,s2
0040a9b4  lw t9,-0x7e58(gp)
0040a9b8  b 0x0040a9e4
0040a9bc  _move a1,a2
0040a9c0  lw t9,-0x7f78(gp)
0040a9c4  move a0,s1
0040a9c8  jalr t9
0040a9cc  _move a1,s4
0040a9d0  lw gp,0x28(sp)
0040a9d4  move a0,s2
0040a9d8  move a1,s1
0040a9dc  lw t9,-0x7ef0(gp)
0040a9e0  nop
0040a9e4  jalr t9
0040a9e8  _nop
0040a9ec  lw gp,0x28(sp)
0040a9f0  nop
0040a9f4  lw t9,-0x7e68(gp)
0040a9f8  move a2,s3
0040a9fc  clear a0
0040aa00  jalr t9
0040aa04  _move a1,s0
0040aa08  lw gp,0x28(sp)
0040aa0c  bne v0,zero,0x0040a8dc
0040aa10  _move a2,v0
0040aa14  lw t9,-0x7f78(gp)
0040aa18  addiu s1,sp,0x1d8
0040aa1c  lui a1,0x42
0040aa20  addiu a1,a1,-0x75a4
0040aa24  addiu a2,sp,0x128
0040aa28  addiu a3,sp,0x368
0040aa2c  jalr t9
0040aa30  _move a0,s1
0040aa34  lw gp,0x28(sp)
0040aa38  move a0,s1
0040aa3c  lw t9,-0x7eb4(gp)
0040aa40  nop
0040aa44  jalr t9
0040aa48  _lui s1,0x42
0040aa4c  lw gp,0x28(sp)
0040aa50  nop
0040aa54  lw t9,-0x7fb4(gp)
0040aa58  nop
0040aa5c  jalr t9
0040aa60  _addiu a0,s1,-0x7598
0040aa64  lw gp,0x28(sp)
0040aa68  beq v0,zero,0x0040aa88
0040aa6c  _nop
0040aa70  lw t9,-0x7f18(gp)
0040aa74  nop
0040aa78  jalr t9
0040aa7c  _addiu a0,s1,-0x7598
0040aa80  lw gp,0x28(sp)
0040aa84  nop
0040aa88  lw t9,-0x7f84(gp)
0040aa8c  lui a0,0x42
0040aa90  lui a1,0x41
0040aa94  lui a3,0x42
0040aa98  addiu a0,a0,-0x7598
0040aa9c  addiu a1,a1,0x7b58
0040aaa0  addiu a3,a3,-0x66c4
0040aaa4  jalr t9
0040aaa8  _addiu a2,sp,0x1d8
0040aaac  lw gp,0x28(sp)
0040aab0  li s1,0x1
0040aab4  lw t9,-0x7fb4(gp)
0040aab8  lui a0,0x42
0040aabc  jalr t9
0040aac0  _addiu a0,a0,-0x7584
0040aac4  lw gp,0x28(sp)
0040aac8  beq v0,zero,0x0040b260
0040aacc  _addiu a0,sp,0x1d8
0040aad0  lw t9,-0x7f4c(gp)
0040aad4  clear a1
0040aad8  jalr t9
0040aadc  _li a2,0x64
0040aae0  lw gp,0x28(sp)
0040aae4  li a2,0x64
0040aae8  addiu a0,sp,0x23c
0040aaec  lw t9,-0x7f4c(gp)
0040aaf0  clear a1
0040aaf4  jalr t9
0040aaf8  _addiu s2,sp,0x2a0
0040aafc  lw gp,0x28(sp)
0040ab00  move a0,s2
0040ab04  addiu a1,sp,0x430
0040ab08  lw t9,-0x7e58(gp)
0040ab0c  nop
0040ab10  jalr t9
0040ab14  _sw zero,0x84(sp)
0040ab18  lw gp,0x28(sp)
0040ab1c  move a0,s2
0040ab20  move a1,s0
0040ab24  lw t9,-0x7e68(gp)
0040ab28  nop
0040ab2c  jalr t9
0040ab30  _addiu a2,sp,0x84
0040ab34  lw gp,0x28(sp)
0040ab38  beq v0,zero,0x0040b260
0040ab3c  _move s2,v0
0040ab40  lui s5,0x41
0040ab44  lui s3,0x42
0040ab48  lui s4,0x42
0040ab4c  addiu s5,s5,0x7ad4
0040ab50  addiu s3,s3,-0x66c4
0040ab54  addiu s4,s4,-0x7518
0040ab58  lw t9,-0x7f4c(gp)
0040ab5c  addiu a0,sp,0x148
0040ab60  clear a1
0040ab64  jalr t9
0040ab68  _li a2,0x28
0040ab6c  lw gp,0x28(sp)
0040ab70  addiu a0,sp,0x170
0040ab74  clear a1
0040ab78  lw t9,-0x7f4c(gp)
0040ab7c  nop
0040ab80  jalr t9
0040ab84  _li a2,0x28
0040ab88  lw gp,0x28(sp)
0040ab8c  move a0,s2
0040ab90  lw t9,-0x7f64(gp)
0040ab94  nop
0040ab98  jalr t9
0040ab9c  _move a1,s5
0040aba0  lw gp,0x28(sp)
0040aba4  beq v0,zero,0x0040abc8
0040aba8  _lui a1,0x41
0040abac  lw t9,-0x7f64(gp)
0040abb0  addiu a1,a1,0x7fac
0040abb4  jalr t9
0040abb8  _move a0,s2
0040abbc  lw gp,0x28(sp)
0040abc0  bne v0,zero,0x0040b240
0040abc4  _nop
0040abc8  lw t9,-0x7e94(gp)
0040abcc  nop
0040abd0  jalr t9
0040abd4  _move a0,s2
0040abd8  lw gp,0x28(sp)
0040abdc  li a0,0x3b
0040abe0  lw t9,-0x7ec0(gp)
0040abe4  nop
0040abe8  jalr t9
0040abec  _addiu a1,sp,0x30
0040abf0  lw gp,0x28(sp)
0040abf4  li a0,0x23
0040abf8  lw t9,-0x7ec0(gp)
0040abfc  nop
0040ac00  jalr t9
0040ac04  _addiu a1,sp,0x48
0040ac08  lw gp,0x28(sp)
0040ac0c  li a0,0x19
0040ac10  lw t9,-0x7ec0(gp)
0040ac14  nop
0040ac18  jalr t9
0040ac1c  _addiu a1,sp,0x4c
0040ac20  lw gp,0x28(sp)
0040ac24  li a0,0x2d
0040ac28  lw t9,-0x7ec0(gp)
0040ac2c  nop
0040ac30  jalr t9
0040ac34  _addiu a1,sp,0x50
0040ac38  lw gp,0x28(sp)
0040ac3c  li a0,0x1c
0040ac40  lw t9,-0x7ec0(gp)
0040ac44  nop
0040ac48  jalr t9
0040ac4c  _addiu a1,sp,0x38
0040ac50  lw gp,0x28(sp)
0040ac54  li a0,0x117
0040ac58  lw t9,-0x7ec0(gp)
0040ac5c  nop
0040ac60  jalr t9
0040ac64  _addiu a1,sp,0x88
0040ac68  lw s6,0x4c(sp)
0040ac6c  lw gp,0x28(sp)
0040ac70  sw zero,0x34(sp)
0040ac74  slti v0,s6,0x2
0040ac78  sw zero,0x44(sp)
0040ac7c  beq v0,zero,0x0040ac9c
0040ac80  _xori s7,s6,0x7
0040ac84  lw v0,0x48(sp)
0040ac88  nop
0040ac8c  bne v0,zero,0x0040aca0
0040ac90  _li s7,0x1
0040ac94  lw s7,0x50(sp)
0040ac98  nop
0040ac9c  sltu s7,zero,s7
0040aca0  lw t9,-0x7f64(gp)
0040aca4  move a0,s2
0040aca8  jalr t9
0040acac  _move a1,s5
0040acb0  lw gp,0x28(sp)
0040acb4  bne v0,zero,0x0040acdc
0040acb8  _nop
0040acbc  lw v0,0x40(sp)
0040acc0  nop
0040acc4  bne v0,zero,0x0040b200
0040acc8  _li v0,0x2
0040accc  lw v1,0x30(sp)
0040acd0  nop
0040acd4  beq v1,v0,0x0040b200
0040acd8  _nop
0040acdc  lw v0,0x30(sp)
0040ace0  nop
0040ace4  bne v0,zero,0x0040ad24
0040ace8  _addiu v0,sp,0x198
0040acec  slti v0,s6,0x2
0040acf0  beq v0,zero,0x0040ad08
0040acf4  _li v0,0x7
0040acf8  bne s7,zero,0x0040b200
0040acfc  _addiu v0,sp,0x198
0040ad00  b 0x0040ad24
0040ad04  _nop
0040ad08  beq s6,v0,0x0040ad20
0040ad0c  _li v0,0x1
0040ad10  lw v1,0x38(sp)
0040ad14  nop
0040ad18  beq v1,v0,0x0040b200
0040ad1c  _nop
0040ad20  addiu v0,sp,0x198
0040ad24  lw t9,-0x7fb4(gp)
0040ad28  sw zero,0xc(v0)
0040ad2c  sw zero,0x4(v0)
0040ad30  sw zero,0x8(v0)
0040ad34  lui v0,0x42
0040ad38  addiu v0,v0,-0x764c
0040ad3c  lui a0,0x42
0040ad40  sw v0,0x198(sp)
0040ad44  jalr t9
0040ad48  _addiu a0,a0,-0x7578
0040ad4c  lw gp,0x28(sp)
0040ad50  bne v0,zero,0x0040add8
0040ad54  _lui s1,0x42
0040ad58  lw t9,-0x7fb4(gp)
0040ad5c  nop
0040ad60  jalr t9
0040ad64  _addiu a0,s1,-0x7558
0040ad68  lw gp,0x28(sp)
0040ad6c  beq v0,zero,0x0040ad9c
0040ad70  _lui a1,0x41
0040ad74  lw t9,-0x7f84(gp)
0040ad78  lui a3,0x42
0040ad7c  sw s3,0x10(sp)
0040ad80  addiu a1,a1,0x7bbc
0040ad84  addiu a2,s1,-0x7558
0040ad88  addiu a3,a3,-0x754c
0040ad8c  jalr t9
0040ad90  _clear a0
0040ad94  lw gp,0x28(sp)
0040ad98  nop
0040ad9c  lw t9,-0x7f84(gp)
0040ada0  lui a1,0x42
0040ada4  lui a2,0x42
0040ada8  addiu a1,a1,-0x7548
0040adac  addiu a2,a2,-0x7558
0040adb0  clear a0
0040adb4  jalr t9
0040adb8  _move a3,s3
0040adbc  lw gp,0x28(sp)
0040adc0  lui a0,0x42
0040adc4  lw t9,-0x7eb4(gp)
0040adc8  nop
0040adcc  jalr t9
0040add0  _addiu a0,a0,-0x7540
0040add4  lw gp,0x28(sp)
0040add8  lw v1,0x30(sp)
0040addc  li v0,0x1
0040ade0  bne v1,v0,0x0040ae08
0040ade4  _lui v0,0x42
0040ade8  addiu v0,v0,-0x7520
0040adec  sw v0,0x19c(sp)
0040adf0  lui v0,0x42
0040adf4  addiu v0,v0,-0x6afc
0040adf8  sw v0,0x1a0(sp)
0040adfc  sw zero,0x88(sp)
0040ae00  b 0x0040ae10
0040ae04  _li s1,0x3
0040ae08  sw s4,0x19c(sp)
0040ae0c  li s1,0x2
0040ae10  lw v1,0x88(sp)
0040ae14  li v0,0x1
0040ae18  bne v1,v0,0x0040aec4
0040ae1c  _lui t1,0x42
0040ae20  lw t9,-0x7f84(gp)
0040ae24  lui t0,0x42
0040ae28  lui v1,0x42
0040ae2c  addiu t1,t1,-0x7510
0040ae30  addiu t0,t0,-0x7fd4
0040ae34  addiu v1,v1,-0x7500
0040ae38  addiu s8,sp,0x128
0040ae3c  lui s7,0x42
0040ae40  lui s6,0x42
0040ae44  lui a2,0x42
0040ae48  addiu a2,a2,-0x7fc4
0040ae4c  sw t1,0x10(sp)
0040ae50  sw t0,0x14(sp)
0040ae54  sw v1,0x18(sp)
0040ae58  clear a0
0040ae5c  addiu a1,s7,-0x7fcc
0040ae60  addiu a3,s6,-0x7fbc
0040ae64  sw v1,0x5dc(sp)
0040ae68  sw t0,0x5d8(sp)
0040ae6c  sw t1,0x5d4(sp)
0040ae70  sw s8,0x1c(sp)
0040ae74  jalr t9
0040ae78  _sw s3,0x20(sp)
0040ae7c  lw gp,0x28(sp)
0040ae80  lw t1,0x5d4(sp)
0040ae84  lw t0,0x5d8(sp)
0040ae88  lw v1,0x5dc(sp)
0040ae8c  lw t9,-0x7f84(gp)
0040ae90  lui a2,0x42
0040ae94  sw t1,0x10(sp)
0040ae98  sw t0,0x14(sp)
0040ae9c  sw v1,0x18(sp)
0040aea0  sw s8,0x1c(sp)
0040aea4  sw s3,0x20(sp)
0040aea8  addiu a1,s7,-0x7fcc
0040aeac  addiu a2,a2,-0x7fc0
0040aeb0  addiu a3,s6,-0x7fbc
0040aeb4  jalr t9
0040aeb8  _clear a0
0040aebc  lw gp,0x28(sp)
0040aec0  nop
0040aec4  lw t9,-0x7f78(gp)
0040aec8  addiu s6,sp,0x148
0040aecc  lui a1,0x42
0040aed0  move a0,s6
0040aed4  move a2,s2
0040aed8  jalr t9
0040aedc  _addiu a1,a1,-0x74f0
0040aee0  lw gp,0x28(sp)
0040aee4  lui a3,0x42
0040aee8  lui a1,0x41
0040aeec  lw t9,-0x7f84(gp)
0040aef0  lui a2,0x42
0040aef4  addiu a3,a3,-0x74cc
0040aef8  addiu a1,a1,0x7e44
0040aefc  addiu a2,a2,-0x74dc
0040af00  sw s6,0x10(sp)
0040af04  sw s2,0x14(sp)
0040af08  clear a0
0040af0c  jalr t9
0040af10  _sw s3,0x18(sp)
0040af14  addiu a1,s1,0x1
0040af18  lw gp,0x28(sp)
0040af1c  addiu s7,sp,0x30
0040af20  sll a1,a1,0x2
0040af24  sll a2,s1,0x2
0040af28  lui a3,0x42
0040af2c  addu a2,s7,a2
0040af30  addu a1,s7,a1
0040af34  addiu a3,a3,-0x74bc
0040af38  addiu a0,s1,0x2
0040af3c  sw a3,0x168(a2)
0040af40  addiu v1,s1,0x3
0040af44  sw s6,0x168(a1)
0040af48  addiu v0,s1,0x4
0040af4c  sll a0,a0,0x2
0040af50  lui a1,0x42
0040af54  lw t9,-0x7f78(gp)
0040af58  addu a0,s7,a0
0040af5c  addiu a1,a1,-0x74b8
0040af60  sll v1,v1,0x2
0040af64  sll v0,v0,0x2
0040af68  lui a3,0x42
0040af6c  sw a1,0x168(a0)
0040af70  addu v1,s7,v1
0040af74  addiu a3,a3,-0x74b4
0040af78  addu v0,s7,v0
0040af7c  addiu s8,sp,0x170
0040af80  lui a1,0x42
0040af84  sw s2,0x168(v1)
0040af88  move a2,s2
0040af8c  sw a3,0x168(v0)
0040af90  addiu a1,a1,-0x74b0
0040af94  jalr t9
0040af98  _move a0,s8
0040af9c  lw gp,0x28(sp)
0040afa0  addiu s2,s1,0x5
0040afa4  sll s2,s2,0x2
0040afa8  lw t9,-0x7fb4(gp)
0040afac  addu s2,s7,s2
0040afb0  lui s6,0x42
0040afb4  sw s8,0x168(s2)
0040afb8  jalr t9
0040afbc  _addiu a0,s6,-0x749c
0040afc0  lw gp,0x28(sp)
0040afc4  beq v0,zero,0x0040aff4
0040afc8  _addiu s2,s1,0x6
0040afcc  lw t9,-0x7f18(gp)
0040afd0  sll s2,s2,0x2
0040afd4  lui v0,0x42
0040afd8  addu s7,s7,s2
0040afdc  addiu v0,v0,-0x7488
0040afe0  sw v0,0x168(s7)
0040afe4  jalr t9
0040afe8  _addiu a0,s6,-0x749c
0040afec  lw gp,0x28(sp)
0040aff0  addiu s2,s1,0x7
0040aff4  lw t9,-0x7fb4(gp)
0040aff8  lui s1,0x42
0040affc  jalr t9
0040b000  _addiu a0,s1,-0x747c
0040b004  lw gp,0x28(sp)
0040b008  beq v0,zero,0x0040b02c
0040b00c  _sll v0,s2,0x2
0040b010  lw t9,-0x7f18(gp)
0040b014  addu v0,sp,v0
0040b018  sw s4,0x198(v0)
0040b01c  jalr t9
0040b020  _addiu a0,s1,-0x747c
0040b024  lw gp,0x28(sp)
0040b028  addiu s2,s2,0x1
0040b02c  lw t9,-0x7fb4(gp)
0040b030  lui s1,0x42
0040b034  jalr t9
0040b038  _addiu a0,s1,-0x7468
0040b03c  lw gp,0x28(sp)
0040b040  beq v0,zero,0x0040b0f4
0040b044  _lui a1,0x42
0040b048  lw t9,-0x7f48(gp)
0040b04c  addiu a0,s1,-0x7468
0040b050  jalr t9
0040b054  _addiu a1,a1,-0x780c
0040b058  lw gp,0x28(sp)
0040b05c  beq v0,zero,0x0040b09c
0040b060  _move s1,v0
0040b064  lw t9,-0x7e8c(gp)
0040b068  lui a1,0x42
0040b06c  addiu a1,a1,-0x657c
0040b070  move a0,v0
0040b074  jalr t9
0040b078  _addiu a2,sp,0x23c
0040b07c  lw gp,0x28(sp)
0040b080  nop
0040b084  lw t9,-0x7f54(gp)
0040b088  nop
0040b08c  jalr t9
0040b090  _move a0,s1
0040b094  lw gp,0x28(sp)
0040b098  nop
0040b09c  lw t9,-0x7e58(gp)
0040b0a0  addiu s1,sp,0xa8
0040b0a4  move a0,s1
0040b0a8  jalr t9
0040b0ac  _addiu a1,sp,0x23c
0040b0b0  lw gp,0x28(sp)
0040b0b4  addiu v1,s2,0x1
0040b0b8  sll a0,s2,0x2
0040b0bc  addiu v0,sp,0x30
0040b0c0  sll v1,v1,0x2
0040b0c4  addu v1,v0,v1
0040b0c8  addu v0,v0,a0
0040b0cc  lui a0,0x42
0040b0d0  lw t9,-0x7f18(gp)
0040b0d4  addiu a0,a0,-0x7454
0040b0d8  sw a0,0x168(v0)
0040b0dc  lui a0,0x42
0040b0e0  sw s1,0x168(v1)
0040b0e4  jalr t9
0040b0e8  _addiu a0,a0,-0x7468
0040b0ec  lw gp,0x28(sp)
0040b0f0  addiu s2,s2,0x2
0040b0f4  lw t9,-0x7fb4(gp)
0040b0f8  lui s1,0x42
0040b0fc  jalr t9
0040b100  _addiu a0,s1,-0x7448
0040b104  lw gp,0x28(sp)
0040b108  beq v0,zero,0x0040b1c4
0040b10c  _addiu v1,s2,0x1
0040b110  lw t9,-0x7f48(gp)
0040b114  lui a1,0x42
0040b118  addiu a0,s1,-0x7448
0040b11c  jalr t9
0040b120  _addiu a1,a1,-0x780c
0040b124  lw gp,0x28(sp)
0040b128  beq v0,zero,0x0040b168
0040b12c  _move s1,v0
0040b130  lw t9,-0x7e8c(gp)
0040b134  lui a1,0x42
0040b138  addiu a1,a1,-0x657c
0040b13c  move a0,v0
0040b140  jalr t9
0040b144  _addiu a2,sp,0x23c
0040b148  lw gp,0x28(sp)
0040b14c  nop
0040b150  lw t9,-0x7f54(gp)
0040b154  nop
0040b158  jalr t9
0040b15c  _move a0,s1
0040b160  lw gp,0x28(sp)
0040b164  nop
0040b168  lw t9,-0x7e58(gp)
0040b16c  addiu s1,sp,0xb8
0040b170  move a0,s1
0040b174  jalr t9
0040b178  _addiu a1,sp,0x23c
0040b17c  lw gp,0x28(sp)
0040b180  addiu v1,s2,0x1
0040b184  sll a0,s2,0x2
0040b188  lw t9,-0x7f18(gp)
0040b18c  addiu v0,sp,0x30
0040b190  sll v1,v1,0x2
0040b194  lui a1,0x42
0040b198  addu v1,v0,v1
0040b19c  addiu a1,a1,-0x7434
0040b1a0  addu v0,v0,a0
0040b1a4  lui a0,0x42
0040b1a8  sw a1,0x168(v0)
0040b1ac  addiu a0,a0,-0x7448
0040b1b0  jalr t9
0040b1b4  _sw s1,0x168(v1)
0040b1b8  lw gp,0x28(sp)
0040b1bc  addiu s2,s2,0x2
0040b1c0  addiu v1,s2,0x1
0040b1c4  lw t9,-0x7f8c(gp)
0040b1c8  addiu v0,sp,0x30
0040b1cc  sll v1,v1,0x2
0040b1d0  sll s2,s2,0x2
0040b1d4  lui a3,0x41
0040b1d8  addu v1,v0,v1
0040b1dc  addiu a3,a3,0x7b04
0040b1e0  addu v0,v0,s2
0040b1e4  sw a3,0x168(v0)
0040b1e8  addiu a0,sp,0x198
0040b1ec  sw zero,0x168(v1)
0040b1f0  jalr t9
0040b1f4  _clear a1
0040b1f8  lw gp,0x28(sp)
0040b1fc  li s1,0x1
0040b200  li s2,0x5
0040b204  addiu s6,sp,0x170
0040b208  lw t9,-0x7fb4(gp)
0040b20c  nop
0040b210  jalr t9
0040b214  _move a0,s6
0040b218  lw gp,0x28(sp)
0040b21c  bne v0,zero,0x0040b240
0040b220  _li a0,0x1
0040b224  lw t9,-0x7ebc(gp)
0040b228  nop
0040b22c  jalr t9
0040b230  _addiu s2,s2,-0x1
0040b234  lw gp,0x28(sp)
0040b238  bne s2,zero,0x0040b208
0040b23c  _nop
0040b240  lw t9,-0x7e68(gp)
0040b244  clear a0
0040b248  move a1,s0
0040b24c  jalr t9
0040b250  _addiu a2,sp,0x84
0040b254  lw gp,0x28(sp)
0040b258  bne v0,zero,0x0040ab58
0040b25c  _move s2,v0
0040b260  beq s1,zero,0x0040b2b4
0040b264  _addiu a2,sp,0x430
0040b268  lb v0,0x108(sp)
0040b26c  lw t9,-0x7f78(gp)
0040b270  beq v0,zero,0x0040b290
0040b274  _addiu a0,sp,0x1d8
0040b278  lui a1,0x42
0040b27c  addiu a1,a1,-0x7428
0040b280  jalr t9
0040b284  _addiu a3,sp,0x108
0040b288  b 0x0040b29c
0040b28c  _nop
0040b290  lui a1,0x42
0040b294  jalr t9
0040b298  _addiu a1,a1,-0x7418
0040b29c  lw gp,0x28(sp)
0040b2a0  nop
0040b2a4  lw t9,-0x7eb4(gp)
0040b2a8  nop
0040b2ac  jalr t9
0040b2b0  _addiu a0,sp,0x1d8
0040b2b4  lw ra,0x604(sp)
0040b2b8  lw s8,0x600(sp)
0040b2bc  lw s7,0x5fc(sp)
0040b2c0  lw s6,0x5f8(sp)
0040b2c4  lw s5,0x5f4(sp)
0040b2c8  lw s4,0x5f0(sp)
0040b2cc  lw s3,0x5ec(sp)
0040b2d0  lw s2,0x5e8(sp)
0040b2d4  lw s1,0x5e4(sp)
0040b2d8  lw s0,0x5e0(sp)
0040b2dc  clear v0
0040b2e0  jr ra
0040b2e4  _addiu sp,sp,0x608
0040b2e8  b 0x0040a610
0040b2ec  _clear s3
0040b2f0  bne s2,v0,0x0040a830
0040b2f4  _nop
0040b2f8  b 0x0040a6a4
0040b2fc  _nop
0040b300  beq s2,v0,0x0040a830
0040b304  _li v1,0x1
0040b308  b 0x0040a7e8
0040b30c  _nop
