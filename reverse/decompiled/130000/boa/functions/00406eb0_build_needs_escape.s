# build_needs_escape @ 00406eb0
00406eb0  addiu sp,sp,-0x78
00406eb4  sw ra,0x74(sp)
00406eb8  lui gp,0x47
00406ebc  addiu gp,gp,0x2630
00406ec0  sw gp,0x10(sp)
00406ec4  lw t9,-0x7ad4(gp)
00406ec8  lui a1,0x45
00406ecc  addiu a1,a1,-0x6120
00406ed0  addiu a0,sp,0x18
00406ed4  jalr t9
00406ed8  _li a2,0x51
00406edc  lw gp,0x10(sp)
00406ee0  clear v0
00406ee4  li v1,0x20
00406ee8  addiu v0,v0,0x1
00406eec  bne v0,v1,0x00406eec
00406ef0  _addiu v0,v0,0x1
00406ef4  lw t9,-0x7db4(gp)
00406ef8  lw a0,-0x7c6c(gp)
00406efc  li a1,-0x1
00406f00  jalr t9
00406f04  _li a2,0x10
00406f08  lw gp,0x10(sp)
00406f0c  addiu v0,sp,0x18
00406f10  addiu a2,sp,0x68
00406f14  lw a3,-0x7c6c(gp)
00406f18  li a1,0x1
00406f1c  lbu v1,0x0(v0)
00406f20  addiu v0,v0,0x1
00406f24  srl a0,v1,0x5
00406f28  sllv t1,a1,v1
00406f2c  sll a0,a0,0x2
00406f30  sltiu v1,v1,0x80
00406f34  addu a0,a3,a0
00406f38  beq v1,zero,0x00406f50
00406f3c  _nor t1,zero,t1
00406f40  lw t0,0x0(a0)
00406f44  nop
00406f48  and v1,t1,t0
00406f4c  sw v1,0x0(a0)
00406f50  bne v0,a2,0x00406f1c
00406f54  _nop
00406f58  lw ra,0x74(sp)
00406f5c  nop
00406f60  jr ra
00406f64  _addiu sp,sp,0x78
