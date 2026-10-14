# printbuf_memappend @ 0043fe1c
0043fe1c  lui gp,0x1e
0043fe20  addiu gp,gp,-0x699c
0043fe24  addu gp,gp,t9
0043fe28  addiu sp,sp,-0x20
0043fe2c  sw ra,0x1c(sp)
0043fe30  sw s8,0x18(sp)
0043fe34  move s8,sp
0043fe38  sw gp,0x10(sp)
0043fe3c  sw a0,0x20(s8)
0043fe40  sw a1,0x24(s8)
0043fe44  sw a2,0x28(s8)
0043fe48  lw v0,0x20(s8)
0043fe4c  nop
0043fe50  lw v1,0x8(v0)
0043fe54  lw v0,0x20(s8)
0043fe58  nop
0043fe5c  lw a0,0x4(v0)
0043fe60  lw v0,0x28(s8)
0043fe64  nop
0043fe68  addu v0,a0,v0
0043fe6c  addiu v0,v0,0x1
0043fe70  slt v0,v0,v1
0043fe74  bne v0,zero,0x0043fed0
0043fe78  _nop
0043fe7c  lw v0,0x20(s8)
0043fe80  nop
0043fe84  lw v1,0x4(v0)
0043fe88  lw v0,0x28(s8)
0043fe8c  nop
0043fe90  addu v0,v1,v0
0043fe94  addiu v0,v0,0x1
0043fe98  lw a0,0x20(s8)
0043fe9c  move a1,v0
0043fea0  lw v0,-0x7fc4(gp)
0043fea4  nop
0043fea8  addiu v0,v0,-0x2f0
0043feac  move t9,v0
0043feb0  jalr t9
0043feb4  _nop
0043feb8  lw gp,0x10(s8)
0043febc  bgez v0,0x0043fed0
0043fec0  _nop
0043fec4  li v0,-0x1
0043fec8  b 0x0043ff64
0043fecc  _nop
0043fed0  lw v0,0x20(s8)
0043fed4  nop
0043fed8  lw v1,0x0(v0)
0043fedc  lw v0,0x20(s8)
0043fee0  nop
0043fee4  lw v0,0x4(v0)
0043fee8  nop
0043feec  addu v1,v1,v0
0043fef0  lw v0,0x28(s8)
0043fef4  move a0,v1
0043fef8  lw a1,0x24(s8)
0043fefc  move a2,v0
0043ff00  lw v0,-0x5cb0(gp)
0043ff04  nop
0043ff08  move t9,v0
0043ff0c  jalr t9
0043ff10  _nop
0043ff14  lw gp,0x10(s8)
0043ff18  lw v0,0x20(s8)
0043ff1c  nop
0043ff20  lw v1,0x4(v0)
0043ff24  lw v0,0x28(s8)
0043ff28  nop
0043ff2c  addu v1,v1,v0
0043ff30  lw v0,0x20(s8)
0043ff34  nop
0043ff38  sw v1,0x4(v0)
0043ff3c  lw v0,0x20(s8)
0043ff40  nop
0043ff44  lw v1,0x0(v0)
0043ff48  lw v0,0x20(s8)
0043ff4c  nop
0043ff50  lw v0,0x4(v0)
0043ff54  nop
0043ff58  addu v0,v1,v0
0043ff5c  sb zero,0x0(v0)
0043ff60  lw v0,0x28(s8)
0043ff64  move sp,s8
0043ff68  lw ra,0x1c(sp)
0043ff6c  lw s8,0x18(sp)
0043ff70  addiu sp,sp,0x20
0043ff74  jr ra
0043ff78  _nop
