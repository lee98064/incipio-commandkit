# getWanInfo @ 00422a64
00422a64  addiu sp,sp,-0x68
00422a68  sw ra,0x64(sp)
00422a6c  sw s4,0x60(sp)
00422a70  sw s3,0x5c(sp)
00422a74  sw s2,0x58(sp)
00422a78  sw s1,0x54(sp)
00422a7c  sw s0,0x50(sp)
00422a80  lui gp,0x47
00422a84  addiu gp,gp,0x2630
00422a88  sw gp,0x20(sp)
00422a8c  lw t9,-0x7b54(gp)
00422a90  li v0,-0x1
00422a94  sw v0,0x2c(sp)
00422a98  move s0,a0
00422a9c  move s2,a1
00422aa0  sw zero,0x30(sp)
00422aa4  sw zero,0x34(sp)
00422aa8  li a0,0x68
00422aac  addiu a1,sp,0x28
00422ab0  move s1,a2
00422ab4  jalr t9
00422ab8  _move s4,a3
00422abc  lw gp,0x20(sp)
00422ac0  beq v0,zero,0x00422e10
00422ac4  _li v0,-0x1
00422ac8  lw t9,-0x7b54(gp)
00422acc  li a0,0xc0
00422ad0  jalr t9
00422ad4  _addiu a1,sp,0x2c
00422ad8  lw gp,0x20(sp)
00422adc  beq v0,zero,0x00422e10
00422ae0  _li v0,-0x1
00422ae4  lw t9,-0x7b54(gp)
00422ae8  li a0,0xc1
00422aec  jalr t9
00422af0  _addiu a1,sp,0x30
00422af4  lw gp,0x20(sp)
00422af8  beq v0,zero,0x00422e10
00422afc  _li v0,-0x1
00422b00  lw v0,0x28(sp)
00422b04  nop
00422b08  addiu v1,v0,-0x3
00422b0c  sltiu v1,v1,0x2
00422b10  bne v1,zero,0x00422b28
00422b14  _li v1,0x6
00422b18  beq v0,v1,0x00422b28
00422b1c  _li v1,0x10
00422b20  bne v0,v1,0x00422b50
00422b24  _li v0,0x2
00422b28  lw t9,-0x7e68(gp)
00422b2c  lui v0,0x45
00422b30  addiu v0,v0,-0x3ffc
00422b34  jalr t9
00422b38  _sw v0,0x34(sp)
00422b3c  lw gp,0x20(sp)
00422b40  bne v0,zero,0x00422bb4
00422b44  _nop
00422b48  b 0x00422bb4
00422b4c  _sw zero,0x34(sp)
00422b50  lw v1,0x2c(sp)
00422b54  nop
00422b58  bne v1,v0,0x00422ba8
00422b5c  _nop
00422b60  lw a1,0x30(sp)
00422b64  nop
00422b68  bne a1,zero,0x00422b78
00422b6c  _lui v0,0x45
00422b70  b 0x00422b88
00422b74  _addiu v0,v0,-0x3ff4
00422b78  li v0,0x1
00422b7c  bne a1,v0,0x00422b8c
00422b80  _lui v0,0x45
00422b84  addiu v0,v0,0xab4
00422b88  sw v0,0x34(sp)
00422b8c  jal 0x0041fa00
00422b90  _addiu a0,sp,0x34
00422b94  lw gp,0x20(sp)
00422b98  bgez v0,0x00422bb4
00422b9c  _li v0,-0x1
00422ba0  b 0x00422e10
00422ba4  _nop
00422ba8  lui v0,0x45
00422bac  addiu v0,v0,-0x4024
00422bb0  sw v0,0x34(sp)
00422bb4  lw v1,0x2c(sp)
00422bb8  li v0,0x2
00422bbc  beq v1,v0,0x00422c00
00422bc0  _clear s3
00422bc4  lw v0,0x34(sp)
00422bc8  nop
00422bcc  beq v0,zero,0x00422c00
00422bd0  _lui a0,0x45
00422bd4  jal 0x00422a38
00422bd8  _addiu a0,a0,-0x4024
00422bdc  lw gp,0x20(sp)
00422be0  bgez v0,0x00422c00
00422be4  _move s3,v0
00422be8  lw t9,-0x79d0(gp)
00422bec  lui a1,0x45
00422bf0  addiu a1,a1,-0x1084
00422bf4  jalr t9
00422bf8  _move a0,s0
00422bfc  lw gp,0x20(sp)
00422c00  lw a0,0x34(sp)
00422c04  nop
00422c08  beq a0,zero,0x00422c50
00422c0c  _clear a1
00422c10  jal 0x0041f87c
00422c14  _addiu a2,sp,0x38
00422c18  lw gp,0x20(sp)
00422c1c  beq v0,zero,0x00422c50
00422c20  _nop
00422c24  bltz s3,0x00422c50
00422c28  _nop
00422c2c  lw t9,-0x7ddc(gp)
00422c30  lw a0,0x38(sp)
00422c34  jalr t9
00422c38  _nop
00422c3c  lw gp,0x20(sp)
00422c40  move a0,s0
00422c44  lw t9,-0x79d0(gp)
00422c48  b 0x00422c60
00422c4c  _move a1,v0
00422c50  lw t9,-0x79d0(gp)
00422c54  lui a1,0x45
00422c58  move a0,s0
00422c5c  addiu a1,a1,-0x1084
00422c60  jalr t9
00422c64  _nop
00422c68  lw a0,0x34(sp)
00422c6c  lw gp,0x20(sp)
00422c70  beq a0,zero,0x00422cb8
00422c74  _li a1,0x2
00422c78  jal 0x0041f87c
00422c7c  _addiu a2,sp,0x38
00422c80  lw gp,0x20(sp)
00422c84  beq v0,zero,0x00422cb8
00422c88  _nop
00422c8c  bltz s3,0x00422cb8
00422c90  _nop
00422c94  lw t9,-0x7ddc(gp)
00422c98  lw a0,0x38(sp)
00422c9c  jalr t9
00422ca0  _nop
00422ca4  lw gp,0x20(sp)
00422ca8  move a0,s2
00422cac  lw t9,-0x79d0(gp)
00422cb0  b 0x00422cc8
00422cb4  _move a1,v0
00422cb8  lw t9,-0x79d0(gp)
00422cbc  lui a1,0x45
00422cc0  move a0,s2
00422cc4  addiu a1,a1,-0x1084
00422cc8  jalr t9
00422ccc  _nop
00422cd0  lw a0,0x34(sp)
00422cd4  lw gp,0x20(sp)
00422cd8  beq a0,zero,0x00422d20
00422cdc  _nop
00422ce0  jal 0x00420b78
00422ce4  _addiu a1,sp,0x38
00422ce8  lw gp,0x20(sp)
00422cec  beq v0,zero,0x00422d20
00422cf0  _nop
00422cf4  bltz s3,0x00422d20
00422cf8  _nop
00422cfc  lw t9,-0x7ddc(gp)
00422d00  lw a0,0x38(sp)
00422d04  jalr t9
00422d08  _nop
00422d0c  lw gp,0x20(sp)
00422d10  move a0,s1
00422d14  lw t9,-0x79d0(gp)
00422d18  b 0x00422d30
00422d1c  _move a1,v0
00422d20  lw t9,-0x79d0(gp)
00422d24  lui a1,0x45
00422d28  move a0,s1
00422d2c  addiu a1,a1,-0x1084
00422d30  jalr t9
00422d34  _nop
00422d38  lw v1,0x2c(sp)
00422d3c  li v0,0x2
00422d40  bne v1,v0,0x00422d8c
00422d44  _nop
00422d48  lw a1,0x30(sp)
00422d4c  nop
00422d50  bne a1,zero,0x00422d60
00422d54  _lui v0,0x45
00422d58  b 0x00422d70
00422d5c  _addiu v0,v0,-0x3ff4
00422d60  li v0,0x1
00422d64  bne a1,v0,0x00422d74
00422d68  _lui v0,0x45
00422d6c  addiu v0,v0,0xab4
00422d70  sw v0,0x34(sp)
00422d74  jal 0x0041fa00
00422d78  _addiu a0,sp,0x34
00422d7c  bgez v0,0x00422d98
00422d80  _li v0,-0x1
00422d84  b 0x00422e10
00422d88  _nop
00422d8c  lui v0,0x45
00422d90  addiu v0,v0,-0x4024
00422d94  sw v0,0x34(sp)
00422d98  lw a0,0x34(sp)
00422d9c  li a1,0x4
00422da0  jal 0x0041f87c
00422da4  _addiu a2,sp,0x3c
00422da8  lw gp,0x20(sp)
00422dac  beq v0,zero,0x00422dfc
00422db0  _move a0,s4
00422db4  addiu v0,sp,0x3e
00422db8  lbu a1,0x2(v0)
00422dbc  lbu v1,0x5(v0)
00422dc0  lbu a3,0x1(v0)
00422dc4  lbu a0,0x3(v0)
00422dc8  lbu v0,0x4(v0)
00422dcc  lbu a2,0x3e(sp)
00422dd0  lw t9,-0x7e28(gp)
00422dd4  sw a1,0x10(sp)
00422dd8  lui a1,0x45
00422ddc  sw a0,0x14(sp)
00422de0  sw v0,0x18(sp)
00422de4  sw v1,0x1c(sp)
00422de8  move a0,s4
00422dec  jalr t9
00422df0  _addiu a1,a1,-0x36e4
00422df4  b 0x00422e0c
00422df8  _nop
00422dfc  lw t9,-0x79d0(gp)
00422e00  lui a1,0x45
00422e04  jalr t9
00422e08  _addiu a1,a1,0xabc
00422e0c  clear v0
00422e10  lw ra,0x64(sp)
00422e14  lw s4,0x60(sp)
00422e18  lw s3,0x5c(sp)
00422e1c  lw s2,0x58(sp)
00422e20  lw s1,0x54(sp)
00422e24  lw s0,0x50(sp)
00422e28  jr ra
00422e2c  _addiu sp,sp,0x68
