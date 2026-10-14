# HKCleanPairSetupInfo @ 00425b60
00425b60  addiu sp,sp,-0x20
00425b64  sw ra,0x1c(sp)
00425b68  sw s0,0x18(sp)
00425b6c  lui gp,0x62
00425b70  addiu gp,gp,-0x6b80
00425b74  sw gp,0x10(sp)
00425b78  lw v0,0x0(a0)
00425b7c  nop
00425b80  beq v0,zero,0x00425d68
00425b84  _move s0,a0
00425b88  lbu v0,0x110(a1)
00425b8c  nop
00425b90  beq v0,zero,0x00425d68
00425b94  _lui v0,0x60
00425b98  li v1,0x1
00425b9c  sw v1,-0x450(v0)
00425ba0  sb zero,0x110(a1)
00425ba4  lw v0,0x0(a0)
00425ba8  nop
00425bac  lw a0,0x0(v0)
00425bb0  nop
00425bb4  beq a0,zero,0x00425bd0
00425bb8  _nop
00425bbc  lw t9,-0x7aa4(gp)
00425bc0  nop
00425bc4  jalr t9
00425bc8  _nop
00425bcc  lw gp,0x10(sp)
00425bd0  lw v0,0x0(s0)
00425bd4  nop
00425bd8  lw a0,0x8(v0)
00425bdc  nop
00425be0  beq a0,zero,0x00425c04
00425be4  _nop
00425be8  lw t9,-0x7aa4(gp)
00425bec  nop
00425bf0  jalr t9
00425bf4  _nop
00425bf8  lw gp,0x10(sp)
00425bfc  lw v0,0x0(s0)
00425c00  nop
00425c04  lw a0,0x10(v0)
00425c08  nop
00425c0c  beq a0,zero,0x00425c28
00425c10  _nop
00425c14  lw t9,-0x7aa4(gp)
00425c18  nop
00425c1c  jalr t9
00425c20  _nop
00425c24  lw gp,0x10(sp)
00425c28  lw v0,0x0(s0)
00425c2c  nop
00425c30  lw a0,0x18(v0)
00425c34  nop
00425c38  beq a0,zero,0x00425c5c
00425c3c  _nop
00425c40  lw t9,-0x7aa4(gp)
00425c44  nop
00425c48  jalr t9
00425c4c  _nop
00425c50  lw gp,0x10(sp)
00425c54  lw v0,0x0(s0)
00425c58  nop
00425c5c  lw v0,0x4(v0)
00425c60  nop
00425c64  lw a0,0x30(v0)
00425c68  nop
00425c6c  beq a0,zero,0x00425c88
00425c70  _nop
00425c74  lw t9,-0x7aa4(gp)
00425c78  nop
00425c7c  jalr t9
00425c80  _nop
00425c84  lw gp,0x10(sp)
00425c88  lw v0,0x0(s0)
00425c8c  nop
00425c90  lw v0,0x4(v0)
00425c94  nop
00425c98  lw a0,0x28(v0)
00425c9c  nop
00425ca0  beq a0,zero,0x00425cbc
00425ca4  _nop
00425ca8  lw t9,-0x7aa4(gp)
00425cac  nop
00425cb0  jalr t9
00425cb4  _nop
00425cb8  lw gp,0x10(sp)
00425cbc  lw v0,0x0(s0)
00425cc0  nop
00425cc4  lw v0,0x4(v0)
00425cc8  nop
00425ccc  lw a0,0x24(v0)
00425cd0  nop
00425cd4  beq a0,zero,0x00425cf0
00425cd8  _nop
00425cdc  lw t9,-0x7aa4(gp)
00425ce0  nop
00425ce4  jalr t9
00425ce8  _nop
00425cec  lw gp,0x10(sp)
00425cf0  lw v0,0x0(s0)
00425cf4  nop
00425cf8  lw v0,0x4(v0)
00425cfc  nop
00425d00  lw a0,0x48(v0)
00425d04  nop
00425d08  beq a0,zero,0x00425d24
00425d0c  _nop
00425d10  lw t9,-0x7aa4(gp)
00425d14  nop
00425d18  jalr t9
00425d1c  _nop
00425d20  lw gp,0x10(sp)
00425d24  lw v0,0x0(s0)
00425d28  nop
00425d2c  lw a0,0x4(v0)
00425d30  nop
00425d34  beq a0,zero,0x00425d54
00425d38  _nop
00425d3c  lw t9,-0x7aa4(gp)
00425d40  nop
00425d44  jalr t9
00425d48  _nop
00425d4c  lw gp,0x10(sp)
00425d50  nop
00425d54  lw t9,-0x7aa4(gp)
00425d58  lw a0,0x0(s0)
00425d5c  jalr t9
00425d60  _nop
00425d64  sw zero,0x0(s0)
00425d68  lw ra,0x1c(sp)
00425d6c  lw s0,0x18(sp)
00425d70  jr ra
00425d74  _addiu sp,sp,0x20
