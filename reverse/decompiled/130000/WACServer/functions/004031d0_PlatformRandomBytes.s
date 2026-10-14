# PlatformRandomBytes @ 004031d0
004031d0  addiu sp,sp,-0x38
004031d4  sw ra,0x34(sp)
004031d8  sw s4,0x30(sp)
004031dc  sw s3,0x2c(sp)
004031e0  sw s2,0x28(sp)
004031e4  sw s1,0x24(sp)
004031e8  sw s0,0x20(sp)
004031ec  lui gp,0x44
004031f0  addiu gp,gp,-0x4fc0
004031f4  sw gp,0x10(sp)
004031f8  move s4,a0
004031fc  move s3,a1
00403200  clear s0
00403204  addiu s2,sp,0x18
00403208  b 0x00403270
0040320c  _li s1,0x100
00403210  jalr t9
00403214  _nop
00403218  lw gp,0x10(sp)
0040321c  lw v0,0x18(sp)
00403220  lw a0,0x1c(sp)
00403224  lw t9,-0x7ec4(gp)
00403228  nop
0040322c  jalr t9
00403230  _addu a0,a0,v0
00403234  lw gp,0x10(sp)
00403238  nop
0040323c  lw t9,-0x7e5c(gp)
00403240  nop
00403244  jalr t9
00403248  _nop
0040324c  div v0,s1
00403250  bne s1,zero,0x0040325c
00403254  _nop
00403258  break 0x1c00
0040325c  addu v1,s4,s0
00403260  lw gp,0x10(sp)
00403264  addiu s0,s0,0x1
00403268  mfhi v0
0040326c  sb v0,0x0(v1)
00403270  sltu v0,s0,s3
00403274  lw t9,-0x7ea8(gp)
00403278  clear a1
0040327c  bne v0,zero,0x00403210
00403280  _move a0,s2
00403284  lw ra,0x34(sp)
00403288  lw s4,0x30(sp)
0040328c  lw s3,0x2c(sp)
00403290  lw s2,0x28(sp)
00403294  lw s1,0x24(sp)
00403298  lw s0,0x20(sp)
0040329c  clear v0
004032a0  jr ra
004032a4  _addiu sp,sp,0x38
