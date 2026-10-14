# FUN_0043eefc @ 0043eefc
0043eefc  lui gp,0x1e
0043ef00  addiu gp,gp,-0x4bec
0043ef04  addu gp,gp,t9
0043ef08  addiu sp,sp,-0x20
0043ef0c  sw ra,0x1c(sp)
0043ef10  sw s8,0x18(sp)
0043ef14  move s8,sp
0043ef18  sw gp,0x10(sp)
0043ef1c  sw a0,0x20(s8)
0043ef20  sw a1,0x24(s8)
0043ef24  lw a0,0x20(s8)
0043ef28  lw a1,0x24(s8)
0043ef2c  clear a2
0043ef30  lw v0,-0x5c3c(gp)
0043ef34  nop
0043ef38  move t9,v0
0043ef3c  jalr t9
0043ef40  _nop
0043ef44  lw gp,0x10(s8)
0043ef48  move sp,s8
0043ef4c  lw ra,0x1c(sp)
0043ef50  lw s8,0x18(sp)
0043ef54  addiu sp,sp,0x20
0043ef58  jr ra
0043ef5c  _nop
