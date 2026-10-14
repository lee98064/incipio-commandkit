# Reset_to_AP @ 00402ee4
00402ee4  addiu sp,sp,-0x160
00402ee8  sw ra,0x15c(sp)
00402eec  sw s3,0x158(sp)
00402ef0  sw s2,0x154(sp)
00402ef4  sw s1,0x150(sp)
00402ef8  sw s0,0x14c(sp)
00402efc  lui gp,0x43
00402f00  addiu gp,gp,-0x4f70
00402f04  sw gp,0x18(sp)
00402f08  lw t9,-0x7e54(gp)
00402f0c  li v0,0x2
00402f10  li a0,0xad
00402f14  addiu a1,sp,0x20
00402f18  sw v0,0x20(sp)
00402f1c  sw zero,0x24(sp)
00402f20  jalr t9
00402f24  _sw zero,0x28(sp)
00402f28  lw gp,0x18(sp)
00402f2c  lui a0,0x41
00402f30  addiu a0,a0,0x280
00402f34  lw t9,-0x7df8(gp)
00402f38  nop
00402f3c  jalr t9
00402f40  _clear s0
00402f44  lw gp,0x18(sp)
00402f48  beq v0,zero,0x00403044
00402f4c  _addiu s2,sp,0x7c
00402f50  lw t9,-0x7e54(gp)
00402f54  li a0,0x3b
00402f58  addiu a1,sp,0x24
00402f5c  jalr t9
00402f60  _sw zero,0x24(sp)
00402f64  lw gp,0x18(sp)
00402f68  lui a0,0x41
00402f6c  addiu a0,a0,0x498
00402f70  lw t9,-0x7e04(gp)
00402f74  li a1,0x3
00402f78  jalr t9
00402f7c  _addiu a2,sp,0x2c
00402f80  lw gp,0x18(sp)
00402f84  beq v0,zero,0x00402fd4
00402f88  _addiu s1,sp,0x3c
00402f8c  lw t9,-0x7dc8(gp)
00402f90  addiu a2,sp,0xbc
00402f94  move a0,a2
00402f98  jalr t9
00402f9c  _sw a2,0x140(sp)
00402fa0  lw gp,0x18(sp)
00402fa4  addiu s0,sp,0x2e
00402fa8  lbu v0,0x5(s0)
00402fac  lbu a3,0x4(s0)
00402fb0  lw t9,-0x7f2c(gp)
00402fb4  lw a2,0x140(sp)
00402fb8  lui a1,0x41
00402fbc  sw v0,0x10(sp)
00402fc0  move a0,s1
00402fc4  jalr t9
00402fc8  _addiu a1,a1,0x49c
00402fcc  b 0x00402fec
00402fd0  _nop
00402fd4  lw t9,-0x7d9c(gp)
00402fd8  lui a1,0x41
00402fdc  move a0,s1
00402fe0  addiu a1,a1,0x4a8
00402fe4  jalr t9
00402fe8  _clear s0
00402fec  lw gp,0x18(sp)
00402ff0  li a0,0x1
00402ff4  addiu a1,sp,0x3c
00402ff8  lw t9,-0x7e54(gp)
00402ffc  nop
00403000  jalr t9
00403004  _addiu s1,sp,0x28
00403008  lw gp,0x18(sp)
0040300c  li a0,0x14
00403010  move a1,s1
00403014  lw t9,-0x7e54(gp)
00403018  nop
0040301c  jalr t9
00403020  _sw zero,0x28(sp)
00403024  lw gp,0x18(sp)
00403028  sw zero,0x28(sp)
0040302c  move a1,s1
00403030  lw t9,-0x7e54(gp)
00403034  nop
00403038  jalr t9
0040303c  _li a0,0x19
00403040  addiu s2,sp,0x7c
00403044  jal 0x00402dfc
00403048  _move a0,s2
0040304c  lw gp,0x18(sp)
00403050  lui a0,0x41
00403054  lw t9,-0x7df8(gp)
00403058  nop
0040305c  jalr t9
00403060  _addiu a0,a0,0x1dc
00403064  lw gp,0x18(sp)
00403068  beq v0,zero,0x004030e0
0040306c  _li s3,0x1
00403070  lw t9,-0x7e54(gp)
00403074  addiu s1,sp,0x28
00403078  li a0,0x16
0040307c  move a1,s1
00403080  jalr t9
00403084  _sw s3,0x28(sp)
00403088  lw gp,0x18(sp)
0040308c  li a0,0x3b
00403090  addiu a1,sp,0x24
00403094  lw t9,-0x7e54(gp)
00403098  nop
0040309c  jalr t9
004030a0  _sw s3,0x24(sp)
004030a4  lw gp,0x18(sp)
004030a8  move a1,s2
004030ac  lw t9,-0x7e54(gp)
004030b0  nop
004030b4  jalr t9
004030b8  _li a0,0x1
004030bc  lw gp,0x18(sp)
004030c0  sw zero,0x28(sp)
004030c4  move a1,s1
004030c8  lw t9,-0x7e54(gp)
004030cc  nop
004030d0  jalr t9
004030d4  _li a0,0x19
004030d8  lw gp,0x18(sp)
004030dc  nop
004030e0  lw t9,-0x7e54(gp)
004030e4  li a0,0xfa
004030e8  addiu a1,sp,0x28
004030ec  jalr t9
004030f0  _sw zero,0x28(sp)
004030f4  lw gp,0x18(sp)
004030f8  li a0,0xfb
004030fc  addiu a1,sp,0x7c
00403100  lw t9,-0x7e54(gp)
00403104  nop
00403108  jalr t9
0040310c  _addiu s1,sp,0x3c
00403110  lw gp,0x18(sp)
00403114  addiu a2,sp,0xbc
00403118  move a0,a2
0040311c  lw t9,-0x7dec(gp)
00403120  nop
00403124  jalr t9
00403128  _sw a2,0x140(sp)
0040312c  lw gp,0x18(sp)
00403130  lw a2,0x140(sp)
00403134  beq s0,zero,0x00403160
00403138  _lui a1,0x41
0040313c  lbu v0,0x5(s0)
00403140  lbu a3,0x4(s0)
00403144  lw t9,-0x7f2c(gp)
00403148  sw v0,0x10(sp)
0040314c  move a0,s1
00403150  jalr t9
00403154  _addiu a1,a1,0x49c
00403158  b 0x00403170
0040315c  _nop
00403160  lw t9,-0x7d9c(gp)
00403164  move a0,s1
00403168  jalr t9
0040316c  _move a1,a2
00403170  lw gp,0x18(sp)
00403174  addiu a1,sp,0x3c
00403178  li a0,0x2b1
0040317c  lw t9,-0x7e54(gp)
00403180  nop
00403184  jalr t9
00403188  _addiu s0,sp,0xfc
0040318c  lw gp,0x18(sp)
00403190  lui a1,0x41
00403194  addiu a1,a1,0x9e4
00403198  lw t9,-0x7e54(gp)
0040319c  nop
004031a0  jalr t9
004031a4  _li a0,0x2b2
004031a8  lw gp,0x18(sp)
004031ac  nop
004031b0  lw t9,-0x7e4c(gp)
004031b4  nop
004031b8  jalr t9
004031bc  _li a0,0x4
004031c0  lw gp,0x18(sp)
004031c4  lui a0,0x41
004031c8  lw t9,-0x7e20(gp)
004031cc  nop
004031d0  jalr t9
004031d4  _addiu a0,a0,0x4b4
004031d8  jal 0x00401ce4
004031dc  _nop
004031e0  jal 0x00401d9c
004031e4  _nop
004031e8  lw gp,0x18(sp)
004031ec  lui v0,0x42
004031f0  sw zero,0x3504(v0)
004031f4  lw t9,-0x7f2c(gp)
004031f8  lui v0,0x42
004031fc  lui a1,0x41
00403200  lui a2,0x41
00403204  addiu a1,a1,0x4d4
00403208  addiu a2,a2,0x4e0
0040320c  move a0,s0
00403210  jalr t9
00403214  _sw zero,0x3508(v0)
00403218  lw gp,0x18(sp)
0040321c  nop
00403220  lw t9,-0x7e20(gp)
00403224  nop
00403228  jalr t9
0040322c  _move a0,s0
00403230  lw ra,0x15c(sp)
00403234  lw s3,0x158(sp)
00403238  lw s2,0x154(sp)
0040323c  lw s1,0x150(sp)
00403240  lw s0,0x14c(sp)
00403244  jr ra
00403248  _addiu sp,sp,0x160
