# HTTPHeaderClear @ 00421f18
00421f18  addiu sp,sp,-0x20
00421f1c  sw ra,0x1c(sp)
00421f20  sw s0,0x18(sp)
00421f24  lui gp,0x62
00421f28  addiu gp,gp,-0x5cf0
00421f2c  sw gp,0x10(sp)
00421f30  move s0,a0
00421f34  lw a0,0x104(a0)
00421f38  sw zero,0x100(s0)
00421f3c  beq a0,zero,0x00421f5c
00421f40  _sw zero,0x10c(s0)
00421f44  lw t9,-0x7aa4(gp)
00421f48  nop
00421f4c  jalr t9
00421f50  _nop
00421f54  lw gp,0x10(sp)
00421f58  sw zero,0x104(s0)
00421f5c  lw a0,0x108(s0)
00421f60  nop
00421f64  beq a0,zero,0x00421f80
00421f68  _nop
00421f6c  lw t9,-0x7aa4(gp)
00421f70  nop
00421f74  jalr t9
00421f78  _nop
00421f7c  sw zero,0x108(s0)
00421f80  lw ra,0x1c(sp)
00421f84  lw s0,0x18(sp)
00421f88  jr ra
00421f8c  _addiu sp,sp,0x20
