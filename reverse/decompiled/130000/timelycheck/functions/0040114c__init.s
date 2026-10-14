# _init @ 0040114c
0040114c  lui gp,0x3
00401150  addiu gp,gp,0x1f14
00401154  addu gp,gp,t9
00401158  addiu sp,sp,-0x20
0040115c  sw gp,0x10(sp)
00401160  sw ra,0x1c(sp)
00401164  sw gp,0x18(sp)
00401168  bal 0x00401170
0040116c  _nop
00401170  lui gp,0x3
00401174  addiu gp,gp,0x1ef0
00401178  addu gp,gp,ra
0040117c  lw t9,-0x7fd8(gp)
00401180  nop
00401184  addiu t9,t9,0x1348
00401188  bal 0x00401348
0040118c  _nop
00401190  lw gp,0x10(sp)
00401194  nop
00401198  bal 0x004011a0
0040119c  _nop
004011a0  lui gp,0x3
004011a4  addiu gp,gp,0x1ec0
004011a8  addu gp,gp,ra
004011ac  lw t9,-0x7fd4(gp)
004011b0  nop
004011b4  addiu t9,t9,0x73f0
004011b8  bal 0x004173f0
004011bc  _nop
004011c0  lw gp,0x10(sp)
004011c4  nop
004011c8  lw ra,0x1c(sp)
004011cc  nop
004011d0  jr ra
004011d4  _addiu sp,sp,0x20
