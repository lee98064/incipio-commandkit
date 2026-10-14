# main @ 00410e60
00410e60  addiu sp,sp,-0x120
00410e64  sw ra,0x11c(sp)
00410e68  sw s2,0x118(sp)
00410e6c  sw s1,0x114(sp)
00410e70  sw s0,0x110(sp)
00410e74  lui gp,0x58
00410e78  addiu gp,gp,0x5140
00410e7c  sw gp,0x10(sp)
00410e80  lw t9,-0x7764(gp)
00410e84  addiu s1,sp,0x7c
00410e88  li a2,0x8c
00410e8c  move s0,a1
00410e90  move a0,s1
00410e94  jalr t9
00410e98  _clear a1
00410e9c  lw gp,0x10(sp)
00410ea0  lui s2,0x41
00410ea4  addiu s2,s2,0xd60
00410ea8  lw t9,-0x7e5c(gp)
00410eac  li a0,0x2
00410eb0  jalr t9
00410eb4  _move a1,s2
00410eb8  lw gp,0x10(sp)
00410ebc  move a1,s2
00410ec0  lw t9,-0x7e5c(gp)
00410ec4  nop
00410ec8  jalr t9
00410ecc  _li a0,0x9
00410ed0  lw gp,0x10(sp)
00410ed4  lui a1,0x53
00410ed8  addiu a0,sp,0x3c
00410edc  lw t9,-0x7f3c(gp)
00410ee0  nop
00410ee4  jalr t9
00410ee8  _addiu a1,a1,0x249c
00410eec  lw a0,0x4(s0)
00410ef0  lw gp,0x10(sp)
00410ef4  beq a0,zero,0x00410f2c
00410ef8  _lui a1,0x53
00410efc  jal 0x00410da0
00410f00  _addiu a1,a1,0x24a8
00410f04  lw gp,0x10(sp)
00410f08  beq v0,zero,0x00410fa8
00410f0c  _lui a0,0x53
00410f10  lw t9,-0x7dc8(gp)
00410f14  lw a1,0x4(s0)
00410f18  jalr t9
00410f1c  _addiu a0,a0,0x24ac
00410f20  lw gp,0x10(sp)
00410f24  b 0x00410fa8
00410f28  _nop
00410f2c  lw t9,-0x7e08(gp)
00410f30  lui a0,0x53
00410f34  jalr t9
00410f38  _addiu a0,a0,0x24c0
00410f3c  lw gp,0x10(sp)
00410f40  lui a0,0x53
00410f44  move a1,s1
00410f48  lw t9,-0x6b58(gp)
00410f4c  nop
00410f50  jalr t9
00410f54  _addiu a0,a0,0x24d8
00410f58  lw gp,0x10(sp)
00410f5c  lui a0,0x53
00410f60  lw t9,-0x7e08(gp)
00410f64  nop
00410f68  jalr t9
00410f6c  _addiu a0,a0,0x24f4
00410f70  lw gp,0x10(sp)
00410f74  nop
00410f78  lw t9,-0x6a34(gp)
00410f7c  nop
00410f80  jalr t9
00410f84  _li a0,0xa
00410f88  lw gp,0x10(sp)
00410f8c  lui a0,0x53
00410f90  lw t9,-0x6910(gp)
00410f94  nop
00410f98  jalr t9
00410f9c  _addiu a0,a0,0x2508
00410fa0  b 0x00410fa0
00410fa4  _nop
00410fa8  lw t9,-0x7764(gp)
00410fac  addiu s1,sp,0x1c
00410fb0  move a0,s1
00410fb4  clear a1
00410fb8  jalr t9
00410fbc  _li a2,0x20
00410fc0  addiu v1,sp,0x3c
00410fc4  lui v0,0x57
00410fc8  sw v1,0x1c(sp)
00410fcc  lw v0,0x6660(v0)
00410fd0  li v1,0x64
00410fd4  sw v1,0x20(sp)
00410fd8  li v1,0xa
00410fdc  sw v1,0x24(sp)
00410fe0  li v1,0x5a
00410fe4  lw gp,0x10(sp)
00410fe8  beq v0,zero,0x00411008
00410fec  _sw v1,0x28(sp)
00410ff0  lw t9,-0x6810(gp)
00410ff4  nop
00410ff8  jalr t9
00410ffc  _move a0,s1
00411000  lw gp,0x10(sp)
00411004  nop
00411008  lw t9,-0x66bc(gp)
0041100c  lw a0,0x4(s0)
00411010  jalr t9
00411014  _addiu a1,sp,0x18
00411018  move s1,v0
0041101c  li v0,-0x1
00411020  lw gp,0x10(sp)
00411024  beq s1,v0,0x00411160
00411028  _lui a0,0x53
0041102c  lw t9,-0x7e08(gp)
00411030  nop
00411034  jalr t9
00411038  _addiu a0,a0,0x2510
0041103c  lw gp,0x10(sp)
00411040  lui a0,0x53
00411044  addiu a0,a0,0x2538
00411048  lw t9,-0x7dc8(gp)
0041104c  move a1,s1
00411050  jalr t9
00411054  _addiu s0,sp,0x7c
00411058  lw gp,0x10(sp)
0041105c  addiu a1,sp,0x3c
00411060  move a0,a1
00411064  lw t9,-0x6e30(gp)
00411068  nop
0041106c  jalr t9
00411070  _sw a1,0x108(sp)
00411074  lw gp,0x10(sp)
00411078  lw a1,0x108(sp)
0041107c  addiu a2,v0,0x1
00411080  lw t9,-0x6974(gp)
00411084  nop
00411088  jalr t9
0041108c  _move a0,s0
00411090  lw gp,0x10(sp)
00411094  lw v0,0x18(sp)
00411098  lui a0,0x53
0041109c  lw t9,-0x7e08(gp)
004110a0  addiu a0,a0,0x254c
004110a4  sw v0,0xfc(sp)
004110a8  sw s1,0x100(sp)
004110ac  jalr t9
004110b0  _sw zero,0x104(sp)
004110b4  lw gp,0x10(sp)
004110b8  nop
004110bc  lw t9,-0x76c8(gp)
004110c0  nop
004110c4  jalr t9
004110c8  _move a0,s0
004110cc  li v1,0x4
004110d0  lw gp,0x10(sp)
004110d4  bne v0,v1,0x00411150
004110d8  _lui a0,0x53
004110dc  lw t9,-0x75d8(gp)
004110e0  nop
004110e4  jalr t9
004110e8  _move a0,s0
004110ec  lw gp,0x10(sp)
004110f0  li v1,0xc8
004110f4  lw t9,-0x7e08(gp)
004110f8  bne v0,v1,0x00411144
004110fc  _nop
00411100  lui a0,0x53
00411104  jalr t9
00411108  _addiu a0,a0,0x24f4
0041110c  lw gp,0x10(sp)
00411110  nop
00411114  lw t9,-0x6a34(gp)
00411118  nop
0041111c  jalr t9
00411120  _li a0,0xa
00411124  lw gp,0x10(sp)
00411128  lui a0,0x53
0041112c  lw t9,-0x6910(gp)
00411130  nop
00411134  jalr t9
00411138  _addiu a0,a0,0x2508
0041113c  b 0x0041113c
00411140  _nop
00411144  lui a0,0x53
00411148  b 0x00411158
0041114c  _addiu a0,a0,0x2578
00411150  lw t9,-0x7e08(gp)
00411154  addiu a0,a0,0x258c
00411158  jalr t9
0041115c  _nop
00411160  lw ra,0x11c(sp)
00411164  lw s2,0x118(sp)
00411168  lw s1,0x114(sp)
0041116c  lw s0,0x110(sp)
00411170  clear v0
00411174  jr ra
00411178  _addiu sp,sp,0x120
