# FUN_00402158 @ 00402158
00402158  addiu sp,sp,-0x20
0040215c  sw ra,0x1c(sp)
00402160  sw s0,0x18(sp)
00402164  lui gp,0x43
00402168  addiu gp,gp,-0x4be0
0040216c  sw gp,0x10(sp)
00402170  lw t9,-0x7f9c(gp)
00402174  nop
00402178  jalr t9
0040217c  _move s0,a0
00402180  lw gp,0x10(sp)
00402184  nop
00402188  lw a0,-0x7fbc(gp)
0040218c  b 0x004021b8
00402190  _clear v1
00402194  lb a1,0x0(s0)
00402198  lw a2,0x0(a0)
0040219c  addiu v1,v1,0x1
004021a0  sll a1,a1,0x1
004021a4  addu a1,a2,a1
004021a8  lh a1,0x0(a1)
004021ac  nop
004021b0  sb a1,0x0(s0)
004021b4  addiu s0,s0,0x1
004021b8  slt a1,v1,v0
004021bc  bne a1,zero,0x00402194
004021c0  _nop
004021c4  lw ra,0x1c(sp)
004021c8  lw s0,0x18(sp)
004021cc  jr ra
004021d0  _addiu sp,sp,0x20
