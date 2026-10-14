# FUN_0040589c @ 0040589c
0040589c  addiu sp,sp,-0x20
004058a0  sw ra,0x1c(sp)
004058a4  lui gp,0x44
004058a8  addiu gp,gp,-0x4fc0
004058ac  sw gp,0x10(sp)
004058b0  lw t9,-0x7d48(gp)
004058b4  lw a1,0x808(a0)
004058b8  lw a0,0x804(a0)
004058bc  jalr t9
004058c0  _nop
004058c4  lw gp,0x10(sp)
004058c8  beq v0,zero,0x004058e0
004058cc  _move a0,v0
004058d0  lw t9,-0x7fb8(gp)
004058d4  lw ra,0x1c(sp)
004058d8  jr t9
004058dc  _addiu sp,sp,0x20
004058e0  lw ra,0x1c(sp)
004058e4  nop
004058e8  jr ra
004058ec  _addiu sp,sp,0x20
