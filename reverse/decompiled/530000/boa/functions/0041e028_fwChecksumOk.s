# fwChecksumOk @ 0041e028
0041e028  clear v0
0041e02c  b 0x0041e044
0041e030  _clear v1
0041e034  lhu a2,0x0(a3)
0041e038  addiu v1,v1,0x2
0041e03c  addu v0,v0,a2
0041e040  andi v0,v0,0xffff
0041e044  slt a2,v1,a1
0041e048  bne a2,zero,0x0041e034
0041e04c  _addu a3,a0,v1
0041e050  jr ra
0041e054  _sltiu v0,v0,0x1
