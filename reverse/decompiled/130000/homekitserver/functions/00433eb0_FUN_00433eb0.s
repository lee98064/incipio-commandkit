# FUN_00433eb0 @ 00433eb0
00433eb0  addiu sp,sp,-0xa0
00433eb4  sw ra,0x9c(sp)
00433eb8  sw s8,0x98(sp)
00433ebc  sw s7,0x94(sp)
00433ec0  sw s6,0x90(sp)
00433ec4  sw s5,0x8c(sp)
00433ec8  sw s4,0x88(sp)
00433ecc  sw s3,0x84(sp)
00433ed0  sw s2,0x80(sp)
00433ed4  sw s1,0x7c(sp)
00433ed8  sw s0,0x78(sp)
00433edc  lui gp,0x62
00433ee0  addiu gp,gp,-0x6b80
00433ee4  sw gp,0x10(sp)
00433ee8  lw s2,-0x5944(gp)
00433eec  addiu v0,sp,0x18
00433ef0  move t0,a1
00433ef4  move a3,s2
00433ef8  move s0,a2
00433efc  addiu s2,s2,0x4
00433f00  clear s1
00433f04  li v1,0xb5
00433f08  sw v0,0x64(sp)
00433f0c  li s8,0x1
00433f10  li s7,0x2
00433f14  li s6,0x14
00433f18  li s5,0xa
00433f1c  lw v0,0x0(s2)
00433f20  nop
00433f24  beq v0,zero,0x004340cc
00433f28  _mult s1,v1
00433f2c  clear s4
00433f30  mflo s3
00433f34  addiu s3,s3,0x1
00433f38  sll s3,s3,0x3
00433f3c  addu s3,a3,s3
00433f40  addiu s3,s3,0x4
00433f44  lw t9,-0x5cb0(gp)
00433f48  lw a0,0x64(sp)
00433f4c  move a1,s3
00433f50  li a2,0x48
00433f54  sw v1,0x6c(sp)
00433f58  sw a3,0x70(sp)
00433f5c  jalr t9
00433f60  _sw t0,0x68(sp)
00433f64  lbu t3,0x3c(sp)
00433f68  lw v0,0x24(sp)
00433f6c  lw gp,0x10(sp)
00433f70  lw t2,0x1c(sp)
00433f74  lbu t1,0x2c(sp)
00433f78  lbu a2,0x21(sp)
00433f7c  lbu a1,0x2f(sp)
00433f80  lbu a0,0x34(sp)
00433f84  sw t3,0x60(sp)
00433f88  lw v1,0x6c(sp)
00433f8c  lw a3,0x70(sp)
00433f90  lw t0,0x68(sp)
00433f94  beq v0,zero,0x004340b4
00433f98  _nop
00433f9c  bne t2,t0,0x004340b8
00433fa0  _addiu s4,s4,0x1
00433fa4  beq t1,zero,0x004340cc
00433fa8  _addiu s4,s4,-0x1
00433fac  beq a2,zero,0x004340d8
00433fb0  _nop
00433fb4  bne v0,s8,0x0043400c
00433fb8  _nop
00433fbc  beq a1,zero,0x004340b4
00433fc0  _nop
00433fc4  beq a0,zero,0x004340b8
00433fc8  _addiu s4,s4,0x1
00433fcc  addiu s4,s4,-0x1
00433fd0  lw v0,0x30(sp)
00433fd4  nop
00433fd8  slt v0,s0,v0
00433fdc  bne v0,zero,0x004340e4
00433fe0  _li v0,0x1
00433fe4  lw v0,0x38(sp)
00433fe8  nop
00433fec  slt v0,v0,s0
00433ff0  bne v0,zero,0x004340d8
00433ff4  _nop
00433ff8  beq t3,zero,0x004340e0
00433ffc  _nop
00434000  lw v0,0x40(sp)
00434004  b 0x00434098
00434008  _nop
0043400c  bne v0,s7,0x004340e0
00434010  _nop
00434014  beq a1,zero,0x004340b4
00434018  _nop
0043401c  beq a0,zero,0x004340b8
00434020  _addiu s4,s4,0x1
00434024  addiu s4,s4,-0x1
00434028  lw t9,-0x5ccc(gp)
0043402c  lw a1,0x30(sp)
00434030  jalr t9
00434034  _move a0,s0
00434038  lw gp,0x10(sp)
0043403c  bltz v0,0x004340e4
00434040  _li v0,0x1
00434044  lw t9,-0x79f4(gp)
00434048  lw a1,0x38(sp)
0043404c  jalr t9
00434050  _move a0,s0
00434054  lw gp,0x10(sp)
00434058  bgtz v0,0x004340e4
0043405c  _li v0,0x1
00434060  lw v0,0x60(sp)
00434064  nop
00434068  beq v0,zero,0x004340e0
0043406c  _nop
00434070  lw t9,-0x5ff8(gp)
00434074  nop
00434078  jalr t9
0043407c  _move a0,s0
00434080  lw gp,0x10(sp)
00434084  lw a0,0x40(sp)
00434088  lw t9,-0x5ff8(gp)
0043408c  nop
00434090  jalr t9
00434094  _move s0,v0
00434098  div s0,v0
0043409c  bne v0,zero,0x004340a8
004340a0  _nop
004340a4  break 0x1c00
004340a8  mfhi s0
004340ac  b 0x004340e4
004340b0  _sltu v0,zero,s0
004340b4  addiu s4,s4,0x1
004340b8  bne s4,s6,0x00433f44
004340bc  _addiu s3,s3,0x48
004340c0  addiu s1,s1,0x1
004340c4  bne s1,s5,0x00433f1c
004340c8  _addiu s2,s2,0x5a8
004340cc  lui v0,0xfffe
004340d0  b 0x004340e4
004340d4  _ori v0,v0,0xecfe
004340d8  b 0x004340e4
004340dc  _li v0,0x1
004340e0  clear v0
004340e4  lw ra,0x9c(sp)
004340e8  lw s8,0x98(sp)
004340ec  lw s7,0x94(sp)
004340f0  lw s6,0x90(sp)
004340f4  lw s5,0x8c(sp)
004340f8  lw s4,0x88(sp)
004340fc  lw s3,0x84(sp)
00434100  lw s2,0x80(sp)
00434104  lw s1,0x7c(sp)
00434108  lw s0,0x78(sp)
0043410c  jr ra
00434110  _addiu sp,sp,0xa0
