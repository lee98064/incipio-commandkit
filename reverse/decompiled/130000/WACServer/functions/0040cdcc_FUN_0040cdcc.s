# FUN_0040cdcc @ 0040cdcc
0040cdcc  lw v0,0x104(a0)
0040cdd0  nop
0040cdd4  bne v0,zero,0x0040ce48
0040cdd8  _nop
0040cddc  lw v1,0x100(a0)
0040cde0  nop
0040cde4  addiu a2,v1,0x6
0040cde8  sltiu a3,a2,0x100
0040cdec  bne a3,zero,0x0040cdfc
0040cdf0  _addiu a3,v1,0x1
0040cdf4  b 0x0040ce34
0040cdf8  _li v0,-0x1a57
0040cdfc  addu t0,a0,v1
0040ce00  addu t6,a0,a3
0040ce04  srl t5,a1,0x18
0040ce08  srl t3,a1,0x10
0040ce0c  srl t1,a1,0x8
0040ce10  li t8,-0x23
0040ce14  sb t8,0x0(t0)
0040ce18  sw a3,0x108(a0)
0040ce1c  sb zero,0x0(t6)
0040ce20  sb t5,0x2(t0)
0040ce24  sb t3,0x3(t0)
0040ce28  sb t1,0x4(t0)
0040ce2c  sb a1,0x5(t0)
0040ce30  sw a2,0x100(a0)
0040ce34  lw v1,0x104(a0)
0040ce38  nop
0040ce3c  bne v1,zero,0x0040ce48
0040ce40  _nop
0040ce44  sw v0,0x104(a0)
0040ce48  jr ra
0040ce4c  _nop
