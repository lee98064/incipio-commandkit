# build_needs_escape @ 0041bf40
0041bf40  addiu sp,sp,-0x78
0041bf44  sw ra,0x74(sp)
0041bf48  lui gp,0x62
0041bf4c  addiu gp,gp,-0x6b80
0041bf50  sw gp,0x10(sp)
0041bf54  lw t9,-0x5cb0(gp)
0041bf58  lui a1,0x5b
0041bf5c  addiu a1,a1,-0x4ca4
0041bf60  addiu a0,sp,0x18
0041bf64  jalr t9
0041bf68  _li a2,0x51
0041bf6c  lw gp,0x10(sp)
0041bf70  clear v0
0041bf74  li v1,0x20
0041bf78  addiu v0,v0,0x1
0041bf7c  bne v0,v1,0x0041bf7c
0041bf80  _addiu v0,v0,0x1
0041bf84  lw t9,-0x7244(gp)
0041bf88  lw a0,-0x6fb4(gp)
0041bf8c  li a1,-0x1
0041bf90  jalr t9
0041bf94  _li a2,0x10
0041bf98  lw gp,0x10(sp)
0041bf9c  addiu v0,sp,0x18
0041bfa0  addiu a2,sp,0x68
0041bfa4  lw a3,-0x6fb4(gp)
0041bfa8  li a1,0x1
0041bfac  lbu v1,0x0(v0)
0041bfb0  addiu v0,v0,0x1
0041bfb4  srl a0,v1,0x5
0041bfb8  sllv t1,a1,v1
0041bfbc  sll a0,a0,0x2
0041bfc0  sltiu v1,v1,0x80
0041bfc4  addu a0,a3,a0
0041bfc8  beq v1,zero,0x0041bfe0
0041bfcc  _nor t1,zero,t1
0041bfd0  lw t0,0x0(a0)
0041bfd4  nop
0041bfd8  and v1,t1,t0
0041bfdc  sw v1,0x0(a0)
0041bfe0  bne v0,a2,0x0041bfac
0041bfe4  _nop
0041bfe8  lw ra,0x74(sp)
0041bfec  nop
0041bff0  jr ra
0041bff4  _addiu sp,sp,0x78
