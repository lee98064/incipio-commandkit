# UploadFromUsb @ 00413e84
00413e84  addiu sp,sp,-0x1b8
00413e88  sw ra,0x1b4(sp)
00413e8c  sw s5,0x1b0(sp)
00413e90  sw s4,0x1ac(sp)
00413e94  sw s3,0x1a8(sp)
00413e98  sw s2,0x1a4(sp)
00413e9c  sw s1,0x1a0(sp)
00413ea0  sw s0,0x19c(sp)
00413ea4  lui gp,0x58
00413ea8  addiu gp,gp,0x5010
00413eac  sw gp,0x10(sp)
00413eb0  lui v1,0x53
00413eb4  addiu v0,v1,0x3050
00413eb8  lbu a2,0x6(v0)
00413ebc  lw v1,0x3050(v1)
00413ec0  lhu v0,0x4(v0)
00413ec4  lw t9,-0x7764(gp)
00413ec8  sb a2,0x1e(sp)
00413ecc  sw v1,0x18(sp)
00413ed0  sh v0,0x1c(sp)
00413ed4  move s0,a0
00413ed8  move s1,a1
00413edc  addiu a0,sp,0x1f
00413ee0  clear a1
00413ee4  jalr t9
00413ee8  _li a2,0x29
00413eec  lw gp,0x10(sp)
00413ef0  beq s0,zero,0x00413f10
00413ef4  _addiu a0,sp,0x48
00413ef8  lw t9,-0x7f3c(gp)
00413efc  nop
00413f00  jalr t9
00413f04  _move a1,s0
00413f08  b 0x00413f24
00413f0c  _nop
00413f10  lw t9,-0x7930(gp)
00413f14  lui a1,0x53
00413f18  addiu a1,a1,0x2cec
00413f1c  jalr t9
00413f20  _addiu a2,sp,0x18
00413f24  lw gp,0x10(sp)
00413f28  addiu s0,sp,0x48
00413f2c  lui a0,0x53
00413f30  lw t9,-0x7dc8(gp)
00413f34  addiu a0,a0,0x2d00
00413f38  jalr t9
00413f3c  _move a1,s0
00413f40  jal 0x00413e4c
00413f44  _move a0,s0
00413f48  lw gp,0x10(sp)
00413f4c  bne v0,zero,0x00413f60
00413f50  _lui a1,0x53
00413f54  lw t9,-0x7f3c(gp)
00413f58  b 0x00413ffc
00413f5c  _addiu a1,a1,0x2d1c
00413f60  lw t9,-0x68c0(gp)
00413f64  move a0,s0
00413f68  jalr t9
00413f6c  _clear a1
00413f70  lw gp,0x10(sp)
00413f74  bne v0,zero,0x00413f8c
00413f78  _move s3,v0
00413f7c  lui a1,0x53
00413f80  lw t9,-0x7f3c(gp)
00413f84  b 0x00413ffc
00413f88  _addiu a1,a1,0x2d44
00413f8c  lw t9,-0x6eb4(gp)
00413f90  move a0,v0
00413f94  clear a1
00413f98  jalr t9
00413f9c  _clear a2
00413fa0  lw gp,0x10(sp)
00413fa4  lui a0,0x53
00413fa8  addiu a0,a0,0x2d60
00413fac  lw t9,-0x7e08(gp)
00413fb0  clear s2
00413fb4  jalr t9
00413fb8  _clear s0
00413fbc  lw gp,0x10(sp)
00413fc0  li s4,-0x1
00413fc4  lw t9,-0x6a48(gp)
00413fc8  move a0,s2
00413fcc  jalr t9
00413fd0  _addiu a1,s0,0x1000
00413fd4  lw gp,0x10(sp)
00413fd8  move a0,s3
00413fdc  li a2,0x1000
00413fe0  lw t9,-0x6f40(gp)
00413fe4  move s2,v0
00413fe8  bne v0,zero,0x0041400c
00413fec  _addu a1,v0,s0
00413ff0  lw t9,-0x7f3c(gp)
00413ff4  lui a1,0x53
00413ff8  addiu a1,a1,0x2d88
00413ffc  jalr t9
00414000  _addiu a0,sp,0xc8
00414004  b 0x00414060
00414008  _nop
0041400c  jalr t9
00414010  _nop
00414014  lw gp,0x10(sp)
00414018  move s5,v0
0041401c  lw t9,-0x6af8(gp)
00414020  nop
00414024  jalr t9
00414028  _li a0,0x2e
0041402c  lw gp,0x10(sp)
00414030  bne s5,s4,0x00414084
00414034  _lui a1,0x53
00414038  lw t9,-0x7f3c(gp)
0041403c  addiu a0,sp,0xc8
00414040  jalr t9
00414044  _addiu a1,a1,0x2d9c
00414048  lw gp,0x10(sp)
0041404c  lui a0,0x53
00414050  lw t9,-0x7e08(gp)
00414054  nop
00414058  jalr t9
0041405c  _addiu a0,a0,0x2db0
00414060  lw gp,0x10(sp)
00414064  lui a0,0x53
00414068  addiu a0,a0,0x2dc4
0041406c  lw t9,-0x7dc8(gp)
00414070  nop
00414074  jalr t9
00414078  _addiu a1,sp,0xc8
0041407c  b 0x00414164
00414080  _li v0,0x190
00414084  li v0,0x1000
00414088  beq s5,v0,0x00413fc4
0041408c  _addu s0,s0,s5
00414090  lw t9,-0x7414(gp)
00414094  nop
00414098  jalr t9
0041409c  _move a0,s3
004140a0  lw gp,0x10(sp)
004140a4  nop
004140a8  lw t9,-0x6af8(gp)
004140ac  nop
004140b0  jalr t9
004140b4  _li a0,0xa
004140b8  lw gp,0x10(sp)
004140bc  nop
004140c0  lw v0,-0x6c68(gp)
004140c4  nop
004140c8  lw v0,0x0(v0)
004140cc  nop
004140d0  beq v0,zero,0x004140f0
004140d4  _nop
004140d8  lw t9,-0x6928(gp)
004140dc  nop
004140e0  jalr t9
004140e4  _move a0,s0
004140e8  lw gp,0x10(sp)
004140ec  nop
004140f0  lw v0,-0x6c68(gp)
004140f4  nop
004140f8  lw v0,0x0(v0)
004140fc  nop
00414100  beq v0,zero,0x00414120
00414104  _nop
00414108  lw t9,-0x6f14(gp)
0041410c  move a0,s0
00414110  jalr t9
00414114  _li a1,0x3
00414118  lw gp,0x10(sp)
0041411c  nop
00414120  lw t9,-0x6e34(gp)
00414124  addiu a1,sp,0x48
00414128  move a0,a1
0041412c  jalr t9
00414130  _sw a1,0x190(sp)
00414134  lw gp,0x10(sp)
00414138  lw a1,0x190(sp)
0041413c  move a2,v0
00414140  lw t9,-0x6978(gp)
00414144  nop
00414148  jalr t9
0041414c  _move a0,s1
00414150  sw s2,0x80(s1)
00414154  sw s0,0x84(s1)
00414158  sw zero,0x88(s1)
0041415c  jal 0x00413760
00414160  _move a0,s1
00414164  lw ra,0x1b4(sp)
00414168  lw s5,0x1b0(sp)
0041416c  lw s4,0x1ac(sp)
00414170  lw s3,0x1a8(sp)
00414174  lw s2,0x1a4(sp)
00414178  lw s1,0x1a0(sp)
0041417c  lw s0,0x19c(sp)
00414180  jr ra
00414184  _addiu sp,sp,0x1b8
