# PlatformRandomBytes @ 004032c0
004032c0  addiu sp,sp,-0x38
004032c4  sw ra,0x34(sp)
004032c8  sw s4,0x30(sp)
004032cc  sw s3,0x2c(sp)
004032d0  sw s2,0x28(sp)
004032d4  sw s1,0x24(sp)
004032d8  sw s0,0x20(sp)
004032dc  lui gp,0x44
004032e0  addiu gp,gp,-0x4fc0
004032e4  sw gp,0x10(sp)
004032e8  move s4,a0
004032ec  move s3,a1
004032f0  clear s0
004032f4  addiu s2,sp,0x18
004032f8  b 0x00403360
004032fc  _li s1,0x100
00403300  jalr t9
00403304  _nop
00403308  lw gp,0x10(sp)
0040330c  lw v0,0x18(sp)
00403310  lw a0,0x1c(sp)
00403314  lw t9,-0x7ec4(gp)
00403318  nop
0040331c  jalr t9
00403320  _addu a0,a0,v0
00403324  lw gp,0x10(sp)
00403328  nop
0040332c  lw t9,-0x7e5c(gp)
00403330  nop
00403334  jalr t9
00403338  _nop
0040333c  div v0,s1
00403340  bne s1,zero,0x0040334c
00403344  _nop
00403348  break 0x1c00
0040334c  addu v1,s4,s0
00403350  lw gp,0x10(sp)
00403354  addiu s0,s0,0x1
00403358  mfhi v0
0040335c  sb v0,0x0(v1)
00403360  sltu v0,s0,s3
00403364  lw t9,-0x7ea8(gp)
00403368  clear a1
0040336c  bne v0,zero,0x00403300
00403370  _move a0,s2
00403374  lw ra,0x34(sp)
00403378  lw s4,0x30(sp)
0040337c  lw s3,0x2c(sp)
00403380  lw s2,0x28(sp)
00403384  lw s1,0x24(sp)
00403388  lw s0,0x20(sp)
0040338c  clear v0
00403390  jr ra
00403394  _addiu sp,sp,0x38
