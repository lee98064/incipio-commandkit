# HKWriteCharacteristicValue @ 00431c10
00431c10  addiu sp,sp,-0xa30
00431c14  sw ra,0xa2c(sp)
00431c18  sw s3,0xa28(sp)
00431c1c  sw s2,0xa24(sp)
00431c20  sw s1,0xa20(sp)
00431c24  sw s0,0xa1c(sp)
00431c28  lui gp,0x62
00431c2c  addiu gp,gp,-0x6b80
00431c30  sw gp,0x10(sp)
00431c34  addiu v0,a1,-0x2
00431c38  sltiu v1,v0,0x5
00431c3c  move s1,a1
00431c40  move s0,a2
00431c44  lw s3,0xa40(sp)
00431c48  beq v1,zero,0x00431cdc
00431c4c  _move s2,a3
00431c50  lui v1,0x5b
00431c54  sll v0,v0,0x2
00431c58  addiu v1,v1,-0x2bf4
00431c5c  addu v0,v1,v0
00431c60  lw v0,0x0(v0)
00431c64  nop
00431c68  jr v0
00431c6c  _nop
00431c70  lw t9,-0x6f00(gp)
00431c74  b 0x00431c84
00431c78  _move a0,s3
00431c7c  lw t9,-0x6f00(gp)
00431c80  addiu a0,s3,0x40
00431c84  move a1,s0
00431c88  b 0x00431cac
00431c8c  _li a2,0x40
00431c90  lw t9,-0x6f00(gp)
00431c94  b 0x00431ca4
00431c98  _addiu a0,s3,0x80
00431c9c  lw t9,-0x6f00(gp)
00431ca0  addiu a0,s3,0x9e
00431ca4  move a1,s0
00431ca8  li a2,0x1e
00431cac  jalr t9
00431cb0  _nop
00431cb4  lw gp,0x10(sp)
00431cb8  b 0x00431d0c
00431cbc  _sw zero,0x0(s2)
00431cc0  lw t9,-0x62d0(gp)
00431cc4  sll a0,a2,0x18
00431cc8  jalr t9
00431ccc  _sra a0,a0,0x18
00431cd0  lw gp,0x10(sp)
00431cd4  b 0x00431d10
00431cd8  _li v0,0x12
00431cdc  li v0,0x9
00431ce0  bne a1,v0,0x00431d10
00431ce4  _li v0,0x12
00431ce8  sltiu v0,a2,0x2
00431cec  beq v0,zero,0x00431de0
00431cf0  _lui v0,0xfffe
00431cf4  lw t9,-0x6d78(gp)
00431cf8  sll a0,a2,0x18
00431cfc  jalr t9
00431d00  _sra a0,a0,0x18
00431d04  b 0x00431de8
00431d08  _sw zero,0x0(s2)
00431d0c  li v0,0x12
00431d10  bne s1,v0,0x00431de8
00431d14  _nop
00431d18  blez s0,0x00431ddc
00431d1c  _addiu s1,sp,0x18
00431d20  lw v0,0x154(s3)
00431d24  lw t9,-0x67d0(gp)
00431d28  sw s0,0x808(v0)
00431d2c  jalr t9
00431d30  _move a0,s1
00431d34  lw gp,0x10(sp)
00431d38  blez v0,0x00431ddc
00431d3c  _lui a0,0x5b
00431d40  lw t9,-0x7c9c(gp)
00431d44  nop
00431d48  jalr t9
00431d4c  _addiu a0,a0,-0x2c4c
00431d50  lw gp,0x10(sp)
00431d54  addiu s0,sp,0x218
00431d58  lui a1,0x5b
00431d5c  lw t9,-0x74f0(gp)
00431d60  move a2,s1
00431d64  addiu a1,a1,-0x2c34
00431d68  jalr t9
00431d6c  _move a0,s0
00431d70  lw gp,0x10(sp)
00431d74  nop
00431d78  lw t9,-0x5c10(gp)
00431d7c  nop
00431d80  jalr t9
00431d84  _move a0,s0
00431d88  lw gp,0x10(sp)
00431d8c  lui a0,0x5b
00431d90  addiu a0,a0,-0x2c28
00431d94  lw t9,-0x7c24(gp)
00431d98  nop
00431d9c  jalr t9
00431da0  _clear a1
00431da4  lw gp,0x10(sp)
00431da8  li a0,0x13
00431dac  lw t9,-0x592c(gp)
00431db0  nop
00431db4  jalr t9
00431db8  _clear a1
00431dbc  lw gp,0x10(sp)
00431dc0  lw a0,0x154(s3)
00431dc4  lw t9,-0x5880(gp)
00431dc8  nop
00431dcc  jalr t9
00431dd0  _addiu a0,a0,0x8
00431dd4  b 0x00431de8
00431dd8  _nop
00431ddc  lui v0,0xfffe
00431de0  ori v0,v0,0xecf6
00431de4  sw v0,0x0(s2)
00431de8  lw ra,0xa2c(sp)
00431dec  lw s3,0xa28(sp)
00431df0  lw s2,0xa24(sp)
00431df4  lw s1,0xa20(sp)
00431df8  lw s0,0xa1c(sp)
00431dfc  jr ra
00431e00  _addiu sp,sp,0xa30
