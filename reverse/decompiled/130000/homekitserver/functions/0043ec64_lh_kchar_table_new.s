# lh_kchar_table_new @ 0043ec64
0043ec64  lui gp,0x1e
0043ec68  addiu gp,gp,-0x57e4
0043ec6c  addu gp,gp,t9
0043ec70  addiu sp,sp,-0x28
0043ec74  sw ra,0x24(sp)
0043ec78  sw s8,0x20(sp)
0043ec7c  move s8,sp
0043ec80  sw gp,0x18(sp)
0043ec84  sw a0,0x28(s8)
0043ec88  sw a1,0x2c(s8)
0043ec8c  sw a2,0x30(s8)
0043ec90  lw v0,-0x6040(gp)
0043ec94  nop
0043ec98  sw v0,0x10(sp)
0043ec9c  lw a0,0x28(s8)
0043eca0  lw a1,0x2c(s8)
0043eca4  lw a2,0x30(s8)
0043eca8  lw a3,-0x733c(gp)
0043ecac  lw v0,-0x6c1c(gp)
0043ecb0  nop
0043ecb4  move t9,v0
0043ecb8  jalr t9
0043ecbc  _nop
0043ecc0  lw gp,0x18(s8)
0043ecc4  move sp,s8
0043ecc8  lw ra,0x24(sp)
0043eccc  lw s8,0x20(sp)
0043ecd0  addiu sp,sp,0x28
0043ecd4  jr ra
0043ecd8  _nop
