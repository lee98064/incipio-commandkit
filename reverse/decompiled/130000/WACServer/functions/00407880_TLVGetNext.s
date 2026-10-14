# TLVGetNext @ 00407880
00407880  subu v1,a1,a0
00407884  sltiu v1,v1,0x2
00407888  lw t0,0x14(sp)
0040788c  bne v1,zero,0x004078d8
00407890  _li v0,-0x1a47
00407894  lbu t1,0x1(a0)
00407898  addiu t2,a0,0x2
0040789c  addu v1,t2,t1
004078a0  sltu v0,v1,a0
004078a4  bne v0,zero,0x004078d8
004078a8  _li v0,-0x1a5e
004078ac  sltu a1,a1,v1
004078b0  bne a1,zero,0x004078d8
004078b4  _nop
004078b8  lbu a0,0x0(a0)
004078bc  clear v0
004078c0  sb a0,0x0(a2)
004078c4  lw a0,0x10(sp)
004078c8  sw t2,0x0(a3)
004078cc  beq t0,zero,0x004078d8
004078d0  _sw t1,0x0(a0)
004078d4  sw v1,0x0(t0)
004078d8  jr ra
004078dc  _nop
