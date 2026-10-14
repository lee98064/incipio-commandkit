# RSA_verify @ 0046db74
0046db74  addiu sp,sp,-0x30
0046db78  sw ra,0x2c(sp)
0046db7c  lw t0,0x40(sp)
0046db80  lw v0,0x44(sp)
0046db84  nop
0046db88  lw v1,0x3c(v0)
0046db8c  nop
0046db90  andi v1,v1,0x40
0046db94  beq v1,zero,0x0046dbc8
0046db98  _nop
0046db9c  lw v1,0x8(v0)
0046dba0  nop
0046dba4  lw t9,0x30(v1)
0046dba8  nop
0046dbac  beq t9,zero,0x0046dbc8
0046dbb0  _nop
0046dbb4  sw t0,0x10(sp)
0046dbb8  jalr t9
0046dbbc  _sw v0,0x14(sp)
0046dbc0  b 0x0046dbe0
0046dbc4  _nop
0046dbc8  sw zero,0x10(sp)
0046dbcc  sw a3,0x14(sp)
0046dbd0  sw t0,0x18(sp)
0046dbd4  sw v0,0x1c(sp)
0046dbd8  jal 0x0046d510
0046dbdc  _clear a3
0046dbe0  lw ra,0x2c(sp)
0046dbe4  nop
0046dbe8  jr ra
0046dbec  _addiu sp,sp,0x30
