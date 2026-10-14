# RSA_verify @ 0046da84
0046da84  addiu sp,sp,-0x30
0046da88  sw ra,0x2c(sp)
0046da8c  lw t0,0x40(sp)
0046da90  lw v0,0x44(sp)
0046da94  nop
0046da98  lw v1,0x3c(v0)
0046da9c  nop
0046daa0  andi v1,v1,0x40
0046daa4  beq v1,zero,0x0046dad8
0046daa8  _nop
0046daac  lw v1,0x8(v0)
0046dab0  nop
0046dab4  lw t9,0x30(v1)
0046dab8  nop
0046dabc  beq t9,zero,0x0046dad8
0046dac0  _nop
0046dac4  sw t0,0x10(sp)
0046dac8  jalr t9
0046dacc  _sw v0,0x14(sp)
0046dad0  b 0x0046daf0
0046dad4  _nop
0046dad8  sw zero,0x10(sp)
0046dadc  sw a3,0x14(sp)
0046dae0  sw t0,0x18(sp)
0046dae4  sw v0,0x1c(sp)
0046dae8  jal 0x0046d420
0046daec  _clear a3
0046daf0  lw ra,0x2c(sp)
0046daf4  nop
0046daf8  jr ra
0046dafc  _addiu sp,sp,0x30
