# json_tokener_parse_verbose @ 00438ab4
00438ab4  lui gp,0x1e
00438ab8  addiu gp,gp,0x185c
00438abc  addu gp,gp,t9
00438ac0  addiu sp,sp,-0x28
00438ac4  sw ra,0x24(sp)
00438ac8  sw s8,0x20(sp)
00438acc  move s8,sp
00438ad0  sw gp,0x10(sp)
00438ad4  sw a0,0x28(s8)
00438ad8  sw a1,0x2c(s8)
00438adc  lw v0,-0x5dcc(gp)
00438ae0  nop
00438ae4  move t9,v0
00438ae8  jalr t9
00438aec  _nop
00438af0  lw gp,0x10(s8)
00438af4  sw v0,0x1c(s8)
00438af8  lw v0,0x1c(s8)
00438afc  nop
00438b00  bne v0,zero,0x00438b14
00438b04  _nop
00438b08  clear v0
00438b0c  b 0x00438bbc
00438b10  _nop
00438b14  lw a0,0x1c(s8)
00438b18  lw a1,0x28(s8)
00438b1c  li a2,-0x1
00438b20  lw v0,-0x5900(gp)
00438b24  nop
00438b28  move t9,v0
00438b2c  jalr t9
00438b30  _nop
00438b34  lw gp,0x10(s8)
00438b38  sw v0,0x18(s8)
00438b3c  lw v0,0x1c(s8)
00438b40  nop
00438b44  lw v1,0x1c(v0)
00438b48  lw v0,0x2c(s8)
00438b4c  nop
00438b50  sw v1,0x0(v0)
00438b54  lw v0,0x1c(s8)
00438b58  nop
00438b5c  lw v0,0x1c(v0)
00438b60  nop
00438b64  beq v0,zero,0x00438b9c
00438b68  _nop
00438b6c  lw v0,0x18(s8)
00438b70  nop
00438b74  beq v0,zero,0x00438b98
00438b78  _nop
00438b7c  lw a0,0x18(s8)
00438b80  lw v0,-0x7dec(gp)
00438b84  nop
00438b88  move t9,v0
00438b8c  jalr t9
00438b90  _nop
00438b94  lw gp,0x10(s8)
00438b98  sw zero,0x18(s8)
00438b9c  lw a0,0x1c(s8)
00438ba0  lw v0,-0x5d38(gp)
00438ba4  nop
00438ba8  move t9,v0
00438bac  jalr t9
00438bb0  _nop
00438bb4  lw gp,0x10(s8)
00438bb8  lw v0,0x18(s8)
00438bbc  move sp,s8
00438bc0  lw ra,0x24(sp)
00438bc4  lw s8,0x20(sp)
00438bc8  addiu sp,sp,0x28
00438bcc  jr ra
00438bd0  _nop
