# FUN_00435b3c @ 00435b3c
00435b3c  lui gp,0x1e
00435b40  addiu gp,gp,0x47d4
00435b44  addu gp,gp,t9
00435b48  addiu sp,sp,-0x20
00435b4c  sw ra,0x1c(sp)
00435b50  sw s8,0x18(sp)
00435b54  move s8,sp
00435b58  sw gp,0x10(sp)
00435b5c  sw a0,0x20(s8)
00435b60  lw v0,0x20(s8)
00435b64  nop
00435b68  lw v0,0x10(v0)
00435b6c  nop
00435b70  move a0,v0
00435b74  lw v0,-0x7b7c(gp)
00435b78  nop
00435b7c  move t9,v0
00435b80  jalr t9
00435b84  _nop
00435b88  lw gp,0x10(s8)
00435b8c  lw a0,0x20(s8)
00435b90  lw v0,-0x7aa4(gp)
00435b94  nop
00435b98  move t9,v0
00435b9c  jalr t9
00435ba0  _nop
00435ba4  lw gp,0x10(s8)
00435ba8  move sp,s8
00435bac  lw ra,0x1c(sp)
00435bb0  lw s8,0x18(sp)
00435bb4  addiu sp,sp,0x20
00435bb8  jr ra
00435bbc  _nop
