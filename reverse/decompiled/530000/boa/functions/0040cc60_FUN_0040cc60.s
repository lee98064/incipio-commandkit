# FUN_0040cc60 @ 0040cc60
0040cc60  addiu sp,sp,-0x20
0040cc64  sw ra,0x1c(sp)
0040cc68  sw s0,0x18(sp)
0040cc6c  lui gp,0x47
0040cc70  addiu gp,gp,0x2630
0040cc74  sw gp,0x10(sp)
0040cc78  lw a0,-0x7f60(gp)
0040cc7c  nop
0040cc80  lw s0,0x0(a0)
0040cc84  nop
0040cc88  beq s0,zero,0x0040ccac
0040cc8c  _nop
0040cc90  lw t9,-0x7ea0(gp)
0040cc94  nop
0040cc98  jalr t9
0040cc9c  _move a1,s0
0040cca0  lw gp,0x10(sp)
0040cca4  b 0x0040cce0
0040cca8  _nop
0040ccac  lw t9,-0x7b1c(gp)
0040ccb0  nop
0040ccb4  jalr t9
0040ccb8  _li a0,0x3284
0040ccbc  lw gp,0x10(sp)
0040ccc0  bne v0,zero,0x0040cce0
0040ccc4  _move s0,v0
0040ccc8  lw t9,-0x7aec(gp)
0040cccc  lui a0,0x45
0040ccd0  jalr t9
0040ccd4  _addiu a0,a0,-0x527c
0040ccd8  b 0x0040cd0c
0040ccdc  _move v0,s0
0040cce0  lw t9,-0x7b1c(gp)
0040cce4  li v0,0x2000
0040cce8  li a0,0x2001
0040ccec  jalr t9
0040ccf0  _sw v0,0x8cc(s0)
0040ccf4  sw v0,0x8d0(s0)
0040ccf8  sw zero,0x3278(s0)
0040ccfc  move a0,s0
0040cd00  jal 0x0040c5d0
0040cd04  _li a1,0x1
0040cd08  move v0,s0
0040cd0c  lw ra,0x1c(sp)
0040cd10  lw s0,0x18(sp)
0040cd14  jr ra
0040cd18  _addiu sp,sp,0x20
