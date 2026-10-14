# FUN_004248a4 @ 004248a4
004248a4  addiu sp,sp,-0x28
004248a8  sw ra,0x24(sp)
004248ac  sw s0,0x20(sp)
004248b0  lui gp,0x62
004248b4  addiu gp,gp,-0x5cf0
004248b8  sw gp,0x10(sp)
004248bc  beq a0,zero,0x0042492c
004248c0  _clear s0
004248c4  lb v0,0x0(a0)
004248c8  nop
004248cc  beq v0,zero,0x0042492c
004248d0  _nop
004248d4  lw t9,-0x63c4(gp)
004248d8  nop
004248dc  jalr t9
004248e0  _sw a0,0x1c(sp)
004248e4  lw gp,0x10(sp)
004248e8  addiu a2,v0,0x1
004248ec  move a0,a2
004248f0  lw t9,-0x619c(gp)
004248f4  nop
004248f8  jalr t9
004248fc  _sw a2,0x18(sp)
00424900  lw gp,0x10(sp)
00424904  lw a1,0x1c(sp)
00424908  lw a2,0x18(sp)
0042490c  beq v0,zero,0x0042492c
00424910  _move s0,v0
00424914  lw t9,-0x5c9c(gp)
00424918  nop
0042491c  jalr t9
00424920  _move a0,v0
00424924  b 0x00424930
00424928  _move v0,s0
0042492c  move v0,s0
00424930  lw ra,0x24(sp)
00424934  lw s0,0x20(sp)
00424938  jr ra
0042493c  _addiu sp,sp,0x28
