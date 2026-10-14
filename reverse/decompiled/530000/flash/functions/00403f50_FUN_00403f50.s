# FUN_00403f50 @ 00403f50
00403f50  addiu sp,sp,-0x28
00403f54  sw ra,0x24(sp)
00403f58  sw s1,0x20(sp)
00403f5c  sw s0,0x1c(sp)
00403f60  lui gp,0x43
00403f64  addiu gp,gp,-0x4bb0
00403f68  sw gp,0x10(sp)
00403f6c  lw t9,-0x7f9c(gp)
00403f70  move s1,a0
00403f74  move a0,a1
00403f78  jalr t9
00403f7c  _move s0,a1
00403f80  lw gp,0x10(sp)
00403f84  move a1,s0
00403f88  move a2,v0
00403f8c  lw t9,-0x7ee8(gp)
00403f90  nop
00403f94  jalr t9
00403f98  _move a0,s1
00403f9c  lw gp,0x10(sp)
00403fa0  move a0,s0
00403fa4  lw t9,-0x7f9c(gp)
00403fa8  nop
00403fac  jalr t9
00403fb0  _move s0,v0
00403fb4  lw gp,0x10(sp)
00403fb8  beq s0,v0,0x00404000
00403fbc  _lui a0,0x41
00403fc0  lw t9,-0x7e8c(gp)
00403fc4  nop
00403fc8  jalr t9
00403fcc  _addiu a0,a0,0x1214
00403fd0  lw gp,0x10(sp)
00403fd4  nop
00403fd8  lw t9,-0x7fc0(gp)
00403fdc  nop
00403fe0  jalr t9
00403fe4  _move a0,s1
00403fe8  lw gp,0x10(sp)
00403fec  nop
00403ff0  lw t9,-0x7f8c(gp)
00403ff4  nop
00403ff8  jalr t9
00403ffc  _li a0,0x1
00404000  lw ra,0x24(sp)
00404004  lw s1,0x20(sp)
00404008  lw s0,0x1c(sp)
0040400c  jr ra
00404010  _addiu sp,sp,0x28
