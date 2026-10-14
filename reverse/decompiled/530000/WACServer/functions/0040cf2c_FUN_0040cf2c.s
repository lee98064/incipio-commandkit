# FUN_0040cf2c @ 0040cf2c
0040cf2c  lw v0,0x104(a0)
0040cf30  nop
0040cf34  bne v0,zero,0x0040cfa8
0040cf38  _nop
0040cf3c  lw v1,0x100(a0)
0040cf40  nop
0040cf44  addiu a2,v1,0x6
0040cf48  sltiu a3,a2,0x100
0040cf4c  bne a3,zero,0x0040cf5c
0040cf50  _addiu a3,v1,0x1
0040cf54  b 0x0040cf94
0040cf58  _li v0,-0x1a57
0040cf5c  addu t0,a0,v1
0040cf60  addu t6,a0,a3
0040cf64  srl t5,a1,0x18
0040cf68  srl t3,a1,0x10
0040cf6c  srl t1,a1,0x8
0040cf70  li t8,-0x23
0040cf74  sb t8,0x0(t0)
0040cf78  sw a3,0x108(a0)
0040cf7c  sb zero,0x0(t6)
0040cf80  sb t5,0x2(t0)
0040cf84  sb t3,0x3(t0)
0040cf88  sb t1,0x4(t0)
0040cf8c  sb a1,0x5(t0)
0040cf90  sw a2,0x100(a0)
0040cf94  lw v1,0x104(a0)
0040cf98  nop
0040cf9c  bne v1,zero,0x0040cfa8
0040cfa0  _nop
0040cfa4  sw v0,0x104(a0)
0040cfa8  jr ra
0040cfac  _nop
