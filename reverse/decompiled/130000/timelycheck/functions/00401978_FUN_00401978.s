# FUN_00401978 @ 00401978
00401978  addiu sp,sp,-0x40
0040197c  sw ra,0x3c(sp)
00401980  sw s1,0x38(sp)
00401984  sw s0,0x34(sp)
00401988  lui gp,0x43
0040198c  addiu gp,gp,0x3060
00401990  sw gp,0x10(sp)
00401994  lw t9,-0x7f48(gp)
00401998  lui a0,0x41
0040199c  lui a1,0x42
004019a0  sw zero,0x18(sp)
004019a4  addiu a0,a0,0x78e4
004019a8  jalr t9
004019ac  _addiu a1,a1,-0x780c
004019b0  lw gp,0x10(sp)
004019b4  beq v0,zero,0x00401a80
004019b8  _move s0,v0
004019bc  lw t9,-0x7e90(gp)
004019c0  addiu s1,sp,0x1c
004019c4  li a1,0x14
004019c8  move a2,v0
004019cc  jalr t9
004019d0  _move a0,s1
004019d4  lw gp,0x10(sp)
004019d8  nop
004019dc  lw t9,-0x7f54(gp)
004019e0  nop
004019e4  jalr t9
004019e8  _move a0,s0
004019ec  lw gp,0x10(sp)
004019f0  lui a1,0x41
004019f4  move a0,s1
004019f8  lw t9,-0x7f30(gp)
004019fc  addiu a1,a1,0x7aa4
00401a00  jalr t9
00401a04  _addiu a2,sp,0x18
00401a08  lw gp,0x10(sp)
00401a0c  beq v0,zero,0x00401a80
00401a10  _nop
00401a14  lw v0,0x18(sp)
00401a18  nop
00401a1c  slti v0,v0,0x2
00401a20  bne v0,zero,0x00401a80
00401a24  _nop
00401a28  lw t9,-0x7ea8(gp)
00401a2c  lui a0,0x41
00401a30  jalr t9
00401a34  _addiu a0,a0,0x78f8
00401a38  lw gp,0x10(sp)
00401a3c  lui a0,0x41
00401a40  lw t9,-0x7eb4(gp)
00401a44  nop
00401a48  jalr t9
00401a4c  _addiu a0,a0,0x7904
00401a50  lw gp,0x10(sp)
00401a54  lui a0,0x41
00401a58  lw t9,-0x7eb4(gp)
00401a5c  nop
00401a60  jalr t9
00401a64  _addiu a0,a0,0x7920
00401a68  lw gp,0x10(sp)
00401a6c  lui a0,0x41
00401a70  lw t9,-0x7eb4(gp)
00401a74  nop
00401a78  jalr t9
00401a7c  _addiu a0,a0,0x793c
00401a80  lw ra,0x3c(sp)
00401a84  lw s1,0x38(sp)
00401a88  lw s0,0x34(sp)
00401a8c  jr ra
00401a90  _addiu sp,sp,0x40
