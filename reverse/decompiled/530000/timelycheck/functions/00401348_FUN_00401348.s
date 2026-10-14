# FUN_00401348 @ 00401348
00401348  lui gp,0x3
0040134c  addiu gp,gp,0x1d18
00401350  addu gp,gp,t9
00401354  addiu sp,sp,-0x20
00401358  sw ra,0x1c(sp)
0040135c  sw gp,0x10(sp)
00401360  lw v0,-0x7e88(gp)
00401364  nop
00401368  beq v0,zero,0x00401390
0040136c  _nop
00401370  lw a0,-0x7fdc(gp)
00401374  lw a1,-0x7fe8(gp)
00401378  lw t9,-0x7e88(gp)
0040137c  addiu a0,a0,-0x64a0
00401380  jalr t9
00401384  _addiu a1,a1,-0x4dd8
00401388  lw gp,0x10(sp)
0040138c  nop
00401390  lw a0,-0x7fe8(gp)
00401394  nop
00401398  lw v0,-0x5ff0(a0)
0040139c  nop
004013a0  beq v0,zero,0x004013c4
004013a4  _nop
004013a8  lw t9,-0x7fc0(gp)
004013ac  nop
004013b0  beq t9,zero,0x004013c4
004013b4  _addiu a0,a0,-0x5ff0
004013b8  lw ra,0x1c(sp)
004013bc  jr t9
004013c0  _addiu sp,sp,0x20
004013c4  lw ra,0x1c(sp)
004013c8  nop
004013cc  jr ra
004013d0  _addiu sp,sp,0x20
