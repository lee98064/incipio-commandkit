# _fini @ 00405060
00405060  lui gp,0x2
00405064  addiu gp,gp,-0x7200
00405068  addu gp,gp,t9
0040506c  addiu sp,sp,-0x20
00405070  sw gp,0x10(sp)
00405074  sw ra,0x1c(sp)
00405078  sw gp,0x18(sp)
0040507c  bal 0x00405084
00405080  _nop
00405084  lui gp,0x2
00405088  addiu gp,gp,-0x7224
0040508c  addu gp,gp,ra
00405090  lw t9,-0x7fdc(gp)
00405094  nop
00405098  addiu t9,t9,0xb30
0040509c  bal 0x00400b30
004050a0  _nop
004050a4  lw gp,0x10(sp)
004050a8  nop
004050ac  lw ra,0x1c(sp)
004050b0  nop
004050b4  jr ra
004050b8  _addiu sp,sp,0x20
