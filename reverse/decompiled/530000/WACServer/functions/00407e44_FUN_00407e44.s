# FUN_00407e44 @ 00407e44
00407e44  lui a2,0x3b9a
00407e48  ori a2,a2,0xca00
00407e4c  mult a0,a2
00407e50  sra v0,a1,0x1f
00407e54  sw a0,0x0(sp)
00407e58  sw a1,0x4(sp)
00407e5c  mflo a3
00407e60  addu v1,a3,a1
00407e64  sltu a0,v1,a3
00407e68  mfhi a2
00407e6c  addu v0,a2,v0
00407e70  jr ra
00407e74  _addu v0,a0,v0
