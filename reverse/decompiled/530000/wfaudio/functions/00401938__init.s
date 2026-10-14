# _init @ 00401938
00401938  lui gp,0x3
0040193c  addiu gp,gp,-0x65c8
00401940  addu gp,gp,t9
00401944  addiu sp,sp,-0x20
00401948  sw gp,0x10(sp)
0040194c  sw ra,0x1c(sp)
00401950  sw gp,0x18(sp)
00401954  bal 0x0040195c
00401958  _nop
0040195c  lui gp,0x3
00401960  addiu gp,gp,-0x65ec
00401964  addu gp,gp,ra
00401968  lw t9,-0x7fd8(gp)
0040196c  nop
00401970  addiu t9,t9,0x1b38
00401974  bal 0x00401b38
00401978  _nop
0040197c  lw gp,0x10(sp)
00401980  nop
00401984  bal 0x0040198c
00401988  _nop
0040198c  lui gp,0x3
00401990  addiu gp,gp,-0x661c
00401994  addu gp,gp,ra
00401998  lw t9,-0x7fdc(gp)
0040199c  nop
004019a0  addiu t9,t9,-0x670
004019a4  bal 0x0040f990
004019a8  _nop
004019ac  lw gp,0x10(sp)
004019b0  nop
004019b4  lw ra,0x1c(sp)
004019b8  nop
004019bc  jr ra
004019c0  _addiu sp,sp,0x20
