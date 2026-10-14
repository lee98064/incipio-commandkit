# FUN_0041af38 @ 0041af38
0041af38  addiu sp,sp,-0x20
0041af3c  sw ra,0x1c(sp)
0041af40  sw s0,0x18(sp)
0041af44  lui gp,0x47
0041af48  addiu gp,gp,0x2630
0041af4c  sw gp,0x10(sp)
0041af50  lw t9,-0x7c04(gp)
0041af54  nop
0041af58  jalr t9
0041af5c  _li a0,0x4
0041af60  lw gp,0x10(sp)
0041af64  beq v0,zero,0x0041af7c
0041af68  _move s0,v0
0041af6c  lw t9,-0x7d38(gp)
0041af70  nop
0041af74  jalr t9
0041af78  _nop
0041af7c  move v0,s0
0041af80  lw ra,0x1c(sp)
0041af84  lw s0,0x18(sp)
0041af88  jr ra
0041af8c  _addiu sp,sp,0x20
