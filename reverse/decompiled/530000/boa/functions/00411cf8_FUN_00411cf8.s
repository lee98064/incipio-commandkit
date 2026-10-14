# FUN_00411cf8 @ 00411cf8
00411cf8  addiu sp,sp,-0x20
00411cfc  sw ra,0x1c(sp)
00411d00  sw s0,0x18(sp)
00411d04  lui gp,0x47
00411d08  addiu gp,gp,0x2630
00411d0c  sw gp,0x10(sp)
00411d10  move a2,a1
00411d14  lw a1,-0x7b10(gp)
00411d18  jal 0x00411c70
00411d1c  _nop
00411d20  move s0,v0
00411d24  lw gp,0x10(sp)
00411d28  beq s0,zero,0x00411d48
00411d2c  _clear v0
00411d30  lw t9,-0x7f1c(gp)
00411d34  lw a0,-0x7b10(gp)
00411d38  jalr t9
00411d3c  _nop
00411d40  addu v0,s0,v0
00411d44  addiu v0,v0,0x2
00411d48  lw ra,0x1c(sp)
00411d4c  lw s0,0x18(sp)
00411d50  jr ra
00411d54  _addiu sp,sp,0x20
