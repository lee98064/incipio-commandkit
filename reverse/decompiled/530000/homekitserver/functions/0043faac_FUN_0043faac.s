# FUN_0043faac @ 0043faac
0043faac  lui gp,0x1e
0043fab0  addiu gp,gp,-0x579c
0043fab4  addu gp,gp,t9
0043fab8  addiu sp,sp,-0x28
0043fabc  sw ra,0x24(sp)
0043fac0  sw s8,0x20(sp)
0043fac4  move s8,sp
0043fac8  sw gp,0x18(sp)
0043facc  sw a0,0x28(s8)
0043fad0  sw a1,0x2c(s8)
0043fad4  sw a2,0x30(s8)
0043fad8  lw v0,-0x5f24(gp)
0043fadc  nop
0043fae0  sw v0,0x10(sp)
0043fae4  lw a0,0x28(s8)
0043fae8  lw a1,0x2c(s8)
0043faec  lw a2,0x30(s8)
0043faf0  lw a3,-0x5ea0(gp)
0043faf4  lw v0,-0x6c10(gp)
0043faf8  nop
0043fafc  move t9,v0
0043fb00  jalr t9
0043fb04  _nop
0043fb08  lw gp,0x18(s8)
0043fb0c  move sp,s8
0043fb10  lw ra,0x24(sp)
0043fb14  lw s8,0x20(sp)
0043fb18  addiu sp,sp,0x28
0043fb1c  jr ra
0043fb20  _nop
