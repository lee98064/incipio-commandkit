# FUN_0040cabc @ 0040cabc
0040cabc  addiu sp,sp,-0x30
0040cac0  sw ra,0x2c(sp)
0040cac4  sw s2,0x28(sp)
0040cac8  sw s1,0x24(sp)
0040cacc  sw s0,0x20(sp)
0040cad0  lui gp,0x44
0040cad4  addiu gp,gp,-0x4fc0
0040cad8  sw gp,0x10(sp)
0040cadc  lw t9,-0x7fb0(gp)
0040cae0  andi s1,a3,0xff
0040cae4  sw a1,0x18(sp)
0040cae8  move s0,a0
0040caec  jalr t9
0040caf0  _move s2,a2
0040caf4  lw gp,0x10(sp)
0040caf8  lw a0,0x18(sp)
0040cafc  beq s1,zero,0x0040cb10
0040cb00  _nop
0040cb04  lw t9,-0x7de8(gp)
0040cb08  b 0x0040cb18
0040cb0c  _nop
0040cb10  lw t9,-0x7f3c(gp)
0040cb14  nop
0040cb18  jalr t9
0040cb1c  _move a1,s0
0040cb20  lw gp,0x10(sp)
0040cb24  addiu a0,s0,0xf8
0040cb28  sw s1,0xf4(s0)
0040cb2c  lw t9,-0x7d98(gp)
0040cb30  move a1,s2
0040cb34  jalr t9
0040cb38  _li a2,0x10
0040cb3c  lw ra,0x2c(sp)
0040cb40  lw s2,0x28(sp)
0040cb44  lw s1,0x24(sp)
0040cb48  lw s0,0x20(sp)
0040cb4c  clear v0
0040cb50  jr ra
0040cb54  _addiu sp,sp,0x30
