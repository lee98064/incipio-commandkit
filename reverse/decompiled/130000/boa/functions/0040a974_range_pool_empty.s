# range_pool_empty @ 0040a974
0040a974  addiu sp,sp,-0x20
0040a978  sw ra,0x1c(sp)
0040a97c  sw s0,0x18(sp)
0040a980  lui gp,0x47
0040a984  addiu gp,gp,0x2630
0040a988  sw gp,0x10(sp)
0040a98c  b 0x0040a9b4
0040a990  _lui s0,0x47
0040a994  jal 0x0040a598
0040a998  _nop
0040a99c  lw gp,0x10(sp)
0040a9a0  nop
0040a9a4  lw t9,-0x7fb0(gp)
0040a9a8  nop
0040a9ac  jalr t9
0040a9b0  _move a0,v0
0040a9b4  lw v0,-0x2050(s0)
0040a9b8  nop
0040a9bc  bne v0,zero,0x0040a994
0040a9c0  _nop
0040a9c4  lw ra,0x1c(sp)
0040a9c8  lw s0,0x18(sp)
0040a9cc  jr ra
0040a9d0  _addiu sp,sp,0x20
