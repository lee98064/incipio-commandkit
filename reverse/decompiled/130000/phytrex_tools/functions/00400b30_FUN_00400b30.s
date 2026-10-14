# FUN_00400b30 @ 00400b30
00400b30  lui gp,0x2
00400b34  addiu gp,gp,-0x2cd0
00400b38  addu gp,gp,t9
00400b3c  addiu sp,sp,-0x28
00400b40  sw ra,0x24(sp)
00400b44  sw s2,0x20(sp)
00400b48  sw s1,0x1c(sp)
00400b4c  sw s0,0x18(sp)
00400b50  sw gp,0x10(sp)
00400b54  lw v0,-0x7fe8(gp)
00400b58  nop
00400b5c  lbu v0,0x5f50(v0)
00400b60  nop
00400b64  bne v0,zero,0x00400c20
00400b68  _nop
00400b6c  lw v0,-0x7f54(gp)
00400b70  nop
00400b74  beq v0,zero,0x00400b98
00400b78  _nop
00400b7c  lw v0,-0x7fe4(gp)
00400b80  lw t9,-0x7f54(gp)
00400b84  lw a0,0x0(v0)
00400b88  jalr t9
00400b8c  _nop
00400b90  lw gp,0x10(sp)
00400b94  nop
00400b98  lw s1,-0x7fe8(gp)
00400b9c  lw s2,-0x7fe0(gp)
00400ba0  lw s0,-0x7fe8(gp)
00400ba4  addiu s1,s1,0x5dec
00400ba8  subu s2,s2,s1
00400bac  sra s2,s2,0x2
00400bb0  b 0x00400bcc
00400bb4  _addiu s2,s2,-0x1
00400bb8  lw t9,0x0(a0)
00400bbc  nop
00400bc0  jalr t9
00400bc4  _sw v1,0x5f54(s0)
00400bc8  lw gp,0x10(sp)
00400bcc  lw v0,0x5f54(s0)
00400bd0  nop
00400bd4  addiu v1,v0,0x1
00400bd8  sll a0,v1,0x2
00400bdc  sltu v0,v0,s2
00400be0  bne v0,zero,0x00400bb8
00400be4  _addu a0,a0,s1
00400be8  lw v0,-0x7f70(gp)
00400bec  nop
00400bf0  beq v0,zero,0x00400c14
00400bf4  _nop
00400bf8  lw a0,-0x7fdc(gp)
00400bfc  lw t9,-0x7f70(gp)
00400c00  nop
00400c04  jalr t9
00400c08  _addiu a0,a0,0x5de0
00400c0c  lw gp,0x10(sp)
00400c10  nop
00400c14  lw v0,-0x7fe8(gp)
00400c18  li v1,0x1
00400c1c  sb v1,0x5f50(v0)
00400c20  lw ra,0x24(sp)
00400c24  lw s2,0x20(sp)
00400c28  lw s1,0x1c(sp)
00400c2c  lw s0,0x18(sp)
00400c30  jr ra
00400c34  _addiu sp,sp,0x28
