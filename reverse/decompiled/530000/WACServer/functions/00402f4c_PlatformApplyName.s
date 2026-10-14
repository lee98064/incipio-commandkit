# PlatformApplyName @ 00402f4c
00402f4c  addiu sp,sp,-0x28
00402f50  sw ra,0x24(sp)
00402f54  sw s1,0x20(sp)
00402f58  sw s0,0x1c(sp)
00402f5c  lui gp,0x44
00402f60  addiu gp,gp,-0x4fc0
00402f64  sw gp,0x10(sp)
00402f68  beq a0,zero,0x00403010
00402f6c  _move s0,a0
00402f70  lw v0,-0x7ed4(gp)
00402f74  lw t9,-0x7d44(gp)
00402f78  move a1,a0
00402f7c  lw a0,0x1c(v0)
00402f80  jalr t9
00402f84  _nop
00402f88  lw gp,0x10(sp)
00402f8c  lui a0,0x42
00402f90  lui a1,0x42
00402f94  lw t9,-0x7eac(gp)
00402f98  addiu a0,a0,-0x2ea0
00402f9c  jalr t9
00402fa0  _addiu a1,a1,-0x3230
00402fa4  lw gp,0x10(sp)
00402fa8  beq v0,zero,0x00403010
00402fac  _move s1,v0
00402fb0  lw t9,-0x7f74(gp)
00402fb4  nop
00402fb8  jalr t9
00402fbc  _move a0,s0
00402fc0  lw gp,0x10(sp)
00402fc4  li a2,0x1
00402fc8  move a3,s1
00402fcc  lw t9,-0x7f34(gp)
00402fd0  move a1,v0
00402fd4  jalr t9
00402fd8  _move a0,s0
00402fdc  lw gp,0x10(sp)
00402fe0  lui a0,0x42
00402fe4  addiu a0,a0,-0x2e80
00402fe8  lw t9,-0x7d5c(gp)
00402fec  nop
00402ff0  jalr t9
00402ff4  _move a1,s0
00402ff8  lw gp,0x10(sp)
00402ffc  nop
00403000  lw t9,-0x7ec8(gp)
00403004  nop
00403008  jalr t9
0040300c  _move a0,s1
00403010  lw ra,0x24(sp)
00403014  lw s1,0x20(sp)
00403018  lw s0,0x1c(sp)
0040301c  clear v0
00403020  jr ra
00403024  _addiu sp,sp,0x28
