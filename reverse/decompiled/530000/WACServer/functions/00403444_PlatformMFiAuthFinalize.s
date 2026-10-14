# PlatformMFiAuthFinalize @ 00403444
00403444  addiu sp,sp,-0x20
00403448  sw ra,0x1c(sp)
0040344c  sw s0,0x18(sp)
00403450  lui gp,0x44
00403454  addiu gp,gp,-0x4fc0
00403458  sw gp,0x10(sp)
0040345c  lui s0,0x43
00403460  lw a0,0x3590(s0)
00403464  nop
00403468  beq a0,zero,0x00403484
0040346c  _nop
00403470  lw t9,-0x7fb8(gp)
00403474  nop
00403478  jalr t9
0040347c  _nop
00403480  sw zero,0x3590(s0)
00403484  lw ra,0x1c(sp)
00403488  lw s0,0x18(sp)
0040348c  lui v0,0x43
00403490  sw zero,0x3594(v0)
00403494  jr ra
00403498  _addiu sp,sp,0x20
