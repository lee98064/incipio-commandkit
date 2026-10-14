# RemoveWACBonjourService @ 00405030
00405030  addiu sp,sp,-0x20
00405034  sw ra,0x1c(sp)
00405038  sw s0,0x18(sp)
0040503c  lui gp,0x44
00405040  addiu gp,gp,-0x4fc0
00405044  sw gp,0x10(sp)
00405048  move s0,a0
0040504c  beq a0,zero,0x0040507c
00405050  _li v0,-0x1a31
00405054  lw a0,0x38(a0)
00405058  nop
0040505c  beq a0,zero,0x0040507c
00405060  _clear v0
00405064  lw t9,-0x7df0(gp)
00405068  nop
0040506c  jalr t9
00405070  _nop
00405074  sw zero,0x38(s0)
00405078  clear v0
0040507c  lw ra,0x1c(sp)
00405080  lw s0,0x18(sp)
00405084  jr ra
00405088  _addiu sp,sp,0x20
