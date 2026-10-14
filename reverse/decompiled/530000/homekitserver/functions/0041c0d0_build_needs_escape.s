# build_needs_escape @ 0041c0d0
0041c0d0  addiu sp,sp,-0x78
0041c0d4  sw ra,0x74(sp)
0041c0d8  lui gp,0x62
0041c0dc  addiu gp,gp,-0x5cf0
0041c0e0  sw gp,0x10(sp)
0041c0e4  lw t9,-0x5c9c(gp)
0041c0e8  lui a1,0x5b
0041c0ec  addiu a1,a1,-0x3e70
0041c0f0  addiu a0,sp,0x18
0041c0f4  jalr t9
0041c0f8  _li a2,0x51
0041c0fc  lw gp,0x10(sp)
0041c100  clear v0
0041c104  li v1,0x20
0041c108  addiu v0,v0,0x1
0041c10c  bne v0,v1,0x0041c10c
0041c110  _addiu v0,v0,0x1
0041c114  lw t9,-0x7244(gp)
0041c118  lw a0,-0x6fb4(gp)
0041c11c  li a1,-0x1
0041c120  jalr t9
0041c124  _li a2,0x10
0041c128  lw gp,0x10(sp)
0041c12c  addiu v0,sp,0x18
0041c130  addiu a2,sp,0x68
0041c134  lw a3,-0x6fb4(gp)
0041c138  li a1,0x1
0041c13c  lbu v1,0x0(v0)
0041c140  addiu v0,v0,0x1
0041c144  srl a0,v1,0x5
0041c148  sllv t1,a1,v1
0041c14c  sll a0,a0,0x2
0041c150  sltiu v1,v1,0x80
0041c154  addu a0,a3,a0
0041c158  beq v1,zero,0x0041c170
0041c15c  _nor t1,zero,t1
0041c160  lw t0,0x0(a0)
0041c164  nop
0041c168  and v1,t1,t0
0041c16c  sw v1,0x0(a0)
0041c170  bne v0,a2,0x0041c13c
0041c174  _nop
0041c178  lw ra,0x74(sp)
0041c17c  nop
0041c180  jr ra
0041c184  _addiu sp,sp,0x78
