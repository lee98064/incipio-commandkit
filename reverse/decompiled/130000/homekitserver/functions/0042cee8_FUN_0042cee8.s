# FUN_0042cee8 @ 0042cee8
0042cee8  addiu sp,sp,-0x28
0042ceec  sw ra,0x24(sp)
0042cef0  sw s2,0x20(sp)
0042cef4  sw s1,0x1c(sp)
0042cef8  sw s0,0x18(sp)
0042cefc  lui gp,0x62
0042cf00  addiu gp,gp,-0x6b80
0042cf04  sw gp,0x10(sp)
0042cf08  lw v0,0xc8(a1)
0042cf0c  li v1,0x1
0042cf10  lw t9,-0x7244(gp)
0042cf14  addu v0,a1,v0
0042cf18  sb v1,0xcc(v0)
0042cf1c  lw a2,0xc8(a1)
0042cf20  addiu s1,a1,0xcc
0042cf24  move s2,a0
0042cf28  addiu a0,a2,0x1
0042cf2c  nor a2,zero,a2
0042cf30  move s0,a1
0042cf34  addu a0,s1,a0
0042cf38  addiu a2,a2,0x48
0042cf3c  jalr t9
0042cf40  _clear a1
0042cf44  lbu v1,0x113(s0)
0042cf48  li v0,-0x80
0042cf4c  move a0,s0
0042cf50  or v0,v1,v0
0042cf54  move a1,s1
0042cf58  jal 0x0042b1b4
0042cf5c  _sb v0,0x113(s0)
0042cf60  clear v1
0042cf64  li a0,0x40
0042cf68  srl v0,v1,0x3
0042cf6c  sll v0,v0,0x3
0042cf70  addu v0,s0,v0
0042cf74  lw a1,0x4(v0)
0042cf78  addiu v1,v1,0x8
0042cf7c  sb a1,0x0(s2)
0042cf80  lw a1,0x4(v0)
0042cf84  nop
0042cf88  srl a1,a1,0x8
0042cf8c  sb a1,0x1(s2)
0042cf90  lhu a1,0x4(v0)
0042cf94  nop
0042cf98  sb a1,0x2(s2)
0042cf9c  lbu a1,0x4(v0)
0042cfa0  nop
0042cfa4  sb a1,0x3(s2)
0042cfa8  lw a1,0x0(v0)
0042cfac  nop
0042cfb0  sb a1,0x4(s2)
0042cfb4  lw a1,0x0(v0)
0042cfb8  nop
0042cfbc  srl a1,a1,0x8
0042cfc0  sb a1,0x5(s2)
0042cfc4  lhu a1,0x0(v0)
0042cfc8  nop
0042cfcc  sb a1,0x6(s2)
0042cfd0  lbu v0,0x0(v0)
0042cfd4  nop
0042cfd8  sb v0,0x7(s2)
0042cfdc  bne v1,a0,0x0042cf68
0042cfe0  _addiu s2,s2,0x8
0042cfe4  lw ra,0x24(sp)
0042cfe8  lw s2,0x20(sp)
0042cfec  lw s1,0x1c(sp)
0042cff0  lw s0,0x18(sp)
0042cff4  clear v0
0042cff8  jr ra
0042cffc  _addiu sp,sp,0x28
