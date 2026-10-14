# release_mmap @ 00409570
00409570  addiu sp,sp,-0x20
00409574  sw ra,0x1c(sp)
00409578  lui gp,0x47
0040957c  addiu gp,gp,0x2630
00409580  sw gp,0x10(sp)
00409584  beq a0,zero,0x00409604
00409588  _move a2,a0
0040958c  lw v0,0x10(a0)
00409590  nop
00409594  bne v0,zero,0x004095d4
00409598  _addiu v0,v0,-0x1
0040959c  lw v0,-0x7a3c(gp)
004095a0  nop
004095a4  lw v0,0x0(v0)
004095a8  nop
004095ac  andi v0,v0,0x800
004095b0  beq v0,zero,0x00409604
004095b4  _lui a1,0x45
004095b8  lw v0,-0x7e40(gp)
004095bc  lw t9,-0x7c44(gp)
004095c0  lw ra,0x1c(sp)
004095c4  lw a0,0x0(v0)
004095c8  addiu a1,a1,-0x5b4c
004095cc  jr t9
004095d0  _addiu sp,sp,0x20
004095d4  bne v0,zero,0x00409604
004095d8  _sw v0,0x10(a0)
004095dc  lw a1,0x14(a0)
004095e0  lw t9,-0x7a54(gp)
004095e4  lw a0,0xc(a0)
004095e8  jalr t9
004095ec  _nop
004095f0  lui v0,0x47
004095f4  lw v1,-0x3870(v0)
004095f8  nop
004095fc  addiu v1,v1,-0x1
00409600  sw v1,-0x3870(v0)
00409604  lw ra,0x1c(sp)
00409608  nop
0040960c  jr ra
00409610  _addiu sp,sp,0x20
