# increase_progress @ 00412e04
00412e04  addiu sp,sp,-0x430
00412e08  sw ra,0x42c(sp)
00412e0c  sw s2,0x428(sp)
00412e10  sw s1,0x424(sp)
00412e14  sw s0,0x420(sp)
00412e18  lui gp,0x58
00412e1c  addiu gp,gp,0x5010
00412e20  sw gp,0x18(sp)
00412e24  li v0,0x3
00412e28  move s1,a1
00412e2c  beq a1,v0,0x00412e58
00412e30  _move s2,a0
00412e34  slti v0,a1,0x3
00412e38  bne v0,zero,0x00412e88
00412e3c  _nop
00412e40  addiu v0,a1,-0x5
00412e44  sltiu v0,v0,0x3
00412e48  beq v0,zero,0x00412e88
00412e4c  _nop
00412e50  b 0x00412e70
00412e54  _lui v0,0x58
00412e58  lui v0,0x58
00412e5c  lw v0,-0x1640(v0)
00412e60  nop
00412e64  lw v0,0x10(v0)
00412e68  b 0x00412e80
00412e6c  _nop
00412e70  lw v0,-0x1640(v0)
00412e74  nop
00412e78  lw v0,0x14(v0)
00412e7c  nop
00412e80  blez v0,0x00413028
00412e84  _nop
00412e88  lw t9,-0x71e4(gp)
00412e8c  lui v0,0x58
00412e90  lui a0,0x53
00412e94  lui a1,0x55
00412e98  sw s1,-0x163c(v0)
00412e9c  addiu a0,a0,0x2898
00412ea0  jalr t9
00412ea4  _addiu a1,a1,-0x5bf4
00412ea8  move s0,v0
00412eac  lw gp,0x18(sp)
00412eb0  beq s0,zero,0x0041302c
00412eb4  _clear v0
00412eb8  lw t9,-0x7348(gp)
00412ebc  nop
00412ec0  jalr t9
00412ec4  _move a0,s0
00412ec8  lw gp,0x18(sp)
00412ecc  move a0,v0
00412ed0  lw t9,-0x77d4(gp)
00412ed4  nop
00412ed8  jalr t9
00412edc  _li a1,0x2
00412ee0  li v0,0x3
00412ee4  lw gp,0x18(sp)
00412ee8  beq s1,v0,0x00412f18
00412eec  _lui v0,0x58
00412ef0  slti v0,s1,0x3
00412ef4  bne v0,zero,0x00412f0c
00412ef8  _clear a0
00412efc  addiu v0,s1,-0x5
00412f00  sltiu v0,v0,0x3
00412f04  bne v0,zero,0x00412f30
00412f08  _nop
00412f0c  clear t0
00412f10  b 0x00412f48
00412f14  _clear v0
00412f18  lw t0,-0x1640(v0)
00412f1c  nop
00412f20  addiu a0,t0,0x18
00412f24  addiu v0,t0,0x10
00412f28  b 0x00412f48
00412f2c  _addiu t0,t0,0x8
00412f30  lui v0,0x58
00412f34  lw t0,-0x1640(v0)
00412f38  nop
00412f3c  addiu a0,t0,0x1c
00412f40  addiu v0,t0,0x14
00412f44  addiu t0,t0,0xc
00412f48  lw a1,0x0(a0)
00412f4c  lw a3,0x0(v0)
00412f50  lw v1,0x0(t0)
00412f54  addu s2,s2,a1
00412f58  sw s2,0x0(a0)
00412f5c  lw t1,0x0(v0)
00412f60  lui a2,0x58
00412f64  lui v0,0x58
00412f68  slt t1,s2,t1
00412f6c  addiu a0,sp,0x20
00412f70  lw t9,-0x7930(gp)
00412f74  bne t1,zero,0x00413044
00412f78  _lui a1,0x53
00412f7c  lw t0,0x0(t0)
00412f80  lw a3,-0x1638(v0)
00412f84  lw v1,-0x1640(a2)
00412f88  addiu a1,a1,0x28a8
00412f8c  addu a3,t0,a3
00412f90  sw a3,-0x1638(v0)
00412f94  lw a2,0x0(v1)
00412f98  sw s1,0x10(sp)
00412f9c  jalr t9
00412fa0  _addiu s1,sp,0x20
00412fa4  lw gp,0x18(sp)
00412fa8  nop
00412fac  lw t9,-0x6e34(gp)
00412fb0  nop
00412fb4  jalr t9
00412fb8  _move a0,s1
00412fbc  lw gp,0x18(sp)
00412fc0  move a2,v0
00412fc4  move a3,s0
00412fc8  lw t9,-0x6904(gp)
00412fcc  li a1,0x1
00412fd0  jalr t9
00412fd4  _move a0,s1
00412fd8  lw gp,0x18(sp)
00412fdc  nop
00412fe0  lw t9,-0x7348(gp)
00412fe4  nop
00412fe8  jalr t9
00412fec  _move a0,s0
00412ff0  lw gp,0x18(sp)
00412ff4  move a0,v0
00412ff8  lw t9,-0x77d4(gp)
00412ffc  nop
00413000  jalr t9
00413004  _li a1,0x8
00413008  lw gp,0x18(sp)
0041300c  nop
00413010  lw t9,-0x7158(gp)
00413014  nop
00413018  jalr t9
0041301c  _move a0,s0
00413020  b 0x0041302c
00413024  _clear v0
00413028  li v0,0x1
0041302c  lw ra,0x42c(sp)
00413030  lw s2,0x428(sp)
00413034  lw s1,0x424(sp)
00413038  lw s0,0x420(sp)
0041303c  jr ra
00413040  _addiu sp,sp,0x430
00413044  div a3,v1
00413048  bne v1,zero,0x00413054
0041304c  _nop
00413050  break 0x1c00
00413054  lw a2,-0x1640(a2)
00413058  lw v0,-0x1638(v0)
0041305c  addiu a1,a1,0x28a8
00413060  lw a2,0x0(a2)
00413064  sw s1,0x10(sp)
00413068  mflo v1
0041306c  addiu v1,v1,0x1
00413070  div s2,v1
00413074  bne v1,zero,0x00413080
00413078  _nop
0041307c  break 0x1c00
00413080  mflo s2
00413084  b 0x00412f9c
00413088  _addu a3,s2,v0
