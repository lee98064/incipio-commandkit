# _init @ 00400a64
00400a64  lui gp,0x2
00400a68  addiu gp,gp,-0x2814
00400a6c  addu gp,gp,t9
00400a70  addiu sp,sp,-0x20
00400a74  sw gp,0x10(sp)
00400a78  sw ra,0x1c(sp)
00400a7c  sw gp,0x18(sp)
00400a80  bal 0x00400a88
00400a84  _nop
00400a88  lui gp,0x2
00400a8c  addiu gp,gp,-0x2838
00400a90  addu gp,gp,ra
00400a94  lw t9,-0x7fdc(gp)
00400a98  nop
00400a9c  addiu t9,t9,0xc58
00400aa0  bal 0x00400c58
00400aa4  _nop
00400aa8  lw gp,0x10(sp)
00400aac  nop
00400ab0  bal 0x00400ab8
00400ab4  _nop
00400ab8  lui gp,0x2
00400abc  addiu gp,gp,-0x2868
00400ac0  addu gp,gp,ra
00400ac4  lw t9,-0x7fdc(gp)
00400ac8  nop
00400acc  addiu t9,t9,0x5130
00400ad0  bal 0x00405130
00400ad4  _nop
00400ad8  lw gp,0x10(sp)
00400adc  nop
00400ae0  lw ra,0x1c(sp)
00400ae4  nop
00400ae8  jr ra
00400aec  _addiu sp,sp,0x20
