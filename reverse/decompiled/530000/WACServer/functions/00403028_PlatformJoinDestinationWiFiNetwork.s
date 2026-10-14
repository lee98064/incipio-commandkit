# PlatformJoinDestinationWiFiNetwork @ 00403028
00403028  addiu sp,sp,-0x30
0040302c  sw ra,0x2c(sp)
00403030  sw s3,0x28(sp)
00403034  sw s2,0x24(sp)
00403038  sw s1,0x20(sp)
0040303c  sw s0,0x1c(sp)
00403040  lui gp,0x44
00403044  addiu gp,gp,-0x4fc0
00403048  sw gp,0x10(sp)
0040304c  move s0,a0
00403050  move s2,a1
00403054  beq a0,zero,0x004030e4
00403058  _move s1,a2
0040305c  lw t9,-0x7eac(gp)
00403060  lui a0,0x42
00403064  lui a1,0x42
00403068  addiu a0,a0,-0x2e6c
0040306c  jalr t9
00403070  _addiu a1,a1,-0x3230
00403074  lw gp,0x10(sp)
00403078  beq v0,zero,0x004030e4
0040307c  _move s3,v0
00403080  lw t9,-0x7f74(gp)
00403084  nop
00403088  jalr t9
0040308c  _move a0,s0
00403090  lw gp,0x10(sp)
00403094  li a2,0x1
00403098  move a3,s3
0040309c  lw t9,-0x7f34(gp)
004030a0  move a1,v0
004030a4  jalr t9
004030a8  _move a0,s0
004030ac  lw gp,0x10(sp)
004030b0  lui a0,0x42
004030b4  addiu a0,a0,-0x2e4c
004030b8  lw t9,-0x7d5c(gp)
004030bc  nop
004030c0  jalr t9
004030c4  _move a1,s0
004030c8  lw gp,0x10(sp)
004030cc  nop
004030d0  lw t9,-0x7ec8(gp)
004030d4  nop
004030d8  jalr t9
004030dc  _move a0,s3
004030e0  lw gp,0x10(sp)
004030e4  beq s2,zero,0x00403160
004030e8  _lui a0,0x42
004030ec  lw t9,-0x7eac(gp)
004030f0  lui a1,0x42
004030f4  addiu a0,a0,-0x2e38
004030f8  jalr t9
004030fc  _addiu a1,a1,-0x3230
00403100  lw gp,0x10(sp)
00403104  beq v0,zero,0x00403160
00403108  _move s0,v0
0040310c  lw t9,-0x7f34(gp)
00403110  li a2,0x1
00403114  move a3,v0
00403118  move a0,s2
0040311c  jalr t9
00403120  _move a1,s1
00403124  lw gp,0x10(sp)
00403128  lui a0,0x42
0040312c  addiu a0,a0,-0x2e18
00403130  lw t9,-0x7d5c(gp)
00403134  nop
00403138  jalr t9
0040313c  _move a1,s2
00403140  lw gp,0x10(sp)
00403144  nop
00403148  lw t9,-0x7ec8(gp)
0040314c  nop
00403150  jalr t9
00403154  _move a0,s0
00403158  lw gp,0x10(sp)
0040315c  nop
00403160  lw t9,-0x7eac(gp)
00403164  lui s2,0x42
00403168  addiu s2,s2,-0x3230
0040316c  lui a0,0x42
00403170  addiu a0,a0,-0x2e00
00403174  jalr t9
00403178  _move a1,s2
0040317c  lw gp,0x10(sp)
00403180  beq v0,zero,0x004031dc
00403184  _move s0,v0
00403188  lw t9,-0x7e2c(gp)
0040318c  lui a1,0x42
00403190  move a2,s1
00403194  addiu a1,a1,-0x2d24
00403198  jalr t9
0040319c  _move a0,v0
004031a0  lw gp,0x10(sp)
004031a4  lui a0,0x42
004031a8  addiu a0,a0,-0x2ddc
004031ac  lw t9,-0x7d5c(gp)
004031b0  nop
004031b4  jalr t9
004031b8  _move a1,s1
004031bc  lw gp,0x10(sp)
004031c0  nop
004031c4  lw t9,-0x7ec8(gp)
004031c8  nop
004031cc  jalr t9
004031d0  _move a0,s0
004031d4  lw gp,0x10(sp)
004031d8  nop
004031dc  lw t9,-0x7eac(gp)
004031e0  lui a0,0x42
004031e4  addiu a0,a0,-0x2dc0
004031e8  jalr t9
004031ec  _move a1,s2
004031f0  lw gp,0x10(sp)
004031f4  beq v0,zero,0x0040322c
004031f8  _move s0,v0
004031fc  lw t9,-0x7f88(gp)
00403200  lui a0,0x42
00403204  addiu a0,a0,-0x2d9c
00403208  jalr t9
0040320c  _move a1,v0
00403210  lw gp,0x10(sp)
00403214  nop
00403218  lw t9,-0x7ec8(gp)
0040321c  nop
00403220  jalr t9
00403224  _move a0,s0
00403228  lw gp,0x10(sp)
0040322c  lui s2,0x42
00403230  addiu s2,s2,-0x2d98
00403234  clear s0
00403238  li s1,0x5a
0040323c  lw t9,-0x7f38(gp)
00403240  move a0,s2
00403244  jalr t9
00403248  _clear a1
0040324c  lw gp,0x10(sp)
00403250  addiu s0,s0,0x1
00403254  lw t9,-0x7dc4(gp)
00403258  beq v0,zero,0x004032a4
0040325c  _li a0,0x1
00403260  jalr t9
00403264  _nop
00403268  lw gp,0x10(sp)
0040326c  bne s0,s1,0x0040323c
00403270  _nop
00403274  lw t9,-0x7dac(gp)
00403278  lui a0,0x42
0040327c  jalr t9
00403280  _addiu a0,a0,-0x2d80
00403284  li v0,-0x1a59
00403288  lw ra,0x2c(sp)
0040328c  lw s3,0x28(sp)
00403290  lw s2,0x24(sp)
00403294  lw s1,0x20(sp)
00403298  lw s0,0x1c(sp)
0040329c  jr ra
004032a0  _addiu sp,sp,0x30
004032a4  lw t9,-0x7dac(gp)
004032a8  lui a0,0x42
004032ac  jalr t9
004032b0  _addiu a0,a0,-0x2d6c
004032b4  b 0x00403288
004032b8  _clear v0
