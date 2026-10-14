# strlower @ 004102c8
004102c8  lui gp,0x47
004102cc  addiu gp,gp,0x2630
004102d0  lw v1,-0x7f8c(gp)
004102d4  b 0x004102f8
004102d8  _nop
004102dc  lw v0,0x0(v1)
004102e0  nop
004102e4  addu a1,v0,a1
004102e8  lh v0,0x0(a1)
004102ec  nop
004102f0  sb v0,0x0(a0)
004102f4  addiu a0,a0,0x1
004102f8  lb v0,0x0(a0)
004102fc  nop
00410300  bne v0,zero,0x004102dc
00410304  _sll a1,v0,0x1
00410308  jr ra
0041030c  _nop
