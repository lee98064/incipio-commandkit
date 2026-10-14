# lh_kchar_table_new @ 0043fa34
0043fa34  lui gp,0x1e
0043fa38  addiu gp,gp,-0x5724
0043fa3c  addu gp,gp,t9
0043fa40  addiu sp,sp,-0x28
0043fa44  sw ra,0x24(sp)
0043fa48  sw s8,0x20(sp)
0043fa4c  move s8,sp
0043fa50  sw gp,0x18(sp)
0043fa54  sw a0,0x28(s8)
0043fa58  sw a1,0x2c(s8)
0043fa5c  sw a2,0x30(s8)
0043fa60  lw v0,-0x602c(gp)
0043fa64  nop
0043fa68  sw v0,0x10(sp)
0043fa6c  lw a0,0x28(s8)
0043fa70  lw a1,0x2c(s8)
0043fa74  lw a2,0x30(s8)
0043fa78  lw a3,-0x733c(gp)
0043fa7c  lw v0,-0x6c10(gp)
0043fa80  nop
0043fa84  move t9,v0
0043fa88  jalr t9
0043fa8c  _nop
0043fa90  lw gp,0x18(s8)
0043fa94  move sp,s8
0043fa98  lw ra,0x24(sp)
0043fa9c  lw s8,0x20(sp)
0043faa0  addiu sp,sp,0x28
0043faa4  jr ra
0043faa8  _nop
