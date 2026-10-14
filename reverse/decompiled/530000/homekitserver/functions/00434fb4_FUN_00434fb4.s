# FUN_00434fb4 @ 00434fb4
00434fb4  addiu sp,sp,-0x28
00434fb8  sw ra,0x24(sp)
00434fbc  sw s1,0x20(sp)
00434fc0  sw s0,0x1c(sp)
00434fc4  lui gp,0x62
00434fc8  addiu gp,gp,-0x5cf0
00434fcc  sw gp,0x10(sp)
00434fd0  lui s0,0x60
00434fd4  lw a0,0xb98(s0)
00434fd8  li s1,-0x1
00434fdc  beq a0,s1,0x00435020
00434fe0  _li v1,-0x1
00434fe4  lw t9,-0x7c4c(gp)
00434fe8  nop
00434fec  jalr t9
00434ff0  _nop
00434ff4  lw gp,0x10(sp)
00434ff8  bne v0,zero,0x00435020
00434ffc  _li v1,-0x1
00435000  lw t9,-0x61e8(gp)
00435004  lui a0,0x5b
00435008  sw s1,0xb98(s0)
0043500c  jalr t9
00435010  _addiu a0,a0,-0x17c8
00435014  beq v0,zero,0x00435020
00435018  _clear v1
0043501c  li v1,-0x1
00435020  lw ra,0x24(sp)
00435024  lw s1,0x20(sp)
00435028  lw s0,0x1c(sp)
0043502c  move v0,v1
00435030  jr ra
00435034  _addiu sp,sp,0x28
