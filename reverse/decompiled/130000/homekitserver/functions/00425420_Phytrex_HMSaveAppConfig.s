# Phytrex_HMSaveAppConfig @ 00425420
00425420  addiu sp,sp,-0x28
00425424  sw ra,0x24(sp)
00425428  sw s1,0x20(sp)
0042542c  sw s0,0x1c(sp)
00425430  lui gp,0x62
00425434  addiu gp,gp,-0x6b80
00425438  sw gp,0x10(sp)
0042543c  lw t9,-0x63f4(gp)
00425440  move s1,a0
00425444  lui a0,0x61
00425448  jalr t9
0042544c  _addiu a0,a0,0x3d60
00425450  lw gp,0x10(sp)
00425454  lui a0,0x5b
00425458  addiu a0,a0,-0x4580
0042545c  lw t9,-0x5b88(gp)
00425460  nop
00425464  jalr t9
00425468  _li a1,0x2
0042546c  move s0,v0
00425470  li v0,-0x1
00425474  lw gp,0x10(sp)
00425478  bne s0,v0,0x00425494
0042547c  _li a1,0xc
00425480  jal 0x004251dc
00425484  _li s0,-0x1a3e
00425488  lw gp,0x10(sp)
0042548c  b 0x004254e0
00425490  _nop
00425494  lw t9,-0x64ac(gp)
00425498  move a0,s0
0042549c  jalr t9
004254a0  _clear a2
004254a4  lw gp,0x10(sp)
004254a8  move a0,s0
004254ac  move a1,s1
004254b0  lw t9,-0x6be8(gp)
004254b4  nop
004254b8  jalr t9
004254bc  _li a2,0x41
004254c0  lw gp,0x10(sp)
004254c4  move a0,s0
004254c8  lw t9,-0x6d14(gp)
004254cc  nop
004254d0  jalr t9
004254d4  _clear s0
004254d8  lw gp,0x10(sp)
004254dc  nop
004254e0  lw t9,-0x77f4(gp)
004254e4  lui a0,0x61
004254e8  jalr t9
004254ec  _addiu a0,a0,0x3d60
004254f0  move v0,s0
004254f4  lw ra,0x24(sp)
004254f8  lw s1,0x20(sp)
004254fc  lw s0,0x1c(sp)
00425500  jr ra
00425504  _addiu sp,sp,0x28
