# HTTPServerStop @ 00405374
00405374  addiu sp,sp,-0x20
00405378  sw ra,0x1c(sp)
0040537c  sw s0,0x18(sp)
00405380  lui gp,0x44
00405384  addiu gp,gp,-0x4fc0
00405388  sw gp,0x10(sp)
0040538c  move s0,a0
00405390  beq a0,zero,0x004053cc
00405394  _li v0,-0x1a31
00405398  lw t9,-0x7f9c(gp)
0040539c  lw a0,0x34(a0)
004053a0  li v0,0x3
004053a4  clear a1
004053a8  jalr t9
004053ac  _sw v0,0x8(s0)
004053b0  lw gp,0x10(sp)
004053b4  lw a0,0x34(s0)
004053b8  lw t9,-0x7e60(gp)
004053bc  nop
004053c0  jalr t9
004053c4  _li a1,0x10
004053c8  clear v0
004053cc  lw ra,0x1c(sp)
004053d0  lw s0,0x18(sp)
004053d4  jr ra
004053d8  _addiu sp,sp,0x20
