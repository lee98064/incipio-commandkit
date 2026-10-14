# FUN_00402fa4 @ 00402fa4
00402fa4  addiu sp,sp,-0x230
00402fa8  sw ra,0x22c(sp)
00402fac  sw s2,0x228(sp)
00402fb0  sw s1,0x224(sp)
00402fb4  sw s0,0x220(sp)
00402fb8  lui gp,0x43
00402fbc  addiu gp,gp,0x3060
00402fc0  sw gp,0x10(sp)
00402fc4  lw t9,-0x7f4c(gp)
00402fc8  li v0,-0x1
00402fcc  addiu s0,sp,0x1c
00402fd0  clear a1
00402fd4  li a2,0x200
00402fd8  sw v0,0x18(sp)
00402fdc  move s1,a0
00402fe0  jalr t9
00402fe4  _move a0,s0
00402fe8  lw gp,0x10(sp)
00402fec  addiu a1,sp,0x18
00402ff0  lw t9,-0x7ec0(gp)
00402ff4  nop
00402ff8  jalr t9
00402ffc  _li a0,0xc0
00403000  lui a1,0x43
00403004  lb v0,-0x4d64(a1)
00403008  lw gp,0x10(sp)
0040300c  beq v0,zero,0x00403044
00403010  _addiu a1,a1,-0x4d64
00403014  lw t9,-0x7ef0(gp)
00403018  nop
0040301c  jalr t9
00403020  _move a0,s0
00403024  lw gp,0x10(sp)
00403028  lui a1,0x41
0040302c  move a0,s0
00403030  lw t9,-0x7ef0(gp)
00403034  nop
00403038  jalr t9
0040303c  _addiu a1,a1,0x7a44
00403040  lw gp,0x10(sp)
00403044  lui a1,0x43
00403048  lb v0,-0x4ae8(a1)
0040304c  nop
00403050  beq v0,zero,0x00403088
00403054  _addiu s0,sp,0x1c
00403058  lw t9,-0x7ef0(gp)
0040305c  addiu a1,a1,-0x4ae8
00403060  jalr t9
00403064  _move a0,s0
00403068  lw gp,0x10(sp)
0040306c  lui a1,0x41
00403070  move a0,s0
00403074  lw t9,-0x7ef0(gp)
00403078  nop
0040307c  jalr t9
00403080  _addiu a1,a1,0x7a44
00403084  lw gp,0x10(sp)
00403088  lui a1,0x43
0040308c  lb v0,-0x4b44(a1)
00403090  nop
00403094  beq v0,zero,0x004030cc
00403098  _addiu s0,sp,0x1c
0040309c  lw t9,-0x7ef0(gp)
004030a0  addiu a1,a1,-0x4b44
004030a4  jalr t9
004030a8  _move a0,s0
004030ac  lw gp,0x10(sp)
004030b0  lui a1,0x41
004030b4  move a0,s0
004030b8  lw t9,-0x7ef0(gp)
004030bc  nop
004030c0  jalr t9
004030c4  _addiu a1,a1,0x7a44
004030c8  lw gp,0x10(sp)
004030cc  lui a1,0x43
004030d0  lb v0,-0x4ad8(a1)
004030d4  nop
004030d8  beq v0,zero,0x00403114
004030dc  _addiu s0,sp,0x1c
004030e0  lw t9,-0x7ef0(gp)
004030e4  addiu a1,a1,-0x4ad8
004030e8  jalr t9
004030ec  _move a0,s0
004030f0  lw gp,0x10(sp)
004030f4  lui a1,0x41
004030f8  move a0,s0
004030fc  lw t9,-0x7ef0(gp)
00403100  nop
00403104  jalr t9
00403108  _addiu a1,a1,0x7a44
0040310c  lw gp,0x10(sp)
00403110  nop
00403114  lw t9,-0x7ef0(gp)
00403118  addiu s0,sp,0x1c
0040311c  lui a1,0x43
00403120  addiu a1,a1,-0x4da4
00403124  jalr t9
00403128  _move a0,s0
0040312c  lw gp,0x10(sp)
00403130  lui s2,0x41
00403134  addiu s2,s2,0x7a44
00403138  lw t9,-0x7ef0(gp)
0040313c  move a0,s0
00403140  jalr t9
00403144  _move a1,s2
00403148  lw gp,0x10(sp)
0040314c  lui a1,0x43
00403150  addiu a1,a1,-0x4d94
00403154  lw t9,-0x7ef0(gp)
00403158  nop
0040315c  jalr t9
00403160  _move a0,s0
00403164  lw v0,0x18(sp)
00403168  lw gp,0x10(sp)
0040316c  addiu v0,v0,-0x1
00403170  sltiu v0,v0,0x2
00403174  beq v0,zero,0x004031b0
00403178  _move a1,s2
0040317c  lw t9,-0x7ef0(gp)
00403180  nop
00403184  jalr t9
00403188  _move a0,s0
0040318c  lw gp,0x10(sp)
00403190  lui a1,0x43
00403194  move a0,s0
00403198  lw t9,-0x7ef0(gp)
0040319c  nop
004031a0  jalr t9
004031a4  _addiu a1,a1,-0x4d84
004031a8  lw gp,0x10(sp)
004031ac  nop
004031b0  lw t9,-0x7e98(gp)
004031b4  move a0,s1
004031b8  addiu a1,sp,0x1c
004031bc  jalr t9
004031c0  _li a2,0x200
004031c4  lw ra,0x22c(sp)
004031c8  lw s2,0x228(sp)
004031cc  lw s1,0x224(sp)
004031d0  lw s0,0x220(sp)
004031d4  jr ra
004031d8  _addiu sp,sp,0x230
