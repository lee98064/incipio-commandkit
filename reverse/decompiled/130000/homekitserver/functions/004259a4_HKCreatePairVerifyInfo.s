# HKCreatePairVerifyInfo @ 004259a4
004259a4  addiu sp,sp,-0x20
004259a8  sw ra,0x1c(sp)
004259ac  lui gp,0x62
004259b0  addiu gp,gp,-0x6b80
004259b4  sw gp,0x10(sp)
004259b8  lw t9,-0x5a68(gp)
004259bc  li a0,0x1
004259c0  jalr t9
004259c4  _li a1,0x28
004259c8  beq v0,zero,0x004259d4
004259cc  _li v1,0x1
004259d0  sw v1,0x4(v0)
004259d4  lw ra,0x1c(sp)
004259d8  nop
004259dc  jr ra
004259e0  _addiu sp,sp,0x20
