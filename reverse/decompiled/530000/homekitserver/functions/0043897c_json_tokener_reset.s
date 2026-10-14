# json_tokener_reset @ 0043897c
0043897c  lui gp,0x1e
00438980  addiu gp,gp,0x1994
00438984  addu gp,gp,t9
00438988  addiu sp,sp,-0x28
0043898c  sw ra,0x24(sp)
00438990  sw s8,0x20(sp)
00438994  move s8,sp
00438998  sw gp,0x10(sp)
0043899c  sw a0,0x28(s8)
004389a0  lw v0,0x28(s8)
004389a4  nop
004389a8  beq v0,zero,0x00438a30
004389ac  _nop
004389b0  lw v0,0x28(s8)
004389b4  nop
004389b8  lw v0,0xc(v0)
004389bc  nop
004389c0  sw v0,0x18(s8)
004389c4  b 0x00438a00
004389c8  _nop
004389cc  lw a0,0x28(s8)
004389d0  lw a1,0x18(s8)
004389d4  lw v0,-0x7fc8(gp)
004389d8  nop
004389dc  addiu v0,v0,-0x77f8
004389e0  move t9,v0
004389e4  jalr t9
004389e8  _nop
004389ec  lw gp,0x10(s8)
004389f0  lw v0,0x18(s8)
004389f4  nop
004389f8  addiu v0,v0,-0x1
004389fc  sw v0,0x18(s8)
00438a00  lw v0,0x18(s8)
00438a04  nop
00438a08  bgez v0,0x004389cc
00438a0c  _nop
00438a10  lw v0,0x28(s8)
00438a14  nop
00438a18  sw zero,0xc(v0)
00438a1c  lw v0,0x28(s8)
00438a20  nop
00438a24  sw zero,0x1c(v0)
00438a28  b 0x00438a34
00438a2c  _nop
00438a30  nop
00438a34  move sp,s8
00438a38  lw ra,0x24(sp)
00438a3c  lw s8,0x20(sp)
00438a40  addiu sp,sp,0x28
00438a44  jr ra
00438a48  _nop
