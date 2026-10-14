# _init @ 00400a3c
00400a3c  lui gp,0x2
00400a40  addiu gp,gp,-0x2bdc
00400a44  addu gp,gp,t9
00400a48  addiu sp,sp,-0x20
00400a4c  sw gp,0x10(sp)
00400a50  sw ra,0x1c(sp)
00400a54  sw gp,0x18(sp)
00400a58  bal 0x00400a60
00400a5c  _nop
00400a60  lui gp,0x2
00400a64  addiu gp,gp,-0x2c00
00400a68  addu gp,gp,ra
00400a6c  lw t9,-0x7fdc(gp)
00400a70  nop
00400a74  addiu t9,t9,0xc38
00400a78  bal 0x00400c38
00400a7c  _nop
00400a80  lw gp,0x10(sp)
00400a84  nop
00400a88  bal 0x00400a90
00400a8c  _nop
00400a90  lui gp,0x2
00400a94  addiu gp,gp,-0x2c30
00400a98  addu gp,gp,ra
00400a9c  lw t9,-0x7fdc(gp)
00400aa0  nop
00400aa4  addiu t9,t9,0x4e60
00400aa8  bal 0x00404e60
00400aac  _nop
00400ab0  lw gp,0x10(sp)
00400ab4  nop
00400ab8  lw ra,0x1c(sp)
00400abc  nop
00400ac0  jr ra
00400ac4  _addiu sp,sp,0x20
