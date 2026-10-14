# printbuf_new @ 0043fc00
0043fc00  lui gp,0x1e
0043fc04  addiu gp,gp,-0x6780
0043fc08  addu gp,gp,t9
0043fc0c  addiu sp,sp,-0x28
0043fc10  sw ra,0x24(sp)
0043fc14  sw s8,0x20(sp)
0043fc18  move s8,sp
0043fc1c  sw gp,0x10(sp)
0043fc20  li a0,0x1
0043fc24  li a1,0xc
0043fc28  lw v0,-0x5a68(gp)
0043fc2c  nop
0043fc30  move t9,v0
0043fc34  jalr t9
0043fc38  _nop
0043fc3c  lw gp,0x10(s8)
0043fc40  sw v0,0x18(s8)
0043fc44  lw v0,0x18(s8)
0043fc48  nop
0043fc4c  bne v0,zero,0x0043fc60
0043fc50  _nop
0043fc54  clear v0
0043fc58  b 0x0043fcf8
0043fc5c  _nop
0043fc60  lw v0,0x18(s8)
0043fc64  li v1,0x20
0043fc68  sw v1,0x8(v0)
0043fc6c  lw v0,0x18(s8)
0043fc70  nop
0043fc74  sw zero,0x4(v0)
0043fc78  lw v0,0x18(s8)
0043fc7c  nop
0043fc80  lw v0,0x8(v0)
0043fc84  nop
0043fc88  move a0,v0
0043fc8c  lw v0,-0x61a8(gp)
0043fc90  nop
0043fc94  move t9,v0
0043fc98  jalr t9
0043fc9c  _nop
0043fca0  lw gp,0x10(s8)
0043fca4  move v1,v0
0043fca8  lw v0,0x18(s8)
0043fcac  nop
0043fcb0  sw v1,0x0(v0)
0043fcb4  lw v0,0x18(s8)
0043fcb8  nop
0043fcbc  lw v0,0x0(v0)
0043fcc0  nop
0043fcc4  bne v0,zero,0x0043fcf4
0043fcc8  _nop
0043fccc  lw a0,0x18(s8)
0043fcd0  lw v0,-0x7aa4(gp)
0043fcd4  nop
0043fcd8  move t9,v0
0043fcdc  jalr t9
0043fce0  _nop
0043fce4  lw gp,0x10(s8)
0043fce8  clear v0
0043fcec  b 0x0043fcf8
0043fcf0  _nop
0043fcf4  lw v0,0x18(s8)
0043fcf8  move sp,s8
0043fcfc  lw ra,0x24(sp)
0043fd00  lw s8,0x20(sp)
0043fd04  addiu sp,sp,0x28
0043fd08  jr ra
0043fd0c  _nop
