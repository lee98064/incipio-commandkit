# HKUpdateValueToGlobalEventTable @ 0042f250
0042f250  addiu sp,sp,-0x28
0042f254  sw ra,0x24(sp)
0042f258  sw s2,0x20(sp)
0042f25c  sw s1,0x1c(sp)
0042f260  sw s0,0x18(sp)
0042f264  lui gp,0x62
0042f268  addiu gp,gp,-0x6b80
0042f26c  sw gp,0x10(sp)
0042f270  lui v0,0x61
0042f274  lw v1,0x4840(v0)
0042f278  addiu v0,v0,0x4840
0042f27c  beq v1,v0,0x0042f3b0
0042f280  _move s0,a1
0042f284  lw s1,0xc(v0)
0042f288  lui v1,0x61
0042f28c  lw v0,0x0(s1)
0042f290  b 0x0042f3a8
0042f294  _addiu v1,v1,0x484c
0042f298  lw a1,-0xc(s1)
0042f29c  nop
0042f2a0  bne a1,a0,0x0042f3a0
0042f2a4  _addiu s1,s1,-0xc
0042f2a8  lw v0,0x8(s1)
0042f2ac  nop
0042f2b0  sltiu v1,v0,0x6
0042f2b4  beq v1,zero,0x0042f3b8
0042f2b8  _lui v1,0x5b
0042f2bc  sll v0,v0,0x2
0042f2c0  addiu v1,v1,-0x3754
0042f2c4  addu v0,v1,v0
0042f2c8  lw v0,0x0(v0)
0042f2cc  nop
0042f2d0  jr v0
0042f2d4  _nop
0042f2d8  lw v0,0x4(s1)
0042f2dc  nop
0042f2e0  beq v0,s0,0x0042f3bc
0042f2e4  _clear v0
0042f2e8  b 0x0042f3bc
0042f2ec  _sw s0,0x4(s1)
0042f2f0  lw t9,-0x7b10(gp)
0042f2f4  lw a0,0x4(s1)
0042f2f8  jalr t9
0042f2fc  _move a1,s0
0042f300  beq v0,zero,0x0042f3bc
0042f304  _clear v0
0042f308  b 0x0042f3bc
0042f30c  _sw s0,0x4(s1)
0042f310  lw s2,0x4(s1)
0042f314  nop
0042f318  beq s2,zero,0x0042f354
0042f31c  _move a0,s2
0042f320  lw t9,-0x7894(gp)
0042f324  nop
0042f328  jalr t9
0042f32c  _move a1,s0
0042f330  lw gp,0x10(sp)
0042f334  beq v0,zero,0x0042f3b8
0042f338  _nop
0042f33c  lw t9,-0x7aa4(gp)
0042f340  nop
0042f344  jalr t9
0042f348  _move a0,s2
0042f34c  lw gp,0x10(sp)
0042f350  nop
0042f354  lw t9,-0x63cc(gp)
0042f358  nop
0042f35c  jalr t9
0042f360  _move a0,s0
0042f364  lw gp,0x10(sp)
0042f368  addiu a1,v0,0x1
0042f36c  lw t9,-0x5a68(gp)
0042f370  nop
0042f374  jalr t9
0042f378  _li a0,0x1
0042f37c  lw gp,0x10(sp)
0042f380  move a0,v0
0042f384  sw v0,0x4(s1)
0042f388  lw t9,-0x7eb0(gp)
0042f38c  nop
0042f390  jalr t9
0042f394  _move a1,s0
0042f398  b 0x0042f3bc
0042f39c  _clear v0
0042f3a0  move s1,v0
0042f3a4  lw v0,0x0(v0)
0042f3a8  bne s1,v1,0x0042f298
0042f3ac  _nop
0042f3b0  b 0x0042f3bc
0042f3b4  _li v0,-0x1a49
0042f3b8  clear v0
0042f3bc  lw ra,0x24(sp)
0042f3c0  lw s2,0x20(sp)
0042f3c4  lw s1,0x1c(sp)
0042f3c8  lw s0,0x18(sp)
0042f3cc  jr ra
0042f3d0  _addiu sp,sp,0x28
