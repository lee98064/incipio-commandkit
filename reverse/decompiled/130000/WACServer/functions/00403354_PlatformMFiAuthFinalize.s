# PlatformMFiAuthFinalize @ 00403354
00403354  addiu sp,sp,-0x20
00403358  sw ra,0x1c(sp)
0040335c  sw s0,0x18(sp)
00403360  lui gp,0x44
00403364  addiu gp,gp,-0x4fc0
00403368  sw gp,0x10(sp)
0040336c  lui s0,0x43
00403370  lw a0,0x35d0(s0)
00403374  nop
00403378  beq a0,zero,0x00403394
0040337c  _nop
00403380  lw t9,-0x7fb8(gp)
00403384  nop
00403388  jalr t9
0040338c  _nop
00403390  sw zero,0x35d0(s0)
00403394  lw ra,0x1c(sp)
00403398  lw s0,0x18(sp)
0040339c  lui v0,0x43
004033a0  sw zero,0x35d4(v0)
004033a4  jr ra
004033a8  _addiu sp,sp,0x20
