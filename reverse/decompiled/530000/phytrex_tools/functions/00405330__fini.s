# _fini @ 00405330
00405330  lui gp,0x2
00405334  addiu gp,gp,-0x70e0
00405338  addu gp,gp,t9
0040533c  addiu sp,sp,-0x20
00405340  sw gp,0x10(sp)
00405344  sw ra,0x1c(sp)
00405348  sw gp,0x18(sp)
0040534c  bal 0x00405354
00405350  _nop
00405354  lui gp,0x2
00405358  addiu gp,gp,-0x7104
0040535c  addu gp,gp,ra
00405360  lw t9,-0x7fdc(gp)
00405364  nop
00405368  addiu t9,t9,0xb50
0040536c  bal 0x00400b50
00405370  _nop
00405374  lw gp,0x10(sp)
00405378  nop
0040537c  lw ra,0x1c(sp)
00405380  nop
00405384  jr ra
00405388  _addiu sp,sp,0x20
