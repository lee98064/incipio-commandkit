# FUN_0043fd10 @ 0043fd10
0043fd10  lui gp,0x1e
0043fd14  addiu gp,gp,-0x6890
0043fd18  addu gp,gp,t9
0043fd1c  addiu sp,sp,-0x28
0043fd20  sw ra,0x24(sp)
0043fd24  sw s8,0x20(sp)
0043fd28  move s8,sp
0043fd2c  sw gp,0x10(sp)
0043fd30  sw a0,0x28(s8)
0043fd34  sw a1,0x2c(s8)
0043fd38  lw v0,0x28(s8)
0043fd3c  nop
0043fd40  lw v1,0x8(v0)
0043fd44  lw v0,0x2c(s8)
0043fd48  nop
0043fd4c  slt v0,v1,v0
0043fd50  bne v0,zero,0x0043fd64
0043fd54  _nop
0043fd58  clear v0
0043fd5c  b 0x0043fe04
0043fd60  _nop
0043fd64  lw v0,0x2c(s8)
0043fd68  nop
0043fd6c  addiu v1,v0,0x8
0043fd70  lw v0,0x28(s8)
0043fd74  nop
0043fd78  lw v0,0x8(v0)
0043fd7c  nop
0043fd80  sll v0,v0,0x1
0043fd84  slt a0,v1,v0
0043fd88  movz v0,v1,a0
0043fd8c  sw v0,0x18(s8)
0043fd90  lw v0,0x28(s8)
0043fd94  nop
0043fd98  lw v1,0x0(v0)
0043fd9c  lw v0,0x18(s8)
0043fda0  move a0,v1
0043fda4  move a1,v0
0043fda8  lw v0,-0x5df0(gp)
0043fdac  nop
0043fdb0  move t9,v0
0043fdb4  jalr t9
0043fdb8  _nop
0043fdbc  lw gp,0x10(s8)
0043fdc0  sw v0,0x1c(s8)
0043fdc4  lw v0,0x1c(s8)
0043fdc8  nop
0043fdcc  bne v0,zero,0x0043fde0
0043fdd0  _nop
0043fdd4  li v0,-0x1
0043fdd8  b 0x0043fe04
0043fddc  _nop
0043fde0  lw v0,0x28(s8)
0043fde4  lw v1,0x18(s8)
0043fde8  nop
0043fdec  sw v1,0x8(v0)
0043fdf0  lw v0,0x28(s8)
0043fdf4  lw v1,0x1c(s8)
0043fdf8  nop
0043fdfc  sw v1,0x0(v0)
0043fe00  clear v0
0043fe04  move sp,s8
0043fe08  lw ra,0x24(sp)
0043fe0c  lw s8,0x20(sp)
0043fe10  addiu sp,sp,0x28
0043fe14  jr ra
0043fe18  _nop
