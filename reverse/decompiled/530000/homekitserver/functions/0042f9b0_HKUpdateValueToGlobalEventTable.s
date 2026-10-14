# HKUpdateValueToGlobalEventTable @ 0042f9b0
0042f9b0  addiu sp,sp,-0x28
0042f9b4  sw ra,0x24(sp)
0042f9b8  sw s2,0x20(sp)
0042f9bc  sw s1,0x1c(sp)
0042f9c0  sw s0,0x18(sp)
0042f9c4  lui gp,0x62
0042f9c8  addiu gp,gp,-0x5cf0
0042f9cc  sw gp,0x10(sp)
0042f9d0  lui v0,0x61
0042f9d4  lw v1,0x56f0(v0)
0042f9d8  addiu v0,v0,0x56f0
0042f9dc  beq v1,v0,0x0042fb10
0042f9e0  _move s0,a1
0042f9e4  lw s1,0xc(v0)
0042f9e8  lui v1,0x61
0042f9ec  lw v0,0x0(s1)
0042f9f0  b 0x0042fb08
0042f9f4  _addiu v1,v1,0x56fc
0042f9f8  lw a1,-0xc(s1)
0042f9fc  nop
0042fa00  bne a1,a0,0x0042fb00
0042fa04  _addiu s1,s1,-0xc
0042fa08  lw v0,0x8(s1)
0042fa0c  nop
0042fa10  sltiu v1,v0,0x6
0042fa14  beq v1,zero,0x0042fb18
0042fa18  _lui v1,0x5b
0042fa1c  sll v0,v0,0x2
0042fa20  addiu v1,v1,-0x2914
0042fa24  addu v0,v1,v0
0042fa28  lw v0,0x0(v0)
0042fa2c  nop
0042fa30  jr v0
0042fa34  _nop
0042fa38  lw v0,0x4(s1)
0042fa3c  nop
0042fa40  beq v0,s0,0x0042fb1c
0042fa44  _clear v0
0042fa48  b 0x0042fb1c
0042fa4c  _sw s0,0x4(s1)
0042fa50  lw t9,-0x7b10(gp)
0042fa54  lw a0,0x4(s1)
0042fa58  jalr t9
0042fa5c  _move a1,s0
0042fa60  beq v0,zero,0x0042fb1c
0042fa64  _clear v0
0042fa68  b 0x0042fb1c
0042fa6c  _sw s0,0x4(s1)
0042fa70  lw s2,0x4(s1)
0042fa74  nop
0042fa78  beq s2,zero,0x0042fab4
0042fa7c  _move a0,s2
0042fa80  lw t9,-0x7894(gp)
0042fa84  nop
0042fa88  jalr t9
0042fa8c  _move a1,s0
0042fa90  lw gp,0x10(sp)
0042fa94  beq v0,zero,0x0042fb18
0042fa98  _nop
0042fa9c  lw t9,-0x7aa4(gp)
0042faa0  nop
0042faa4  jalr t9
0042faa8  _move a0,s2
0042faac  lw gp,0x10(sp)
0042fab0  nop
0042fab4  lw t9,-0x63c4(gp)
0042fab8  nop
0042fabc  jalr t9
0042fac0  _move a0,s0
0042fac4  lw gp,0x10(sp)
0042fac8  addiu a1,v0,0x1
0042facc  lw t9,-0x5a50(gp)
0042fad0  nop
0042fad4  jalr t9
0042fad8  _li a0,0x1
0042fadc  lw gp,0x10(sp)
0042fae0  move a0,v0
0042fae4  sw v0,0x4(s1)
0042fae8  lw t9,-0x7eac(gp)
0042faec  nop
0042faf0  jalr t9
0042faf4  _move a1,s0
0042faf8  b 0x0042fb1c
0042fafc  _clear v0
0042fb00  move s1,v0
0042fb04  lw v0,0x0(v0)
0042fb08  bne s1,v1,0x0042f9f8
0042fb0c  _nop
0042fb10  b 0x0042fb1c
0042fb14  _li v0,-0x1a49
0042fb18  clear v0
0042fb1c  lw ra,0x24(sp)
0042fb20  lw s2,0x20(sp)
0042fb24  lw s1,0x1c(sp)
0042fb28  lw s0,0x18(sp)
0042fb2c  jr ra
0042fb30  _addiu sp,sp,0x28
