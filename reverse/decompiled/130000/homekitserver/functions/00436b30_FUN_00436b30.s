# FUN_00436b30 @ 00436b30
00436b30  lui gp,0x1e
00436b34  addiu gp,gp,0x2950
00436b38  addu gp,gp,t9
00436b3c  addiu sp,sp,-0x20
00436b40  sw ra,0x1c(sp)
00436b44  sw s8,0x18(sp)
00436b48  move s8,sp
00436b4c  sw gp,0x10(sp)
00436b50  sw a0,0x20(s8)
00436b54  lw v0,0x20(s8)
00436b58  nop
00436b5c  lw v0,0x18(v0)
00436b60  nop
00436b64  move a0,v0
00436b68  lw v0,-0x7aa4(gp)
00436b6c  nop
00436b70  move t9,v0
00436b74  jalr t9
00436b78  _nop
00436b7c  lw gp,0x10(s8)
00436b80  lw a0,0x20(s8)
00436b84  lw v0,-0x7fcc(gp)
00436b88  nop
00436b8c  addiu v0,v0,0x4d6c
00436b90  move t9,v0
00436b94  jalr t9
00436b98  _nop
00436b9c  lw gp,0x10(s8)
00436ba0  move sp,s8
00436ba4  lw ra,0x1c(sp)
00436ba8  lw s8,0x18(sp)
00436bac  addiu sp,sp,0x20
00436bb0  jr ra
00436bb4  _nop
