# write_from_pipe @ 00409c38
00409c38  addiu sp,sp,-0x28
00409c3c  sw ra,0x24(sp)
00409c40  sw s1,0x20(sp)
00409c44  sw s0,0x1c(sp)
00409c48  lui gp,0x47
00409c4c  addiu gp,gp,0x2630
00409c50  sw gp,0x10(sp)
00409c54  lw a1,0x40(a0)
00409c58  lw s1,0x44(a0)
00409c5c  nop
00409c60  subu s1,s1,a1
00409c64  bne s1,zero,0x00409c84
00409c68  _move s0,a0
00409c6c  lw a0,0x18(a0)
00409c70  li v1,0x2
00409c74  bne a0,v1,0x00409d0c
00409c78  _clear v0
00409c7c  b 0x00409d24
00409c80  _nop
00409c84  lw t9,-0x7c34(gp)
00409c88  lw a0,0xb4(a0)
00409c8c  jalr t9
00409c90  _move a2,s1
00409c94  li v1,-0x1
00409c98  lw gp,0x10(sp)
00409c9c  bne v0,v1,0x00409cf0
00409ca0  _nop
00409ca4  lw t9,-0x7ecc(gp)
00409ca8  nop
00409cac  jalr t9
00409cb0  _nop
00409cb4  lw v1,0x0(v0)
00409cb8  li a0,0xb
00409cbc  lw gp,0x10(sp)
00409cc0  beq v1,a0,0x00409d24
00409cc4  _li v0,-0x1
00409cc8  li v0,0x4
00409ccc  beq v1,v0,0x00409d20
00409cd0  _li v0,0xc
00409cd4  lw t9,-0x7aec(gp)
00409cd8  lui a0,0x45
00409cdc  sw v0,0x0(s0)
00409ce0  jalr t9
00409ce4  _addiu a0,a0,-0x5a50
00409ce8  b 0x00409d24
00409cec  _clear v0
00409cf0  lw a0,0x40(s0)
00409cf4  lw v1,0x34(s0)
00409cf8  addu a0,a0,v0
00409cfc  addu v1,v1,v0
00409d00  sw a0,0x40(s0)
00409d04  bne v0,s1,0x00409d20
00409d08  _sw v1,0x34(s0)
00409d0c  lw v0,0x8d0(s0)
00409d10  li v1,0x7
00409d14  sw v1,0x0(s0)
00409d18  sw v0,0x44(s0)
00409d1c  sw v0,0x40(s0)
00409d20  li v0,0x1
00409d24  lw ra,0x24(sp)
00409d28  lw s1,0x20(sp)
00409d2c  lw s0,0x1c(sp)
00409d30  jr ra
00409d34  _addiu sp,sp,0x28
