# PlatformMFiAuthInitialize @ 0040391c
0040391c  addiu sp,sp,-0x20
00403920  sw ra,0x1c(sp)
00403924  lui a0,0x43
00403928  lui a1,0x43
0040392c  addiu a0,a0,0x3590
00403930  jal 0x00403720
00403934  _addiu a1,a1,0x3594
00403938  lw ra,0x1c(sp)
0040393c  clear v0
00403940  jr ra
00403944  _addiu sp,sp,0x20
