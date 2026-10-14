# PEM_read_bio_RSA_PUBKEY @ 00497238
00497238  addiu sp,sp,-0x28
0049723c  sw ra,0x24(sp)
00497240  lui gp,0x58
00497244  addiu gp,gp,0x5010
00497248  sw gp,0x18(sp)
0049724c  move v1,a0
00497250  move v0,a1
00497254  sw a2,0x10(sp)
00497258  sw a3,0x14(sp)
0049725c  lw a0,-0x68c8(gp)
00497260  lui a1,0x54
00497264  addiu a1,a1,0x7e34
00497268  move a2,v1
0049726c  lw t9,-0x7cc4(gp)
00497270  nop
00497274  jalr t9
00497278  _move a3,v0
0049727c  lw ra,0x24(sp)
00497280  nop
00497284  jr ra
00497288  _addiu sp,sp,0x28
