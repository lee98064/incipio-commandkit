# FUN_0043ecdc @ 0043ecdc
0043ecdc  lui gp,0x1e
0043ece0  addiu gp,gp,-0x585c
0043ece4  addu gp,gp,t9
0043ece8  addiu sp,sp,-0x28
0043ecec  sw ra,0x24(sp)
0043ecf0  sw s8,0x20(sp)
0043ecf4  move s8,sp
0043ecf8  sw gp,0x18(sp)
0043ecfc  sw a0,0x28(s8)
0043ed00  sw a1,0x2c(s8)
0043ed04  sw a2,0x30(s8)
0043ed08  lw v0,-0x5f38(gp)
0043ed0c  nop
0043ed10  sw v0,0x10(sp)
0043ed14  lw a0,0x28(s8)
0043ed18  lw a1,0x2c(s8)
0043ed1c  lw a2,0x30(s8)
0043ed20  lw a3,-0x5eb0(gp)
0043ed24  lw v0,-0x6c1c(gp)
0043ed28  nop
0043ed2c  move t9,v0
0043ed30  jalr t9
0043ed34  _nop
0043ed38  lw gp,0x18(s8)
0043ed3c  move sp,s8
0043ed40  lw ra,0x24(sp)
0043ed44  lw s8,0x20(sp)
0043ed48  addiu sp,sp,0x28
0043ed4c  jr ra
0043ed50  _nop
