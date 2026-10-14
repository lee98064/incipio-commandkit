# _fini @ 00449490
00449490  lui gp,0x3
00449494  addiu gp,gp,-0x6e60
00449498  addu gp,gp,t9
0044949c  addiu sp,sp,-0x20
004494a0  sw gp,0x10(sp)
004494a4  sw ra,0x1c(sp)
004494a8  sw gp,0x18(sp)
004494ac  bal 0x004494b4
004494b0  _nop
004494b4  lui gp,0x3
004494b8  addiu gp,gp,-0x6e84
004494bc  addu gp,gp,ra
004494c0  lw t9,-0x7fd8(gp)
004494c4  nop
004494c8  addiu t9,t9,0x3b90
004494cc  jalr t9
004494d0  _nop
004494d4  lw gp,0x10(sp)
004494d8  nop
004494dc  lw ra,0x1c(sp)
004494e0  nop
004494e4  jr ra
004494e8  _addiu sp,sp,0x20
