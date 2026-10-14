# FUN_00441a1c @ 00441a1c
00441a1c  addiu sp,sp,-0x30
00441a20  sw ra,0x2c(sp)
00441a24  sw s1,0x28(sp)
00441a28  sw s0,0x24(sp)
00441a2c  lui gp,0x47
00441a30  addiu gp,gp,0x2630
00441a34  sw gp,0x10(sp)
00441a38  lw t9,-0x7cf0(gp)
00441a3c  move s1,a1
00441a40  lui a1,0x45
00441a44  jalr t9
00441a48  _addiu a1,a1,0x6680
00441a4c  lw gp,0x10(sp)
00441a50  beq v0,zero,0x00441bcc
00441a54  _move s0,v0
00441a58  li v0,0x3
00441a5c  bne s1,v0,0x00441ad0
00441a60  _li v0,0x2
00441a64  lw t9,-0x7cf0(gp)
00441a68  lui a1,0x45
00441a6c  addiu a1,a1,0x668c
00441a70  jalr t9
00441a74  _move a0,s0
00441a78  lw gp,0x10(sp)
00441a7c  beq v0,zero,0x00441a94
00441a80  _move a1,v0
00441a84  lb v1,0x3(v0)
00441a88  li v0,0x3a
00441a8c  beq v1,v0,0x00441b4c
00441a90  _nop
00441a94  lw t9,-0x7cf0(gp)
00441a98  lui a1,0x45
00441a9c  addiu a1,a1,0x6690
00441aa0  jalr t9
00441aa4  _move a0,s0
00441aa8  lw gp,0x10(sp)
00441aac  beq v0,zero,0x00441bcc
00441ab0  _move a1,v0
00441ab4  lb v1,0x5(v0)
00441ab8  li v0,0x3a
00441abc  beq v1,v0,0x00441b4c
00441ac0  _nop
00441ac4  lb v1,0x9(a1)
00441ac8  b 0x00441b00
00441acc  _nop
00441ad0  lw t9,-0x7cf0(gp)
00441ad4  bne s1,v0,0x00441b10
00441ad8  _nop
00441adc  lui a1,0x45
00441ae0  addiu a1,a1,0x668c
00441ae4  jalr t9
00441ae8  _move a0,s0
00441aec  lw gp,0x10(sp)
00441af0  beq v0,zero,0x00441bcc
00441af4  _move a1,v0
00441af8  lb v1,0x3(v0)
00441afc  li v0,0x3a
00441b00  bne v1,v0,0x00441bcc
00441b04  _nop
00441b08  b 0x00441b4c
00441b0c  _nop
00441b10  lui a1,0x45
00441b14  addiu a1,a1,0x6690
00441b18  jalr t9
00441b1c  _move a0,s0
00441b20  lw gp,0x10(sp)
00441b24  beq v0,zero,0x00441b74
00441b28  _move a1,v0
00441b2c  lb v1,0x5(v0)
00441b30  li v0,0x3a
00441b34  beq v1,v0,0x00441b4c
00441b38  _nop
00441b3c  lb v1,0x9(a1)
00441b40  nop
00441b44  bne v1,v0,0x00441b74
00441b48  _nop
00441b4c  lw t9,-0x7f1c(gp)
00441b50  move a0,a1
00441b54  jalr t9
00441b58  _sw a1,0x18(sp)
00441b5c  lw gp,0x10(sp)
00441b60  move a0,s0
00441b64  lw a1,0x18(sp)
00441b68  lw t9,-0x7ad4(gp)
00441b6c  b 0x00441bbc
00441b70  _addiu a2,v0,0x1
00441b74  bne s1,zero,0x00441bcc
00441b78  _lui a1,0x45
00441b7c  lw t9,-0x7cf0(gp)
00441b80  addiu a1,a1,0x6698
00441b84  jalr t9
00441b88  _move a0,s0
00441b8c  lw gp,0x10(sp)
00441b90  beq v0,zero,0x00441bcc
00441b94  _move s1,v0
00441b98  lw t9,-0x7f1c(gp)
00441b9c  nop
00441ba0  jalr t9
00441ba4  _move a0,v0
00441ba8  lw gp,0x10(sp)
00441bac  move a0,s0
00441bb0  addiu a1,s1,0x7
00441bb4  lw t9,-0x7ad4(gp)
00441bb8  addiu a2,v0,-0x6
00441bbc  jalr t9
00441bc0  _nop
00441bc4  b 0x00441bd0
00441bc8  _li v0,0x1
00441bcc  clear v0
00441bd0  lw ra,0x2c(sp)
00441bd4  lw s1,0x28(sp)
00441bd8  lw s0,0x24(sp)
00441bdc  jr ra
00441be0  _addiu sp,sp,0x30
