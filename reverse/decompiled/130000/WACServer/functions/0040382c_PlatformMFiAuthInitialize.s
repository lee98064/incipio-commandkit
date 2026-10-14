# PlatformMFiAuthInitialize @ 0040382c
0040382c  addiu sp,sp,-0x20
00403830  sw ra,0x1c(sp)
00403834  lui a0,0x43
00403838  lui a1,0x43
0040383c  addiu a0,a0,0x35d0
00403840  jal 0x00403630
00403844  _addiu a1,a1,0x35d4
00403848  lw ra,0x1c(sp)
0040384c  clear v0
00403850  jr ra
00403854  _addiu sp,sp,0x20
