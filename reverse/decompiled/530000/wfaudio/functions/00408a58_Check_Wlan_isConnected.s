# Check_Wlan_isConnected @ 00408a58
00408a58  addiu sp,sp,-0x160
00408a5c  sw ra,0x15c(sp)
00408a60  sw s8,0x158(sp)
00408a64  sw s7,0x154(sp)
00408a68  sw s6,0x150(sp)
00408a6c  sw s5,0x14c(sp)
00408a70  sw s4,0x148(sp)
00408a74  sw s3,0x144(sp)
00408a78  sw s2,0x140(sp)
00408a7c  sw s1,0x13c(sp)
00408a80  sw s0,0x138(sp)
00408a84  lui gp,0x43
00408a88  addiu gp,gp,-0x4c90
00408a8c  sw gp,0x10(sp)
00408a90  li v0,0x1
00408a94  move s7,a1
00408a98  bne a0,v0,0x00408cc0
00408a9c  _move s8,a2
00408aa0  lw t9,-0x7f24(gp)
00408aa4  addiu s0,sp,0xb4
00408aa8  lui a1,0x41
00408aac  addiu a1,a1,0x1734
00408ab0  jalr t9
00408ab4  _move a0,s0
00408ab8  lw gp,0x10(sp)
00408abc  lui a1,0x41
00408ac0  move a0,s0
00408ac4  lw t9,-0x7ed8(gp)
00408ac8  nop
00408acc  jalr t9
00408ad0  _addiu a1,a1,0x1fe4
00408ad4  lw gp,0x10(sp)
00408ad8  bne v0,zero,0x00408bdc
00408adc  _move s3,v0
00408ae0  b 0x00408cc4
00408ae4  _clear s0
00408ae8  lb v0,0x0(s1)
00408aec  nop
00408af0  beq v0,s5,0x00408ae8
00408af4  _addiu s1,s1,0x1
00408af8  addiu s1,s1,-0x1
00408afc  lw t9,-0x7e78(gp)
00408b00  lui a1,0x41
00408b04  move a0,s1
00408b08  jalr t9
00408b0c  _addiu a1,a1,0x1748
00408b10  lw gp,0x10(sp)
00408b14  beq v0,zero,0x00408b68
00408b18  _move a0,s1
00408b1c  lw t9,-0x7ebc(gp)
00408b20  lui a1,0x41
00408b24  addiu a1,a1,0x1750
00408b28  jalr t9
00408b2c  _move a2,s4
00408b30  lw gp,0x10(sp)
00408b34  move a0,s4
00408b38  lbu v0,0x0(a0)
00408b3c  nop
00408b40  beq v0,s5,0x00408b38
00408b44  _addiu a0,a0,0x1
00408b48  addiu a0,a0,-0x1
00408b4c  lw t9,-0x7f0c(gp)
00408b50  lui a1,0x41
00408b54  jalr t9
00408b58  _addiu a1,a1,0x1f80
00408b5c  lw gp,0x10(sp)
00408b60  sltu s2,zero,v0
00408b64  move s0,s2
00408b68  lw t9,-0x7e78(gp)
00408b6c  lui a1,0x41
00408b70  move a0,s1
00408b74  jalr t9
00408b78  _addiu a1,a1,0x1760
00408b7c  lw gp,0x10(sp)
00408b80  beq v0,zero,0x00408bf0
00408b84  _addiu s1,sp,0x50
00408b88  lw t9,-0x7f88(gp)
00408b8c  nop
00408b90  jalr t9
00408b94  _move a0,s1
00408b98  lw gp,0x10(sp)
00408b9c  move a0,s1
00408ba0  move a1,s7
00408ba4  lw t9,-0x7eac(gp)
00408ba8  move a2,v0
00408bac  jalr t9
00408bb0  _move s4,v0
00408bb4  lw gp,0x10(sp)
00408bb8  beq v0,zero,0x00408c10
00408bbc  _move a0,s7
00408bc0  lw t9,-0x7df4(gp)
00408bc4  move a1,s1
00408bc8  jalr t9
00408bcc  _move a2,s4
00408bd0  lw gp,0x10(sp)
00408bd4  b 0x00408c10
00408bd8  _nop
00408bdc  clear s2
00408be0  clear s0
00408be4  addiu s6,sp,0x50
00408be8  li s5,0x20
00408bec  addiu s4,sp,0x18
00408bf0  lw t9,-0x7de8(gp)
00408bf4  move a0,s6
00408bf8  li a1,0x64
00408bfc  jalr t9
00408c00  _move a2,s3
00408c04  lw gp,0x10(sp)
00408c08  bne v0,zero,0x00408ae8
00408c0c  _move s1,s6
00408c10  lw t9,-0x7ef0(gp)
00408c14  nop
00408c18  jalr t9
00408c1c  _move a0,s3
00408c20  beq s0,zero,0x00408cc8
00408c24  _move v0,s0
00408c28  bne s2,s0,0x00408cc8
00408c2c  _move a0,s8
00408c30  jal 0x00408970
00408c34  _addiu a1,sp,0x24
00408c38  lbu v0,0x24(sp)
00408c3c  li v1,0x4
00408c40  lw gp,0x10(sp)
00408c44  beq v0,v1,0x00408ca8
00408c48  _nop
00408c4c  lw a0,-0x7fbc(gp)
00408c50  nop
00408c54  lw a0,0x0(a0)
00408c58  nop
00408c5c  bne a0,v1,0x00408c8c
00408c60  _nop
00408c64  lw v1,-0x7fa8(gp)
00408c68  nop
00408c6c  lw a0,0x0(v1)
00408c70  nop
00408c74  sltiu a0,a0,0xb
00408c78  bne a0,zero,0x00408c8c
00408c7c  _nop
00408c80  sw zero,0x0(v1)
00408c84  b 0x00408cb4
00408c88  _clear s0
00408c8c  lw v0,-0x7fa8(gp)
00408c90  nop
00408c94  lw v1,0x0(v0)
00408c98  nop
00408c9c  addiu v1,v1,0x1
00408ca0  b 0x00408cc4
00408ca4  _sw v1,0x0(v0)
00408ca8  lw v1,-0x7d8c(gp)
00408cac  nop
00408cb0  sw v0,0x0(v1)
00408cb4  lw v1,-0x7fbc(gp)
00408cb8  b 0x00408cc4
00408cbc  _sw v0,0x0(v1)
00408cc0  clear s0
00408cc4  move v0,s0
00408cc8  lw ra,0x15c(sp)
00408ccc  lw s8,0x158(sp)
00408cd0  lw s7,0x154(sp)
00408cd4  lw s6,0x150(sp)
00408cd8  lw s5,0x14c(sp)
00408cdc  lw s4,0x148(sp)
00408ce0  lw s3,0x144(sp)
00408ce4  lw s2,0x140(sp)
00408ce8  lw s1,0x13c(sp)
00408cec  lw s0,0x138(sp)
00408cf0  jr ra
00408cf4  _addiu sp,sp,0x160
