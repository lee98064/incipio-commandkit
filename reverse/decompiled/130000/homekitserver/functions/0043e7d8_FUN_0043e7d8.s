# FUN_0043e7d8 @ 0043e7d8
0043e7d8  lui gp,0x1e
0043e7dc  addiu gp,gp,-0x5358
0043e7e0  addu gp,gp,t9
0043e7e4  addiu sp,sp,-0x28
0043e7e8  sw ra,0x24(sp)
0043e7ec  sw s8,0x20(sp)
0043e7f0  move s8,sp
0043e7f4  sw gp,0x10(sp)
0043e7f8  sw a0,0x28(s8)
0043e7fc  lw v0,0x28(s8)
0043e800  nop
0043e804  sw v0,0x18(s8)
0043e808  lw v0,0x18(s8)
0043e80c  nop
0043e810  bltz v0,0x0043e82c
0043e814  _nop
0043e818  lw v0,0x18(s8)
0043e81c  nop
0043e820  slti v0,v0,0x7
0043e824  bne v0,zero,0x0043e864
0043e828  _nop
0043e82c  lw v0,-0x7fd0(gp)
0043e830  nop
0043e834  addiu a0,v0,-0x1f1c
0043e838  lw a1,0x28(s8)
0043e83c  li a2,0x7
0043e840  lw v0,-0x611c(gp)
0043e844  nop
0043e848  move t9,v0
0043e84c  jalr t9
0043e850  _nop
0043e854  lw gp,0x10(s8)
0043e858  clear v0
0043e85c  b 0x0043e87c
0043e860  _nop
0043e864  lw v1,0x28(s8)
0043e868  lw v0,-0x7fc8(gp)
0043e86c  sll v1,v1,0x2
0043e870  addiu v0,v0,-0x280
0043e874  addu v0,v1,v0
0043e878  lw v0,0x0(v0)
0043e87c  move sp,s8
0043e880  lw ra,0x24(sp)
0043e884  lw s8,0x20(sp)
0043e888  addiu sp,sp,0x28
0043e88c  jr ra
0043e890  _nop
