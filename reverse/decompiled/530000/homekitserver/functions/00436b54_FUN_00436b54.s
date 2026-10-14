# FUN_00436b54 @ 00436b54
00436b54  lui gp,0x1e
00436b58  addiu gp,gp,0x37bc
00436b5c  addu gp,gp,t9
00436b60  addiu sp,sp,-0x20
00436b64  sw ra,0x1c(sp)
00436b68  sw s8,0x18(sp)
00436b6c  move s8,sp
00436b70  sw gp,0x10(sp)
00436b74  sw a0,0x20(s8)
00436b78  sw a1,0x24(s8)
00436b7c  lw v0,0x20(s8)
00436b80  nop
00436b84  lw v0,0x18(v0)
00436b88  nop
00436b8c  move a0,v0
00436b90  lw a1,0x24(s8)
00436b94  lw v0,-0x70e8(gp)
00436b98  nop
00436b9c  move t9,v0
00436ba0  jalr t9
00436ba4  _nop
00436ba8  lw gp,0x10(s8)
00436bac  move sp,s8
00436bb0  lw ra,0x1c(sp)
00436bb4  lw s8,0x18(sp)
00436bb8  addiu sp,sp,0x20
00436bbc  jr ra
00436bc0  _nop
