# FUN_00400b50 @ 00400b50
00400b50  lui gp,0x2
00400b54  addiu gp,gp,-0x2900
00400b58  addu gp,gp,t9
00400b5c  addiu sp,sp,-0x28
00400b60  sw ra,0x24(sp)
00400b64  sw s2,0x20(sp)
00400b68  sw s1,0x1c(sp)
00400b6c  sw s0,0x18(sp)
00400b70  sw gp,0x10(sp)
00400b74  lw v0,-0x7fe8(gp)
00400b78  nop
00400b7c  lbu v0,0x6340(v0)
00400b80  nop
00400b84  bne v0,zero,0x00400c40
00400b88  _nop
00400b8c  lw v0,-0x7f54(gp)
00400b90  nop
00400b94  beq v0,zero,0x00400bb8
00400b98  _nop
00400b9c  lw v0,-0x7fe4(gp)
00400ba0  lw t9,-0x7f54(gp)
00400ba4  lw a0,0x0(v0)
00400ba8  jalr t9
00400bac  _nop
00400bb0  lw gp,0x10(sp)
00400bb4  nop
00400bb8  lw s1,-0x7fe8(gp)
00400bbc  lw s2,-0x7fe0(gp)
00400bc0  lw s0,-0x7fe8(gp)
00400bc4  addiu s1,s1,0x61dc
00400bc8  subu s2,s2,s1
00400bcc  sra s2,s2,0x2
00400bd0  b 0x00400bec
00400bd4  _addiu s2,s2,-0x1
00400bd8  lw t9,0x0(a0)
00400bdc  nop
00400be0  jalr t9
00400be4  _sw v1,0x6344(s0)
00400be8  lw gp,0x10(sp)
00400bec  lw v0,0x6344(s0)
00400bf0  nop
00400bf4  addiu v1,v0,0x1
00400bf8  sll a0,v1,0x2
00400bfc  sltu v0,v0,s2
00400c00  bne v0,zero,0x00400bd8
00400c04  _addu a0,a0,s1
00400c08  lw v0,-0x7f70(gp)
00400c0c  nop
00400c10  beq v0,zero,0x00400c34
00400c14  _nop
00400c18  lw a0,-0x7fdc(gp)
00400c1c  lw t9,-0x7f70(gp)
00400c20  nop
00400c24  jalr t9
00400c28  _addiu a0,a0,0x61d0
00400c2c  lw gp,0x10(sp)
00400c30  nop
00400c34  lw v0,-0x7fe8(gp)
00400c38  li v1,0x1
00400c3c  sb v1,0x6340(v0)
00400c40  lw ra,0x24(sp)
00400c44  lw s2,0x20(sp)
00400c48  lw s1,0x1c(sp)
00400c4c  lw s0,0x18(sp)
00400c50  jr ra
00400c54  _addiu sp,sp,0x28
