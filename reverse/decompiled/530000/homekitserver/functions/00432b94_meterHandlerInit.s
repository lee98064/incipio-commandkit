# meterHandlerInit @ 00432b94
00432b94  addiu sp,sp,-0x48
00432b98  sw ra,0x44(sp)
00432b9c  sw s0,0x40(sp)
00432ba0  lui gp,0x62
00432ba4  addiu gp,gp,-0x5cf0
00432ba8  sw gp,0x10(sp)
00432bac  lw t9,-0x5f5c(gp)
00432bb0  addiu s0,sp,0x1c
00432bb4  jalr t9
00432bb8  _move a0,s0
00432bbc  lw gp,0x10(sp)
00432bc0  move a0,s0
00432bc4  lw t9,-0x5ba0(gp)
00432bc8  nop
00432bcc  jalr t9
00432bd0  _li a1,0x1
00432bd4  lw gp,0x10(sp)
00432bd8  lui a2,0x43
00432bdc  move a1,s0
00432be0  lw t9,-0x6bd0(gp)
00432be4  addiu a2,a2,0x4a3c
00432be8  addiu a0,sp,0x18
00432bec  jalr t9
00432bf0  _clear a3
00432bf4  lw gp,0x10(sp)
00432bf8  beq v0,zero,0x00432c18
00432bfc  _lui a0,0x5b
00432c00  lw t9,-0x7ca0(gp)
00432c04  nop
00432c08  jalr t9
00432c0c  _addiu a0,a0,-0x1c6c
00432c10  lw gp,0x10(sp)
00432c14  nop
00432c18  lw t9,-0x6ae0(gp)
00432c1c  nop
00432c20  jalr t9
00432c24  _addiu a0,sp,0x1c
00432c28  lw ra,0x44(sp)
00432c2c  lw s0,0x40(sp)
00432c30  jr ra
00432c34  _addiu sp,sp,0x48
