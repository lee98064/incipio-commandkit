# FUN_0043357c @ 0043357c
0043357c  addiu sp,sp,-0x20
00433580  sw ra,0x1c(sp)
00433584  sw s0,0x18(sp)
00433588  lui gp,0x62
0043358c  addiu gp,gp,-0x5cf0
00433590  sw gp,0x10(sp)
00433594  lui s0,0x60
00433598  lw a0,0xb80(s0)
0043359c  nop
004335a0  blez a0,0x004335d8
004335a4  _nop
004335a8  lw t9,-0x6f9c(gp)
004335ac  lw a2,-0x76a8(gp)
004335b0  jalr t9
004335b4  _li a1,0x540e
004335b8  lw gp,0x10(sp)
004335bc  lw a0,0xb80(s0)
004335c0  lw t9,-0x6d0c(gp)
004335c4  nop
004335c8  jalr t9
004335cc  _nop
004335d0  li v0,-0x1
004335d4  sw v0,0xb80(s0)
004335d8  lw ra,0x1c(sp)
004335dc  lw s0,0x18(sp)
004335e0  jr ra
004335e4  _addiu sp,sp,0x20
