# FUN_00403ec0 @ 00403ec0
00403ec0  addiu sp,sp,-0xb0
00403ec4  sw ra,0xac(sp)
00403ec8  sw s1,0xa8(sp)
00403ecc  sw s0,0xa4(sp)
00403ed0  lui gp,0x43
00403ed4  addiu gp,gp,0x3060
00403ed8  sw gp,0x18(sp)
00403edc  lw t9,-0x7f4c(gp)
00403ee0  addiu s0,sp,0x20
00403ee4  li a2,0x80
00403ee8  move s1,a0
00403eec  clear a1
00403ef0  jalr t9
00403ef4  _move a0,s0
00403ef8  li v0,0x1
00403efc  lw gp,0x18(sp)
00403f00  bne s1,v0,0x00404010
00403f04  _lui a2,0x43
00403f08  lb v0,-0x4ae8(a2)
00403f0c  nop
00403f10  beq v0,zero,0x00404058
00403f14  _nop
00403f18  lui a3,0x43
00403f1c  lb v0,-0x4b44(a3)
00403f20  nop
00403f24  beq v0,zero,0x00403fa8
00403f28  _lui v1,0x43
00403f2c  lb a0,-0x4ad8(v1)
00403f30  nop
00403f34  beq a0,zero,0x00403f6c
00403f38  _lui v0,0x43
00403f3c  lb a0,-0x4da4(v0)
00403f40  nop
00403f44  beq a0,zero,0x00404058
00403f48  _addiu v1,v1,-0x4ad8
00403f4c  addiu v0,v0,-0x4da4
00403f50  lui a1,0x41
00403f54  lw t9,-0x7f78(gp)
00403f58  sw v1,0x10(sp)
00403f5c  sw v0,0x14(sp)
00403f60  move a0,s0
00403f64  b 0x00403f90
00403f68  _addiu a1,a1,0x7c58
00403f6c  lb v1,-0x4da4(v0)
00403f70  nop
00403f74  beq v1,zero,0x00404058
00403f78  _addiu v0,v0,-0x4da4
00403f7c  lw t9,-0x7f78(gp)
00403f80  lui a1,0x41
00403f84  sw v0,0x10(sp)
00403f88  move a0,s0
00403f8c  addiu a1,a1,0x7c64
00403f90  addiu a2,a2,-0x4ae8
00403f94  addiu a3,a3,-0x4b44
00403f98  jalr t9
00403f9c  _nop
00403fa0  b 0x00404050
00403fa4  _nop
00403fa8  lb a0,-0x4ad8(v1)
00403fac  nop
00403fb0  beq a0,zero,0x00403fe8
00403fb4  _lui v0,0x43
00403fb8  lb a0,-0x4da4(v0)
00403fbc  nop
00403fc0  beq a0,zero,0x00404058
00403fc4  _addiu v0,v0,-0x4da4
00403fc8  lui a1,0x41
00403fcc  lw t9,-0x7f78(gp)
00403fd0  sw v0,0x10(sp)
00403fd4  move a0,s0
00403fd8  addiu a1,a1,0x7c64
00403fdc  addiu a2,a2,-0x4ae8
00403fe0  b 0x00403f98
00403fe4  _addiu a3,v1,-0x4ad8
00403fe8  lb v1,-0x4da4(v0)
00403fec  nop
00403ff0  beq v1,zero,0x00404058
00403ff4  _lui a1,0x42
00403ff8  lw t9,-0x7f78(gp)
00403ffc  move a0,s0
00404000  addiu a1,a1,-0x7308
00404004  addiu a2,a2,-0x4ae8
00404008  b 0x00404048
0040400c  _addiu a3,v0,-0x4da4
00404010  lb v0,-0x4ae8(a2)
00404014  nop
00404018  beq v0,zero,0x00404058
0040401c  _nop
00404020  lui a3,0x43
00404024  lb v0,-0x4da4(a3)
00404028  nop
0040402c  beq v0,zero,0x00404058
00404030  _lui a1,0x42
00404034  lw t9,-0x7f78(gp)
00404038  move a0,s0
0040403c  addiu a1,a1,-0x7308
00404040  addiu a2,a2,-0x4ae8
00404044  addiu a3,a3,-0x4da4
00404048  jalr t9
0040404c  _nop
00404050  lw gp,0x18(sp)
00404054  nop
00404058  lw t9,-0x7f84(gp)
0040405c  lui a0,0x41
00404060  lui a1,0x41
00404064  lui a2,0x41
00404068  lui a3,0x42
0040406c  addiu a0,a0,0x7c70
00404070  addiu a1,a1,0x7a78
00404074  addiu a2,a2,0x7c7c
00404078  jalr t9
0040407c  _addiu a3,a3,-0x67b4
00404080  lb v0,0x20(sp)
00404084  lw gp,0x18(sp)
00404088  beq v0,zero,0x004040ac
0040408c  _nop
00404090  lw t9,-0x7e6c(gp)
00404094  lui a0,0x41
00404098  addiu a0,a0,0x7c80
0040409c  jalr t9
004040a0  _addiu a1,sp,0x20
004040a4  lw gp,0x18(sp)
004040a8  nop
004040ac  lw t9,-0x7eb4(gp)
004040b0  lui a0,0x41
004040b4  jalr t9
004040b8  _addiu a0,a0,0x7c88
004040bc  lw ra,0xac(sp)
004040c0  lw s1,0xa8(sp)
004040c4  lw s0,0xa4(sp)
004040c8  jr ra
004040cc  _addiu sp,sp,0xb0
