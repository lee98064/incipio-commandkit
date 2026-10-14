# getWispRptIface @ 0041fa00
0041fa00  addiu sp,sp,-0x48
0041fa04  sw ra,0x44(sp)
0041fa08  sw s2,0x40(sp)
0041fa0c  sw s1,0x3c(sp)
0041fa10  sw s0,0x38(sp)
0041fa14  lui gp,0x47
0041fa18  addiu gp,gp,0x2630
0041fa1c  sw gp,0x10(sp)
0041fa20  move s0,a1
0041fa24  move s1,a0
0041fa28  sw zero,0x18(sp)
0041fa2c  sw zero,0x1c(sp)
0041fa30  sw zero,0x20(sp)
0041fa34  sw zero,0x24(sp)
0041fa38  sw zero,0x28(sp)
0041fa3c  sw zero,0x2c(sp)
0041fa40  bne a1,zero,0x0041fa54
0041fa44  _sw zero,0x30(sp)
0041fa48  lw t9,-0x7b54(gp)
0041fa4c  b 0x0041fa68
0041fa50  _li a0,0xfa
0041fa54  li v0,0x1
0041fa58  bne a1,v0,0x0041fb8c
0041fa5c  _li v0,-0x1
0041fa60  lw t9,-0x7b54(gp)
0041fa64  li a0,0xfc
0041fa68  jalr t9
0041fa6c  _addiu a1,sp,0x18
0041fa70  lw gp,0x10(sp)
0041fa74  li a0,0xc0
0041fa78  lw t9,-0x7b54(gp)
0041fa7c  nop
0041fa80  jalr t9
0041fa84  _addiu a1,sp,0x20
0041fa88  lw v1,0x20(sp)
0041fa8c  li v0,0x2
0041fa90  lw gp,0x10(sp)
0041fa94  bne v1,v0,0x0041fb8c
0041fa98  _li v0,-0x1
0041fa9c  lw t9,-0x7d44(gp)
0041faa0  nop
0041faa4  jalr t9
0041faa8  _addiu s2,sp,0x24
0041faac  lw gp,0x10(sp)
0041fab0  lui a1,0x45
0041fab4  addiu a1,a1,0x5e80
0041fab8  lw t9,-0x7e28(gp)
0041fabc  move a2,s0
0041fac0  jalr t9
0041fac4  _move a0,s2
0041fac8  jal 0x0041e61c
0041facc  _move a0,s2
0041fad0  lw gp,0x10(sp)
0041fad4  li a0,0x3b
0041fad8  lw t9,-0x7b54(gp)
0041fadc  nop
0041fae0  jalr t9
0041fae4  _addiu a1,sp,0x1c
0041fae8  lw v0,0x1c(sp)
0041faec  lw gp,0x10(sp)
0041faf0  beq v0,zero,0x0041fb08
0041faf4  _li v1,0x4
0041faf8  beq v0,v1,0x0041fb08
0041fafc  _li v1,0x5
0041fb00  bne v0,v1,0x0041fb40
0041fb04  _nop
0041fb08  lw v0,0x18(sp)
0041fb0c  nop
0041fb10  beq v0,zero,0x0041fb40
0041fb14  _nop
0041fb18  bne s0,zero,0x0041fb28
0041fb1c  _lui v0,0x45
0041fb20  b 0x0041fb38
0041fb24  _addiu v0,v0,0x700
0041fb28  li v0,0x1
0041fb2c  bne s0,v0,0x0041fb88
0041fb30  _lui v0,0x45
0041fb34  addiu v0,v0,0x70c
0041fb38  b 0x0041fb70
0041fb3c  _sw v0,0x0(s1)
0041fb40  lw t9,-0x7cf0(gp)
0041fb44  lw a0,0x0(s1)
0041fb48  lui a1,0x45
0041fb4c  jalr t9
0041fb50  _addiu a1,a1,0x625c
0041fb54  lw gp,0x10(sp)
0041fb58  beq v0,zero,0x0041fb70
0041fb5c  _nop
0041fb60  sb zero,0x3(v0)
0041fb64  sb zero,0x0(v0)
0041fb68  sb zero,0x1(v0)
0041fb6c  sb zero,0x2(v0)
0041fb70  lw t9,-0x7c30(gp)
0041fb74  nop
0041fb78  jalr t9
0041fb7c  _nop
0041fb80  b 0x0041fb8c
0041fb84  _clear v0
0041fb88  li v0,-0x1
0041fb8c  lw ra,0x44(sp)
0041fb90  lw s2,0x40(sp)
0041fb94  lw s1,0x3c(sp)
0041fb98  lw s0,0x38(sp)
0041fb9c  jr ra
0041fba0  _addiu sp,sp,0x48
