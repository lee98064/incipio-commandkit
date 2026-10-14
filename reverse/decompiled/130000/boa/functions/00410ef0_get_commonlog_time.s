# get_commonlog_time @ 00410ef0
00410ef0  addiu sp,sp,-0x20
00410ef4  sw ra,0x1c(sp)
00410ef8  lui gp,0x47
00410efc  addiu gp,gp,0x2630
00410f00  sw gp,0x10(sp)
00410f04  lw v0,-0x7f30(gp)
00410f08  nop
00410f0c  lw v0,0x0(v0)
00410f10  nop
00410f14  beq v0,zero,0x00410f38
00410f18  _nop
00410f1c  lw t9,-0x7db0(gp)
00410f20  lw a0,-0x7ac8(gp)
00410f24  jalr t9
00410f28  _nop
00410f2c  lw v1,0x24(v0)
00410f30  b 0x00410f50
00410f34  _li t3,0x3c
00410f38  lw t9,-0x7f14(gp)
00410f3c  lw a0,-0x7ac8(gp)
00410f40  jalr t9
00410f44  _nop
00410f48  clear v1
00410f4c  li t3,0x3c
00410f50  div v1,t3
00410f54  bne t3,zero,0x00410f60
00410f58  _nop
00410f5c  break 0x1c00
00410f60  li a1,0xa
00410f64  li a3,0x6
00410f68  slti v1,v1,0x0
00410f6c  li a0,0x2b
00410f70  li a2,0x2d
00410f74  movz a2,a0,v1
00410f78  lui a0,0x47
00410f7c  addiu a0,a0,-0xfe4
00410f80  li v1,0x20
00410f84  li t0,0x5d
00410f88  sb t0,0x1b(a0)
00410f8c  sb a2,0x16(a0)
00410f90  sb v1,0x15(a0)
00410f94  sb v1,0x1c(a0)
00410f98  sb zero,0x1d(a0)
00410f9c  li a2,0x3a
00410fa0  lui v1,0x47
00410fa4  addiu v1,v1,-0xfd9
00410fa8  li t0,0xa
00410fac  mflo t3
00410fb0  sra t4,t3,0x1f
00410fb4  xor t3,t4,t3
00410fb8  subu t3,t3,t4
00410fbc  divu t3,a1
00410fc0  bne a1,zero,0x00410fcc
00410fc4  _nop
00410fc8  break 0x1c00
00410fcc  mflo t2
00410fd0  mfhi t3
00410fd4  addiu t3,t3,0x30
00410fd8  sb t3,0x1a(a0)
00410fdc  divu t2,a3
00410fe0  bne a3,zero,0x00410fec
00410fe4  _nop
00410fe8  break 0x1c00
00410fec  mflo a3
00410ff0  mfhi t2
00410ff4  addiu t2,t2,0x30
00410ff8  sb t2,0x19(a0)
00410ffc  divu a3,a1
00411000  bne a1,zero,0x0041100c
00411004  _nop
00411008  break 0x1c00
0041100c  mfhi t1
00411010  addiu t1,t1,0x30
00411014  sb t1,0x18(a0)
00411018  mflo a3
0041101c  addiu a3,a3,0x30
00411020  sb a3,0x17(a0)
00411024  lw a3,0x0(v0)
00411028  sb a2,0x12(a0)
0041102c  divu a3,a1
00411030  bne a1,zero,0x0041103c
00411034  _nop
00411038  break 0x1c00
0041103c  mfhi a3
00411040  addiu t2,a3,0x30
00411044  sb t2,0x14(a0)
00411048  mflo t1
0041104c  addiu t1,t1,0x30
00411050  sb t1,0x13(a0)
00411054  lw a3,0x4(v0)
00411058  sb a2,0xf(a0)
0041105c  divu a3,a1
00411060  bne a1,zero,0x0041106c
00411064  _nop
00411068  break 0x1c00
0041106c  mfhi a3
00411070  addiu t2,a3,0x30
00411074  sb t2,0x11(a0)
00411078  mflo t1
0041107c  addiu t1,t1,0x30
00411080  sb t1,0x10(a0)
00411084  lw a3,0x8(v0)
00411088  sb a2,0xc(a0)
0041108c  divu a3,a1
00411090  bne a1,zero,0x0041109c
00411094  _nop
00411098  break 0x1c00
0041109c  mfhi a1
004110a0  addiu a2,a1,0x30
004110a4  sb a2,0xe(a0)
004110a8  mflo a3
004110ac  addiu a3,a3,0x30
004110b0  sb a3,0xd(a0)
004110b4  lw a0,0x14(v0)
004110b8  b 0x004110e4
004110bc  _addiu a0,a0,0x76c
004110c0  divu a0,t0
004110c4  bne t0,zero,0x004110d0
004110c8  _nop
004110cc  break 0x1c00
004110d0  mfhi a0
004110d4  addiu a0,a0,0x30
004110d8  sb a0,0x0(v1)
004110dc  mflo a0
004110e0  addiu v1,v1,-0x1
004110e4  bne a0,zero,0x004110c0
004110e8  _li a1,0x2f
004110ec  sb a1,0x0(v1)
004110f0  lw a2,0x10(v0)
004110f4  lui a0,0x45
004110f8  addiu a0,a0,-0x4404
004110fc  sll a2,a2,0x2
00411100  addu a0,a0,a2
00411104  lbu a3,0x2(a0)
00411108  lbu a2,0x1(a0)
0041110c  lbu t0,0x0(a0)
00411110  addiu a0,v1,-0x3
00411114  sb t0,-0x3(v1)
00411118  sb a3,0x2(a0)
0041111c  sb a2,0x1(a0)
00411120  sb a1,-0x4(v1)
00411124  lw a1,0xc(v0)
00411128  li v0,0xa
0041112c  divu a1,v0
00411130  bne v0,zero,0x0041113c
00411134  _nop
00411138  break 0x1c00
0041113c  li v0,0x5b
00411140  sb v0,-0x7(v1)
00411144  addiu v0,v1,-0x7
00411148  mfhi a0
0041114c  addiu a0,a0,0x30
00411150  sb a0,-0x5(v1)
00411154  mflo a1
00411158  addiu a1,a1,0x30
0041115c  sb a1,-0x6(v1)
00411160  lw ra,0x1c(sp)
00411164  nop
00411168  jr ra
0041116c  _addiu sp,sp,0x20
