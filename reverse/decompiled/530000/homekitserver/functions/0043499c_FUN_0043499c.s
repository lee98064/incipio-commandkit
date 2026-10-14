# FUN_0043499c @ 0043499c
0043499c  addiu sp,sp,-0x20
004349a0  sw ra,0x1c(sp)
004349a4  sw s0,0x18(sp)
004349a8  lui gp,0x62
004349ac  addiu gp,gp,-0x5cf0
004349b0  sw gp,0x10(sp)
004349b4  lw t9,-0x7910(gp)
004349b8  lui a0,0x61
004349bc  jalr t9
004349c0  _addiu a0,a0,0x5ee4
004349c4  lw gp,0x10(sp)
004349c8  lui s0,0x61
004349cc  lw t9,-0x6fac(gp)
004349d0  nop
004349d4  jalr t9
004349d8  _addiu a0,s0,0x5ee0
004349dc  lbu v0,0x5ee0(s0)
004349e0  nop
004349e4  sltiu v0,v0,0x2
004349e8  bne v0,zero,0x004349f4
004349ec  _nop
004349f0  sb zero,0x5ee0(s0)
004349f4  lui s0,0x61
004349f8  lb a0,0x5ee0(s0)
004349fc  jal 0x0043485c
00434a00  _nop
00434a04  lb a0,0x5ee0(s0)
00434a08  jal 0x0043485c
00434a0c  _nop
00434a10  lb a0,0x5ee0(s0)
00434a14  jal 0x0043485c
00434a18  _nop
00434a1c  lw gp,0x10(sp)
00434a20  lb a1,0x5ee0(s0)
00434a24  lw ra,0x1c(sp)
00434a28  lw t9,-0x5914(gp)
00434a2c  lw s0,0x18(sp)
00434a30  li a0,0x9
00434a34  jr t9
00434a38  _addiu sp,sp,0x20
