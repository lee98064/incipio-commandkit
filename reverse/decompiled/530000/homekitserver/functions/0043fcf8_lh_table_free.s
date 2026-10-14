# lh_table_free @ 0043fcf8
0043fcf8  lui gp,0x1e
0043fcfc  addiu gp,gp,-0x59e8
0043fd00  addu gp,gp,t9
0043fd04  addiu sp,sp,-0x28
0043fd08  sw ra,0x24(sp)
0043fd0c  sw s8,0x20(sp)
0043fd10  move s8,sp
0043fd14  sw gp,0x10(sp)
0043fd18  sw a0,0x28(s8)
0043fd1c  lw v0,0x28(s8)
0043fd20  nop
0043fd24  lw v0,0x20(v0)
0043fd28  nop
0043fd2c  sw v0,0x18(s8)
0043fd30  b 0x0043fd84
0043fd34  _nop
0043fd38  lw v0,0x28(s8)
0043fd3c  nop
0043fd40  lw v0,0x2c(v0)
0043fd44  nop
0043fd48  beq v0,zero,0x0043fd70
0043fd4c  _nop
0043fd50  lw v0,0x28(s8)
0043fd54  nop
0043fd58  lw v0,0x2c(v0)
0043fd5c  lw a0,0x18(s8)
0043fd60  move t9,v0
0043fd64  jalr t9
0043fd68  _nop
0043fd6c  lw gp,0x10(s8)
0043fd70  lw v0,0x18(s8)
0043fd74  nop
0043fd78  lw v0,0x8(v0)
0043fd7c  nop
0043fd80  sw v0,0x18(s8)
0043fd84  lw v0,0x18(s8)
0043fd88  nop
0043fd8c  bne v0,zero,0x0043fd38
0043fd90  _nop
0043fd94  lw v0,0x28(s8)
0043fd98  nop
0043fd9c  lw v0,0x28(v0)
0043fda0  nop
0043fda4  move a0,v0
0043fda8  lw v0,-0x7aa4(gp)
0043fdac  nop
0043fdb0  move t9,v0
0043fdb4  jalr t9
0043fdb8  _nop
0043fdbc  lw gp,0x10(s8)
0043fdc0  lw a0,0x28(s8)
0043fdc4  lw v0,-0x7aa4(gp)
0043fdc8  nop
0043fdcc  move t9,v0
0043fdd0  jalr t9
0043fdd4  _nop
0043fdd8  lw gp,0x10(s8)
0043fddc  move sp,s8
0043fde0  lw ra,0x24(sp)
0043fde4  lw s8,0x20(sp)
0043fde8  addiu sp,sp,0x28
0043fdec  jr ra
0043fdf0  _nop
