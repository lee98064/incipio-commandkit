# FUN_00400c38 @ 00400c38
00400c38  lui gp,0x2
00400c3c  addiu gp,gp,-0x2dd8
00400c40  addu gp,gp,t9
00400c44  addiu sp,sp,-0x20
00400c48  sw ra,0x1c(sp)
00400c4c  sw gp,0x10(sp)
00400c50  lw v0,-0x7f40(gp)
00400c54  nop
00400c58  beq v0,zero,0x00400c80
00400c5c  _nop
00400c60  lw a0,-0x7fdc(gp)
00400c64  lw a1,-0x7fe8(gp)
00400c68  lw t9,-0x7f40(gp)
00400c6c  addiu a0,a0,0x5de0
00400c70  jalr t9
00400c74  _addiu a1,a1,0x5f58
00400c78  lw gp,0x10(sp)
00400c7c  nop
00400c80  lw a0,-0x7fe8(gp)
00400c84  nop
00400c88  lw v0,0x5df4(a0)
00400c8c  nop
00400c90  beq v0,zero,0x00400cb4
00400c94  _nop
00400c98  lw t9,-0x7fc8(gp)
00400c9c  nop
00400ca0  beq t9,zero,0x00400cb4
00400ca4  _addiu a0,a0,0x5df4
00400ca8  lw ra,0x1c(sp)
00400cac  jr t9
00400cb0  _addiu sp,sp,0x20
00400cb4  lw ra,0x1c(sp)
00400cb8  nop
00400cbc  jr ra
00400cc0  _addiu sp,sp,0x20
