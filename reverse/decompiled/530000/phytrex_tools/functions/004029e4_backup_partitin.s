# backup_partitin @ 004029e4
004029e4  addiu sp,sp,-0x28
004029e8  sw ra,0x24(sp)
004029ec  sw s8,0x20(sp)
004029f0  sw s1,0x1c(sp)
004029f4  sw s0,0x18(sp)
004029f8  move s8,sp
004029fc  lui gp,0x42
00402a00  addiu gp,gp,-0x1db0
00402a04  sw gp,0x10(sp)
00402a08  sw a0,0x28(s8)
00402a0c  lw a0,0x28(s8)
00402a10  lui v0,0x40
00402a14  addiu a1,v0,0x58b0
00402a18  lw v0,-0x7fa4(gp)
00402a1c  nop
00402a20  move t9,v0
00402a24  jalr t9
00402a28  _nop
00402a2c  lw gp,0x10(s8)
00402a30  bne v0,zero,0x00402a64
00402a34  _nop
00402a38  li a0,0x6000
00402a3c  ori a1,zero,0x8000
00402a40  lui v0,0x40
00402a44  addiu a2,v0,0x58b8
00402a48  jal 0x004016cc
00402a4c  _nop
00402a50  lw gp,0x10(s8)
00402a54  bne v0,zero,0x00402e0c
00402a58  _nop
00402a5c  b 0x00402e18
00402a60  _nop
00402a64  lw a0,0x28(s8)
00402a68  lui v0,0x40
00402a6c  addiu a1,v0,0x58c4
00402a70  lw v0,-0x7fa4(gp)
00402a74  nop
00402a78  move t9,v0
00402a7c  jalr t9
00402a80  _nop
00402a84  lw gp,0x10(s8)
00402a88  bne v0,zero,0x00402abc
00402a8c  _nop
00402a90  ori a0,zero,0x8000
00402a94  ori a1,zero,0xc000
00402a98  lui v0,0x40
00402a9c  addiu a2,v0,0x55a4
00402aa0  jal 0x004016cc
00402aa4  _nop
00402aa8  lw gp,0x10(s8)
00402aac  bne v0,zero,0x00402e0c
00402ab0  _nop
00402ab4  b 0x00402e18
00402ab8  _nop
00402abc  lw a0,0x28(s8)
00402ac0  lui v0,0x40
00402ac4  addiu a1,v0,0x58cc
00402ac8  lw v0,-0x7fa4(gp)
00402acc  nop
00402ad0  move t9,v0
00402ad4  jalr t9
00402ad8  _nop
00402adc  lw gp,0x10(s8)
00402ae0  bne v0,zero,0x00402b14
00402ae4  _nop
00402ae8  ori a0,zero,0xc000
00402aec  lui a1,0x1
00402af0  lui v0,0x40
00402af4  addiu a2,v0,0x55b0
00402af8  jal 0x004016cc
00402afc  _nop
00402b00  lw gp,0x10(s8)
00402b04  bne v0,zero,0x00402e0c
00402b08  _nop
00402b0c  b 0x00402e18
00402b10  _nop
00402b14  lw a0,0x28(s8)
00402b18  lui v0,0x40
00402b1c  addiu a1,v0,0x58d4
00402b20  lw v0,-0x7fa4(gp)
00402b24  nop
00402b28  move t9,v0
00402b2c  jalr t9
00402b30  _nop
00402b34  lw gp,0x10(s8)
00402b38  bne v0,zero,0x00402b6c
00402b3c  _nop
00402b40  li a0,0x6000
00402b44  ori a1,zero,0x8000
00402b48  lui v0,0x40
00402b4c  addiu a2,v0,0x58dc
00402b50  jal 0x00401d68
00402b54  _nop
00402b58  lw gp,0x10(s8)
00402b5c  bne v0,zero,0x00402e0c
00402b60  _nop
00402b64  b 0x00402e18
00402b68  _nop
00402b6c  lw a0,0x28(s8)
00402b70  lui v0,0x40
00402b74  addiu a1,v0,0x58e8
00402b78  lw v0,-0x7fa4(gp)
00402b7c  nop
00402b80  move t9,v0
00402b84  jalr t9
00402b88  _nop
00402b8c  lw gp,0x10(s8)
00402b90  bne v0,zero,0x00402bc4
00402b94  _nop
00402b98  ori a0,zero,0x8000
00402b9c  ori a1,zero,0xc000
00402ba0  lui v0,0x40
00402ba4  addiu a2,v0,0x56cc
00402ba8  jal 0x00401d68
00402bac  _nop
00402bb0  lw gp,0x10(s8)
00402bb4  bne v0,zero,0x00402e0c
00402bb8  _nop
00402bbc  b 0x00402e18
00402bc0  _nop
00402bc4  lw a0,0x28(s8)
00402bc8  lui v0,0x40
00402bcc  addiu a1,v0,0x58f0
00402bd0  lw v0,-0x7fa4(gp)
00402bd4  nop
00402bd8  move t9,v0
00402bdc  jalr t9
00402be0  _nop
00402be4  lw gp,0x10(s8)
00402be8  bne v0,zero,0x00402c1c
00402bec  _nop
00402bf0  ori a0,zero,0xc000
00402bf4  lui a1,0x1
00402bf8  lui v0,0x40
00402bfc  addiu a2,v0,0x56d8
00402c00  jal 0x00401d68
00402c04  _nop
00402c08  lw gp,0x10(s8)
00402c0c  bne v0,zero,0x00402e0c
00402c10  _nop
00402c14  b 0x00402e18
00402c18  _nop
00402c1c  lw a0,0x28(s8)
00402c20  lui v0,0x40
00402c24  addiu a1,v0,0x58f8
00402c28  lw v0,-0x7fa4(gp)
00402c2c  nop
00402c30  move t9,v0
00402c34  jalr t9
00402c38  _nop
00402c3c  lw gp,0x10(s8)
00402c40  bne v0,zero,0x00402c6c
00402c44  _nop
00402c48  lui v0,0x40
00402c4c  addiu a0,v0,0x5790
00402c50  jal 0x00402404
00402c54  _nop
00402c58  lw gp,0x10(s8)
00402c5c  bne v0,zero,0x00402e0c
00402c60  _nop
00402c64  b 0x00402e18
00402c68  _nop
00402c6c  lw a0,0x28(s8)
00402c70  lui v0,0x40
00402c74  addiu a1,v0,0x58fc
00402c78  lw v0,-0x7fa4(gp)
00402c7c  nop
00402c80  move t9,v0
00402c84  jalr t9
00402c88  _nop
00402c8c  lw gp,0x10(s8)
00402c90  bne v0,zero,0x00402cbc
00402c94  _nop
00402c98  lui v0,0x40
00402c9c  addiu a0,v0,0x5794
00402ca0  jal 0x00402404
00402ca4  _nop
00402ca8  lw gp,0x10(s8)
00402cac  bne v0,zero,0x00402e0c
00402cb0  _nop
00402cb4  b 0x00402e18
00402cb8  _nop
00402cbc  lw a0,0x28(s8)
00402cc0  lui v0,0x40
00402cc4  addiu a1,v0,0x5900
00402cc8  lw v0,-0x7fa4(gp)
00402ccc  nop
00402cd0  move t9,v0
00402cd4  jalr t9
00402cd8  _nop
00402cdc  lw gp,0x10(s8)
00402ce0  bne v0,zero,0x00402d0c
00402ce4  _nop
00402ce8  lui v0,0x40
00402cec  addiu a0,v0,0x5798
00402cf0  jal 0x00402404
00402cf4  _nop
00402cf8  lw gp,0x10(s8)
00402cfc  bne v0,zero,0x00402e0c
00402d00  _nop
00402d04  b 0x00402e18
00402d08  _nop
00402d0c  lui v0,0x40
00402d10  addiu a0,v0,0x5904
00402d14  lw v0,-0x7f50(gp)
00402d18  nop
00402d1c  move t9,v0
00402d20  jalr t9
00402d24  _nop
00402d28  lw gp,0x10(s8)
00402d2c  lui v0,0x40
00402d30  addiu a0,v0,0x5934
00402d34  lw v0,-0x7f50(gp)
00402d38  nop
00402d3c  move t9,v0
00402d40  jalr t9
00402d44  _nop
00402d48  lw gp,0x10(s8)
00402d4c  lui v0,0x40
00402d50  addiu a0,v0,0x5980
00402d54  lw v0,-0x7f50(gp)
00402d58  nop
00402d5c  move t9,v0
00402d60  jalr t9
00402d64  _nop
00402d68  lw gp,0x10(s8)
00402d6c  lui v0,0x40
00402d70  addiu a0,v0,0x59a4
00402d74  lw v0,-0x7f50(gp)
00402d78  nop
00402d7c  move t9,v0
00402d80  jalr t9
00402d84  _nop
00402d88  lw gp,0x10(s8)
00402d8c  lui v0,0x40
00402d90  addiu a0,v0,0x59d0
00402d94  lw v0,-0x7f50(gp)
00402d98  nop
00402d9c  move t9,v0
00402da0  jalr t9
00402da4  _nop
00402da8  lw gp,0x10(s8)
00402dac  lui v0,0x40
00402db0  addiu a0,v0,0x59fc
00402db4  lw v0,-0x7f50(gp)
00402db8  nop
00402dbc  move t9,v0
00402dc0  jalr t9
00402dc4  _nop
00402dc8  lw gp,0x10(s8)
00402dcc  lui v0,0x40
00402dd0  addiu a0,v0,0x5a38
00402dd4  lw v0,-0x7f50(gp)
00402dd8  nop
00402ddc  move t9,v0
00402de0  jalr t9
00402de4  _nop
00402de8  lw gp,0x10(s8)
00402dec  lui v0,0x40
00402df0  addiu a0,v0,0x5a78
00402df4  lw v0,-0x7f50(gp)
00402df8  nop
00402dfc  move t9,v0
00402e00  jalr t9
00402e04  _nop
00402e08  lw gp,0x10(s8)
00402e0c  li v0,0x1
00402e10  b 0x00402e94
00402e14  _nop
00402e18  lw v0,-0x7fb0(gp)
00402e1c  nop
00402e20  lw s1,0x0(v0)
00402e24  lui v0,0x40
00402e28  addiu s0,v0,0x5ab8
00402e2c  lw v0,-0x7fbc(gp)
00402e30  nop
00402e34  move t9,v0
00402e38  jalr t9
00402e3c  _nop
00402e40  lw gp,0x10(s8)
00402e44  lw v0,0x0(v0)
00402e48  nop
00402e4c  move a0,v0
00402e50  lw v0,-0x7f38(gp)
00402e54  nop
00402e58  move t9,v0
00402e5c  jalr t9
00402e60  _nop
00402e64  lw gp,0x10(s8)
00402e68  move a0,s1
00402e6c  move a1,s0
00402e70  lw a2,0x28(s8)
00402e74  move a3,v0
00402e78  lw v0,-0x7f78(gp)
00402e7c  nop
00402e80  move t9,v0
00402e84  jalr t9
00402e88  _nop
00402e8c  lw gp,0x10(s8)
00402e90  clear v0
00402e94  move sp,s8
00402e98  lw ra,0x24(sp)
00402e9c  lw s8,0x20(sp)
00402ea0  lw s1,0x1c(sp)
00402ea4  lw s0,0x18(sp)
00402ea8  addiu sp,sp,0x28
00402eac  jr ra
00402eb0  _nop
