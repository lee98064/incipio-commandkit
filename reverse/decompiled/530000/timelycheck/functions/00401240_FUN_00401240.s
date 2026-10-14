# FUN_00401240 @ 00401240
00401240  lui gp,0x3
00401244  addiu gp,gp,0x1e20
00401248  addu gp,gp,t9
0040124c  addiu sp,sp,-0x28
00401250  sw ra,0x24(sp)
00401254  sw s2,0x20(sp)
00401258  sw s1,0x1c(sp)
0040125c  sw s0,0x18(sp)
00401260  sw gp,0x10(sp)
00401264  lw v0,-0x7fe8(gp)
00401268  nop
0040126c  lbu v0,-0x4de0(v0)
00401270  nop
00401274  bne v0,zero,0x00401330
00401278  _nop
0040127c  lw v0,-0x7eac(gp)
00401280  nop
00401284  beq v0,zero,0x004012a8
00401288  _nop
0040128c  lw v0,-0x7fe4(gp)
00401290  lw t9,-0x7eac(gp)
00401294  lw a0,0x0(v0)
00401298  jalr t9
0040129c  _nop
004012a0  lw gp,0x10(sp)
004012a4  nop
004012a8  lw s1,-0x7fe8(gp)
004012ac  lw s2,-0x7fe0(gp)
004012b0  lw s0,-0x7fe8(gp)
004012b4  addiu s1,s1,-0x5ff8
004012b8  subu s2,s2,s1
004012bc  sra s2,s2,0x2
004012c0  b 0x004012dc
004012c4  _addiu s2,s2,-0x1
004012c8  lw t9,0x0(a0)
004012cc  nop
004012d0  jalr t9
004012d4  _sw v1,-0x4ddc(s0)
004012d8  lw gp,0x10(sp)
004012dc  lw v0,-0x4ddc(s0)
004012e0  nop
004012e4  addiu v1,v0,0x1
004012e8  sll a0,v1,0x2
004012ec  sltu v0,v0,s2
004012f0  bne v0,zero,0x004012c8
004012f4  _addu a0,a0,s1
004012f8  lw v0,-0x7ee0(gp)
004012fc  nop
00401300  beq v0,zero,0x00401324
00401304  _nop
00401308  lw a0,-0x7fdc(gp)
0040130c  lw t9,-0x7ee0(gp)
00401310  nop
00401314  jalr t9
00401318  _addiu a0,a0,-0x64a0
0040131c  lw gp,0x10(sp)
00401320  nop
00401324  lw v0,-0x7fe8(gp)
00401328  li v1,0x1
0040132c  sb v1,-0x4de0(v0)
00401330  lw ra,0x24(sp)
00401334  lw s2,0x20(sp)
00401338  lw s1,0x1c(sp)
0040133c  lw s0,0x18(sp)
00401340  jr ra
00401344  _addiu sp,sp,0x28
