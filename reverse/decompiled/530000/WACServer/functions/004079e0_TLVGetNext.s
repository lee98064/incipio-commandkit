# TLVGetNext @ 004079e0
004079e0  subu v1,a1,a0
004079e4  sltiu v1,v1,0x2
004079e8  lw t0,0x14(sp)
004079ec  bne v1,zero,0x00407a38
004079f0  _li v0,-0x1a47
004079f4  lbu t1,0x1(a0)
004079f8  addiu t2,a0,0x2
004079fc  addu v1,t2,t1
00407a00  sltu v0,v1,a0
00407a04  bne v0,zero,0x00407a38
00407a08  _li v0,-0x1a5e
00407a0c  sltu a1,a1,v1
00407a10  bne a1,zero,0x00407a38
00407a14  _nop
00407a18  lbu a0,0x0(a0)
00407a1c  clear v0
00407a20  sb a0,0x0(a2)
00407a24  lw a0,0x10(sp)
00407a28  sw t2,0x0(a3)
00407a2c  beq t0,zero,0x00407a38
00407a30  _sw t1,0x0(a0)
00407a34  sw v1,0x0(t0)
00407a38  jr ra
00407a3c  _nop
