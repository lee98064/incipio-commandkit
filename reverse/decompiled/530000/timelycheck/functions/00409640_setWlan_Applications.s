# setWlan_Applications @ 00409640
00409640  addiu sp,sp,-0x608
00409644  sw ra,0x604(sp)
00409648  sw s8,0x600(sp)
0040964c  sw s7,0x5fc(sp)
00409650  sw s6,0x5f8(sp)
00409654  sw s5,0x5f4(sp)
00409658  sw s4,0x5f0(sp)
0040965c  sw s3,0x5ec(sp)
00409660  sw s2,0x5e8(sp)
00409664  sw s1,0x5e4(sp)
00409668  sw s0,0x5e0(sp)
0040966c  lui gp,0x43
00409670  addiu gp,gp,0x3060
00409674  sw gp,0x28(sp)
00409678  lw t9,-0x7f4c(gp)
0040967c  move s0,a1
00409680  sw a0,0x608(sp)
00409684  clear a1
00409688  addiu a0,sp,0x368
0040968c  jalr t9
00409690  _li a2,0xc8
00409694  lw gp,0x28(sp)
00409698  addiu s3,sp,0xc8
0040969c  move a0,s3
004096a0  lw t9,-0x7f4c(gp)
004096a4  clear a1
004096a8  li a2,0x1e
004096ac  sw zero,0x30(sp)
004096b0  sw zero,0x34(sp)
004096b4  sw zero,0x38(sp)
004096b8  sw zero,0x3c(sp)
004096bc  sw zero,0x40(sp)
004096c0  sw zero,0x44(sp)
004096c4  sw zero,0x48(sp)
004096c8  sw zero,0x4c(sp)
004096cc  sw zero,0x50(sp)
004096d0  sw zero,0x54(sp)
004096d4  sw zero,0x58(sp)
004096d8  sw zero,0x5c(sp)
004096dc  sw zero,0x60(sp)
004096e0  sw zero,0x64(sp)
004096e4  sw zero,0x68(sp)
004096e8  sw zero,0x6c(sp)
004096ec  sw zero,0x70(sp)
004096f0  sw zero,0x74(sp)
004096f4  sw zero,0x78(sp)
004096f8  sw zero,0x7c(sp)
004096fc  jalr t9
00409700  _sw zero,0x80(sp)
00409704  lw gp,0x28(sp)
00409708  addiu a0,sp,0xe8
0040970c  clear a1
00409710  lw t9,-0x7f4c(gp)
00409714  li a2,0x1e
00409718  jalr t9
0040971c  _addiu s4,sp,0x4f8
00409720  lw gp,0x28(sp)
00409724  addiu a0,sp,0x108
00409728  clear a1
0040972c  lw t9,-0x7f4c(gp)
00409730  li a2,0x1e
00409734  jalr t9
00409738  _addiu s2,sp,0x128
0040973c  lw gp,0x28(sp)
00409740  addiu a0,sp,0x430
00409744  clear a1
00409748  lw t9,-0x7f4c(gp)
0040974c  li a2,0xc8
00409750  jalr t9
00409754  _addiu s5,sp,0x2a0
00409758  lw gp,0x28(sp)
0040975c  move a0,s4
00409760  clear a1
00409764  lw t9,-0x7f4c(gp)
00409768  li a2,0xc8
0040976c  jalr t9
00409770  _addiu s1,sp,0x84
00409774  lw gp,0x28(sp)
00409778  move a0,s2
0040977c  clear a1
00409780  lw t9,-0x7f4c(gp)
00409784  nop
00409788  jalr t9
0040978c  _li a2,0x1e
00409790  lw gp,0x28(sp)
00409794  li a2,0x40
00409798  addiu a0,sp,0x198
0040979c  lw t9,-0x7f4c(gp)
004097a0  clear a1
004097a4  sw zero,0x88(sp)
004097a8  sw zero,0xa8(sp)
004097ac  sw zero,0xac(sp)
004097b0  sw zero,0xb0(sp)
004097b4  sw zero,0xb4(sp)
004097b8  sw zero,0xb8(sp)
004097bc  sw zero,0xbc(sp)
004097c0  sw zero,0xc0(sp)
004097c4  jalr t9
004097c8  _sw zero,0xc4(sp)
004097cc  lw gp,0x28(sp)
004097d0  move a1,s0
004097d4  move a0,s5
004097d8  lw t9,-0x7e58(gp)
004097dc  sw zero,0x84(sp)
004097e0  jalr t9
004097e4  _lui s0,0x41
004097e8  lw gp,0x28(sp)
004097ec  addiu s0,s0,0x7a44
004097f0  move a0,s5
004097f4  lw t9,-0x7e68(gp)
004097f8  move a1,s0
004097fc  jalr t9
00409800  _move a2,s1
00409804  lw gp,0x28(sp)
00409808  beq v0,zero,0x004098e0
0040980c  _nop
00409810  lui s7,0x41
00409814  lui s6,0x42
00409818  move s5,s1
0040981c  addiu s7,s7,0x7ea0
00409820  addiu s6,s6,-0x7884
00409824  addiu s1,sp,0x98
00409828  lw t9,-0x7e58(gp)
0040982c  move a1,v0
00409830  jalr t9
00409834  _move a0,s1
00409838  lw gp,0x28(sp)
0040983c  move a0,s1
00409840  move a1,s7
00409844  lw t9,-0x7f0c(gp)
00409848  nop
0040984c  jalr t9
00409850  _li a2,0x4
00409854  lw gp,0x28(sp)
00409858  bne v0,zero,0x004098a4
0040985c  _move a0,s3
00409860  lb v1,0x4f8(sp)
00409864  lw t9,-0x7f78(gp)
00409868  move a1,s6
0040986c  lw v0,-0x7e58(gp)
00409870  bne v1,zero,0x00409888
00409874  _move a2,s1
00409878  move a0,s4
0040987c  move a1,s1
00409880  b 0x004098b0
00409884  _move t9,v0
00409888  jalr t9
0040988c  _nop
00409890  lw gp,0x28(sp)
00409894  move a0,s4
00409898  lw t9,-0x7ef0(gp)
0040989c  b 0x004098b0
004098a0  _move a1,s3
004098a4  lw t9,-0x7e58(gp)
004098a8  move a0,s2
004098ac  move a1,s1
004098b0  jalr t9
004098b4  _nop
004098b8  lw gp,0x28(sp)
004098bc  clear a0
004098c0  move a1,s0
004098c4  lw t9,-0x7e68(gp)
004098c8  nop
004098cc  jalr t9
004098d0  _move a2,s5
004098d4  lw gp,0x28(sp)
004098d8  bne v0,zero,0x00409828
004098dc  _nop
004098e0  lw t9,-0x7fb4(gp)
004098e4  lui s1,0x42
004098e8  jalr t9
004098ec  _addiu a0,s1,-0x77f0
004098f0  lw gp,0x28(sp)
004098f4  beq v0,zero,0x00409988
004098f8  _nop
004098fc  lw t9,-0x7e80(gp)
00409900  nop
00409904  jalr t9
00409908  _addiu a0,s1,-0x77f0
0040990c  li v1,-0x1
00409910  lw gp,0x28(sp)
00409914  beq v0,v1,0x00409970
00409918  _addiu a3,sp,0x8c
0040991c  lw t9,-0x7f78(gp)
00409920  lui a1,0x41
00409924  move a0,a3
00409928  addiu a1,a1,0x79c4
0040992c  move a2,v0
00409930  jalr t9
00409934  _sw a3,0x5d4(sp)
00409938  lw gp,0x28(sp)
0040993c  lui v0,0x42
00409940  lw a3,0x5d4(sp)
00409944  lw t9,-0x7f84(gp)
00409948  addiu v0,v0,-0x67b4
0040994c  lui a1,0x41
00409950  lui a2,0x41
00409954  sw v0,0x10(sp)
00409958  addiu a1,a1,0x7990
0040995c  addiu a2,a2,0x7998
00409960  jalr t9
00409964  _clear a0
00409968  lw gp,0x28(sp)
0040996c  nop
00409970  lw t9,-0x7f18(gp)
00409974  lui a0,0x42
00409978  jalr t9
0040997c  _addiu a0,a0,-0x77f0
00409980  lw gp,0x28(sp)
00409984  nop
00409988  lw t9,-0x7e58(gp)
0040998c  addiu s1,sp,0x2a0
00409990  move a0,s1
00409994  addiu a1,sp,0x4f8
00409998  jalr t9
0040999c  _sw zero,0x84(sp)
004099a0  lw gp,0x28(sp)
004099a4  move a0,s1
004099a8  move a1,s0
004099ac  lw t9,-0x7e68(gp)
004099b0  nop
004099b4  jalr t9
004099b8  _addiu a2,sp,0x84
004099bc  lw gp,0x28(sp)
004099c0  beq v0,zero,0x00409e90
004099c4  _lui s1,0x42
004099c8  lui s5,0x42
004099cc  lui s4,0x42
004099d0  lui s3,0x42
004099d4  addiu s1,s1,-0x67b4
004099d8  addiu s5,s5,-0x778c
004099dc  addiu s4,s4,-0x7774
004099e0  addiu s3,s3,-0x775c
004099e4  lw t9,-0x7e58(gp)
004099e8  addiu s6,sp,0x98
004099ec  move a1,v0
004099f0  jalr t9
004099f4  _move a0,s6
004099f8  lw gp,0x28(sp)
004099fc  lui a1,0x41
00409a00  move a0,s6
00409a04  lw t9,-0x7f0c(gp)
00409a08  addiu a1,a1,0x7ea0
00409a0c  jalr t9
00409a10  _li a2,0x4
00409a14  lw gp,0x28(sp)
00409a18  bne v0,zero,0x00409c90
00409a1c  _lui s8,0x41
00409a20  lw t9,-0x7f78(gp)
00409a24  addiu s2,sp,0x1d8
00409a28  lui a1,0x42
00409a2c  move a2,s6
00409a30  move a0,s2
00409a34  jalr t9
00409a38  _addiu a1,a1,-0x77d8
00409a3c  lw gp,0x28(sp)
00409a40  nop
00409a44  lw t9,-0x7fb4(gp)
00409a48  nop
00409a4c  jalr t9
00409a50  _move a0,s2
00409a54  lw gp,0x28(sp)
00409a58  beq v0,zero,0x00409ba0
00409a5c  _nop
00409a60  lw t9,-0x7e80(gp)
00409a64  nop
00409a68  jalr t9
00409a6c  _move a0,s2
00409a70  li v1,-0x1
00409a74  lw gp,0x28(sp)
00409a78  beq v0,v1,0x00409acc
00409a7c  _addiu a3,sp,0x8c
00409a80  lw t9,-0x7f78(gp)
00409a84  lui a1,0x41
00409a88  move a0,a3
00409a8c  addiu a1,a1,0x79c4
00409a90  move a2,v0
00409a94  jalr t9
00409a98  _sw a3,0x5d4(sp)
00409a9c  lw gp,0x28(sp)
00409aa0  lw a3,0x5d4(sp)
00409aa4  lui a1,0x41
00409aa8  lw t9,-0x7f84(gp)
00409aac  lui a2,0x41
00409ab0  sw s1,0x10(sp)
00409ab4  addiu a1,a1,0x7990
00409ab8  addiu a2,a2,0x7998
00409abc  jalr t9
00409ac0  _clear a0
00409ac4  lw gp,0x28(sp)
00409ac8  nop
00409acc  lw t9,-0x7f18(gp)
00409ad0  addiu a0,sp,0x1d8
00409ad4  jalr t9
00409ad8  _addiu s2,sp,0x23c
00409adc  lw gp,0x28(sp)
00409ae0  lui a1,0x42
00409ae4  addiu a1,a1,-0x77c0
00409ae8  lw t9,-0x7f78(gp)
00409aec  move a0,s2
00409af0  jalr t9
00409af4  _addiu a2,sp,0x98
00409af8  lw gp,0x28(sp)
00409afc  nop
00409b00  lw t9,-0x7fb4(gp)
00409b04  nop
00409b08  jalr t9
00409b0c  _move a0,s2
00409b10  lw gp,0x28(sp)
00409b14  beq v0,zero,0x00409ba0
00409b18  _nop
00409b1c  lw t9,-0x7e80(gp)
00409b20  nop
00409b24  jalr t9
00409b28  _move a0,s2
00409b2c  li v1,-0x1
00409b30  lw gp,0x28(sp)
00409b34  beq v0,v1,0x00409b88
00409b38  _addiu a3,sp,0x8c
00409b3c  lw t9,-0x7f78(gp)
00409b40  lui a1,0x41
00409b44  move a0,a3
00409b48  addiu a1,a1,0x79c4
00409b4c  move a2,v0
00409b50  jalr t9
00409b54  _sw a3,0x5d4(sp)
00409b58  lw gp,0x28(sp)
00409b5c  lw a3,0x5d4(sp)
00409b60  lui a1,0x41
00409b64  lw t9,-0x7f84(gp)
00409b68  lui a2,0x41
00409b6c  sw s1,0x10(sp)
00409b70  addiu a1,a1,0x7990
00409b74  addiu a2,a2,0x7998
00409b78  jalr t9
00409b7c  _clear a0
00409b80  lw gp,0x28(sp)
00409b84  nop
00409b88  lw t9,-0x7f18(gp)
00409b8c  nop
00409b90  jalr t9
00409b94  _addiu a0,sp,0x23c
00409b98  lw gp,0x28(sp)
00409b9c  nop
00409ba0  lw t9,-0x7f78(gp)
00409ba4  addiu s2,sp,0x23c
00409ba8  lui a1,0x42
00409bac  move a0,s2
00409bb0  addiu a1,a1,-0x77a4
00409bb4  jalr t9
00409bb8  _addiu a2,sp,0x98
00409bbc  lw gp,0x28(sp)
00409bc0  nop
00409bc4  lw t9,-0x7fb4(gp)
00409bc8  nop
00409bcc  jalr t9
00409bd0  _move a0,s2
00409bd4  lw gp,0x28(sp)
00409bd8  beq v0,zero,0x00409c64
00409bdc  _nop
00409be0  lw t9,-0x7e80(gp)
00409be4  nop
00409be8  jalr t9
00409bec  _move a0,s2
00409bf0  li v1,-0x1
00409bf4  lw gp,0x28(sp)
00409bf8  beq v0,v1,0x00409c4c
00409bfc  _addiu a3,sp,0x8c
00409c00  lw t9,-0x7f78(gp)
00409c04  lui a1,0x41
00409c08  move a0,a3
00409c0c  addiu a1,a1,0x79c4
00409c10  move a2,v0
00409c14  jalr t9
00409c18  _sw a3,0x5d4(sp)
00409c1c  lw gp,0x28(sp)
00409c20  lw a3,0x5d4(sp)
00409c24  lui a1,0x41
00409c28  lw t9,-0x7f84(gp)
00409c2c  lui a2,0x41
00409c30  sw s1,0x10(sp)
00409c34  addiu a1,a1,0x7990
00409c38  addiu a2,a2,0x7998
00409c3c  jalr t9
00409c40  _clear a0
00409c44  lw gp,0x28(sp)
00409c48  nop
00409c4c  lw t9,-0x7f18(gp)
00409c50  nop
00409c54  jalr t9
00409c58  _addiu a0,sp,0x23c
00409c5c  lw gp,0x28(sp)
00409c60  nop
00409c64  lw t9,-0x7f84(gp)
00409c68  lui a0,0x41
00409c6c  lui a1,0x41
00409c70  lui a2,0x42
00409c74  addiu a0,a0,0x7c70
00409c78  addiu a1,a1,0x7a78
00409c7c  addiu a2,a2,-0x7398
00409c80  jalr t9
00409c84  _move a3,s1
00409c88  lw gp,0x28(sp)
00409c8c  lui s8,0x41
00409c90  lui s7,0x41
00409c94  addiu s8,s8,0x7990
00409c98  addiu s7,s7,0x7998
00409c9c  li s6,-0x1
00409ca0  addiu s2,sp,0x8c
00409ca4  lw t9,-0x7fb4(gp)
00409ca8  nop
00409cac  jalr t9
00409cb0  _move a0,s5
00409cb4  lw gp,0x28(sp)
00409cb8  nop
00409cbc  lw v1,-0x7e80(gp)
00409cc0  lw t9,-0x7fb4(gp)
00409cc4  beq v0,zero,0x00409d30
00409cc8  _move a0,s5
00409ccc  move t9,v1
00409cd0  jalr t9
00409cd4  _nop
00409cd8  lw gp,0x28(sp)
00409cdc  lui a1,0x41
00409ce0  move a0,s2
00409ce4  lw t9,-0x7f78(gp)
00409ce8  addiu a1,a1,0x79c4
00409cec  beq v0,s6,0x00409e70
00409cf0  _move a2,v0
00409cf4  jalr t9
00409cf8  _nop
00409cfc  lw gp,0x28(sp)
00409d00  clear a0
00409d04  sw s1,0x10(sp)
00409d08  lw t9,-0x7f84(gp)
00409d0c  move a1,s8
00409d10  move a2,s7
00409d14  jalr t9
00409d18  _move a3,s2
00409d1c  lw gp,0x28(sp)
00409d20  nop
00409d24  lw t9,-0x7f18(gp)
00409d28  b 0x00409e2c
00409d2c  _move a0,s5
00409d30  jalr t9
00409d34  _move a0,s4
00409d38  lw gp,0x28(sp)
00409d3c  nop
00409d40  lw v1,-0x7e80(gp)
00409d44  lw t9,-0x7fb4(gp)
00409d48  beq v0,zero,0x00409db4
00409d4c  _move a0,s4
00409d50  move t9,v1
00409d54  jalr t9
00409d58  _nop
00409d5c  lw gp,0x28(sp)
00409d60  lui a1,0x41
00409d64  move a0,s2
00409d68  lw t9,-0x7f78(gp)
00409d6c  addiu a1,a1,0x79c4
00409d70  beq v0,s6,0x00409e70
00409d74  _move a2,v0
00409d78  jalr t9
00409d7c  _nop
00409d80  lw gp,0x28(sp)
00409d84  clear a0
00409d88  sw s1,0x10(sp)
00409d8c  lw t9,-0x7f84(gp)
00409d90  move a1,s8
00409d94  move a2,s7
00409d98  jalr t9
00409d9c  _move a3,s2
00409da0  lw gp,0x28(sp)
00409da4  nop
00409da8  lw t9,-0x7f18(gp)
00409dac  b 0x00409e2c
00409db0  _move a0,s4
00409db4  jalr t9
00409db8  _move a0,s3
00409dbc  lw gp,0x28(sp)
00409dc0  nop
00409dc4  lw t9,-0x7e80(gp)
00409dc8  beq v0,zero,0x00409e70
00409dcc  _move a0,s3
00409dd0  jalr t9
00409dd4  _nop
00409dd8  lw gp,0x28(sp)
00409ddc  lui a1,0x41
00409de0  move a0,s2
00409de4  lw t9,-0x7f78(gp)
00409de8  addiu a1,a1,0x79c4
00409dec  beq v0,s6,0x00409e70
00409df0  _move a2,v0
00409df4  jalr t9
00409df8  _nop
00409dfc  lw gp,0x28(sp)
00409e00  clear a0
00409e04  sw s1,0x10(sp)
00409e08  lw t9,-0x7f84(gp)
00409e0c  move a1,s8
00409e10  move a2,s7
00409e14  jalr t9
00409e18  _move a3,s2
00409e1c  lw gp,0x28(sp)
00409e20  move a0,s3
00409e24  lw t9,-0x7f18(gp)
00409e28  nop
00409e2c  jalr t9
00409e30  _nop
00409e34  lw gp,0x28(sp)
00409e38  nop
00409e3c  lw t9,-0x7ebc(gp)
00409e40  nop
00409e44  jalr t9
00409e48  _li a0,0x1
00409e4c  lw gp,0x28(sp)
00409e50  lui a0,0x42
00409e54  lw t9,-0x7ea4(gp)
00409e58  nop
00409e5c  jalr t9
00409e60  _addiu a0,a0,-0x773c
00409e64  lw gp,0x28(sp)
00409e68  bgtz v0,0x00409ca4
00409e6c  _nop
00409e70  lw t9,-0x7e68(gp)
00409e74  clear a0
00409e78  move a1,s0
00409e7c  jalr t9
00409e80  _addiu a2,sp,0x84
00409e84  lw gp,0x28(sp)
00409e88  bne v0,zero,0x004099e4
00409e8c  _nop
00409e90  lw t9,-0x7fb4(gp)
00409e94  lui s1,0x42
00409e98  jalr t9
00409e9c  _addiu a0,s1,-0x7734
00409ea0  lw gp,0x28(sp)
00409ea4  beq v0,zero,0x00409f38
00409ea8  _nop
00409eac  lw t9,-0x7e80(gp)
00409eb0  nop
00409eb4  jalr t9
00409eb8  _addiu a0,s1,-0x7734
00409ebc  li v1,-0x1
00409ec0  lw gp,0x28(sp)
00409ec4  beq v0,v1,0x00409f20
00409ec8  _addiu a3,sp,0x8c
00409ecc  lw t9,-0x7f78(gp)
00409ed0  lui a1,0x41
00409ed4  move a0,a3
00409ed8  addiu a1,a1,0x79c4
00409edc  move a2,v0
00409ee0  jalr t9
00409ee4  _sw a3,0x5d4(sp)
00409ee8  lw gp,0x28(sp)
00409eec  lui v0,0x42
00409ef0  lw a3,0x5d4(sp)
00409ef4  lw t9,-0x7f84(gp)
00409ef8  addiu v0,v0,-0x67b4
00409efc  lui a1,0x41
00409f00  lui a2,0x41
00409f04  sw v0,0x10(sp)
00409f08  addiu a1,a1,0x7990
00409f0c  addiu a2,a2,0x7998
00409f10  jalr t9
00409f14  _clear a0
00409f18  lw gp,0x28(sp)
00409f1c  nop
00409f20  lw t9,-0x7f18(gp)
00409f24  lui a0,0x42
00409f28  jalr t9
00409f2c  _addiu a0,a0,-0x7734
00409f30  lw gp,0x28(sp)
00409f34  nop
00409f38  lw t9,-0x7eb4(gp)
00409f3c  lui a0,0x42
00409f40  jalr t9
00409f44  _addiu a0,a0,-0x7720
00409f48  lw gp,0x28(sp)
00409f4c  lw a0,0x608(sp)
00409f50  lui a1,0x41
00409f54  lw t9,-0x7f64(gp)
00409f58  nop
00409f5c  jalr t9
00409f60  _addiu a1,a1,0x7990
00409f64  lw gp,0x28(sp)
00409f68  beq v0,zero,0x0040b214
00409f6c  _nop
00409f70  lw t9,-0x7ea8(gp)
00409f74  lui a0,0x42
00409f78  jalr t9
00409f7c  _addiu a0,a0,-0x770c
00409f80  lw gp,0x28(sp)
00409f84  lui a0,0x41
00409f88  lw t9,-0x7e94(gp)
00409f8c  nop
00409f90  jalr t9
00409f94  _addiu a0,a0,0x79f4
00409f98  lw gp,0x28(sp)
00409f9c  beq v0,zero,0x0040a094
00409fa0  _li a0,0x16
00409fa4  lw t9,-0x7ec0(gp)
00409fa8  nop
00409fac  jalr t9
00409fb0  _addiu a1,sp,0x34
00409fb4  lw gp,0x28(sp)
00409fb8  li a0,0x3b
00409fbc  lw t9,-0x7ec0(gp)
00409fc0  nop
00409fc4  jalr t9
00409fc8  _addiu a1,sp,0x30
00409fcc  lw gp,0x28(sp)
00409fd0  li a0,0x3e
00409fd4  lw t9,-0x7ec0(gp)
00409fd8  nop
00409fdc  jalr t9
00409fe0  _addiu a1,sp,0x3c
00409fe4  lw gp,0x28(sp)
00409fe8  li a0,0x10e
00409fec  lw t9,-0x7ec0(gp)
00409ff0  nop
00409ff4  jalr t9
00409ff8  _addiu a1,sp,0x40
00409ffc  lw gp,0x28(sp)
0040a000  li a0,0x23
0040a004  lw t9,-0x7ec0(gp)
0040a008  nop
0040a00c  jalr t9
0040a010  _addiu a1,sp,0x48
0040a014  lw gp,0x28(sp)
0040a018  li a0,0x19
0040a01c  lw t9,-0x7ec0(gp)
0040a020  nop
0040a024  jalr t9
0040a028  _addiu a1,sp,0x4c
0040a02c  lw gp,0x28(sp)
0040a030  li a0,0x2d
0040a034  lw t9,-0x7ec0(gp)
0040a038  nop
0040a03c  jalr t9
0040a040  _addiu a1,sp,0x50
0040a044  lw gp,0x28(sp)
0040a048  li a0,0x3c
0040a04c  lw t9,-0x7ec0(gp)
0040a050  nop
0040a054  jalr t9
0040a058  _addiu a1,sp,0x44
0040a05c  lw gp,0x28(sp)
0040a060  li a0,0x1c
0040a064  lw t9,-0x7ec0(gp)
0040a068  nop
0040a06c  jalr t9
0040a070  _addiu a1,sp,0x38
0040a074  lw gp,0x28(sp)
0040a078  li a0,0x117
0040a07c  lw t9,-0x7ec0(gp)
0040a080  nop
0040a084  jalr t9
0040a088  _addiu a1,sp,0x88
0040a08c  lw gp,0x28(sp)
0040a090  nop
0040a094  lw t9,-0x7e58(gp)
0040a098  addiu s1,sp,0x2a0
0040a09c  move a0,s1
0040a0a0  addiu a1,sp,0x4f8
0040a0a4  jalr t9
0040a0a8  _sw zero,0x84(sp)
0040a0ac  lw gp,0x28(sp)
0040a0b0  move a0,s1
0040a0b4  move a1,s0
0040a0b8  lw t9,-0x7e68(gp)
0040a0bc  addiu a2,sp,0x84
0040a0c0  jalr t9
0040a0c4  _clear s1
0040a0c8  lw gp,0x28(sp)
0040a0cc  beq v0,zero,0x0040aa14
0040a0d0  _nop
0040a0d4  lui s6,0x42
0040a0d8  lui s5,0x42
0040a0dc  addiu s6,s6,-0x76d0
0040a0e0  addiu s5,s5,-0x67b4
0040a0e4  clear s2
0040a0e8  sw zero,0x5c0(sp)
0040a0ec  clear s8
0040a0f0  clear s4
0040a0f4  sw zero,0x5c8(sp)
0040a0f8  sw zero,0x5d0(sp)
0040a0fc  sw zero,0x5cc(sp)
0040a100  lw t9,-0x7e58(gp)
0040a104  addiu s3,sp,0x98
0040a108  move a1,v0
0040a10c  jalr t9
0040a110  _move a0,s3
0040a114  lw gp,0x28(sp)
0040a118  lui a1,0x41
0040a11c  move a0,s3
0040a120  lw t9,-0x7f0c(gp)
0040a124  addiu a1,a1,0x7ea0
0040a128  jalr t9
0040a12c  _li a2,0x4
0040a130  lw gp,0x28(sp)
0040a134  bne v0,zero,0x0040a790
0040a138  _move a0,s3
0040a13c  lw t9,-0x7fa4(gp)
0040a140  nop
0040a144  jalr t9
0040a148  _clear s7
0040a14c  sltiu v0,v0,0x9
0040a150  lw gp,0x28(sp)
0040a154  bne v0,zero,0x0040a164
0040a158  _nop
0040a15c  lb s7,0x9e(sp)
0040a160  lb s2,0x9f(sp)
0040a164  lw t9,-0x7e94(gp)
0040a168  addiu s3,sp,0x98
0040a16c  jalr t9
0040a170  _move a0,s3
0040a174  lw gp,0x28(sp)
0040a178  beq v0,zero,0x0040a790
0040a17c  _li a0,0x16
0040a180  lw t9,-0x7ec0(gp)
0040a184  nop
0040a188  jalr t9
0040a18c  _addiu a1,sp,0x54
0040a190  lw gp,0x28(sp)
0040a194  li a0,0x3b
0040a198  lw t9,-0x7ec0(gp)
0040a19c  nop
0040a1a0  jalr t9
0040a1a4  _addiu a1,sp,0x58
0040a1a8  lw gp,0x28(sp)
0040a1ac  li a0,0x3f
0040a1b0  lw t9,-0x7ec0(gp)
0040a1b4  nop
0040a1b8  jalr t9
0040a1bc  _addiu a1,sp,0x5c
0040a1c0  lw gp,0x28(sp)
0040a1c4  li a0,0x40
0040a1c8  lw t9,-0x7ec0(gp)
0040a1cc  nop
0040a1d0  jalr t9
0040a1d4  _addiu a1,sp,0x60
0040a1d8  lw gp,0x28(sp)
0040a1dc  li a0,0x19
0040a1e0  lw t9,-0x7ec0(gp)
0040a1e4  nop
0040a1e8  jalr t9
0040a1ec  _addiu a1,sp,0x64
0040a1f0  lw gp,0x28(sp)
0040a1f4  li a0,0x1c
0040a1f8  lw t9,-0x7ec0(gp)
0040a1fc  nop
0040a200  jalr t9
0040a204  _addiu a1,sp,0x6c
0040a208  lw v0,0x54(sp)
0040a20c  lw gp,0x28(sp)
0040a210  bne v0,zero,0x0040a368
0040a214  _nop
0040a218  lw v0,0x58(sp)
0040a21c  nop
0040a220  addiu v0,v0,-0x2
0040a224  sltiu v0,v0,0x2
0040a228  beq v0,zero,0x0040a368
0040a22c  _nop
0040a230  lw v0,0x5c(sp)
0040a234  nop
0040a238  beq v0,zero,0x0040a368
0040a23c  _nop
0040a240  lw v0,0x60(sp)
0040a244  nop
0040a248  beq v0,zero,0x0040a368
0040a24c  _nop
0040a250  lw t9,-0x7ec0(gp)
0040a254  li a0,0x45
0040a258  jalr t9
0040a25c  _addiu a1,sp,0x68
0040a260  lw v0,0x68(sp)
0040a264  lw gp,0x28(sp)
0040a268  addiu v0,v0,-0x3
0040a26c  sltiu v0,v0,0x2
0040a270  beq v0,zero,0x0040a368
0040a274  _addiu v0,sp,0x1d8
0040a278  lw t9,-0x7f78(gp)
0040a27c  lui a1,0x42
0040a280  move a2,s3
0040a284  move a0,v0
0040a288  addiu a1,a1,-0x76f0
0040a28c  jalr t9
0040a290  _sw v0,0x5c4(sp)
0040a294  lw gp,0x28(sp)
0040a298  lw v1,0x5c4(sp)
0040a29c  lui a0,0x42
0040a2a0  lw t9,-0x7f84(gp)
0040a2a4  addiu a0,a0,-0x76d4
0040a2a8  lui a1,0x41
0040a2ac  lui a2,0x42
0040a2b0  sw v1,0x10(sp)
0040a2b4  move a3,s3
0040a2b8  sw a0,0x14(sp)
0040a2bc  addiu a1,a1,0x7d64
0040a2c0  clear a0
0040a2c4  addiu a2,a2,-0x76d8
0040a2c8  jalr t9
0040a2cc  _sw s5,0x18(sp)
0040a2d0  lw gp,0x28(sp)
0040a2d4  lw a1,0x5c4(sp)
0040a2d8  lui a3,0x42
0040a2dc  lw t9,-0x7f84(gp)
0040a2e0  addiu a3,a3,-0x76d4
0040a2e4  move a2,s3
0040a2e8  sw a1,0x14(sp)
0040a2ec  sw a3,0x10(sp)
0040a2f0  clear a0
0040a2f4  move a1,s6
0040a2f8  addiu a3,sp,0x128
0040a2fc  jalr t9
0040a300  _sw s5,0x18(sp)
0040a304  lw gp,0x28(sp)
0040a308  addiu a0,sp,0x23c
0040a30c  lui a1,0x42
0040a310  lw t9,-0x7f78(gp)
0040a314  move a2,s3
0040a318  addiu a1,a1,-0x77d8
0040a31c  jalr t9
0040a320  _sw a0,0x5c4(sp)
0040a324  lw gp,0x28(sp)
0040a328  clear s3
0040a32c  lw t9,-0x7fb4(gp)
0040a330  lw a0,0x5c4(sp)
0040a334  jalr t9
0040a338  _addiu s3,s3,0x1
0040a33c  lw gp,0x28(sp)
0040a340  nop
0040a344  lw t9,-0x7ebc(gp)
0040a348  bne v0,zero,0x0040a368
0040a34c  _li a0,0x1
0040a350  jalr t9
0040a354  _nop
0040a358  li t9,0xa
0040a35c  lw gp,0x28(sp)
0040a360  bne s3,t9,0x0040a32c
0040a364  _nop
0040a368  lw v0,0x64(sp)
0040a36c  nop
0040a370  slti v1,v0,0x2
0040a374  beq v1,zero,0x0040a3cc
0040a378  _li v1,0x7
0040a37c  lw t9,-0x7ec0(gp)
0040a380  li a0,0x23
0040a384  jalr t9
0040a388  _addiu a1,sp,0x70
0040a38c  lw gp,0x28(sp)
0040a390  li a0,0x2d
0040a394  lw t9,-0x7ec0(gp)
0040a398  nop
0040a39c  jalr t9
0040a3a0  _addiu a1,sp,0x74
0040a3a4  lw v0,0x70(sp)
0040a3a8  lw gp,0x28(sp)
0040a3ac  bne v0,zero,0x0040a3e8
0040a3b0  _li s3,0x1
0040a3b4  lw v0,0x74(sp)
0040a3b8  nop
0040a3bc  bne v0,zero,0x0040a3e8
0040a3c0  _nop
0040a3c4  b 0x0040a570
0040a3c8  _clear s3
0040a3cc  beq v0,v1,0x0040b248
0040a3d0  _li v0,0x1
0040a3d4  lw v1,0x6c(sp)
0040a3d8  nop
0040a3dc  bne v1,v0,0x0040a3e8
0040a3e0  _clear s3
0040a3e4  li s3,0x1
0040a3e8  lw v0,0x54(sp)
0040a3ec  nop
0040a3f0  bne v0,zero,0x0040a574
0040a3f4  _li v0,0x76
0040a3f8  lw t9,-0x7f78(gp)
0040a3fc  addiu v1,sp,0x1d8
0040a400  addiu a3,sp,0x98
0040a404  lui a1,0x42
0040a408  move a0,v1
0040a40c  move a2,a3
0040a410  addiu a1,a1,-0x76c8
0040a414  sw v1,0x5dc(sp)
0040a418  jalr t9
0040a41c  _sw a3,0x5d4(sp)
0040a420  lw gp,0x28(sp)
0040a424  lw v1,0x5dc(sp)
0040a428  lw a3,0x5d4(sp)
0040a42c  lw t9,-0x7f84(gp)
0040a430  lui a1,0x41
0040a434  lui a2,0x42
0040a438  sw v1,0x10(sp)
0040a43c  sw s5,0x14(sp)
0040a440  clear a0
0040a444  addiu a1,a1,0x7d64
0040a448  jalr t9
0040a44c  _addiu a2,a2,-0x76d8
0040a450  lw v1,0x58(sp)
0040a454  li v0,0x1
0040a458  lw gp,0x28(sp)
0040a45c  bne v1,v0,0x0040a4a0
0040a460  _move a1,s6
0040a464  lw t9,-0x7ec0(gp)
0040a468  li a0,0x3c
0040a46c  jalr t9
0040a470  _addiu a1,sp,0x78
0040a474  lw gp,0x28(sp)
0040a478  lw v0,0x78(sp)
0040a47c  lw t9,-0x7e58(gp)
0040a480  bne v0,zero,0x0040a494
0040a484  _addiu a0,sp,0xe8
0040a488  lui a1,0x42
0040a48c  b 0x0040a4a8
0040a490  _addiu a1,a1,-0x76b4
0040a494  lui a1,0x42
0040a498  b 0x0040a4a8
0040a49c  _addiu a1,a1,-0x76a4
0040a4a0  lw t9,-0x7e58(gp)
0040a4a4  addiu a0,sp,0xe8
0040a4a8  jalr t9
0040a4ac  _nop
0040a4b0  li v0,0x76
0040a4b4  lw gp,0x28(sp)
0040a4b8  bne s7,v0,0x0040a4e8
0040a4bc  _li v0,0x61
0040a4c0  bne s2,v0,0x0040a4e8
0040a4c4  _nop
0040a4c8  lw v0,0x30(sp)
0040a4cc  nop
0040a4d0  beq v0,zero,0x0040a4e8
0040a4d4  _xori v0,v0,0x3
0040a4d8  lw a0,0x5c8(sp)
0040a4dc  li v1,0x1
0040a4e0  movn a0,v1,v0
0040a4e4  sw a0,0x5c8(sp)
0040a4e8  lw v1,0x58(sp)
0040a4ec  li v0,0x2
0040a4f0  beq v1,v0,0x0040a570
0040a4f4  _nop
0040a4f8  lw a1,0x5c8(sp)
0040a4fc  nop
0040a500  bne a1,zero,0x0040a570
0040a504  _nop
0040a508  lw v1,0x6c(sp)
0040a50c  nop
0040a510  bne v1,v0,0x0040a520
0040a514  _nop
0040a518  beq s3,zero,0x0040a574
0040a51c  _li v0,0x76
0040a520  lw t9,-0x7f84(gp)
0040a524  addiu v0,sp,0xe8
0040a528  sw v0,0x10(sp)
0040a52c  addiu v0,sp,0x1d8
0040a530  sw v0,0x14(sp)
0040a534  sw s5,0x18(sp)
0040a538  clear a0
0040a53c  move a1,s6
0040a540  addiu a2,sp,0x98
0040a544  jalr t9
0040a548  _addiu a3,sp,0x128
0040a54c  li v0,0x76
0040a550  lw gp,0x28(sp)
0040a554  bne s7,v0,0x0040a5e4
0040a558  _li s1,0x1
0040a55c  li v0,0x61
0040a560  beq s2,v0,0x0040a5fc
0040a564  _nop
0040a568  b 0x0040a57c
0040a56c  _sw s1,0x5cc(sp)
0040a570  li v0,0x76
0040a574  bne s7,v0,0x0040a5ec
0040a578  _li v0,0x78
0040a57c  li v0,0x78
0040a580  bne s2,v0,0x0040b250
0040a584  _li v0,0x61
0040a588  lw v0,0x54(sp)
0040a58c  nop
0040a590  bne v0,zero,0x0040a790
0040a594  _addiu a0,sp,0xe8
0040a598  lw t9,-0x7f64(gp)
0040a59c  nop
0040a5a0  jalr t9
0040a5a4  _move a1,s6
0040a5a8  lw gp,0x28(sp)
0040a5ac  bne v0,zero,0x0040a5bc
0040a5b0  _nop
0040a5b4  beq s3,zero,0x0040a790
0040a5b8  _nop
0040a5bc  lw t9,-0x7ef0(gp)
0040a5c0  addiu s3,sp,0x108
0040a5c4  move a0,s3
0040a5c8  jalr t9
0040a5cc  _move a1,s0
0040a5d0  lw gp,0x28(sp)
0040a5d4  move a0,s3
0040a5d8  lw t9,-0x7ef0(gp)
0040a5dc  b 0x0040a64c
0040a5e0  _addiu a1,sp,0x98
0040a5e4  sw s1,0x5cc(sp)
0040a5e8  li v0,0x78
0040a5ec  bne s2,v0,0x0040a690
0040a5f0  _li a0,0x3e
0040a5f4  b 0x0040a790
0040a5f8  _nop
0040a5fc  li a3,0x1
0040a600  sw a3,0x5d0(sp)
0040a604  lw v0,0x54(sp)
0040a608  nop
0040a60c  bne v0,zero,0x0040a790
0040a610  _nop
0040a614  lw v0,0x3c(sp)
0040a618  nop
0040a61c  beq v0,zero,0x0040a634
0040a620  _nop
0040a624  lw t9,0x5d0(sp)
0040a628  nop
0040a62c  beq t9,zero,0x0040a790
0040a630  _nop
0040a634  lb v0,0x430(sp)
0040a638  addiu s3,sp,0x430
0040a63c  bne v0,zero,0x0040a660
0040a640  _addiu a1,sp,0x98
0040a644  lw t9,-0x7e58(gp)
0040a648  move a0,s3
0040a64c  jalr t9
0040a650  _nop
0040a654  lw gp,0x28(sp)
0040a658  b 0x0040a790
0040a65c  _nop
0040a660  lw t9,-0x7f78(gp)
0040a664  addiu s7,sp,0xc8
0040a668  move a2,a1
0040a66c  lui a1,0x42
0040a670  move a0,s7
0040a674  jalr t9
0040a678  _addiu a1,a1,-0x7884
0040a67c  lw gp,0x28(sp)
0040a680  move a0,s3
0040a684  lw t9,-0x7ef0(gp)
0040a688  b 0x0040a64c
0040a68c  _move a1,s7
0040a690  lw t9,-0x7ec0(gp)
0040a694  nop
0040a698  jalr t9
0040a69c  _addiu a1,sp,0x80
0040a6a0  lw gp,0x28(sp)
0040a6a4  li a0,0x10e
0040a6a8  lw t9,-0x7ec0(gp)
0040a6ac  nop
0040a6b0  jalr t9
0040a6b4  _addiu a1,sp,0x7c
0040a6b8  lw v0,0x5cc(sp)
0040a6bc  lw gp,0x28(sp)
0040a6c0  bne v0,zero,0x0040a6e8
0040a6c4  _nop
0040a6c8  lw v0,0x80(sp)
0040a6cc  nop
0040a6d0  beq v0,zero,0x0040a6e8
0040a6d4  _nop
0040a6d8  lw v0,0x7c(sp)
0040a6dc  nop
0040a6e0  bne v0,zero,0x0040b260
0040a6e4  _li v0,0x61
0040a6e8  lb v0,0x430(sp)
0040a6ec  addiu s3,sp,0x430
0040a6f0  bne v0,zero,0x0040a704
0040a6f4  _addiu a1,sp,0x98
0040a6f8  lw t9,-0x7e58(gp)
0040a6fc  b 0x0040a734
0040a700  _move a0,s3
0040a704  lw t9,-0x7f78(gp)
0040a708  addiu s7,sp,0xc8
0040a70c  move a2,a1
0040a710  lui a1,0x42
0040a714  move a0,s7
0040a718  jalr t9
0040a71c  _addiu a1,a1,-0x7884
0040a720  lw gp,0x28(sp)
0040a724  move a0,s3
0040a728  move a1,s7
0040a72c  lw t9,-0x7ef0(gp)
0040a730  nop
0040a734  jalr t9
0040a738  _nop
0040a73c  lw gp,0x28(sp)
0040a740  b 0x0040b260
0040a744  _li v0,0x61
0040a748  lw a0,0x54(sp)
0040a74c  lw v0,0x58(sp)
0040a750  nop
0040a754  beq v0,zero,0x0040a778
0040a758  _movz s4,v1,a0
0040a75c  li v1,0x3
0040a760  beq v0,v1,0x0040a778
0040a764  _li v1,0x4
0040a768  beq v0,v1,0x0040a778
0040a76c  _li v1,0x6
0040a770  bne v0,v1,0x0040a77c
0040a774  _nop
0040a778  li s8,0x1
0040a77c  lw a0,0x5c0(sp)
0040a780  lw v1,0x80(sp)
0040a784  li v0,0x1
0040a788  movz a0,v0,v1
0040a78c  sw a0,0x5c0(sp)
0040a790  lw t9,-0x7e68(gp)
0040a794  addiu s3,sp,0x84
0040a798  clear a0
0040a79c  move a1,s0
0040a7a0  jalr t9
0040a7a4  _move a2,s3
0040a7a8  lw gp,0x28(sp)
0040a7ac  bne v0,zero,0x0040a100
0040a7b0  _nop
0040a7b4  li v0,0x1
0040a7b8  bne s4,v0,0x0040aa14
0040a7bc  _nop
0040a7c0  bne s8,s4,0x0040aa14
0040a7c4  _nop
0040a7c8  lw a1,0x5c0(sp)
0040a7cc  nop
0040a7d0  bne a1,s8,0x0040aa14
0040a7d4  _addiu a1,sp,0x430
0040a7d8  lw t9,-0x7e58(gp)
0040a7dc  addiu s1,sp,0x2a0
0040a7e0  move a0,s1
0040a7e4  jalr t9
0040a7e8  _sw zero,0x84(sp)
0040a7ec  lw gp,0x28(sp)
0040a7f0  move a2,s3
0040a7f4  move a0,s1
0040a7f8  lw t9,-0x7e68(gp)
0040a7fc  nop
0040a800  jalr t9
0040a804  _move a1,s0
0040a808  lw gp,0x28(sp)
0040a80c  beq v0,zero,0x0040a974
0040a810  _move a2,v0
0040a814  lui s4,0x42
0040a818  addiu a3,sp,0x30
0040a81c  addiu s4,s4,-0x7884
0040a820  addiu s2,sp,0x368
0040a824  addiu s1,sp,0xc8
0040a828  sw a3,0x5c0(sp)
0040a82c  addiu s8,sp,0x3c
0040a830  li s7,0x3
0040a834  li s6,0x4
0040a838  li s5,0x6
0040a83c  lw t9,-0x7f64(gp)
0040a840  lui a1,0x41
0040a844  move a0,a2
0040a848  sw a2,0x5d4(sp)
0040a84c  jalr t9
0040a850  _addiu a1,a1,0x79f4
0040a854  lw gp,0x28(sp)
0040a858  lw a2,0x5d4(sp)
0040a85c  beq v0,zero,0x0040a888
0040a860  _nop
0040a864  lw t9,-0x7f64(gp)
0040a868  lui a1,0x41
0040a86c  move a0,a2
0040a870  jalr t9
0040a874  _addiu a1,a1,0x7ecc
0040a878  lw gp,0x28(sp)
0040a87c  lw a2,0x5d4(sp)
0040a880  bne v0,zero,0x0040a904
0040a884  _nop
0040a888  lw t9,-0x7e94(gp)
0040a88c  move a0,a2
0040a890  jalr t9
0040a894  _sw a2,0x5d4(sp)
0040a898  lw gp,0x28(sp)
0040a89c  lw a1,0x5c0(sp)
0040a8a0  lw t9,-0x7ec0(gp)
0040a8a4  nop
0040a8a8  jalr t9
0040a8ac  _li a0,0x3b
0040a8b0  lw gp,0x28(sp)
0040a8b4  li a0,0x3e
0040a8b8  lw t9,-0x7ec0(gp)
0040a8bc  nop
0040a8c0  jalr t9
0040a8c4  _move a1,s8
0040a8c8  lw v0,0x30(sp)
0040a8cc  lw gp,0x28(sp)
0040a8d0  lw a2,0x5d4(sp)
0040a8d4  beq v0,zero,0x0040a8f4
0040a8d8  _nop
0040a8dc  beq v0,s7,0x0040a8f4
0040a8e0  _nop
0040a8e4  beq v0,s6,0x0040a8f4
0040a8e8  _nop
0040a8ec  bne v0,s5,0x0040a954
0040a8f0  _nop
0040a8f4  lw v0,0x3c(sp)
0040a8f8  nop
0040a8fc  bne v0,zero,0x0040a954
0040a900  _nop
0040a904  lb v0,0x368(sp)
0040a908  nop
0040a90c  bne v0,zero,0x0040a920
0040a910  _move a0,s2
0040a914  lw t9,-0x7e58(gp)
0040a918  b 0x0040a944
0040a91c  _move a1,a2
0040a920  lw t9,-0x7f78(gp)
0040a924  move a0,s1
0040a928  jalr t9
0040a92c  _move a1,s4
0040a930  lw gp,0x28(sp)
0040a934  move a0,s2
0040a938  move a1,s1
0040a93c  lw t9,-0x7ef0(gp)
0040a940  nop
0040a944  jalr t9
0040a948  _nop
0040a94c  lw gp,0x28(sp)
0040a950  nop
0040a954  lw t9,-0x7e68(gp)
0040a958  move a2,s3
0040a95c  clear a0
0040a960  jalr t9
0040a964  _move a1,s0
0040a968  lw gp,0x28(sp)
0040a96c  bne v0,zero,0x0040a83c
0040a970  _move a2,v0
0040a974  lw t9,-0x7f78(gp)
0040a978  addiu s1,sp,0x1d8
0040a97c  lui a1,0x42
0040a980  addiu a1,a1,-0x7694
0040a984  addiu a2,sp,0x128
0040a988  addiu a3,sp,0x368
0040a98c  jalr t9
0040a990  _move a0,s1
0040a994  lw gp,0x28(sp)
0040a998  move a0,s1
0040a99c  lw t9,-0x7eb4(gp)
0040a9a0  nop
0040a9a4  jalr t9
0040a9a8  _lui s1,0x42
0040a9ac  lw gp,0x28(sp)
0040a9b0  nop
0040a9b4  lw t9,-0x7fb4(gp)
0040a9b8  nop
0040a9bc  jalr t9
0040a9c0  _addiu a0,s1,-0x7688
0040a9c4  lw gp,0x28(sp)
0040a9c8  beq v0,zero,0x0040a9e8
0040a9cc  _nop
0040a9d0  lw t9,-0x7f18(gp)
0040a9d4  nop
0040a9d8  jalr t9
0040a9dc  _addiu a0,s1,-0x7688
0040a9e0  lw gp,0x28(sp)
0040a9e4  nop
0040a9e8  lw t9,-0x7f84(gp)
0040a9ec  lui a0,0x42
0040a9f0  lui a1,0x41
0040a9f4  lui a3,0x42
0040a9f8  addiu a0,a0,-0x7688
0040a9fc  addiu a1,a1,0x7a78
0040aa00  addiu a3,a3,-0x67b4
0040aa04  jalr t9
0040aa08  _addiu a2,sp,0x1d8
0040aa0c  lw gp,0x28(sp)
0040aa10  li s1,0x1
0040aa14  lw t9,-0x7fb4(gp)
0040aa18  lui a0,0x42
0040aa1c  jalr t9
0040aa20  _addiu a0,a0,-0x7674
0040aa24  lw gp,0x28(sp)
0040aa28  beq v0,zero,0x0040b1c0
0040aa2c  _addiu a0,sp,0x1d8
0040aa30  lw t9,-0x7f4c(gp)
0040aa34  clear a1
0040aa38  jalr t9
0040aa3c  _li a2,0x64
0040aa40  lw gp,0x28(sp)
0040aa44  li a2,0x64
0040aa48  addiu a0,sp,0x23c
0040aa4c  lw t9,-0x7f4c(gp)
0040aa50  clear a1
0040aa54  jalr t9
0040aa58  _addiu s2,sp,0x2a0
0040aa5c  lw gp,0x28(sp)
0040aa60  move a0,s2
0040aa64  addiu a1,sp,0x430
0040aa68  lw t9,-0x7e58(gp)
0040aa6c  nop
0040aa70  jalr t9
0040aa74  _sw zero,0x84(sp)
0040aa78  lw gp,0x28(sp)
0040aa7c  move a0,s2
0040aa80  move a1,s0
0040aa84  lw t9,-0x7e68(gp)
0040aa88  nop
0040aa8c  jalr t9
0040aa90  _addiu a2,sp,0x84
0040aa94  lw gp,0x28(sp)
0040aa98  beq v0,zero,0x0040b1c0
0040aa9c  _move s2,v0
0040aaa0  lui s5,0x41
0040aaa4  lui s3,0x42
0040aaa8  lui s4,0x42
0040aaac  addiu s5,s5,0x79f4
0040aab0  addiu s3,s3,-0x67b4
0040aab4  addiu s4,s4,-0x7608
0040aab8  lw t9,-0x7f4c(gp)
0040aabc  addiu a0,sp,0x148
0040aac0  clear a1
0040aac4  jalr t9
0040aac8  _li a2,0x28
0040aacc  lw gp,0x28(sp)
0040aad0  addiu a0,sp,0x170
0040aad4  clear a1
0040aad8  lw t9,-0x7f4c(gp)
0040aadc  nop
0040aae0  jalr t9
0040aae4  _li a2,0x28
0040aae8  lw gp,0x28(sp)
0040aaec  move a0,s2
0040aaf0  lw t9,-0x7f64(gp)
0040aaf4  nop
0040aaf8  jalr t9
0040aafc  _move a1,s5
0040ab00  lw gp,0x28(sp)
0040ab04  beq v0,zero,0x0040ab28
0040ab08  _lui a1,0x41
0040ab0c  lw t9,-0x7f64(gp)
0040ab10  addiu a1,a1,0x7ecc
0040ab14  jalr t9
0040ab18  _move a0,s2
0040ab1c  lw gp,0x28(sp)
0040ab20  bne v0,zero,0x0040b1a0
0040ab24  _nop
0040ab28  lw t9,-0x7e94(gp)
0040ab2c  nop
0040ab30  jalr t9
0040ab34  _move a0,s2
0040ab38  lw gp,0x28(sp)
0040ab3c  li a0,0x3b
0040ab40  lw t9,-0x7ec0(gp)
0040ab44  nop
0040ab48  jalr t9
0040ab4c  _addiu a1,sp,0x30
0040ab50  lw gp,0x28(sp)
0040ab54  li a0,0x23
0040ab58  lw t9,-0x7ec0(gp)
0040ab5c  nop
0040ab60  jalr t9
0040ab64  _addiu a1,sp,0x48
0040ab68  lw gp,0x28(sp)
0040ab6c  li a0,0x19
0040ab70  lw t9,-0x7ec0(gp)
0040ab74  nop
0040ab78  jalr t9
0040ab7c  _addiu a1,sp,0x4c
0040ab80  lw gp,0x28(sp)
0040ab84  li a0,0x2d
0040ab88  lw t9,-0x7ec0(gp)
0040ab8c  nop
0040ab90  jalr t9
0040ab94  _addiu a1,sp,0x50
0040ab98  lw gp,0x28(sp)
0040ab9c  li a0,0x1c
0040aba0  lw t9,-0x7ec0(gp)
0040aba4  nop
0040aba8  jalr t9
0040abac  _addiu a1,sp,0x38
0040abb0  lw gp,0x28(sp)
0040abb4  li a0,0x117
0040abb8  lw t9,-0x7ec0(gp)
0040abbc  nop
0040abc0  jalr t9
0040abc4  _addiu a1,sp,0x88
0040abc8  lw s6,0x4c(sp)
0040abcc  lw gp,0x28(sp)
0040abd0  sw zero,0x34(sp)
0040abd4  slti v0,s6,0x2
0040abd8  sw zero,0x44(sp)
0040abdc  beq v0,zero,0x0040abfc
0040abe0  _xori s7,s6,0x7
0040abe4  lw v0,0x48(sp)
0040abe8  nop
0040abec  bne v0,zero,0x0040ac00
0040abf0  _li s7,0x1
0040abf4  lw s7,0x50(sp)
0040abf8  nop
0040abfc  sltu s7,zero,s7
0040ac00  lw t9,-0x7f64(gp)
0040ac04  move a0,s2
0040ac08  jalr t9
0040ac0c  _move a1,s5
0040ac10  lw gp,0x28(sp)
0040ac14  bne v0,zero,0x0040ac3c
0040ac18  _nop
0040ac1c  lw v0,0x40(sp)
0040ac20  nop
0040ac24  bne v0,zero,0x0040b160
0040ac28  _li v0,0x2
0040ac2c  lw v1,0x30(sp)
0040ac30  nop
0040ac34  beq v1,v0,0x0040b160
0040ac38  _nop
0040ac3c  lw v0,0x30(sp)
0040ac40  nop
0040ac44  bne v0,zero,0x0040ac84
0040ac48  _addiu v0,sp,0x198
0040ac4c  slti v0,s6,0x2
0040ac50  beq v0,zero,0x0040ac68
0040ac54  _li v0,0x7
0040ac58  bne s7,zero,0x0040b160
0040ac5c  _addiu v0,sp,0x198
0040ac60  b 0x0040ac84
0040ac64  _nop
0040ac68  beq s6,v0,0x0040ac80
0040ac6c  _li v0,0x1
0040ac70  lw v1,0x38(sp)
0040ac74  nop
0040ac78  beq v1,v0,0x0040b160
0040ac7c  _nop
0040ac80  addiu v0,sp,0x198
0040ac84  lw t9,-0x7fb4(gp)
0040ac88  sw zero,0xc(v0)
0040ac8c  sw zero,0x4(v0)
0040ac90  sw zero,0x8(v0)
0040ac94  lui v0,0x42
0040ac98  addiu v0,v0,-0x773c
0040ac9c  lui a0,0x42
0040aca0  sw v0,0x198(sp)
0040aca4  jalr t9
0040aca8  _addiu a0,a0,-0x7668
0040acac  lw gp,0x28(sp)
0040acb0  bne v0,zero,0x0040ad38
0040acb4  _lui s1,0x42
0040acb8  lw t9,-0x7fb4(gp)
0040acbc  nop
0040acc0  jalr t9
0040acc4  _addiu a0,s1,-0x7648
0040acc8  lw gp,0x28(sp)
0040accc  beq v0,zero,0x0040acfc
0040acd0  _lui a1,0x41
0040acd4  lw t9,-0x7f84(gp)
0040acd8  lui a3,0x42
0040acdc  sw s3,0x10(sp)
0040ace0  addiu a1,a1,0x7adc
0040ace4  addiu a2,s1,-0x7648
0040ace8  addiu a3,a3,-0x763c
0040acec  jalr t9
0040acf0  _clear a0
0040acf4  lw gp,0x28(sp)
0040acf8  nop
0040acfc  lw t9,-0x7f84(gp)
0040ad00  lui a1,0x42
0040ad04  lui a2,0x42
0040ad08  addiu a1,a1,-0x7638
0040ad0c  addiu a2,a2,-0x7648
0040ad10  clear a0
0040ad14  jalr t9
0040ad18  _move a3,s3
0040ad1c  lw gp,0x28(sp)
0040ad20  lui a0,0x42
0040ad24  lw t9,-0x7eb4(gp)
0040ad28  nop
0040ad2c  jalr t9
0040ad30  _addiu a0,a0,-0x7630
0040ad34  lw gp,0x28(sp)
0040ad38  lw v1,0x30(sp)
0040ad3c  li v0,0x1
0040ad40  bne v1,v0,0x0040ad68
0040ad44  _lui v0,0x42
0040ad48  addiu v0,v0,-0x7610
0040ad4c  sw v0,0x19c(sp)
0040ad50  lui v0,0x42
0040ad54  addiu v0,v0,-0x6bec
0040ad58  sw v0,0x1a0(sp)
0040ad5c  sw zero,0x88(sp)
0040ad60  b 0x0040ad70
0040ad64  _li s1,0x3
0040ad68  sw s4,0x19c(sp)
0040ad6c  li s1,0x2
0040ad70  lw v1,0x88(sp)
0040ad74  li v0,0x1
0040ad78  bne v1,v0,0x0040ae24
0040ad7c  _lui t1,0x42
0040ad80  lw t9,-0x7f84(gp)
0040ad84  lui t0,0x41
0040ad88  lui v1,0x42
0040ad8c  addiu t1,t1,-0x7600
0040ad90  addiu t0,t0,0x7f4c
0040ad94  addiu v1,v1,-0x75f0
0040ad98  addiu s8,sp,0x128
0040ad9c  lui s7,0x41
0040ada0  lui s6,0x41
0040ada4  lui a2,0x41
0040ada8  addiu a2,a2,0x7f5c
0040adac  sw t1,0x10(sp)
0040adb0  sw t0,0x14(sp)
0040adb4  sw v1,0x18(sp)
0040adb8  clear a0
0040adbc  addiu a1,s7,0x7f54
0040adc0  addiu a3,s6,0x7f64
0040adc4  sw v1,0x5dc(sp)
0040adc8  sw t0,0x5d8(sp)
0040adcc  sw t1,0x5d4(sp)
0040add0  sw s8,0x1c(sp)
0040add4  jalr t9
0040add8  _sw s3,0x20(sp)
0040addc  lw gp,0x28(sp)
0040ade0  lw t1,0x5d4(sp)
0040ade4  lw t0,0x5d8(sp)
0040ade8  lw v1,0x5dc(sp)
0040adec  lw t9,-0x7f84(gp)
0040adf0  lui a2,0x41
0040adf4  sw t1,0x10(sp)
0040adf8  sw t0,0x14(sp)
0040adfc  sw v1,0x18(sp)
0040ae00  sw s8,0x1c(sp)
0040ae04  sw s3,0x20(sp)
0040ae08  addiu a1,s7,0x7f54
0040ae0c  addiu a2,a2,0x7f60
0040ae10  addiu a3,s6,0x7f64
0040ae14  jalr t9
0040ae18  _clear a0
0040ae1c  lw gp,0x28(sp)
0040ae20  nop
0040ae24  lw t9,-0x7f78(gp)
0040ae28  addiu s6,sp,0x148
0040ae2c  lui a1,0x42
0040ae30  move a0,s6
0040ae34  move a2,s2
0040ae38  jalr t9
0040ae3c  _addiu a1,a1,-0x75e0
0040ae40  lw gp,0x28(sp)
0040ae44  lui a3,0x42
0040ae48  lui a1,0x41
0040ae4c  lw t9,-0x7f84(gp)
0040ae50  lui a2,0x42
0040ae54  addiu a3,a3,-0x75bc
0040ae58  addiu a1,a1,0x7d64
0040ae5c  addiu a2,a2,-0x75cc
0040ae60  sw s6,0x10(sp)
0040ae64  sw s2,0x14(sp)
0040ae68  clear a0
0040ae6c  jalr t9
0040ae70  _sw s3,0x18(sp)
0040ae74  addiu a1,s1,0x1
0040ae78  lw gp,0x28(sp)
0040ae7c  addiu s7,sp,0x30
0040ae80  sll a1,a1,0x2
0040ae84  sll a2,s1,0x2
0040ae88  lui a3,0x42
0040ae8c  addu a2,s7,a2
0040ae90  addu a1,s7,a1
0040ae94  addiu a3,a3,-0x75ac
0040ae98  addiu a0,s1,0x2
0040ae9c  sw a3,0x168(a2)
0040aea0  addiu v1,s1,0x3
0040aea4  sw s6,0x168(a1)
0040aea8  addiu v0,s1,0x4
0040aeac  sll a0,a0,0x2
0040aeb0  lui a1,0x42
0040aeb4  lw t9,-0x7f78(gp)
0040aeb8  addu a0,s7,a0
0040aebc  addiu a1,a1,-0x75a8
0040aec0  sll v1,v1,0x2
0040aec4  sll v0,v0,0x2
0040aec8  lui a3,0x42
0040aecc  sw a1,0x168(a0)
0040aed0  addu v1,s7,v1
0040aed4  addiu a3,a3,-0x75a4
0040aed8  addu v0,s7,v0
0040aedc  addiu s8,sp,0x170
0040aee0  lui a1,0x42
0040aee4  sw s2,0x168(v1)
0040aee8  move a2,s2
0040aeec  sw a3,0x168(v0)
0040aef0  addiu a1,a1,-0x75a0
0040aef4  jalr t9
0040aef8  _move a0,s8
0040aefc  lw gp,0x28(sp)
0040af00  addiu s2,s1,0x5
0040af04  sll s2,s2,0x2
0040af08  lw t9,-0x7fb4(gp)
0040af0c  addu s2,s7,s2
0040af10  lui s6,0x42
0040af14  sw s8,0x168(s2)
0040af18  jalr t9
0040af1c  _addiu a0,s6,-0x758c
0040af20  lw gp,0x28(sp)
0040af24  beq v0,zero,0x0040af54
0040af28  _addiu s2,s1,0x6
0040af2c  lw t9,-0x7f18(gp)
0040af30  sll s2,s2,0x2
0040af34  lui v0,0x42
0040af38  addu s7,s7,s2
0040af3c  addiu v0,v0,-0x7578
0040af40  sw v0,0x168(s7)
0040af44  jalr t9
0040af48  _addiu a0,s6,-0x758c
0040af4c  lw gp,0x28(sp)
0040af50  addiu s2,s1,0x7
0040af54  lw t9,-0x7fb4(gp)
0040af58  lui s1,0x42
0040af5c  jalr t9
0040af60  _addiu a0,s1,-0x756c
0040af64  lw gp,0x28(sp)
0040af68  beq v0,zero,0x0040af8c
0040af6c  _sll v0,s2,0x2
0040af70  lw t9,-0x7f18(gp)
0040af74  addu v0,sp,v0
0040af78  sw s4,0x198(v0)
0040af7c  jalr t9
0040af80  _addiu a0,s1,-0x756c
0040af84  lw gp,0x28(sp)
0040af88  addiu s2,s2,0x1
0040af8c  lw t9,-0x7fb4(gp)
0040af90  lui s1,0x42
0040af94  jalr t9
0040af98  _addiu a0,s1,-0x7558
0040af9c  lw gp,0x28(sp)
0040afa0  beq v0,zero,0x0040b054
0040afa4  _lui a1,0x42
0040afa8  lw t9,-0x7f48(gp)
0040afac  addiu a0,s1,-0x7558
0040afb0  jalr t9
0040afb4  _addiu a1,a1,-0x78fc
0040afb8  lw gp,0x28(sp)
0040afbc  beq v0,zero,0x0040affc
0040afc0  _move s1,v0
0040afc4  lw t9,-0x7e8c(gp)
0040afc8  lui a1,0x42
0040afcc  addiu a1,a1,-0x666c
0040afd0  move a0,v0
0040afd4  jalr t9
0040afd8  _addiu a2,sp,0x23c
0040afdc  lw gp,0x28(sp)
0040afe0  nop
0040afe4  lw t9,-0x7f54(gp)
0040afe8  nop
0040afec  jalr t9
0040aff0  _move a0,s1
0040aff4  lw gp,0x28(sp)
0040aff8  nop
0040affc  lw t9,-0x7e58(gp)
0040b000  addiu s1,sp,0xa8
0040b004  move a0,s1
0040b008  jalr t9
0040b00c  _addiu a1,sp,0x23c
0040b010  lw gp,0x28(sp)
0040b014  addiu v1,s2,0x1
0040b018  sll a0,s2,0x2
0040b01c  addiu v0,sp,0x30
0040b020  sll v1,v1,0x2
0040b024  addu v1,v0,v1
0040b028  addu v0,v0,a0
0040b02c  lui a0,0x42
0040b030  lw t9,-0x7f18(gp)
0040b034  addiu a0,a0,-0x7544
0040b038  sw a0,0x168(v0)
0040b03c  lui a0,0x42
0040b040  sw s1,0x168(v1)
0040b044  jalr t9
0040b048  _addiu a0,a0,-0x7558
0040b04c  lw gp,0x28(sp)
0040b050  addiu s2,s2,0x2
0040b054  lw t9,-0x7fb4(gp)
0040b058  lui s1,0x42
0040b05c  jalr t9
0040b060  _addiu a0,s1,-0x7538
0040b064  lw gp,0x28(sp)
0040b068  beq v0,zero,0x0040b124
0040b06c  _addiu v1,s2,0x1
0040b070  lw t9,-0x7f48(gp)
0040b074  lui a1,0x42
0040b078  addiu a0,s1,-0x7538
0040b07c  jalr t9
0040b080  _addiu a1,a1,-0x78fc
0040b084  lw gp,0x28(sp)
0040b088  beq v0,zero,0x0040b0c8
0040b08c  _move s1,v0
0040b090  lw t9,-0x7e8c(gp)
0040b094  lui a1,0x42
0040b098  addiu a1,a1,-0x666c
0040b09c  move a0,v0
0040b0a0  jalr t9
0040b0a4  _addiu a2,sp,0x23c
0040b0a8  lw gp,0x28(sp)
0040b0ac  nop
0040b0b0  lw t9,-0x7f54(gp)
0040b0b4  nop
0040b0b8  jalr t9
0040b0bc  _move a0,s1
0040b0c0  lw gp,0x28(sp)
0040b0c4  nop
0040b0c8  lw t9,-0x7e58(gp)
0040b0cc  addiu s1,sp,0xb8
0040b0d0  move a0,s1
0040b0d4  jalr t9
0040b0d8  _addiu a1,sp,0x23c
0040b0dc  lw gp,0x28(sp)
0040b0e0  addiu v1,s2,0x1
0040b0e4  sll a0,s2,0x2
0040b0e8  lw t9,-0x7f18(gp)
0040b0ec  addiu v0,sp,0x30
0040b0f0  sll v1,v1,0x2
0040b0f4  lui a1,0x42
0040b0f8  addu v1,v0,v1
0040b0fc  addiu a1,a1,-0x7524
0040b100  addu v0,v0,a0
0040b104  lui a0,0x42
0040b108  sw a1,0x168(v0)
0040b10c  addiu a0,a0,-0x7538
0040b110  jalr t9
0040b114  _sw s1,0x168(v1)
0040b118  lw gp,0x28(sp)
0040b11c  addiu s2,s2,0x2
0040b120  addiu v1,s2,0x1
0040b124  lw t9,-0x7f8c(gp)
0040b128  addiu v0,sp,0x30
0040b12c  sll v1,v1,0x2
0040b130  sll s2,s2,0x2
0040b134  lui a3,0x41
0040b138  addu v1,v0,v1
0040b13c  addiu a3,a3,0x7a24
0040b140  addu v0,v0,s2
0040b144  sw a3,0x168(v0)
0040b148  addiu a0,sp,0x198
0040b14c  sw zero,0x168(v1)
0040b150  jalr t9
0040b154  _clear a1
0040b158  lw gp,0x28(sp)
0040b15c  li s1,0x1
0040b160  li s2,0x5
0040b164  addiu s6,sp,0x170
0040b168  lw t9,-0x7fb4(gp)
0040b16c  nop
0040b170  jalr t9
0040b174  _move a0,s6
0040b178  lw gp,0x28(sp)
0040b17c  bne v0,zero,0x0040b1a0
0040b180  _li a0,0x1
0040b184  lw t9,-0x7ebc(gp)
0040b188  nop
0040b18c  jalr t9
0040b190  _addiu s2,s2,-0x1
0040b194  lw gp,0x28(sp)
0040b198  bne s2,zero,0x0040b168
0040b19c  _nop
0040b1a0  lw t9,-0x7e68(gp)
0040b1a4  clear a0
0040b1a8  move a1,s0
0040b1ac  jalr t9
0040b1b0  _addiu a2,sp,0x84
0040b1b4  lw gp,0x28(sp)
0040b1b8  bne v0,zero,0x0040aab8
0040b1bc  _move s2,v0
0040b1c0  beq s1,zero,0x0040b214
0040b1c4  _addiu a2,sp,0x430
0040b1c8  lb v0,0x108(sp)
0040b1cc  lw t9,-0x7f78(gp)
0040b1d0  beq v0,zero,0x0040b1f0
0040b1d4  _addiu a0,sp,0x1d8
0040b1d8  lui a1,0x42
0040b1dc  addiu a1,a1,-0x7518
0040b1e0  jalr t9
0040b1e4  _addiu a3,sp,0x108
0040b1e8  b 0x0040b1fc
0040b1ec  _nop
0040b1f0  lui a1,0x42
0040b1f4  jalr t9
0040b1f8  _addiu a1,a1,-0x7508
0040b1fc  lw gp,0x28(sp)
0040b200  nop
0040b204  lw t9,-0x7eb4(gp)
0040b208  nop
0040b20c  jalr t9
0040b210  _addiu a0,sp,0x1d8
0040b214  lw ra,0x604(sp)
0040b218  lw s8,0x600(sp)
0040b21c  lw s7,0x5fc(sp)
0040b220  lw s6,0x5f8(sp)
0040b224  lw s5,0x5f4(sp)
0040b228  lw s4,0x5f0(sp)
0040b22c  lw s3,0x5ec(sp)
0040b230  lw s2,0x5e8(sp)
0040b234  lw s1,0x5e4(sp)
0040b238  lw s0,0x5e0(sp)
0040b23c  clear v0
0040b240  jr ra
0040b244  _addiu sp,sp,0x608
0040b248  b 0x0040a570
0040b24c  _clear s3
0040b250  bne s2,v0,0x0040a790
0040b254  _nop
0040b258  b 0x0040a604
0040b25c  _nop
0040b260  beq s2,v0,0x0040a790
0040b264  _li v1,0x1
0040b268  b 0x0040a748
0040b26c  _nop
