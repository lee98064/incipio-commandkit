# memcmp_constant_time @ 0040cd30
0040cd30  clear v1
0040cd34  b 0x0040cd54
0040cd38  _clear v0
0040cd3c  lbu t1,0x0(t1)
0040cd40  lbu a3,0x0(t0)
0040cd44  addiu v1,v1,0x1
0040cd48  xor a3,t1,a3
0040cd4c  andi a3,a3,0xff
0040cd50  or v0,v0,a3
0040cd54  sltu a3,v1,a2
0040cd58  addu t1,a1,v1
0040cd5c  bne a3,zero,0x0040cd3c
0040cd60  _addu t0,a0,v1
0040cd64  jr ra
0040cd68  _nop
