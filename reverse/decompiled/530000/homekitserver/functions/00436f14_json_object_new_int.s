# json_object_new_int @ 00436f14
00436f14  lui gp,0x1e
00436f18  addiu gp,gp,0x33fc
00436f1c  addu gp,gp,t9
00436f20  addiu sp,sp,-0x30
00436f24  sw ra,0x2c(sp)
00436f28  sw s8,0x28(sp)
00436f2c  sw s1,0x24(sp)
00436f30  sw s0,0x20(sp)
00436f34  move s8,sp
00436f38  sw gp,0x10(sp)
00436f3c  sw a0,0x30(s8)
00436f40  li a0,0x3
00436f44  lw v0,-0x7fcc(gp)
00436f48  nop
00436f4c  addiu v0,v0,0x5bc0
00436f50  move t9,v0
00436f54  jalr t9
00436f58  _nop
00436f5c  lw gp,0x10(s8)
00436f60  sw v0,0x18(s8)
00436f64  lw v0,0x18(s8)
00436f68  nop
00436f6c  bne v0,zero,0x00436f80
00436f70  _nop
00436f74  clear v0
00436f78  b 0x00436fbc
00436f7c  _nop
00436f80  lw v0,0x18(s8)
00436f84  lw v1,-0x7fcc(gp)
00436f88  nop
00436f8c  addiu v1,v1,0x6e8c
00436f90  sw v1,0x8(v0)
00436f94  lw s1,0x30(s8)
00436f98  lw v0,0x30(s8)
00436f9c  nop
00436fa0  sra v0,v0,0x1f
00436fa4  move s0,v0
00436fa8  lw v0,0x18(s8)
00436fac  nop
00436fb0  sw s1,0x1c(v0)
00436fb4  sw s0,0x18(v0)
00436fb8  lw v0,0x18(s8)
00436fbc  move sp,s8
00436fc0  lw ra,0x2c(sp)
00436fc4  lw s8,0x28(sp)
00436fc8  lw s1,0x24(sp)
00436fcc  lw s0,0x20(sp)
00436fd0  addiu sp,sp,0x30
00436fd4  jr ra
00436fd8  _nop
