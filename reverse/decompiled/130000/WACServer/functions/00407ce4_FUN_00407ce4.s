# FUN_00407ce4 @ 00407ce4
00407ce4  lui a2,0x3b9a
00407ce8  ori a2,a2,0xca00
00407cec  mult a0,a2
00407cf0  sra v0,a1,0x1f
00407cf4  sw a0,0x0(sp)
00407cf8  sw a1,0x4(sp)
00407cfc  mflo a3
00407d00  addu v1,a3,a1
00407d04  sltu a0,v1,a3
00407d08  mfhi a2
00407d0c  addu v0,a2,v0
00407d10  jr ra
00407d14  _addu v0,a0,v0
