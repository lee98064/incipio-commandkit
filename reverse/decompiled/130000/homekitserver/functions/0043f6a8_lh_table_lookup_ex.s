# lh_table_lookup_ex @ 0043f6a8
0043f6a8  lui gp,0x1e
0043f6ac  addiu gp,gp,-0x6228
0043f6b0  addu gp,gp,t9
0043f6b4  addiu sp,sp,-0x28
0043f6b8  sw ra,0x24(sp)
0043f6bc  sw s8,0x20(sp)
0043f6c0  move s8,sp
0043f6c4  sw gp,0x10(sp)
0043f6c8  sw a0,0x28(s8)
0043f6cc  sw a1,0x2c(s8)
0043f6d0  sw a2,0x30(s8)
0043f6d4  lw a0,0x28(s8)
0043f6d8  lw a1,0x2c(s8)
0043f6dc  lw v0,-0x71e0(gp)
0043f6e0  nop
0043f6e4  move t9,v0
0043f6e8  jalr t9
0043f6ec  _nop
0043f6f0  lw gp,0x10(s8)
0043f6f4  sw v0,0x18(s8)
0043f6f8  lw v0,0x18(s8)
0043f6fc  nop
0043f700  beq v0,zero,0x0043f73c
0043f704  _nop
0043f708  lw v0,0x30(s8)
0043f70c  nop
0043f710  beq v0,zero,0x0043f730
0043f714  _nop
0043f718  lw v0,0x18(s8)
0043f71c  nop
0043f720  lw v1,0x4(v0)
0043f724  lw v0,0x30(s8)
0043f728  nop
0043f72c  sw v1,0x0(v0)
0043f730  li v0,0x1
0043f734  b 0x0043f75c
0043f738  _nop
0043f73c  lw v0,0x30(s8)
0043f740  nop
0043f744  beq v0,zero,0x0043f758
0043f748  _nop
0043f74c  lw v0,0x30(s8)
0043f750  nop
0043f754  sw zero,0x0(v0)
0043f758  clear v0
0043f75c  move sp,s8
0043f760  lw ra,0x24(sp)
0043f764  lw s8,0x20(sp)
0043f768  addiu sp,sp,0x28
0043f76c  jr ra
0043f770  _nop
