# Reset_to_AP @ 0040318c
0040318c  addiu sp,sp,-0x160
00403190  sw ra,0x15c(sp)
00403194  sw s3,0x158(sp)
00403198  sw s2,0x154(sp)
0040319c  sw s1,0x150(sp)
004031a0  sw s0,0x14c(sp)
004031a4  lui gp,0x43
004031a8  addiu gp,gp,-0x4c90
004031ac  sw gp,0x18(sp)
004031b0  lw t9,-0x7e4c(gp)
004031b4  li v0,0x2
004031b8  li a0,0xad
004031bc  addiu a1,sp,0x20
004031c0  sw v0,0x20(sp)
004031c4  sw zero,0x24(sp)
004031c8  jalr t9
004031cc  _sw zero,0x28(sp)
004031d0  lw gp,0x18(sp)
004031d4  lui a0,0x41
004031d8  addiu a0,a0,0x540
004031dc  lw t9,-0x7df0(gp)
004031e0  nop
004031e4  jalr t9
004031e8  _clear s0
004031ec  lw gp,0x18(sp)
004031f0  beq v0,zero,0x004032ec
004031f4  _addiu s2,sp,0x7c
004031f8  lw t9,-0x7e4c(gp)
004031fc  li a0,0x3b
00403200  addiu a1,sp,0x24
00403204  jalr t9
00403208  _sw zero,0x24(sp)
0040320c  lw gp,0x18(sp)
00403210  lui a0,0x41
00403214  addiu a0,a0,0x768
00403218  lw t9,-0x7dfc(gp)
0040321c  li a1,0x3
00403220  jalr t9
00403224  _addiu a2,sp,0x2c
00403228  lw gp,0x18(sp)
0040322c  beq v0,zero,0x0040327c
00403230  _addiu s1,sp,0x3c
00403234  lw t9,-0x7dbc(gp)
00403238  addiu a2,sp,0xbc
0040323c  move a0,a2
00403240  jalr t9
00403244  _sw a2,0x140(sp)
00403248  lw gp,0x18(sp)
0040324c  addiu s0,sp,0x2e
00403250  lbu v0,0x5(s0)
00403254  lbu a3,0x4(s0)
00403258  lw t9,-0x7f24(gp)
0040325c  lw a2,0x140(sp)
00403260  lui a1,0x41
00403264  sw v0,0x10(sp)
00403268  move a0,s1
0040326c  jalr t9
00403270  _addiu a1,a1,0x76c
00403274  b 0x00403294
00403278  _nop
0040327c  lw t9,-0x7d90(gp)
00403280  lui a1,0x41
00403284  move a0,s1
00403288  addiu a1,a1,0x778
0040328c  jalr t9
00403290  _clear s0
00403294  lw gp,0x18(sp)
00403298  li a0,0x1
0040329c  addiu a1,sp,0x3c
004032a0  lw t9,-0x7e4c(gp)
004032a4  nop
004032a8  jalr t9
004032ac  _addiu s1,sp,0x28
004032b0  lw gp,0x18(sp)
004032b4  li a0,0x14
004032b8  move a1,s1
004032bc  lw t9,-0x7e4c(gp)
004032c0  nop
004032c4  jalr t9
004032c8  _sw zero,0x28(sp)
004032cc  lw gp,0x18(sp)
004032d0  sw zero,0x28(sp)
004032d4  move a1,s1
004032d8  lw t9,-0x7e4c(gp)
004032dc  nop
004032e0  jalr t9
004032e4  _li a0,0x19
004032e8  addiu s2,sp,0x7c
004032ec  jal 0x004030a4
004032f0  _move a0,s2
004032f4  lw gp,0x18(sp)
004032f8  lui a0,0x41
004032fc  lw t9,-0x7df0(gp)
00403300  nop
00403304  jalr t9
00403308  _addiu a0,a0,0x49c
0040330c  lw gp,0x18(sp)
00403310  beq v0,zero,0x00403388
00403314  _li s3,0x1
00403318  lw t9,-0x7e4c(gp)
0040331c  addiu s1,sp,0x28
00403320  li a0,0x16
00403324  move a1,s1
00403328  jalr t9
0040332c  _sw s3,0x28(sp)
00403330  lw gp,0x18(sp)
00403334  li a0,0x3b
00403338  addiu a1,sp,0x24
0040333c  lw t9,-0x7e4c(gp)
00403340  nop
00403344  jalr t9
00403348  _sw s3,0x24(sp)
0040334c  lw gp,0x18(sp)
00403350  move a1,s2
00403354  lw t9,-0x7e4c(gp)
00403358  nop
0040335c  jalr t9
00403360  _li a0,0x1
00403364  lw gp,0x18(sp)
00403368  sw zero,0x28(sp)
0040336c  move a1,s1
00403370  lw t9,-0x7e4c(gp)
00403374  nop
00403378  jalr t9
0040337c  _li a0,0x19
00403380  lw gp,0x18(sp)
00403384  nop
00403388  lw t9,-0x7e4c(gp)
0040338c  li a0,0xfa
00403390  addiu a1,sp,0x28
00403394  jalr t9
00403398  _sw zero,0x28(sp)
0040339c  lw gp,0x18(sp)
004033a0  li a0,0xfb
004033a4  addiu a1,sp,0x7c
004033a8  lw t9,-0x7e4c(gp)
004033ac  nop
004033b0  jalr t9
004033b4  _addiu s1,sp,0x3c
004033b8  lw gp,0x18(sp)
004033bc  addiu a2,sp,0xbc
004033c0  move a0,a2
004033c4  lw t9,-0x7de0(gp)
004033c8  nop
004033cc  jalr t9
004033d0  _sw a2,0x140(sp)
004033d4  lw gp,0x18(sp)
004033d8  lw a2,0x140(sp)
004033dc  beq s0,zero,0x00403408
004033e0  _lui a1,0x41
004033e4  lbu v0,0x5(s0)
004033e8  lbu a3,0x4(s0)
004033ec  lw t9,-0x7f24(gp)
004033f0  sw v0,0x10(sp)
004033f4  move a0,s1
004033f8  jalr t9
004033fc  _addiu a1,a1,0x76c
00403400  b 0x00403418
00403404  _nop
00403408  lw t9,-0x7d90(gp)
0040340c  move a0,s1
00403410  jalr t9
00403414  _move a1,a2
00403418  lw gp,0x18(sp)
0040341c  addiu a1,sp,0x3c
00403420  li a0,0x2b1
00403424  lw t9,-0x7e4c(gp)
00403428  nop
0040342c  jalr t9
00403430  _addiu s0,sp,0xfc
00403434  lw gp,0x18(sp)
00403438  lui a1,0x41
0040343c  addiu a1,a1,0xcb4
00403440  lw t9,-0x7e4c(gp)
00403444  nop
00403448  jalr t9
0040344c  _li a0,0x2b2
00403450  lw gp,0x18(sp)
00403454  nop
00403458  lw t9,-0x7e44(gp)
0040345c  nop
00403460  jalr t9
00403464  _li a0,0x4
00403468  lw gp,0x18(sp)
0040346c  lui a0,0x41
00403470  lw t9,-0x7e18(gp)
00403474  nop
00403478  jalr t9
0040347c  _addiu a0,a0,0x784
00403480  jal 0x00401d54
00403484  _nop
00403488  jal 0x00401e0c
0040348c  _nop
00403490  lw gp,0x18(sp)
00403494  lui v0,0x42
00403498  sw zero,0x37e4(v0)
0040349c  lw t9,-0x7f24(gp)
004034a0  lui v0,0x42
004034a4  lui a1,0x41
004034a8  lui a2,0x41
004034ac  addiu a1,a1,0x7a4
004034b0  addiu a2,a2,0x7b0
004034b4  move a0,s0
004034b8  jalr t9
004034bc  _sw zero,0x37e8(v0)
004034c0  lw gp,0x18(sp)
004034c4  nop
004034c8  lw t9,-0x7e18(gp)
004034cc  nop
004034d0  jalr t9
004034d4  _move a0,s0
004034d8  lw ra,0x15c(sp)
004034dc  lw s3,0x158(sp)
004034e0  lw s2,0x154(sp)
004034e4  lw s1,0x150(sp)
004034e8  lw s0,0x14c(sp)
004034ec  jr ra
004034f0  _addiu sp,sp,0x160
