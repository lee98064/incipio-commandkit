# FUN_00447b20 @ 00447b20
00447b20  addiu sp,sp,-0x98
00447b24  sw ra,0x94(sp)
00447b28  sw s1,0x90(sp)
00447b2c  sw s0,0x8c(sp)
00447b30  lui gp,0x47
00447b34  addiu gp,gp,0x2630
00447b38  sw gp,0x10(sp)
00447b3c  lw t9,-0x7fbc(gp)
00447b40  lui s1,0x45
00447b44  lui a1,0x45
00447b48  addiu a2,s1,-0x4cd4
00447b4c  addiu a1,a1,-0x3b10
00447b50  sw zero,0x18(sp)
00447b54  sw zero,0x1c(sp)
00447b58  jalr t9
00447b5c  _move s0,a0
00447b60  lw gp,0x10(sp)
00447b64  lui a1,0x45
00447b68  addiu a2,s1,-0x4cd4
00447b6c  lw t9,-0x7fbc(gp)
00447b70  addiu a1,a1,0x2724
00447b74  move a0,s0
00447b78  jalr t9
00447b7c  _move s1,v0
00447b80  lw gp,0x10(sp)
00447b84  lui a1,0x45
00447b88  move a0,v0
00447b8c  lw t9,-0x7e0c(gp)
00447b90  nop
00447b94  jalr t9
00447b98  _addiu a1,a1,-0x54ec
00447b9c  lw gp,0x10(sp)
00447ba0  bne v0,zero,0x00447bb0
00447ba4  _li v0,0x1
00447ba8  b 0x00447bb4
00447bac  _sw v0,0x18(sp)
00447bb0  sw zero,0x18(sp)
00447bb4  lw t9,-0x7c08(gp)
00447bb8  li a0,0xbb
00447bbc  jalr t9
00447bc0  _addiu a1,sp,0x18
00447bc4  lw gp,0x10(sp)
00447bc8  bne v0,zero,0x00447bdc
00447bcc  _lui a1,0x45
00447bd0  lw t9,-0x79d0(gp)
00447bd4  b 0x00447c3c
00447bd8  _addiu a1,a1,-0x560
00447bdc  lw v0,0x18(sp)
00447be0  nop
00447be4  beq v0,zero,0x00447d64
00447be8  _lui a1,0x45
00447bec  lw t9,-0x7fbc(gp)
00447bf0  lui a2,0x45
00447bf4  addiu a1,a1,0x2730
00447bf8  addiu a2,a2,-0x4cd4
00447bfc  jalr t9
00447c00  _move a0,s0
00447c04  lb v0,0x0(v0)
00447c08  lw gp,0x10(sp)
00447c0c  beq v0,zero,0x00447c74
00447c10  _addiu v0,v0,-0x30
00447c14  lw t9,-0x7c08(gp)
00447c18  sw v0,0x1c(sp)
00447c1c  li a0,0xbc
00447c20  jalr t9
00447c24  _addiu a1,sp,0x1c
00447c28  lw gp,0x10(sp)
00447c2c  bne v0,zero,0x00447c74
00447c30  _lui a1,0x45
00447c34  lw t9,-0x79d0(gp)
00447c38  addiu a1,a1,0x792c
00447c3c  jalr t9
00447c40  _addiu a0,sp,0x20
00447c44  lw gp,0x10(sp)
00447c48  lui a1,0x45
00447c4c  addiu a1,a1,-0x4060
00447c50  lw t9,-0x7cf0(gp)
00447c54  nop
00447c58  jalr t9
00447c5c  _addiu a0,s0,0x8d4
00447c60  lw gp,0x10(sp)
00447c64  bne v0,zero,0x00447ea8
00447c68  _addiu a0,v0,0x8
00447c6c  b 0x00447efc
00447c70  _nop
00447c74  lw t9,-0x7fbc(gp)
00447c78  lui a1,0x45
00447c7c  lui a2,0x45
00447c80  addiu a1,a1,0x19ec
00447c84  addiu a2,a2,-0x4cd4
00447c88  jalr t9
00447c8c  _move a0,s0
00447c90  lb v1,0x0(v0)
00447c94  lw gp,0x10(sp)
00447c98  beq v1,zero,0x00447cc8
00447c9c  _move a1,v0
00447ca0  lw t9,-0x7c08(gp)
00447ca4  nop
00447ca8  jalr t9
00447cac  _li a0,0xbe
00447cb0  lw gp,0x10(sp)
00447cb4  bne v0,zero,0x00447cc8
00447cb8  _lui a1,0x45
00447cbc  lw t9,-0x79d0(gp)
00447cc0  b 0x00447c3c
00447cc4  _addiu a1,a1,0x7944
00447cc8  lw t9,-0x7fbc(gp)
00447ccc  lui a1,0x45
00447cd0  lui a2,0x45
00447cd4  addiu a1,a1,0x19f8
00447cd8  addiu a2,a2,-0x4cd4
00447cdc  jalr t9
00447ce0  _move a0,s0
00447ce4  lb v1,0x0(v0)
00447ce8  lw gp,0x10(sp)
00447cec  beq v1,zero,0x00447d10
00447cf0  _move a1,v0
00447cf4  lw t9,-0x7c08(gp)
00447cf8  nop
00447cfc  jalr t9
00447d00  _li a0,0xbf
00447d04  lw gp,0x10(sp)
00447d08  beq v0,zero,0x00447d58
00447d0c  _lui a1,0x45
00447d10  lw t9,-0x7fbc(gp)
00447d14  lui a1,0x45
00447d18  lui a2,0x45
00447d1c  addiu a1,a1,0x19dc
00447d20  addiu a2,a2,-0x4cd4
00447d24  jalr t9
00447d28  _move a0,s0
00447d2c  lb v1,0x0(v0)
00447d30  lw gp,0x10(sp)
00447d34  beq v1,zero,0x00447d64
00447d38  _move a1,v0
00447d3c  lw t9,-0x7c08(gp)
00447d40  nop
00447d44  jalr t9
00447d48  _li a0,0xbd
00447d4c  lw gp,0x10(sp)
00447d50  bne v0,zero,0x00447d64
00447d54  _lui a1,0x45
00447d58  lw t9,-0x79d0(gp)
00447d5c  b 0x00447c3c
00447d60  _addiu a1,a1,0x7960
00447d64  lw t9,-0x7c04(gp)
00447d68  nop
00447d6c  jalr t9
00447d70  _li a0,0x4
00447d74  lw gp,0x10(sp)
00447d78  beq v0,zero,0x00447d98
00447d7c  _nop
00447d80  lw t9,-0x7d38(gp)
00447d84  nop
00447d88  jalr t9
00447d8c  _nop
00447d90  lw gp,0x10(sp)
00447d94  nop
00447d98  lw t9,-0x7dec(gp)
00447d9c  lui a0,0x45
00447da0  jalr t9
00447da4  _addiu a0,a0,-0x260c
00447da8  lw gp,0x10(sp)
00447dac  li v1,0x1
00447db0  lw v0,-0x7c7c(gp)
00447db4  nop
00447db8  sw v1,0x0(v0)
00447dbc  lb v0,0x0(s1)
00447dc0  nop
00447dc4  bne v0,zero,0x00447de8
00447dc8  _nop
00447dcc  lw t9,-0x79d0(gp)
00447dd0  lui a1,0x45
00447dd4  addiu a1,a1,-0x22a8
00447dd8  jalr t9
00447ddc  _move a0,s1
00447de0  lw gp,0x10(sp)
00447de4  nop
00447de8  lw t9,-0x7cd4(gp)
00447dec  lui a1,0x45
00447df0  move a0,s0
00447df4  jalr t9
00447df8  _addiu a1,a1,-0x229c
00447dfc  lw gp,0x10(sp)
00447e00  lui a1,0x45
00447e04  move a0,s0
00447e08  lw t9,-0x7cd4(gp)
00447e0c  nop
00447e10  jalr t9
00447e14  _addiu a1,a1,-0x21b0
00447e18  lw gp,0x10(sp)
00447e1c  lui a1,0x45
00447e20  move a2,s1
00447e24  lw t9,-0x7cd4(gp)
00447e28  move a0,s0
00447e2c  jalr t9
00447e30  _addiu a1,a1,-0x216c
00447e34  lw gp,0x10(sp)
00447e38  lui a1,0x45
00447e3c  move a0,s0
00447e40  lw t9,-0x7cd4(gp)
00447e44  nop
00447e48  jalr t9
00447e4c  _addiu a1,a1,-0x2138
00447e50  lw gp,0x10(sp)
00447e54  lui a1,0x45
00447e58  move a2,s1
00447e5c  lw t9,-0x7cd4(gp)
00447e60  move a0,s0
00447e64  jalr t9
00447e68  _addiu a1,a1,-0x20d8
00447e6c  lw gp,0x10(sp)
00447e70  lui a1,0x45
00447e74  move a0,s0
00447e78  lw t9,-0x7cd4(gp)
00447e7c  nop
00447e80  jalr t9
00447e84  _addiu a1,a1,-0x2074
00447e88  lw gp,0x10(sp)
00447e8c  lui a0,0x45
00447e90  lw t9,-0x7c58(gp)
00447e94  nop
00447e98  jalr t9
00447e9c  _addiu a0,a0,-0x3bd8
00447ea0  b 0x00447f30
00447ea4  _nop
00447ea8  lw v0,-0x7a70(gp)
00447eac  nop
00447eb0  lw a1,0x0(v0)
00447eb4  move v1,a0
00447eb8  lb v0,0x0(v1)
00447ebc  nop
00447ec0  sll a2,v0,0x1
00447ec4  beq v0,zero,0x00447ee4
00447ec8  _addu a2,a1,a2
00447ecc  lhu v0,0x0(a2)
00447ed0  nop
00447ed4  andi v0,v0,0x20
00447ed8  beq v0,zero,0x00447eb8
00447edc  _addiu v1,v1,0x1
00447ee0  addiu v1,v1,-0x1
00447ee4  lw t9,-0x7c58(gp)
00447ee8  nop
00447eec  jalr t9
00447ef0  _sb zero,0x0(v1)
00447ef4  lw gp,0x10(sp)
00447ef8  nop
00447efc  lw t9,-0x7cd4(gp)
00447f00  lui a1,0x45
00447f04  addiu a1,a1,-0x271c
00447f08  move a0,s0
00447f0c  jalr t9
00447f10  _addiu a2,sp,0x20
00447f14  lw gp,0x10(sp)
00447f18  lui a1,0x45
00447f1c  move a0,s0
00447f20  lw t9,-0x7cd4(gp)
00447f24  nop
00447f28  jalr t9
00447f2c  _addiu a1,a1,-0x2050
00447f30  lw ra,0x94(sp)
00447f34  lw s1,0x90(sp)
00447f38  lw s0,0x8c(sp)
00447f3c  jr ra
00447f40  _addiu sp,sp,0x98
