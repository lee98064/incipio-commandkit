# json_tokener_free @ 0043793c
0043793c  lui gp,0x1e
00437940  addiu gp,gp,0x1b44
00437944  addu gp,gp,t9
00437948  addiu sp,sp,-0x20
0043794c  sw ra,0x1c(sp)
00437950  sw s8,0x18(sp)
00437954  move s8,sp
00437958  sw gp,0x10(sp)
0043795c  sw a0,0x20(s8)
00437960  lw a0,0x20(s8)
00437964  lw v0,-0x5814(gp)
00437968  nop
0043796c  move t9,v0
00437970  jalr t9
00437974  _nop
00437978  lw gp,0x10(s8)
0043797c  lw v0,0x20(s8)
00437980  nop
00437984  lw v0,0x4(v0)
00437988  nop
0043798c  beq v0,zero,0x004379c0
00437990  _nop
00437994  lw v0,0x20(s8)
00437998  nop
0043799c  lw v0,0x4(v0)
004379a0  nop
004379a4  move a0,v0
004379a8  lw v0,-0x7b7c(gp)
004379ac  nop
004379b0  move t9,v0
004379b4  jalr t9
004379b8  _nop
004379bc  lw gp,0x10(s8)
004379c0  lw v0,0x20(s8)
004379c4  nop
004379c8  lw v0,0x28(v0)
004379cc  nop
004379d0  beq v0,zero,0x00437a04
004379d4  _nop
004379d8  lw v0,0x20(s8)
004379dc  nop
004379e0  lw v0,0x28(v0)
004379e4  nop
004379e8  move a0,v0
004379ec  lw v0,-0x7aa4(gp)
004379f0  nop
004379f4  move t9,v0
004379f8  jalr t9
004379fc  _nop
00437a00  lw gp,0x10(s8)
00437a04  lw a0,0x20(s8)
00437a08  lw v0,-0x7aa4(gp)
00437a0c  nop
00437a10  move t9,v0
00437a14  jalr t9
00437a18  _nop
00437a1c  lw gp,0x10(s8)
00437a20  move sp,s8
00437a24  lw ra,0x1c(sp)
00437a28  lw s8,0x18(sp)
00437a2c  addiu sp,sp,0x20
00437a30  jr ra
00437a34  _nop
