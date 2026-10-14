# PlatformJoinDestinationWiFiNetwork @ 00402f38
00402f38  addiu sp,sp,-0x30
00402f3c  sw ra,0x2c(sp)
00402f40  sw s3,0x28(sp)
00402f44  sw s2,0x24(sp)
00402f48  sw s1,0x20(sp)
00402f4c  sw s0,0x1c(sp)
00402f50  lui gp,0x44
00402f54  addiu gp,gp,-0x4fc0
00402f58  sw gp,0x10(sp)
00402f5c  move s0,a0
00402f60  move s2,a1
00402f64  beq a0,zero,0x00402ff4
00402f68  _move s1,a2
00402f6c  lw t9,-0x7eac(gp)
00402f70  lui a0,0x42
00402f74  lui a1,0x42
00402f78  addiu a0,a0,-0x304c
00402f7c  jalr t9
00402f80  _addiu a1,a1,-0x340c
00402f84  lw gp,0x10(sp)
00402f88  beq v0,zero,0x00402ff4
00402f8c  _move s3,v0
00402f90  lw t9,-0x7f74(gp)
00402f94  nop
00402f98  jalr t9
00402f9c  _move a0,s0
00402fa0  lw gp,0x10(sp)
00402fa4  li a2,0x1
00402fa8  move a3,s3
00402fac  lw t9,-0x7f34(gp)
00402fb0  move a1,v0
00402fb4  jalr t9
00402fb8  _move a0,s0
00402fbc  lw gp,0x10(sp)
00402fc0  lui a0,0x42
00402fc4  addiu a0,a0,-0x302c
00402fc8  lw t9,-0x7d5c(gp)
00402fcc  nop
00402fd0  jalr t9
00402fd4  _move a1,s0
00402fd8  lw gp,0x10(sp)
00402fdc  nop
00402fe0  lw t9,-0x7ec8(gp)
00402fe4  nop
00402fe8  jalr t9
00402fec  _move a0,s3
00402ff0  lw gp,0x10(sp)
00402ff4  beq s2,zero,0x00403070
00402ff8  _lui a0,0x42
00402ffc  lw t9,-0x7eac(gp)
00403000  lui a1,0x42
00403004  addiu a0,a0,-0x3018
00403008  jalr t9
0040300c  _addiu a1,a1,-0x340c
00403010  lw gp,0x10(sp)
00403014  beq v0,zero,0x00403070
00403018  _move s0,v0
0040301c  lw t9,-0x7f34(gp)
00403020  li a2,0x1
00403024  move a3,v0
00403028  move a0,s2
0040302c  jalr t9
00403030  _move a1,s1
00403034  lw gp,0x10(sp)
00403038  lui a0,0x42
0040303c  addiu a0,a0,-0x2ff8
00403040  lw t9,-0x7d5c(gp)
00403044  nop
00403048  jalr t9
0040304c  _move a1,s2
00403050  lw gp,0x10(sp)
00403054  nop
00403058  lw t9,-0x7ec8(gp)
0040305c  nop
00403060  jalr t9
00403064  _move a0,s0
00403068  lw gp,0x10(sp)
0040306c  nop
00403070  lw t9,-0x7eac(gp)
00403074  lui s2,0x42
00403078  addiu s2,s2,-0x340c
0040307c  lui a0,0x42
00403080  addiu a0,a0,-0x2fe0
00403084  jalr t9
00403088  _move a1,s2
0040308c  lw gp,0x10(sp)
00403090  beq v0,zero,0x004030ec
00403094  _move s0,v0
00403098  lw t9,-0x7e2c(gp)
0040309c  lui a1,0x42
004030a0  move a2,s1
004030a4  addiu a1,a1,-0x2f04
004030a8  jalr t9
004030ac  _move a0,v0
004030b0  lw gp,0x10(sp)
004030b4  lui a0,0x42
004030b8  addiu a0,a0,-0x2fbc
004030bc  lw t9,-0x7d5c(gp)
004030c0  nop
004030c4  jalr t9
004030c8  _move a1,s1
004030cc  lw gp,0x10(sp)
004030d0  nop
004030d4  lw t9,-0x7ec8(gp)
004030d8  nop
004030dc  jalr t9
004030e0  _move a0,s0
004030e4  lw gp,0x10(sp)
004030e8  nop
004030ec  lw t9,-0x7eac(gp)
004030f0  lui a0,0x42
004030f4  addiu a0,a0,-0x2fa0
004030f8  jalr t9
004030fc  _move a1,s2
00403100  lw gp,0x10(sp)
00403104  beq v0,zero,0x0040313c
00403108  _move s0,v0
0040310c  lw t9,-0x7f88(gp)
00403110  lui a0,0x42
00403114  addiu a0,a0,-0x2f7c
00403118  jalr t9
0040311c  _move a1,v0
00403120  lw gp,0x10(sp)
00403124  nop
00403128  lw t9,-0x7ec8(gp)
0040312c  nop
00403130  jalr t9
00403134  _move a0,s0
00403138  lw gp,0x10(sp)
0040313c  lui s2,0x42
00403140  addiu s2,s2,-0x2f78
00403144  clear s0
00403148  li s1,0x5a
0040314c  lw t9,-0x7f38(gp)
00403150  move a0,s2
00403154  jalr t9
00403158  _clear a1
0040315c  lw gp,0x10(sp)
00403160  addiu s0,s0,0x1
00403164  lw t9,-0x7dc4(gp)
00403168  beq v0,zero,0x004031b4
0040316c  _li a0,0x1
00403170  jalr t9
00403174  _nop
00403178  lw gp,0x10(sp)
0040317c  bne s0,s1,0x0040314c
00403180  _nop
00403184  lw t9,-0x7dac(gp)
00403188  lui a0,0x42
0040318c  jalr t9
00403190  _addiu a0,a0,-0x2f60
00403194  li v0,-0x1a59
00403198  lw ra,0x2c(sp)
0040319c  lw s3,0x28(sp)
004031a0  lw s2,0x24(sp)
004031a4  lw s1,0x20(sp)
004031a8  lw s0,0x1c(sp)
004031ac  jr ra
004031b0  _addiu sp,sp,0x30
004031b4  lw t9,-0x7dac(gp)
004031b8  lui a0,0x42
004031bc  jalr t9
004031c0  _addiu a0,a0,-0x2f4c
004031c4  b 0x00403198
004031c8  _clear v0
