# FUN_00409e48 @ 00409e48
00409e48  addiu sp,sp,-0xb0
00409e4c  sw ra,0xac(sp)
00409e50  sw s1,0xa8(sp)
00409e54  sw s0,0xa4(sp)
00409e58  lui gp,0x43
00409e5c  addiu gp,gp,-0x4c90
00409e60  sw gp,0x18(sp)
00409e64  lw t9,-0x7ee0(gp)
00409e68  addiu s0,sp,0x20
00409e6c  li a2,0x80
00409e70  move s1,a0
00409e74  clear a1
00409e78  jalr t9
00409e7c  _move a0,s0
00409e80  li v0,0x1
00409e84  lw gp,0x18(sp)
00409e88  bne s1,v0,0x00409f98
00409e8c  _lui a2,0x42
00409e90  lb v0,0x3af8(a2)
00409e94  nop
00409e98  beq v0,zero,0x00409fe0
00409e9c  _nop
00409ea0  lui a3,0x42
00409ea4  lb v0,0x3a9c(a3)
00409ea8  nop
00409eac  beq v0,zero,0x00409f30
00409eb0  _lui v1,0x42
00409eb4  lb a0,0x3b08(v1)
00409eb8  nop
00409ebc  beq a0,zero,0x00409ef4
00409ec0  _lui v0,0x42
00409ec4  lb a0,0x383c(v0)
00409ec8  nop
00409ecc  beq a0,zero,0x00409fe0
00409ed0  _addiu v1,v1,0x3b08
00409ed4  addiu v0,v0,0x383c
00409ed8  lui a1,0x41
00409edc  lw t9,-0x7f24(gp)
00409ee0  sw v1,0x10(sp)
00409ee4  sw v0,0x14(sp)
00409ee8  move a0,s0
00409eec  b 0x00409f18
00409ef0  _addiu a1,a1,0x1a04
00409ef4  lb v1,0x383c(v0)
00409ef8  nop
00409efc  beq v1,zero,0x00409fe0
00409f00  _addiu v0,v0,0x383c
00409f04  lw t9,-0x7f24(gp)
00409f08  lui a1,0x41
00409f0c  sw v0,0x10(sp)
00409f10  move a0,s0
00409f14  addiu a1,a1,0x1a10
00409f18  addiu a2,a2,0x3af8
00409f1c  addiu a3,a3,0x3a9c
00409f20  jalr t9
00409f24  _nop
00409f28  b 0x00409fd8
00409f2c  _nop
00409f30  lb a0,0x3b08(v1)
00409f34  nop
00409f38  beq a0,zero,0x00409f70
00409f3c  _lui v0,0x42
00409f40  lb a0,0x383c(v0)
00409f44  nop
00409f48  beq a0,zero,0x00409fe0
00409f4c  _addiu v0,v0,0x383c
00409f50  lui a1,0x41
00409f54  lw t9,-0x7f24(gp)
00409f58  sw v0,0x10(sp)
00409f5c  move a0,s0
00409f60  addiu a1,a1,0x1a10
00409f64  addiu a2,a2,0x3af8
00409f68  b 0x00409f20
00409f6c  _addiu a3,v1,0x3b08
00409f70  lb v1,0x383c(v0)
00409f74  nop
00409f78  beq v1,zero,0x00409fe0
00409f7c  _lui a1,0x41
00409f80  lw t9,-0x7f24(gp)
00409f84  move a0,s0
00409f88  addiu a1,a1,0x1a1c
00409f8c  addiu a2,a2,0x3af8
00409f90  b 0x00409fd0
00409f94  _addiu a3,v0,0x383c
00409f98  lb v0,0x3af8(a2)
00409f9c  nop
00409fa0  beq v0,zero,0x00409fe0
00409fa4  _nop
00409fa8  lui a3,0x42
00409fac  lb v0,0x383c(a3)
00409fb0  nop
00409fb4  beq v0,zero,0x00409fe0
00409fb8  _lui a1,0x41
00409fbc  lw t9,-0x7f24(gp)
00409fc0  move a0,s0
00409fc4  addiu a1,a1,0x1a1c
00409fc8  addiu a2,a2,0x3af8
00409fcc  addiu a3,a3,0x383c
00409fd0  jalr t9
00409fd4  _nop
00409fd8  lw gp,0x18(sp)
00409fdc  nop
00409fe0  lw t9,-0x7f48(gp)
00409fe4  lui a0,0x41
00409fe8  lui a1,0x41
00409fec  lui a2,0x41
00409ff0  lui a3,0x41
00409ff4  addiu a0,a0,0x1a24
00409ff8  addiu a1,a1,0x1830
00409ffc  addiu a2,a2,0x1a30
0040a000  jalr t9
0040a004  _addiu a3,a3,0xcb4
0040a008  lb v0,0x20(sp)
0040a00c  lw gp,0x18(sp)
0040a010  beq v0,zero,0x0040a028
0040a014  _lui a0,0x41
0040a018  lw t9,-0x7dac(gp)
0040a01c  addiu a0,a0,0x1a34
0040a020  jalr t9
0040a024  _addiu a1,sp,0x20
0040a028  lw ra,0xac(sp)
0040a02c  lw s1,0xa8(sp)
0040a030  lw s0,0xa4(sp)
0040a034  jr ra
0040a038  _addiu sp,sp,0xb0
