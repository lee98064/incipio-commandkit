# FUN_0040bb28 @ 0040bb28
0040bb28  addiu sp,sp,-0x28
0040bb2c  sw ra,0x24(sp)
0040bb30  sw s2,0x20(sp)
0040bb34  sw s1,0x1c(sp)
0040bb38  sw s0,0x18(sp)
0040bb3c  lui gp,0x44
0040bb40  addiu gp,gp,-0x4fc0
0040bb44  sw gp,0x10(sp)
0040bb48  lw v0,0xc8(a1)
0040bb4c  li v1,0x1
0040bb50  lw t9,-0x7eb0(gp)
0040bb54  addu v0,a1,v0
0040bb58  sb v1,0xcc(v0)
0040bb5c  lw a2,0xc8(a1)
0040bb60  addiu s1,a1,0xcc
0040bb64  move s2,a0
0040bb68  addiu a0,a2,0x1
0040bb6c  nor a2,zero,a2
0040bb70  move s0,a1
0040bb74  addu a0,s1,a0
0040bb78  addiu a2,a2,0x48
0040bb7c  jalr t9
0040bb80  _clear a1
0040bb84  lbu v1,0x113(s0)
0040bb88  li v0,-0x80
0040bb8c  move a0,s0
0040bb90  or v0,v1,v0
0040bb94  move a1,s1
0040bb98  jal 0x00409df4
0040bb9c  _sb v0,0x113(s0)
0040bba0  clear v1
0040bba4  li a0,0x40
0040bba8  srl v0,v1,0x3
0040bbac  sll v0,v0,0x3
0040bbb0  addu v0,s0,v0
0040bbb4  lw a1,0x4(v0)
0040bbb8  addiu v1,v1,0x8
0040bbbc  sb a1,0x0(s2)
0040bbc0  lw a1,0x4(v0)
0040bbc4  nop
0040bbc8  srl a1,a1,0x8
0040bbcc  sb a1,0x1(s2)
0040bbd0  lhu a1,0x4(v0)
0040bbd4  nop
0040bbd8  sb a1,0x2(s2)
0040bbdc  lbu a1,0x4(v0)
0040bbe0  nop
0040bbe4  sb a1,0x3(s2)
0040bbe8  lw a1,0x0(v0)
0040bbec  nop
0040bbf0  sb a1,0x4(s2)
0040bbf4  lw a1,0x0(v0)
0040bbf8  nop
0040bbfc  srl a1,a1,0x8
0040bc00  sb a1,0x5(s2)
0040bc04  lhu a1,0x0(v0)
0040bc08  nop
0040bc0c  sb a1,0x6(s2)
0040bc10  lbu v0,0x0(v0)
0040bc14  nop
0040bc18  sb v0,0x7(s2)
0040bc1c  bne v1,a0,0x0040bba8
0040bc20  _addiu s2,s2,0x8
0040bc24  lw ra,0x24(sp)
0040bc28  lw s2,0x20(sp)
0040bc2c  lw s1,0x1c(sp)
0040bc30  lw s0,0x18(sp)
0040bc34  clear v0
0040bc38  jr ra
0040bc3c  _addiu sp,sp,0x28
