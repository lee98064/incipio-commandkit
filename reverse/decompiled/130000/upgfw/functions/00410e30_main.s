# main @ 00410e30
00410e30  addiu sp,sp,-0x120
00410e34  sw ra,0x11c(sp)
00410e38  sw s2,0x118(sp)
00410e3c  sw s1,0x114(sp)
00410e40  sw s0,0x110(sp)
00410e44  lui gp,0x58
00410e48  addiu gp,gp,0x5010
00410e4c  sw gp,0x10(sp)
00410e50  lw t9,-0x7764(gp)
00410e54  addiu s1,sp,0x7c
00410e58  li a2,0x8c
00410e5c  move s0,a1
00410e60  move a0,s1
00410e64  jalr t9
00410e68  _clear a1
00410e6c  lw gp,0x10(sp)
00410e70  lui s2,0x41
00410e74  addiu s2,s2,0xd30
00410e78  lw t9,-0x7e5c(gp)
00410e7c  li a0,0x2
00410e80  jalr t9
00410e84  _move a1,s2
00410e88  lw gp,0x10(sp)
00410e8c  move a1,s2
00410e90  lw t9,-0x7e5c(gp)
00410e94  nop
00410e98  jalr t9
00410e9c  _li a0,0x9
00410ea0  lw gp,0x10(sp)
00410ea4  lui a1,0x53
00410ea8  addiu a0,sp,0x3c
00410eac  lw t9,-0x7f3c(gp)
00410eb0  nop
00410eb4  jalr t9
00410eb8  _addiu a1,a1,0x239c
00410ebc  lw a0,0x4(s0)
00410ec0  lw gp,0x10(sp)
00410ec4  beq a0,zero,0x00410efc
00410ec8  _lui a1,0x53
00410ecc  jal 0x00410d70
00410ed0  _addiu a1,a1,0x23a8
00410ed4  lw gp,0x10(sp)
00410ed8  beq v0,zero,0x00410f78
00410edc  _lui a0,0x53
00410ee0  lw t9,-0x7dc8(gp)
00410ee4  lw a1,0x4(s0)
00410ee8  jalr t9
00410eec  _addiu a0,a0,0x23ac
00410ef0  lw gp,0x10(sp)
00410ef4  b 0x00410f78
00410ef8  _nop
00410efc  lw t9,-0x7e08(gp)
00410f00  lui a0,0x53
00410f04  jalr t9
00410f08  _addiu a0,a0,0x23c0
00410f0c  lw gp,0x10(sp)
00410f10  lui a0,0x53
00410f14  move a1,s1
00410f18  lw t9,-0x6b5c(gp)
00410f1c  nop
00410f20  jalr t9
00410f24  _addiu a0,a0,0x23d8
00410f28  lw gp,0x10(sp)
00410f2c  lui a0,0x53
00410f30  lw t9,-0x7e08(gp)
00410f34  nop
00410f38  jalr t9
00410f3c  _addiu a0,a0,0x23f4
00410f40  lw gp,0x10(sp)
00410f44  nop
00410f48  lw t9,-0x6a38(gp)
00410f4c  nop
00410f50  jalr t9
00410f54  _li a0,0xa
00410f58  lw gp,0x10(sp)
00410f5c  lui a0,0x53
00410f60  lw t9,-0x6914(gp)
00410f64  nop
00410f68  jalr t9
00410f6c  _addiu a0,a0,0x2408
00410f70  b 0x00410f70
00410f74  _nop
00410f78  lw t9,-0x7764(gp)
00410f7c  addiu s1,sp,0x1c
00410f80  move a0,s1
00410f84  clear a1
00410f88  jalr t9
00410f8c  _li a2,0x20
00410f90  addiu v1,sp,0x3c
00410f94  lui v0,0x57
00410f98  sw v1,0x1c(sp)
00410f9c  lw v0,0x6530(v0)
00410fa0  li v1,0x64
00410fa4  sw v1,0x20(sp)
00410fa8  li v1,0xa
00410fac  sw v1,0x24(sp)
00410fb0  li v1,0x5a
00410fb4  lw gp,0x10(sp)
00410fb8  beq v0,zero,0x00410fd8
00410fbc  _sw v1,0x28(sp)
00410fc0  lw t9,-0x6814(gp)
00410fc4  nop
00410fc8  jalr t9
00410fcc  _move a0,s1
00410fd0  lw gp,0x10(sp)
00410fd4  nop
00410fd8  lw t9,-0x66c0(gp)
00410fdc  lw a0,0x4(s0)
00410fe0  jalr t9
00410fe4  _addiu a1,sp,0x18
00410fe8  move s1,v0
00410fec  li v0,-0x1
00410ff0  lw gp,0x10(sp)
00410ff4  beq s1,v0,0x00411130
00410ff8  _lui a0,0x53
00410ffc  lw t9,-0x7e08(gp)
00411000  nop
00411004  jalr t9
00411008  _addiu a0,a0,0x2410
0041100c  lw gp,0x10(sp)
00411010  lui a0,0x53
00411014  addiu a0,a0,0x2438
00411018  lw t9,-0x7dc8(gp)
0041101c  move a1,s1
00411020  jalr t9
00411024  _addiu s0,sp,0x7c
00411028  lw gp,0x10(sp)
0041102c  addiu a1,sp,0x3c
00411030  move a0,a1
00411034  lw t9,-0x6e34(gp)
00411038  nop
0041103c  jalr t9
00411040  _sw a1,0x108(sp)
00411044  lw gp,0x10(sp)
00411048  lw a1,0x108(sp)
0041104c  addiu a2,v0,0x1
00411050  lw t9,-0x6978(gp)
00411054  nop
00411058  jalr t9
0041105c  _move a0,s0
00411060  lw gp,0x10(sp)
00411064  lw v0,0x18(sp)
00411068  lui a0,0x53
0041106c  lw t9,-0x7e08(gp)
00411070  addiu a0,a0,0x244c
00411074  sw v0,0xfc(sp)
00411078  sw s1,0x100(sp)
0041107c  jalr t9
00411080  _sw zero,0x104(sp)
00411084  lw gp,0x10(sp)
00411088  nop
0041108c  lw t9,-0x76c8(gp)
00411090  nop
00411094  jalr t9
00411098  _move a0,s0
0041109c  li v1,0x4
004110a0  lw gp,0x10(sp)
004110a4  bne v0,v1,0x00411120
004110a8  _lui a0,0x53
004110ac  lw t9,-0x75d8(gp)
004110b0  nop
004110b4  jalr t9
004110b8  _move a0,s0
004110bc  lw gp,0x10(sp)
004110c0  li v1,0xc8
004110c4  lw t9,-0x7e08(gp)
004110c8  bne v0,v1,0x00411114
004110cc  _nop
004110d0  lui a0,0x53
004110d4  jalr t9
004110d8  _addiu a0,a0,0x23f4
004110dc  lw gp,0x10(sp)
004110e0  nop
004110e4  lw t9,-0x6a38(gp)
004110e8  nop
004110ec  jalr t9
004110f0  _li a0,0xa
004110f4  lw gp,0x10(sp)
004110f8  lui a0,0x53
004110fc  lw t9,-0x6914(gp)
00411100  nop
00411104  jalr t9
00411108  _addiu a0,a0,0x2408
0041110c  b 0x0041110c
00411110  _nop
00411114  lui a0,0x53
00411118  b 0x00411128
0041111c  _addiu a0,a0,0x2478
00411120  lw t9,-0x7e08(gp)
00411124  addiu a0,a0,0x248c
00411128  jalr t9
0041112c  _nop
00411130  lw ra,0x11c(sp)
00411134  lw s2,0x118(sp)
00411138  lw s1,0x114(sp)
0041113c  lw s0,0x110(sp)
00411140  clear v0
00411144  jr ra
00411148  _addiu sp,sp,0x120
