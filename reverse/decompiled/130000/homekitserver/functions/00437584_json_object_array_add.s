# json_object_array_add @ 00437584
00437584  lui gp,0x1e
00437588  addiu gp,gp,0x1efc
0043758c  addu gp,gp,t9
00437590  addiu sp,sp,-0x20
00437594  sw ra,0x1c(sp)
00437598  sw s8,0x18(sp)
0043759c  move s8,sp
004375a0  sw gp,0x10(sp)
004375a4  sw a0,0x20(s8)
004375a8  sw a1,0x24(s8)
004375ac  lw v0,0x20(s8)
004375b0  nop
004375b4  lw v0,0x18(v0)
004375b8  nop
004375bc  move a0,v0
004375c0  lw a1,0x24(s8)
004375c4  lw v0,-0x7f4c(gp)
004375c8  nop
004375cc  move t9,v0
004375d0  jalr t9
004375d4  _nop
004375d8  lw gp,0x10(s8)
004375dc  move sp,s8
004375e0  lw ra,0x1c(sp)
004375e4  lw s8,0x18(sp)
004375e8  addiu sp,sp,0x20
004375ec  jr ra
004375f0  _nop
