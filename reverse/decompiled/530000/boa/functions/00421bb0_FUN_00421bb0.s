# FUN_00421bb0 @ 00421bb0
00421bb0  addiu sp,sp,-0xc0
00421bb4  sw ra,0xbc(sp)
00421bb8  sw s8,0xb8(sp)
00421bbc  sw s7,0xb4(sp)
00421bc0  sw s6,0xb0(sp)
00421bc4  sw s5,0xac(sp)
00421bc8  sw s4,0xa8(sp)
00421bcc  sw s3,0xa4(sp)
00421bd0  sw s2,0xa0(sp)
00421bd4  sw s1,0x9c(sp)
00421bd8  sw s0,0x98(sp)
00421bdc  lui gp,0x47
00421be0  addiu gp,gp,0x2630
00421be4  sw gp,0x10(sp)
00421be8  jal 0x00421134
00421bec  _move s1,a0
00421bf0  lw gp,0x10(sp)
00421bf4  lui a1,0x45
00421bf8  addiu a1,a1,0x9d4
00421bfc  lw t9,-0x7c34(gp)
00421c00  move a0,v0
00421c04  li a2,0x8
00421c08  jalr t9
00421c0c  _move s2,v0
00421c10  lw gp,0x10(sp)
00421c14  lui a1,0x45
00421c18  addiu a1,a1,-0x671c
00421c1c  lw t9,-0x7c34(gp)
00421c20  move a0,s2
00421c24  li a2,0x2
00421c28  jalr t9
00421c2c  _lui s4,0x45
00421c30  addiu s4,s4,0x994
00421c34  clear s0
00421c38  addiu s3,sp,0x18
00421c3c  li s8,0x2
00421c40  li s7,0x3
00421c44  li s6,0x4
00421c48  b 0x00421d74
00421c4c  _li s5,0x5
00421c50  lw t9,-0x7d58(gp)
00421c54  nop
00421c58  jalr t9
00421c5c  _move a1,s4
00421c60  lw gp,0x10(sp)
00421c64  b 0x00421d6c
00421c68  _move a0,v0
00421c6c  bne s0,zero,0x00421c94
00421c70  _li v0,0x1
00421c74  lw t9,-0x7f2c(gp)
00421c78  nop
00421c7c  jalr t9
00421c80  _nop
00421c84  lw gp,0x10(sp)
00421c88  sw v1,0x4(s1)
00421c8c  b 0x00421d50
00421c90  _sw v0,0x0(s1)
00421c94  bne s0,v0,0x00421cbc
00421c98  _nop
00421c9c  lw t9,-0x7f2c(gp)
00421ca0  nop
00421ca4  jalr t9
00421ca8  _nop
00421cac  lw gp,0x10(sp)
00421cb0  sw v1,0xc(s1)
00421cb4  b 0x00421d50
00421cb8  _sw v0,0x8(s1)
00421cbc  bne s0,s8,0x00421ce0
00421cc0  _nop
00421cc4  lw t9,-0x7ef4(gp)
00421cc8  nop
00421ccc  jalr t9
00421cd0  _nop
00421cd4  lw gp,0x10(sp)
00421cd8  b 0x00421d50
00421cdc  _sw v0,0x10(s1)
00421ce0  bne s0,s7,0x00421d04
00421ce4  _nop
00421ce8  lw t9,-0x7ef4(gp)
00421cec  nop
00421cf0  jalr t9
00421cf4  _nop
00421cf8  lw gp,0x10(sp)
00421cfc  b 0x00421d50
00421d00  _sw v0,0x14(s1)
00421d04  bne s0,s6,0x00421d2c
00421d08  _nop
00421d0c  lw t9,-0x7f2c(gp)
00421d10  nop
00421d14  jalr t9
00421d18  _nop
00421d1c  lw gp,0x10(sp)
00421d20  sw v1,0x24(s1)
00421d24  b 0x00421d50
00421d28  _sw v0,0x20(s1)
00421d2c  bne s0,s5,0x00421d50
00421d30  _nop
00421d34  lw t9,-0x7f2c(gp)
00421d38  nop
00421d3c  jalr t9
00421d40  _nop
00421d44  lw gp,0x10(sp)
00421d48  sw v1,0x2c(s1)
00421d4c  sw v0,0x28(s1)
00421d50  lw t9,-0x7d58(gp)
00421d54  clear a0
00421d58  jalr t9
00421d5c  _move a1,s4
00421d60  lw gp,0x10(sp)
00421d64  addiu s0,s0,0x1
00421d68  move a0,v0
00421d6c  bne v0,zero,0x00421c6c
00421d70  _nop
00421d74  move a0,s2
00421d78  move a1,s3
00421d7c  jal 0x004218dc
00421d80  _li a2,0x80
00421d84  lw gp,0x10(sp)
00421d88  bgtz v0,0x00421c50
00421d8c  _move a0,s3
00421d90  lw t9,-0x7f9c(gp)
00421d94  nop
00421d98  jalr t9
00421d9c  _move a0,s2
00421da0  lw ra,0xbc(sp)
00421da4  lw s8,0xb8(sp)
00421da8  lw s7,0xb4(sp)
00421dac  lw s6,0xb0(sp)
00421db0  lw s5,0xac(sp)
00421db4  lw s4,0xa8(sp)
00421db8  lw s3,0xa4(sp)
00421dbc  lw s2,0xa0(sp)
00421dc0  lw s1,0x9c(sp)
00421dc4  lw s0,0x98(sp)
00421dc8  jr ra
00421dcc  _addiu sp,sp,0xc0
