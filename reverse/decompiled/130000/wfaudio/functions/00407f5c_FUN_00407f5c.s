# FUN_00407f5c @ 00407f5c
00407f5c  addiu sp,sp,-0x138
00407f60  sw ra,0x134(sp)
00407f64  sw s3,0x130(sp)
00407f68  sw s2,0x12c(sp)
00407f6c  sw s1,0x128(sp)
00407f70  sw s0,0x124(sp)
00407f74  lui gp,0x43
00407f78  addiu gp,gp,-0x4f70
00407f7c  sw gp,0x18(sp)
00407f80  lw t9,-0x7f90(gp)
00407f84  move s2,a1
00407f88  move s0,a2
00407f8c  li a1,0x302
00407f90  li a2,0x3f
00407f94  jalr t9
00407f98  _move s3,a0
00407f9c  lw gp,0x18(sp)
00407fa0  bgez v0,0x00407fe4
00407fa4  _move s1,v0
00407fa8  lw v0,-0x7f30(gp)
00407fac  lw t9,-0x7e6c(gp)
00407fb0  lui a1,0x41
00407fb4  lw a0,0x0(v0)
00407fb8  lui a2,0x41
00407fbc  li v0,0xb1
00407fc0  lui a3,0x41
00407fc4  sw v0,0x10(sp)
00407fc8  sw s3,0x14(sp)
00407fcc  addiu a1,a1,0x106c
00407fd0  addiu a2,a2,0x1028
00407fd4  jalr t9
00407fd8  _addiu a3,a3,0x14f4
00407fdc  b 0x0040809c
00407fe0  _nop
00407fe4  bne s0,zero,0x0040808c
00407fe8  _addiu s0,sp,0x20
00407fec  lw t9,-0x7d9c(gp)
00407ff0  lui a1,0x41
00407ff4  addiu a1,a1,0x10a4
00407ff8  jalr t9
00407ffc  _move a0,s0
00408000  lw gp,0x18(sp)
00408004  nop
00408008  lw t9,-0x7f88(gp)
0040800c  nop
00408010  jalr t9
00408014  _move a0,s0
00408018  lw gp,0x18(sp)
0040801c  move a2,v0
00408020  move a0,s1
00408024  lw t9,-0x7e68(gp)
00408028  nop
0040802c  jalr t9
00408030  _move a1,s0
00408034  lw gp,0x18(sp)
00408038  lui a1,0x41
0040803c  addiu a1,a1,0x12a0
00408040  lw t9,-0x7f2c(gp)
00408044  move a2,s2
00408048  jalr t9
0040804c  _move a0,s0
00408050  lw gp,0x18(sp)
00408054  nop
00408058  lw t9,-0x7f88(gp)
0040805c  nop
00408060  jalr t9
00408064  _move a0,s0
00408068  lw gp,0x18(sp)
0040806c  move a1,s0
00408070  move a2,v0
00408074  lw t9,-0x7e68(gp)
00408078  nop
0040807c  jalr t9
00408080  _move a0,s1
00408084  lw gp,0x18(sp)
00408088  nop
0040808c  lw t9,-0x7fc4(gp)
00408090  nop
00408094  jalr t9
00408098  _move a0,s1
0040809c  lw ra,0x134(sp)
004080a0  lw s3,0x130(sp)
004080a4  lw s2,0x12c(sp)
004080a8  lw s1,0x128(sp)
004080ac  lw s0,0x124(sp)
004080b0  jr ra
004080b4  _addiu sp,sp,0x138
