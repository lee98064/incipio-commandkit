# pthread_list_updateControllerName @ 0042dd40
0042dd40  addiu sp,sp,-0x28
0042dd44  sw ra,0x24(sp)
0042dd48  sw s0,0x20(sp)
0042dd4c  lui gp,0x62
0042dd50  addiu gp,gp,-0x6b80
0042dd54  sw gp,0x10(sp)
0042dd58  lw t9,-0x63f4(gp)
0042dd5c  move s0,a0
0042dd60  lui a0,0x61
0042dd64  sw a1,0x18(sp)
0042dd68  jalr t9
0042dd6c  _addiu a0,a0,0x47d0
0042dd70  lui v0,0x61
0042dd74  lw v1,0x47e8(v0)
0042dd78  addiu v0,v0,0x47e8
0042dd7c  lw gp,0x10(sp)
0042dd80  lw a1,0x18(sp)
0042dd84  beq v1,v0,0x0042dddc
0042dd88  _lui v1,0x61
0042dd8c  lw a0,0x28(v0)
0042dd90  nop
0042dd94  lw v0,0x0(a0)
0042dd98  b 0x0042ddd4
0042dd9c  _addiu v1,v1,0x4810
0042dda0  lw a2,-0x28(a0)
0042dda4  nop
0042dda8  bne a2,s0,0x0042ddcc
0042ddac  _addiu a0,a0,-0x24
0042ddb0  lw t9,-0x5cb0(gp)
0042ddb4  nop
0042ddb8  jalr t9
0042ddbc  _li a2,0x24
0042ddc0  lw gp,0x10(sp)
0042ddc4  b 0x0042dde0
0042ddc8  _clear s0
0042ddcc  move a0,v0
0042ddd0  lw v0,0x0(v0)
0042ddd4  bne a0,v1,0x0042dda0
0042ddd8  _nop
0042dddc  li s0,-0x1
0042dde0  lw t9,-0x77f4(gp)
0042dde4  lui a0,0x61
0042dde8  jalr t9
0042ddec  _addiu a0,a0,0x47d0
0042ddf0  move v0,s0
0042ddf4  lw ra,0x24(sp)
0042ddf8  lw s0,0x20(sp)
0042ddfc  jr ra
0042de00  _addiu sp,sp,0x28
