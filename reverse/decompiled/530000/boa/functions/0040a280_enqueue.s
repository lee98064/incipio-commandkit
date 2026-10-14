# enqueue @ 0040a280
0040a280  lw v0,0x0(a0)
0040a284  nop
0040a288  beq v0,zero,0x0040a298
0040a28c  _nop
0040a290  sw a1,0x3280(v0)
0040a294  lw v0,0x0(a0)
0040a298  sw zero,0x3280(a1)
0040a29c  sw v0,0x327c(a1)
0040a2a0  jr ra
0040a2a4  _sw a1,0x0(a0)
