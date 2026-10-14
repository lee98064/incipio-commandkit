# shared_ServerReadDetach @ 00434f4c
00434f4c  addiu sp,sp,-0x28
00434f50  sw ra,0x24(sp)
00434f54  sw s1,0x20(sp)
00434f58  sw s0,0x1c(sp)
00434f5c  lui gp,0x62
00434f60  addiu gp,gp,-0x5cf0
00434f64  sw gp,0x10(sp)
00434f68  lui s0,0x60
00434f6c  lw a0,0xb94(s0)
00434f70  li s1,-0x1
00434f74  beq a0,s1,0x00434fa0
00434f78  _li v0,-0x1
00434f7c  lw t9,-0x7c4c(gp)
00434f80  nop
00434f84  jalr t9
00434f88  _nop
00434f8c  bne v0,zero,0x00434f9c
00434f90  _nop
00434f94  b 0x00434fa0
00434f98  _sw s1,0xb94(s0)
00434f9c  li v0,-0x1
00434fa0  lw ra,0x24(sp)
00434fa4  lw s1,0x20(sp)
00434fa8  lw s0,0x1c(sp)
00434fac  jr ra
00434fb0  _addiu sp,sp,0x28
