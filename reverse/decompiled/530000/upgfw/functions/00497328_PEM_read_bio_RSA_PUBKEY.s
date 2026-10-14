# PEM_read_bio_RSA_PUBKEY @ 00497328
00497328  addiu sp,sp,-0x28
0049732c  sw ra,0x24(sp)
00497330  lui gp,0x58
00497334  addiu gp,gp,0x5140
00497338  sw gp,0x18(sp)
0049733c  move v1,a0
00497340  move v0,a1
00497344  sw a2,0x10(sp)
00497348  sw a3,0x14(sp)
0049734c  lw a0,-0x68c4(gp)
00497350  lui a1,0x54
00497354  addiu a1,a1,0x7f64
00497358  move a2,v1
0049735c  lw t9,-0x7cc4(gp)
00497360  nop
00497364  jalr t9
00497368  _move a3,v0
0049736c  lw ra,0x24(sp)
00497370  nop
00497374  jr ra
00497378  _addiu sp,sp,0x28
