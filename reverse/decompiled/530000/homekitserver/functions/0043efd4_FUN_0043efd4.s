# FUN_0043efd4 @ 0043efd4
0043efd4  lui gp,0x1e
0043efd8  addiu gp,gp,-0x4cc4
0043efdc  addu gp,gp,t9
0043efe0  addiu sp,sp,-0x38
0043efe4  sw ra,0x34(sp)
0043efe8  sw s8,0x30(sp)
0043efec  move s8,sp
0043eff0  sw gp,0x10(sp)
0043eff4  addiu v0,s8,0x28
0043eff8  lw v1,-0x7fd0(gp)
0043effc  nop
0043f000  addiu a0,v1,-0x10f4
0043f004  lw v1,-0x7fd0(gp)
0043f008  nop
0043f00c  addiu a1,v1,-0x10d4
0043f010  move a2,v0
0043f014  lw v0,-0x6ea0(gp)
0043f018  nop
0043f01c  move t9,v0
0043f020  jalr t9
0043f024  _nop
0043f028  lw gp,0x10(s8)
0043f02c  nop
0043f030  lw v0,-0x5aec(gp)
0043f034  nop
0043f038  move t9,v0
0043f03c  jalr t9
0043f040  _nop
0043f044  lw gp,0x10(s8)
0043f048  lw v0,0x0(v0)
0043f04c  nop
0043f050  sw v0,0x24(s8)
0043f054  lw v1,0x2c(s8)
0043f058  lw v0,0x28(s8)
0043f05c  sw zero,0x20(s8)
0043f060  lui a0,0x8000
0043f064  bne v0,a0,0x0043f07c
0043f068  _nop
0043f06c  bne v1,zero,0x0043f07c
0043f070  _nop
0043f074  li v0,0x1
0043f078  sw v0,0x20(s8)
0043f07c  addiu v0,s8,0x28
0043f080  lw v1,-0x7fd0(gp)
0043f084  nop
0043f088  addiu a0,v1,-0x10cc
0043f08c  lw v1,-0x7fd0(gp)
0043f090  nop
0043f094  addiu a1,v1,-0x10d4
0043f098  move a2,v0
0043f09c  lw v0,-0x6ea0(gp)
0043f0a0  nop
0043f0a4  move t9,v0
0043f0a8  jalr t9
0043f0ac  _nop
0043f0b0  lw gp,0x10(s8)
0043f0b4  nop
0043f0b8  lw v0,-0x5aec(gp)
0043f0bc  nop
0043f0c0  move t9,v0
0043f0c4  jalr t9
0043f0c8  _nop
0043f0cc  lw gp,0x10(s8)
0043f0d0  lw v0,0x0(v0)
0043f0d4  nop
0043f0d8  sw v0,0x1c(s8)
0043f0dc  lw v1,0x2c(s8)
0043f0e0  lw v0,0x28(s8)
0043f0e4  sw zero,0x18(s8)
0043f0e8  lui a0,0x7fff
0043f0ec  ori a0,a0,0xffff
0043f0f0  bne v0,a0,0x0043f10c
0043f0f4  _nop
0043f0f8  li a0,-0x1
0043f0fc  bne v1,a0,0x0043f10c
0043f100  _nop
0043f104  li v0,0x1
0043f108  sw v0,0x18(s8)
0043f10c  lw v1,0x24(s8)
0043f110  li v0,0x22
0043f114  bne v1,v0,0x0043f14c
0043f118  _nop
0043f11c  lw v0,0x20(s8)
0043f120  nop
0043f124  beq v0,zero,0x0043f14c
0043f128  _nop
0043f12c  lw v1,0x1c(s8)
0043f130  li v0,0x22
0043f134  bne v1,v0,0x0043f14c
0043f138  _nop
0043f13c  lw v0,0x18(s8)
0043f140  nop
0043f144  bne v0,zero,0x0043f158
0043f148  _nop
0043f14c  lw v0,-0x7fe8(gp)
0043f150  li v1,0x1
0043f154  sw v1,0x5f50(v0)
0043f158  move sp,s8
0043f15c  lw ra,0x34(sp)
0043f160  lw s8,0x30(sp)
0043f164  addiu sp,sp,0x38
0043f168  jr ra
0043f16c  _nop
