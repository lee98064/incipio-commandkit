# Serial_Gpio_Write @ 00432c38
00432c38  addiu sp,sp,-0x20
00432c3c  sw ra,0x1c(sp)
00432c40  sw s0,0x18(sp)
00432c44  lui gp,0x62
00432c48  addiu gp,gp,-0x5cf0
00432c4c  sw gp,0x10(sp)
00432c50  lui s0,0x61
00432c54  lb v0,0x5f31(s0)
00432c58  nop
00432c5c  beq v0,zero,0x00432c74
00432c60  _li v1,0x1
00432c64  bne v0,v1,0x00432cb8
00432c68  _lui v0,0x61
00432c6c  b 0x00432c98
00432c70  _nop
00432c74  lui v0,0x61
00432c78  lb v1,0x5f22(v0)
00432c7c  lui v0,0x61
00432c80  lb v0,0x5f30(v0)
00432c84  nop
00432c88  beq v1,v0,0x00432cbc
00432c8c  _li v0,0x1
00432c90  b 0x00432cbc
00432c94  _sb v0,0x5f31(s0)
00432c98  lb a1,0x5f22(v0)
00432c9c  lw t9,-0x5914(gp)
00432ca0  lui v0,0x61
00432ca4  sb a1,0x5f21(v0)
00432ca8  lui v0,0x61
00432cac  sb a1,0x5f30(v0)
00432cb0  jalr t9
00432cb4  _li a0,0xa
00432cb8  sb zero,0x5f31(s0)
00432cbc  lw ra,0x1c(sp)
00432cc0  lw s0,0x18(sp)
00432cc4  clear v0
00432cc8  jr ra
00432ccc  _addiu sp,sp,0x20
