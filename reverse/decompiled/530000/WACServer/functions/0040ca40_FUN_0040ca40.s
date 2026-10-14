# FUN_0040ca40 @ 0040ca40
0040ca40  addiu sp,sp,-0x30
0040ca44  sw ra,0x2c(sp)
0040ca48  sw s1,0x28(sp)
0040ca4c  sw s0,0x24(sp)
0040ca50  lui gp,0x44
0040ca54  addiu gp,gp,-0x4fc0
0040ca58  sw gp,0x10(sp)
0040ca5c  lw t9,-0x7fb0(gp)
0040ca60  sw a2,0x18(sp)
0040ca64  move s0,a0
0040ca68  jalr t9
0040ca6c  _move s1,a1
0040ca70  li v0,0x1
0040ca74  lw gp,0x10(sp)
0040ca78  lw a0,0x18(sp)
0040ca7c  bne s1,v0,0x0040ca90
0040ca80  _nop
0040ca84  lw t9,-0x7de8(gp)
0040ca88  b 0x0040ca98
0040ca8c  _nop
0040ca90  lw t9,-0x7f3c(gp)
0040ca94  nop
0040ca98  jalr t9
0040ca9c  _move a1,s0
0040caa0  sw s1,0xf4(s0)
0040caa4  lw ra,0x2c(sp)
0040caa8  lw s1,0x28(sp)
0040caac  lw s0,0x24(sp)
0040cab0  clear v0
0040cab4  jr ra
0040cab8  _addiu sp,sp,0x30
