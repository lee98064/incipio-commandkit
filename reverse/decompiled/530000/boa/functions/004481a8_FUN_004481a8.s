# FUN_004481a8 @ 004481a8
004481a8  addiu sp,sp,-0x30
004481ac  sw ra,0x2c(sp)
004481b0  sw s0,0x28(sp)
004481b4  lui gp,0x47
004481b8  addiu gp,gp,0x2630
004481bc  sw gp,0x10(sp)
004481c0  lbu v0,0x0(a0)
004481c4  li v1,0x2f
004481c8  bne v0,v1,0x00448224
004481cc  _clear s0
004481d0  addiu s0,a0,0x1
004481d4  addiu v0,sp,0x18
004481d8  b 0x004481ec
004481dc  _li a0,0x2f
004481e0  sb v1,0x0(v0)
004481e4  addiu s0,s0,0x1
004481e8  addiu v0,v0,0x1
004481ec  lbu v1,0x0(s0)
004481f0  nop
004481f4  beq v1,zero,0x00448204
004481f8  _nop
004481fc  bne v1,a0,0x004481e0
00448200  _nop
00448204  lw t9,-0x7ef4(gp)
00448208  sb zero,0x0(v0)
0044820c  addiu a0,sp,0x18
00448210  jalr t9
00448214  _sw a1,0x20(sp)
00448218  lw a1,0x20(sp)
0044821c  nop
00448220  sw v0,0x0(a1)
00448224  move v0,s0
00448228  lw ra,0x2c(sp)
0044822c  lw s0,0x28(sp)
00448230  jr ra
00448234  _addiu sp,sp,0x30
