# FUN_004358ac @ 004358ac
004358ac  lui gp,0x1e
004358b0  addiu gp,gp,0x3bd4
004358b4  addu gp,gp,t9
004358b8  addiu sp,sp,-0x20
004358bc  sw ra,0x1c(sp)
004358c0  sw s8,0x18(sp)
004358c4  move s8,sp
004358c8  sw gp,0x10(sp)
004358cc  sw a0,0x20(s8)
004358d0  lw v0,0x20(s8)
004358d4  nop
004358d8  lw v0,0x18(v0)
004358dc  nop
004358e0  move a0,v0
004358e4  lw v0,-0x764c(gp)
004358e8  nop
004358ec  move t9,v0
004358f0  jalr t9
004358f4  _nop
004358f8  lw gp,0x10(s8)
004358fc  lw a0,0x20(s8)
00435900  lw v0,-0x7fcc(gp)
00435904  nop
00435908  addiu v0,v0,0x4d6c
0043590c  move t9,v0
00435910  jalr t9
00435914  _nop
00435918  lw gp,0x10(s8)
0043591c  move sp,s8
00435920  lw ra,0x1c(sp)
00435924  lw s8,0x18(sp)
00435928  addiu sp,sp,0x20
0043592c  jr ra
00435930  _nop
