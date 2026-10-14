# FUN_00403f1c @ 00403f1c
00403f1c  addiu sp,sp,-0x28
00403f20  sw ra,0x24(sp)
00403f24  sw s1,0x20(sp)
00403f28  sw s0,0x1c(sp)
00403f2c  lui gp,0x43
00403f30  addiu gp,gp,-0x4be0
00403f34  sw gp,0x10(sp)
00403f38  lw t9,-0x7f9c(gp)
00403f3c  move s1,a0
00403f40  move a0,a1
00403f44  jalr t9
00403f48  _move s0,a1
00403f4c  lw gp,0x10(sp)
00403f50  move a1,s0
00403f54  move a2,v0
00403f58  lw t9,-0x7ee8(gp)
00403f5c  nop
00403f60  jalr t9
00403f64  _move a0,s1
00403f68  lw gp,0x10(sp)
00403f6c  move a0,s0
00403f70  lw t9,-0x7f9c(gp)
00403f74  nop
00403f78  jalr t9
00403f7c  _move s0,v0
00403f80  lw gp,0x10(sp)
00403f84  beq s0,v0,0x00403fcc
00403f88  _lui a0,0x41
00403f8c  lw t9,-0x7e8c(gp)
00403f90  nop
00403f94  jalr t9
00403f98  _addiu a0,a0,0x11e4
00403f9c  lw gp,0x10(sp)
00403fa0  nop
00403fa4  lw t9,-0x7fc0(gp)
00403fa8  nop
00403fac  jalr t9
00403fb0  _move a0,s1
00403fb4  lw gp,0x10(sp)
00403fb8  nop
00403fbc  lw t9,-0x7f8c(gp)
00403fc0  nop
00403fc4  jalr t9
00403fc8  _li a0,0x1
00403fcc  lw ra,0x24(sp)
00403fd0  lw s1,0x20(sp)
00403fd4  lw s0,0x1c(sp)
00403fd8  jr ra
00403fdc  _addiu sp,sp,0x28
