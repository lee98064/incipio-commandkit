# FUN_00410c98 @ 00410c98
00410c98  lui gp,0x17
00410c9c  addiu gp,gp,0x4378
00410ca0  addu gp,gp,t9
00410ca4  addiu sp,sp,-0x20
00410ca8  sw ra,0x1c(sp)
00410cac  sw gp,0x10(sp)
00410cb0  lw v0,-0x6c30(gp)
00410cb4  nop
00410cb8  beq v0,zero,0x00410ce0
00410cbc  _nop
00410cc0  lw a0,-0x7fd8(gp)
00410cc4  lw a1,-0x7fe8(gp)
00410cc8  lw t9,-0x6c30(gp)
00410ccc  addiu a0,a0,-0x6840
00410cd0  jalr t9
00410cd4  _addiu a1,a1,-0x1668
00410cd8  lw gp,0x10(sp)
00410cdc  nop
00410ce0  lw a0,-0x7fdc(gp)
00410ce4  nop
00410ce8  lw v0,-0x682c(a0)
00410cec  nop
00410cf0  beq v0,zero,0x00410d14
00410cf4  _nop
00410cf8  lw t9,-0x6a08(gp)
00410cfc  nop
00410d00  beq t9,zero,0x00410d14
00410d04  _addiu a0,a0,-0x682c
00410d08  lw ra,0x1c(sp)
00410d0c  jr t9
00410d10  _addiu sp,sp,0x20
00410d14  lw ra,0x1c(sp)
00410d18  nop
00410d1c  jr ra
00410d20  _addiu sp,sp,0x20
