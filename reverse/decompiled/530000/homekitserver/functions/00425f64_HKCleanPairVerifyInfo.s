# HKCleanPairVerifyInfo @ 00425f64
00425f64  addiu sp,sp,-0x20
00425f68  sw ra,0x1c(sp)
00425f6c  sw s0,0x18(sp)
00425f70  lui gp,0x62
00425f74  addiu gp,gp,-0x5cf0
00425f78  sw gp,0x10(sp)
00425f7c  lw v0,0x0(a0)
00425f80  nop
00425f84  beq v0,zero,0x004260d0
00425f88  _move s0,a0
00425f8c  lw a0,0xc(v0)
00425f90  nop
00425f94  beq a0,zero,0x00425fb0
00425f98  _nop
00425f9c  lw t9,-0x7aa4(gp)
00425fa0  nop
00425fa4  jalr t9
00425fa8  _nop
00425fac  lw gp,0x10(sp)
00425fb0  lw v0,0x0(s0)
00425fb4  nop
00425fb8  lw a0,0x10(v0)
00425fbc  nop
00425fc0  beq a0,zero,0x00425fe4
00425fc4  _nop
00425fc8  lw t9,-0x7aa4(gp)
00425fcc  nop
00425fd0  jalr t9
00425fd4  _nop
00425fd8  lw gp,0x10(sp)
00425fdc  lw v0,0x0(s0)
00425fe0  nop
00425fe4  lw a0,0x14(v0)
00425fe8  nop
00425fec  beq a0,zero,0x00426008
00425ff0  _nop
00425ff4  lw t9,-0x7aa4(gp)
00425ff8  nop
00425ffc  jalr t9
00426000  _nop
00426004  lw gp,0x10(sp)
00426008  lw v0,0x0(s0)
0042600c  nop
00426010  lw a0,0x18(v0)
00426014  nop
00426018  beq a0,zero,0x0042603c
0042601c  _nop
00426020  lw t9,-0x7aa4(gp)
00426024  nop
00426028  jalr t9
0042602c  _nop
00426030  lw gp,0x10(sp)
00426034  lw v0,0x0(s0)
00426038  nop
0042603c  lw a0,0x1c(v0)
00426040  nop
00426044  beq a0,zero,0x00426060
00426048  _nop
0042604c  lw t9,-0x7aa4(gp)
00426050  nop
00426054  jalr t9
00426058  _nop
0042605c  lw gp,0x10(sp)
00426060  lw v0,0x0(s0)
00426064  nop
00426068  lw a0,0x20(v0)
0042606c  nop
00426070  beq a0,zero,0x00426094
00426074  _nop
00426078  lw t9,-0x7aa4(gp)
0042607c  nop
00426080  jalr t9
00426084  _nop
00426088  lw gp,0x10(sp)
0042608c  lw v0,0x0(s0)
00426090  nop
00426094  lw a0,0x24(v0)
00426098  nop
0042609c  beq a0,zero,0x004260bc
004260a0  _nop
004260a4  lw t9,-0x7aa4(gp)
004260a8  nop
004260ac  jalr t9
004260b0  _nop
004260b4  lw gp,0x10(sp)
004260b8  nop
004260bc  lw t9,-0x7aa4(gp)
004260c0  lw a0,0x0(s0)
004260c4  jalr t9
004260c8  _nop
004260cc  sw zero,0x0(s0)
004260d0  lw ra,0x1c(sp)
004260d4  lw s0,0x18(sp)
004260d8  jr ra
004260dc  _addiu sp,sp,0x20
