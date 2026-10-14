# read_config_files @ 00406bc8
00406bc8  addiu sp,sp,-0x30
00406bcc  sw ra,0x2c(sp)
00406bd0  sw s0,0x28(sp)
00406bd4  lui gp,0x47
00406bd8  addiu gp,gp,0x2630
00406bdc  sw gp,0x10(sp)
00406be0  lw t9,-0x7b04(gp)
00406be4  nop
00406be8  jalr t9
00406bec  _nop
00406bf0  lw gp,0x10(sp)
00406bf4  lui a0,0x47
00406bf8  sw v0,-0x3a1c(a0)
00406bfc  lw v1,-0x7a64(gp)
00406c00  nop
00406c04  lw v0,0x0(v1)
00406c08  nop
00406c0c  bne v0,zero,0x00406c1c
00406c10  _lui v0,0x45
00406c14  addiu v0,v0,-0x6404
00406c18  sw v0,0x0(v1)
00406c1c  lw v0,-0x7a64(gp)
00406c20  lw t9,-0x7d9c(gp)
00406c24  lui a1,0x45
00406c28  lw a0,0x0(v0)
00406c2c  jalr t9
00406c30  _addiu a1,a1,0x7484
00406c34  lw gp,0x10(sp)
00406c38  bne v0,zero,0x00406c58
00406c3c  _nop
00406c40  lw v0,-0x7e40(gp)
00406c44  lui a0,0x45
00406c48  lw t9,-0x7f4c(gp)
00406c4c  lw a1,0x0(v0)
00406c50  b 0x00406dd8
00406c54  _addiu a0,a0,-0x63f8
00406c58  move a0,v0
00406c5c  jal 0x0040689c
00406c60  _sw v0,0x20(sp)
00406c64  lw gp,0x10(sp)
00406c68  lw v0,0x20(sp)
00406c6c  lw s0,-0x7b0c(gp)
00406c70  lw t9,-0x7dd4(gp)
00406c74  nop
00406c78  jalr t9
00406c7c  _move a0,v0
00406c80  lw v0,0x0(s0)
00406c84  lw gp,0x10(sp)
00406c88  bne v0,zero,0x00406d0c
00406c8c  _clear a1
00406c90  lw v0,-0x7a50(gp)
00406c94  lw t9,-0x7ae0(gp)
00406c98  lw a0,0x0(v0)
00406c9c  jalr t9
00406ca0  _addiu a2,sp,0x18
00406ca4  lw gp,0x10(sp)
00406ca8  beq v0,zero,0x00406d0c
00406cac  _nop
00406cb0  lw t9,-0x7ddc(gp)
00406cb4  lw a0,0x18(sp)
00406cb8  jalr t9
00406cbc  _nop
00406cc0  lw gp,0x10(sp)
00406cc4  nop
00406cc8  lw t9,-0x7d8c(gp)
00406ccc  nop
00406cd0  jalr t9
00406cd4  _move a0,v0
00406cd8  lw gp,0x10(sp)
00406cdc  bne v0,zero,0x00406d0c
00406ce0  _sw v0,0x0(s0)
00406ce4  lw t9,-0x7aec(gp)
00406ce8  lui a0,0x45
00406cec  jalr t9
00406cf0  _addiu a0,a0,-0x63d0
00406cf4  lw gp,0x10(sp)
00406cf8  nop
00406cfc  lw t9,-0x7ed4(gp)
00406d00  nop
00406d04  jalr t9
00406d08  _li a0,0x1
00406d0c  lw t9,-0x7a78(gp)
00406d10  lui a0,0x45
00406d14  jalr t9
00406d18  _addiu a0,a0,-0x63c8
00406d1c  lw gp,0x10(sp)
00406d20  nop
00406d24  lw v1,-0x7bd0(gp)
00406d28  bne v0,zero,0x00406d3c
00406d2c  _sw v0,0x0(v1)
00406d30  lui v0,0x45
00406d34  addiu v0,v0,-0x63c4
00406d38  sw v0,0x0(v1)
00406d3c  lui v0,0x47
00406d40  lw a2,-0x7fbc(v0)
00406d44  nop
00406d48  bgez a2,0x00406d6c
00406d4c  _lui a1,0x45
00406d50  lw v0,-0x7e40(gp)
00406d54  lw t9,-0x7c44(gp)
00406d58  lw a0,0x0(v0)
00406d5c  jalr t9
00406d60  _addiu a1,a1,-0x63bc
00406d64  b 0x00406cf4
00406d68  _nop
00406d6c  lw v0,-0x7a98(gp)
00406d70  nop
00406d74  lw v0,0x0(v0)
00406d78  nop
00406d7c  beq v0,zero,0x00406de8
00406d80  _nop
00406d84  lw v0,-0x7a6c(gp)
00406d88  nop
00406d8c  lw v0,0x0(v0)
00406d90  nop
00406d94  beq v0,zero,0x00406db0
00406d98  _lui a0,0x45
00406d9c  lw v0,-0x7e40(gp)
00406da0  lw t9,-0x7f4c(gp)
00406da4  lw a1,0x0(v0)
00406da8  b 0x00406dd8
00406dac  _addiu a0,a0,-0x6390
00406db0  lw v0,-0x7a0c(gp)
00406db4  nop
00406db8  lw v0,0x0(v0)
00406dbc  nop
00406dc0  beq v0,zero,0x00406de8
00406dc4  _lui a0,0x45
00406dc8  lw v0,-0x7e40(gp)
00406dcc  lw t9,-0x7f4c(gp)
00406dd0  lw a1,0x0(v0)
00406dd4  addiu a0,a0,-0x6340
00406dd8  jalr t9
00406ddc  _nop
00406de0  b 0x00406cf4
00406de4  _nop
00406de8  lw v0,-0x7ca0(gp)
00406dec  nop
00406df0  lw v1,0x0(v0)
00406df4  nop
00406df8  bne v1,zero,0x00406e08
00406dfc  _lui v1,0x45
00406e00  addiu v1,v1,-0x62f0
00406e04  sw v1,0x0(v0)
00406e08  lw s0,-0x7c00(gp)
00406e0c  nop
00406e10  lw v0,0x0(s0)
00406e14  nop
00406e18  bne v0,zero,0x00406e3c
00406e1c  _li a0,0x5
00406e20  lw t9,-0x79ec(gp)
00406e24  nop
00406e28  jalr t9
00406e2c  _addiu a1,sp,0x18
00406e30  lw v0,0x18(sp)
00406e34  lw gp,0x10(sp)
00406e38  sw v0,0x0(s0)
00406e3c  lw v0,-0x7c00(gp)
00406e40  nop
00406e44  lw v1,0x0(v0)
00406e48  nop
00406e4c  sltiu v1,v1,0x3ed
00406e50  bne v1,zero,0x00406e5c
00406e54  _li v1,0x3ec
00406e58  sw v1,0x0(v0)
00406e5c  lw v0,-0x7c60(gp)
00406e60  nop
00406e64  lw v1,0x0(v0)
00406e68  nop
00406e6c  bgez v1,0x00406e78
00406e70  _nop
00406e74  sw zero,0x0(v0)
00406e78  lw v1,-0x7c60(gp)
00406e7c  li v0,0x3c
00406e80  lw v1,0x0(v1)
00406e84  nop
00406e88  movn v0,v1,v1
00406e8c  lw v1,-0x7f44(gp)
00406e90  nop
00406e94  sw v0,0x0(v1)
00406e98  lw ra,0x2c(sp)
00406e9c  lw s0,0x28(sp)
00406ea0  jr ra
00406ea4  _addiu sp,sp,0x30
