# FUN_00401b38 @ 00401b38
00401b38  lui gp,0x3
00401b3c  addiu gp,gp,-0x67c8
00401b40  addu gp,gp,t9
00401b44  addiu sp,sp,-0x20
00401b48  sw ra,0x1c(sp)
00401b4c  sw gp,0x10(sp)
00401b50  lw v0,-0x7dd0(gp)
00401b54  nop
00401b58  beq v0,zero,0x00401b80
00401b5c  _nop
00401b60  lw a0,-0x7fdc(gp)
00401b64  lw a1,-0x7fe8(gp)
00401b68  lw t9,-0x7dd0(gp)
00401b6c  addiu a0,a0,0x24e0
00401b70  jalr t9
00401b74  _addiu a1,a1,0x3608
00401b78  lw gp,0x10(sp)
00401b7c  nop
00401b80  lw a0,-0x7fe8(gp)
00401b84  nop
00401b88  lw v0,0x24f4(a0)
00401b8c  nop
00401b90  beq v0,zero,0x00401bb4
00401b94  _nop
00401b98  lw t9,-0x7fac(gp)
00401b9c  nop
00401ba0  beq t9,zero,0x00401bb4
00401ba4  _addiu a0,a0,0x24f4
00401ba8  lw ra,0x1c(sp)
00401bac  jr t9
00401bb0  _addiu sp,sp,0x20
00401bb4  lw ra,0x1c(sp)
00401bb8  nop
00401bbc  jr ra
00401bc0  _addiu sp,sp,0x20
