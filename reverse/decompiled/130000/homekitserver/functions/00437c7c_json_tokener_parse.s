# json_tokener_parse @ 00437c7c
00437c7c  lui gp,0x1e
00437c80  addiu gp,gp,0x1804
00437c84  addu gp,gp,t9
00437c88  addiu sp,sp,-0x28
00437c8c  sw ra,0x24(sp)
00437c90  sw s8,0x20(sp)
00437c94  move s8,sp
00437c98  sw gp,0x10(sp)
00437c9c  sw a0,0x28(s8)
00437ca0  addiu v0,s8,0x1c
00437ca4  lw a0,0x28(s8)
00437ca8  move a1,v0
00437cac  lw v0,-0x7744(gp)
00437cb0  nop
00437cb4  move t9,v0
00437cb8  jalr t9
00437cbc  _nop
00437cc0  lw gp,0x10(s8)
00437cc4  sw v0,0x18(s8)
00437cc8  lw v0,0x18(s8)
00437ccc  move sp,s8
00437cd0  lw ra,0x24(sp)
00437cd4  lw s8,0x20(sp)
00437cd8  addiu sp,sp,0x28
00437cdc  jr ra
00437ce0  _nop
