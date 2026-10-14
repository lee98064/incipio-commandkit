# json_object_new_string @ 00437988
00437988  lui gp,0x1e
0043798c  addiu gp,gp,0x2988
00437990  addu gp,gp,t9
00437994  addiu sp,sp,-0x28
00437998  sw ra,0x24(sp)
0043799c  sw s8,0x20(sp)
004379a0  move s8,sp
004379a4  sw gp,0x10(sp)
004379a8  sw a0,0x28(s8)
004379ac  li a0,0x6
004379b0  lw v0,-0x7fcc(gp)
004379b4  nop
004379b8  addiu v0,v0,0x5bc0
004379bc  move t9,v0
004379c0  jalr t9
004379c4  _nop
004379c8  lw gp,0x10(s8)
004379cc  sw v0,0x18(s8)
004379d0  lw v0,0x18(s8)
004379d4  nop
004379d8  bne v0,zero,0x004379ec
004379dc  _nop
004379e0  clear v0
004379e4  b 0x00437a70
004379e8  _nop
004379ec  lw v0,0x18(s8)
004379f0  lw v1,-0x7fcc(gp)
004379f4  nop
004379f8  addiu v1,v1,0x7900
004379fc  sw v1,0x4(v0)
00437a00  lw v0,0x18(s8)
00437a04  lw v1,-0x7fcc(gp)
00437a08  nop
00437a0c  addiu v1,v1,0x7824
00437a10  sw v1,0x8(v0)
00437a14  lw a0,0x28(s8)
00437a18  lw v0,-0x7c88(gp)
00437a1c  nop
00437a20  move t9,v0
00437a24  jalr t9
00437a28  _nop
00437a2c  lw gp,0x10(s8)
00437a30  move v1,v0
00437a34  lw v0,0x18(s8)
00437a38  nop
00437a3c  sw v1,0x18(v0)
00437a40  lw a0,0x28(s8)
00437a44  lw v0,-0x63c4(gp)
00437a48  nop
00437a4c  move t9,v0
00437a50  jalr t9
00437a54  _nop
00437a58  lw gp,0x10(s8)
00437a5c  move v1,v0
00437a60  lw v0,0x18(s8)
00437a64  nop
00437a68  sw v1,0x1c(v0)
00437a6c  lw v0,0x18(s8)
00437a70  move sp,s8
00437a74  lw ra,0x24(sp)
00437a78  lw s8,0x20(sp)
00437a7c  addiu sp,sp,0x28
00437a80  jr ra
00437a84  _nop
