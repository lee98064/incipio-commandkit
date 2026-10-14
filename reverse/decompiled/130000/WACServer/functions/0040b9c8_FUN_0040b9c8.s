# FUN_0040b9c8 @ 0040b9c8
0040b9c8  addiu sp,sp,-0x28
0040b9cc  sw ra,0x24(sp)
0040b9d0  sw s2,0x20(sp)
0040b9d4  sw s1,0x1c(sp)
0040b9d8  sw s0,0x18(sp)
0040b9dc  lui gp,0x44
0040b9e0  addiu gp,gp,-0x4fc0
0040b9e4  sw gp,0x10(sp)
0040b9e8  lw v0,0xc8(a1)
0040b9ec  li v1,0x1
0040b9f0  lw t9,-0x7eb0(gp)
0040b9f4  addu v0,a1,v0
0040b9f8  sb v1,0xcc(v0)
0040b9fc  lw a2,0xc8(a1)
0040ba00  addiu s1,a1,0xcc
0040ba04  move s2,a0
0040ba08  addiu a0,a2,0x1
0040ba0c  nor a2,zero,a2
0040ba10  move s0,a1
0040ba14  addu a0,s1,a0
0040ba18  addiu a2,a2,0x48
0040ba1c  jalr t9
0040ba20  _clear a1
0040ba24  lbu v1,0x113(s0)
0040ba28  li v0,-0x80
0040ba2c  move a0,s0
0040ba30  or v0,v1,v0
0040ba34  move a1,s1
0040ba38  jal 0x00409c94
0040ba3c  _sb v0,0x113(s0)
0040ba40  clear v1
0040ba44  li a0,0x40
0040ba48  srl v0,v1,0x3
0040ba4c  sll v0,v0,0x3
0040ba50  addu v0,s0,v0
0040ba54  lw a1,0x4(v0)
0040ba58  addiu v1,v1,0x8
0040ba5c  sb a1,0x0(s2)
0040ba60  lw a1,0x4(v0)
0040ba64  nop
0040ba68  srl a1,a1,0x8
0040ba6c  sb a1,0x1(s2)
0040ba70  lhu a1,0x4(v0)
0040ba74  nop
0040ba78  sb a1,0x2(s2)
0040ba7c  lbu a1,0x4(v0)
0040ba80  nop
0040ba84  sb a1,0x3(s2)
0040ba88  lw a1,0x0(v0)
0040ba8c  nop
0040ba90  sb a1,0x4(s2)
0040ba94  lw a1,0x0(v0)
0040ba98  nop
0040ba9c  srl a1,a1,0x8
0040baa0  sb a1,0x5(s2)
0040baa4  lhu a1,0x0(v0)
0040baa8  nop
0040baac  sb a1,0x6(s2)
0040bab0  lbu v0,0x0(v0)
0040bab4  nop
0040bab8  sb v0,0x7(s2)
0040babc  bne v1,a0,0x0040ba48
0040bac0  _addiu s2,s2,0x8
0040bac4  lw ra,0x24(sp)
0040bac8  lw s2,0x20(sp)
0040bacc  lw s1,0x1c(sp)
0040bad0  lw s0,0x18(sp)
0040bad4  clear v0
0040bad8  jr ra
0040badc  _addiu sp,sp,0x28
