# asp_init @ 004129b0
004129b0  addiu sp,sp,-0x38
004129b4  sw ra,0x34(sp)
004129b8  sw s1,0x30(sp)
004129bc  sw s0,0x2c(sp)
004129c0  lui gp,0x47
004129c4  addiu gp,gp,0x2630
004129c8  sw gp,0x10(sp)
004129cc  lw v0,-0x7ed8(gp)
004129d0  lw s0,-0x7d40(gp)
004129d4  lw t9,-0x7e28(gp)
004129d8  addiu s1,sp,0x1c
004129dc  lui a1,0x45
004129e0  addiu a1,a1,0x5e80
004129e4  move a0,s1
004129e8  clear a2
004129ec  sw zero,0x0(v0)
004129f0  sw zero,0x4(v0)
004129f4  jalr t9
004129f8  _sw zero,0x0(s0)
004129fc  lw gp,0x10(sp)
00412a00  move a0,s1
00412a04  lw t9,-0x7a7c(gp)
00412a08  nop
00412a0c  jalr t9
00412a10  _addiu a1,sp,0x18
00412a14  lw gp,0x10(sp)
00412a18  bltz v0,0x00412a30
00412a1c  _nop
00412a20  lw v0,0x0(s0)
00412a24  nop
00412a28  addiu v0,v0,0x1
00412a2c  sw v0,0x0(s0)
00412a30  lw v0,-0x7d40(gp)
00412a34  nop
00412a38  lw v1,0x0(v0)
00412a3c  nop
00412a40  bne v1,zero,0x00412a4c
00412a44  _li v1,0x1
00412a48  sw v1,0x0(v0)
00412a4c  lw v0,-0x7ed8(gp)
00412a50  lw t9,-0x7f24(gp)
00412a54  li a0,0x5
00412a58  lui v1,0x47
00412a5c  sw a0,-0xfac(v1)
00412a60  sw zero,0x0(v0)
00412a64  jalr t9
00412a68  _sw zero,0x4(v0)
00412a6c  lw gp,0x10(sp)
00412a70  bne v0,zero,0x00412a9c
00412a74  _nop
00412a78  lw t9,-0x7a08(gp)
00412a7c  lui a0,0x45
00412a80  lui a1,0x45
00412a84  addiu a0,a0,-0x4044
00412a88  addiu a1,a1,-0x3b20
00412a8c  jalr t9
00412a90  _li a2,0x31a
00412a94  b 0x00412b88
00412a98  _nop
00412a9c  lw t9,-0x7d38(gp)
00412aa0  nop
00412aa4  jalr t9
00412aa8  _nop
00412aac  lw gp,0x10(sp)
00412ab0  lui a1,0x47
00412ab4  addiu a1,a1,-0x7a40
00412ab8  lw t9,-0x7b54(gp)
00412abc  nop
00412ac0  jalr t9
00412ac4  _li a0,0x68
00412ac8  lw gp,0x10(sp)
00412acc  lui v1,0x45
00412ad0  addiu v1,v1,-0x4024
00412ad4  lw v0,-0x7ee4(gp)
00412ad8  lw t9,-0x79d0(gp)
00412adc  lw a0,-0x7da0(gp)
00412ae0  sw v1,0x0(v0)
00412ae4  lw v0,-0x7a50(gp)
00412ae8  lui v1,0x45
00412aec  addiu v1,v1,0x6294
00412af0  sw v1,0x0(v0)
00412af4  lw v0,-0x7e04(gp)
00412af8  lui v1,0x45
00412afc  addiu v1,v1,-0x401c
00412b00  sw v1,0x0(v0)
00412b04  lw v0,-0x7eec(gp)
00412b08  lui v1,0x45
00412b0c  addiu v1,v1,-0x4014
00412b10  sw v1,0x0(v0)
00412b14  lw v0,-0x7df4(gp)
00412b18  lui v1,0x45
00412b1c  addiu v1,v1,-0x400c
00412b20  sw v1,0x0(v0)
00412b24  lw v0,-0x7e54(gp)
00412b28  lui v1,0x45
00412b2c  addiu v1,v1,-0x4004
00412b30  sw v1,0x0(v0)
00412b34  lw v0,-0x7eb0(gp)
00412b38  lui v1,0x45
00412b3c  addiu v1,v1,-0x3ffc
00412b40  lui a1,0x45
00412b44  sw v1,0x0(v0)
00412b48  jalr t9
00412b4c  _addiu a1,a1,-0x3ff4
00412b50  lw gp,0x10(sp)
00412b54  nop
00412b58  lw t9,-0x7b1c(gp)
00412b5c  nop
00412b60  jalr t9
00412b64  _li a0,0x1000
00412b68  lui v1,0x47
00412b6c  lw gp,0x10(sp)
00412b70  bne v0,zero,0x00412b88
00412b74  _sw v0,-0xfb0(v1)
00412b78  lw t9,-0x7ed4(gp)
00412b7c  nop
00412b80  jalr t9
00412b84  _clear a0
00412b88  lw ra,0x34(sp)
00412b8c  lw s1,0x30(sp)
00412b90  lw s0,0x2c(sp)
00412b94  jr ra
00412b98  _addiu sp,sp,0x38
