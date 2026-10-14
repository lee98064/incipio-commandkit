# FUN_00408f4c @ 00408f4c
00408f4c  addiu sp,sp,-0x138
00408f50  sw ra,0x134(sp)
00408f54  sw s6,0x130(sp)
00408f58  sw s5,0x12c(sp)
00408f5c  sw s4,0x128(sp)
00408f60  sw s3,0x124(sp)
00408f64  sw s2,0x120(sp)
00408f68  sw s1,0x11c(sp)
00408f6c  sw s0,0x118(sp)
00408f70  lui gp,0x43
00408f74  addiu gp,gp,-0x4f70
00408f78  sw gp,0x10(sp)
00408f7c  lw t9,-0x7dfc(gp)
00408f80  lui s1,0x41
00408f84  addiu s1,s1,0x1b00
00408f88  addiu s0,sp,0x18
00408f8c  move a0,s0
00408f90  move a1,s1
00408f94  jalr t9
00408f98  _li a2,0xd
00408f9c  lw gp,0x10(sp)
00408fa0  addiu a0,sp,0x25
00408fa4  clear a1
00408fa8  lw t9,-0x7ee8(gp)
00408fac  nop
00408fb0  jalr t9
00408fb4  _li a2,0xf3
00408fb8  lw gp,0x10(sp)
00408fbc  lui a0,0x41
00408fc0  lw t9,-0x7f08(gp)
00408fc4  nop
00408fc8  jalr t9
00408fcc  _addiu a0,a0,0x152c
00408fd0  lw gp,0x10(sp)
00408fd4  bne v0,zero,0x0040908c
00408fd8  _move s3,v0
00408fdc  lw t9,-0x7dbc(gp)
00408fe0  lui a0,0x41
00408fe4  jalr t9
00408fe8  _addiu a0,a0,0x1520
00408fec  b 0x004090d4
00408ff0  _li v0,-0x1
00408ff4  jalr t9
00408ff8  _nop
00408ffc  lw gp,0x10(sp)
00409000  bne v0,zero,0x004090a0
00409004  _nop
00409008  lw t9,-0x7f88(gp)
0040900c  nop
00409010  jalr t9
00409014  _move a0,s2
00409018  lw gp,0x10(sp)
0040901c  addu v0,s1,v0
00409020  addiu a1,v0,0x7
00409024  lw t9,-0x7e94(gp)
00409028  li a2,0x4
0040902c  jalr t9
00409030  _move a0,s5
00409034  lw gp,0x10(sp)
00409038  bne v0,zero,0x004090a0
0040903c  _move a0,s0
00409040  lw t9,-0x7d9c(gp)
00409044  nop
00409048  jalr t9
0040904c  _move a1,s4
00409050  lw gp,0x10(sp)
00409054  move a1,s2
00409058  lw t9,-0x7e70(gp)
0040905c  nop
00409060  jalr t9
00409064  _move a0,s0
00409068  lw gp,0x10(sp)
0040906c  nop
00409070  lw t9,-0x7ec8(gp)
00409074  nop
00409078  jalr t9
0040907c  _move a0,s0
00409080  lw gp,0x10(sp)
00409084  b 0x004090a0
00409088  _nop
0040908c  lui s6,0x41
00409090  lui s5,0x41
00409094  addiu s6,s6,0x1538
00409098  addiu s5,s5,0x1f14
0040909c  move s4,s1
004090a0  lw t9,-0x7e34(gp)
004090a4  nop
004090a8  jalr t9
004090ac  _move a0,s3
004090b0  lw gp,0x10(sp)
004090b4  addiu s2,v0,0xb
004090b8  move a0,s6
004090bc  lw t9,-0x7e94(gp)
004090c0  li a2,0x7
004090c4  move s1,v0
004090c8  bne v0,zero,0x00408ff4
004090cc  _move a1,s2
004090d0  clear v0
004090d4  lw ra,0x134(sp)
004090d8  lw s6,0x130(sp)
004090dc  lw s5,0x12c(sp)
004090e0  lw s4,0x128(sp)
004090e4  lw s3,0x124(sp)
004090e8  lw s2,0x120(sp)
004090ec  lw s1,0x11c(sp)
004090f0  lw s0,0x118(sp)
004090f4  jr ra
004090f8  _addiu sp,sp,0x138
