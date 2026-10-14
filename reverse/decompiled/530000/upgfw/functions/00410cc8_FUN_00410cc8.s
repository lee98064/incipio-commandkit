# FUN_00410cc8 @ 00410cc8
00410cc8  lui gp,0x17
00410ccc  addiu gp,gp,0x4478
00410cd0  addu gp,gp,t9
00410cd4  addiu sp,sp,-0x20
00410cd8  sw ra,0x1c(sp)
00410cdc  sw gp,0x10(sp)
00410ce0  lw v0,-0x6c2c(gp)
00410ce4  nop
00410ce8  beq v0,zero,0x00410d10
00410cec  _nop
00410cf0  lw a0,-0x7fd8(gp)
00410cf4  lw a1,-0x7fe8(gp)
00410cf8  lw t9,-0x6c2c(gp)
00410cfc  addiu a0,a0,-0x6710
00410d00  jalr t9
00410d04  _addiu a1,a1,-0x1538
00410d08  lw gp,0x10(sp)
00410d0c  nop
00410d10  lw a0,-0x7fdc(gp)
00410d14  nop
00410d18  lw v0,-0x66fc(a0)
00410d1c  nop
00410d20  beq v0,zero,0x00410d44
00410d24  _nop
00410d28  lw t9,-0x6a04(gp)
00410d2c  nop
00410d30  beq t9,zero,0x00410d44
00410d34  _addiu a0,a0,-0x66fc
00410d38  lw ra,0x1c(sp)
00410d3c  jr t9
00410d40  _addiu sp,sp,0x20
00410d44  lw ra,0x1c(sp)
00410d48  nop
00410d4c  jr ra
00410d50  _addiu sp,sp,0x20
