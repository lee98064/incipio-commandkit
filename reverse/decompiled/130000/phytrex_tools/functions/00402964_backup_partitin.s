# backup_partitin @ 00402964
00402964  addiu sp,sp,-0x28
00402968  sw ra,0x24(sp)
0040296c  sw s8,0x20(sp)
00402970  sw s1,0x1c(sp)
00402974  sw s0,0x18(sp)
00402978  move s8,sp
0040297c  lui gp,0x42
00402980  addiu gp,gp,-0x21a0
00402984  sw gp,0x10(sp)
00402988  sw a0,0x28(s8)
0040298c  lw a0,0x28(s8)
00402990  lui v0,0x40
00402994  addiu a1,v0,0x55d0
00402998  lw v0,-0x7fa4(gp)
0040299c  nop
004029a0  move t9,v0
004029a4  jalr t9
004029a8  _nop
004029ac  lw gp,0x10(s8)
004029b0  bne v0,zero,0x004029e4
004029b4  _nop
004029b8  li a0,0x6000
004029bc  ori a1,zero,0x8000
004029c0  lui v0,0x40
004029c4  addiu a2,v0,0x55d8
004029c8  jal 0x0040164c
004029cc  _nop
004029d0  lw gp,0x10(s8)
004029d4  bne v0,zero,0x00402d8c
004029d8  _nop
004029dc  b 0x00402d98
004029e0  _nop
004029e4  lw a0,0x28(s8)
004029e8  lui v0,0x40
004029ec  addiu a1,v0,0x55e4
004029f0  lw v0,-0x7fa4(gp)
004029f4  nop
004029f8  move t9,v0
004029fc  jalr t9
00402a00  _nop
00402a04  lw gp,0x10(s8)
00402a08  bne v0,zero,0x00402a3c
00402a0c  _nop
00402a10  ori a0,zero,0x8000
00402a14  ori a1,zero,0xc000
00402a18  lui v0,0x40
00402a1c  addiu a2,v0,0x52c4
00402a20  jal 0x0040164c
00402a24  _nop
00402a28  lw gp,0x10(s8)
00402a2c  bne v0,zero,0x00402d8c
00402a30  _nop
00402a34  b 0x00402d98
00402a38  _nop
00402a3c  lw a0,0x28(s8)
00402a40  lui v0,0x40
00402a44  addiu a1,v0,0x55ec
00402a48  lw v0,-0x7fa4(gp)
00402a4c  nop
00402a50  move t9,v0
00402a54  jalr t9
00402a58  _nop
00402a5c  lw gp,0x10(s8)
00402a60  bne v0,zero,0x00402a94
00402a64  _nop
00402a68  ori a0,zero,0xc000
00402a6c  lui a1,0x1
00402a70  lui v0,0x40
00402a74  addiu a2,v0,0x52d0
00402a78  jal 0x0040164c
00402a7c  _nop
00402a80  lw gp,0x10(s8)
00402a84  bne v0,zero,0x00402d8c
00402a88  _nop
00402a8c  b 0x00402d98
00402a90  _nop
00402a94  lw a0,0x28(s8)
00402a98  lui v0,0x40
00402a9c  addiu a1,v0,0x55f4
00402aa0  lw v0,-0x7fa4(gp)
00402aa4  nop
00402aa8  move t9,v0
00402aac  jalr t9
00402ab0  _nop
00402ab4  lw gp,0x10(s8)
00402ab8  bne v0,zero,0x00402aec
00402abc  _nop
00402ac0  li a0,0x6000
00402ac4  ori a1,zero,0x8000
00402ac8  lui v0,0x40
00402acc  addiu a2,v0,0x55fc
00402ad0  jal 0x00401ce8
00402ad4  _nop
00402ad8  lw gp,0x10(s8)
00402adc  bne v0,zero,0x00402d8c
00402ae0  _nop
00402ae4  b 0x00402d98
00402ae8  _nop
00402aec  lw a0,0x28(s8)
00402af0  lui v0,0x40
00402af4  addiu a1,v0,0x5608
00402af8  lw v0,-0x7fa4(gp)
00402afc  nop
00402b00  move t9,v0
00402b04  jalr t9
00402b08  _nop
00402b0c  lw gp,0x10(s8)
00402b10  bne v0,zero,0x00402b44
00402b14  _nop
00402b18  ori a0,zero,0x8000
00402b1c  ori a1,zero,0xc000
00402b20  lui v0,0x40
00402b24  addiu a2,v0,0x53ec
00402b28  jal 0x00401ce8
00402b2c  _nop
00402b30  lw gp,0x10(s8)
00402b34  bne v0,zero,0x00402d8c
00402b38  _nop
00402b3c  b 0x00402d98
00402b40  _nop
00402b44  lw a0,0x28(s8)
00402b48  lui v0,0x40
00402b4c  addiu a1,v0,0x5610
00402b50  lw v0,-0x7fa4(gp)
00402b54  nop
00402b58  move t9,v0
00402b5c  jalr t9
00402b60  _nop
00402b64  lw gp,0x10(s8)
00402b68  bne v0,zero,0x00402b9c
00402b6c  _nop
00402b70  ori a0,zero,0xc000
00402b74  lui a1,0x1
00402b78  lui v0,0x40
00402b7c  addiu a2,v0,0x53f8
00402b80  jal 0x00401ce8
00402b84  _nop
00402b88  lw gp,0x10(s8)
00402b8c  bne v0,zero,0x00402d8c
00402b90  _nop
00402b94  b 0x00402d98
00402b98  _nop
00402b9c  lw a0,0x28(s8)
00402ba0  lui v0,0x40
00402ba4  addiu a1,v0,0x5618
00402ba8  lw v0,-0x7fa4(gp)
00402bac  nop
00402bb0  move t9,v0
00402bb4  jalr t9
00402bb8  _nop
00402bbc  lw gp,0x10(s8)
00402bc0  bne v0,zero,0x00402bec
00402bc4  _nop
00402bc8  lui v0,0x40
00402bcc  addiu a0,v0,0x54b0
00402bd0  jal 0x00402384
00402bd4  _nop
00402bd8  lw gp,0x10(s8)
00402bdc  bne v0,zero,0x00402d8c
00402be0  _nop
00402be4  b 0x00402d98
00402be8  _nop
00402bec  lw a0,0x28(s8)
00402bf0  lui v0,0x40
00402bf4  addiu a1,v0,0x561c
00402bf8  lw v0,-0x7fa4(gp)
00402bfc  nop
00402c00  move t9,v0
00402c04  jalr t9
00402c08  _nop
00402c0c  lw gp,0x10(s8)
00402c10  bne v0,zero,0x00402c3c
00402c14  _nop
00402c18  lui v0,0x40
00402c1c  addiu a0,v0,0x54b4
00402c20  jal 0x00402384
00402c24  _nop
00402c28  lw gp,0x10(s8)
00402c2c  bne v0,zero,0x00402d8c
00402c30  _nop
00402c34  b 0x00402d98
00402c38  _nop
00402c3c  lw a0,0x28(s8)
00402c40  lui v0,0x40
00402c44  addiu a1,v0,0x5620
00402c48  lw v0,-0x7fa4(gp)
00402c4c  nop
00402c50  move t9,v0
00402c54  jalr t9
00402c58  _nop
00402c5c  lw gp,0x10(s8)
00402c60  bne v0,zero,0x00402c8c
00402c64  _nop
00402c68  lui v0,0x40
00402c6c  addiu a0,v0,0x54b8
00402c70  jal 0x00402384
00402c74  _nop
00402c78  lw gp,0x10(s8)
00402c7c  bne v0,zero,0x00402d8c
00402c80  _nop
00402c84  b 0x00402d98
00402c88  _nop
00402c8c  lui v0,0x40
00402c90  addiu a0,v0,0x5624
00402c94  lw v0,-0x7f50(gp)
00402c98  nop
00402c9c  move t9,v0
00402ca0  jalr t9
00402ca4  _nop
00402ca8  lw gp,0x10(s8)
00402cac  lui v0,0x40
00402cb0  addiu a0,v0,0x5654
00402cb4  lw v0,-0x7f50(gp)
00402cb8  nop
00402cbc  move t9,v0
00402cc0  jalr t9
00402cc4  _nop
00402cc8  lw gp,0x10(s8)
00402ccc  lui v0,0x40
00402cd0  addiu a0,v0,0x56a0
00402cd4  lw v0,-0x7f50(gp)
00402cd8  nop
00402cdc  move t9,v0
00402ce0  jalr t9
00402ce4  _nop
00402ce8  lw gp,0x10(s8)
00402cec  lui v0,0x40
00402cf0  addiu a0,v0,0x56c4
00402cf4  lw v0,-0x7f50(gp)
00402cf8  nop
00402cfc  move t9,v0
00402d00  jalr t9
00402d04  _nop
00402d08  lw gp,0x10(s8)
00402d0c  lui v0,0x40
00402d10  addiu a0,v0,0x56f0
00402d14  lw v0,-0x7f50(gp)
00402d18  nop
00402d1c  move t9,v0
00402d20  jalr t9
00402d24  _nop
00402d28  lw gp,0x10(s8)
00402d2c  lui v0,0x40
00402d30  addiu a0,v0,0x571c
00402d34  lw v0,-0x7f50(gp)
00402d38  nop
00402d3c  move t9,v0
00402d40  jalr t9
00402d44  _nop
00402d48  lw gp,0x10(s8)
00402d4c  lui v0,0x40
00402d50  addiu a0,v0,0x5758
00402d54  lw v0,-0x7f50(gp)
00402d58  nop
00402d5c  move t9,v0
00402d60  jalr t9
00402d64  _nop
00402d68  lw gp,0x10(s8)
00402d6c  lui v0,0x40
00402d70  addiu a0,v0,0x5798
00402d74  lw v0,-0x7f50(gp)
00402d78  nop
00402d7c  move t9,v0
00402d80  jalr t9
00402d84  _nop
00402d88  lw gp,0x10(s8)
00402d8c  li v0,0x1
00402d90  b 0x00402e14
00402d94  _nop
00402d98  lw v0,-0x7fb0(gp)
00402d9c  nop
00402da0  lw s1,0x0(v0)
00402da4  lui v0,0x40
00402da8  addiu s0,v0,0x57d8
00402dac  lw v0,-0x7fbc(gp)
00402db0  nop
00402db4  move t9,v0
00402db8  jalr t9
00402dbc  _nop
00402dc0  lw gp,0x10(s8)
00402dc4  lw v0,0x0(v0)
00402dc8  nop
00402dcc  move a0,v0
00402dd0  lw v0,-0x7f3c(gp)
00402dd4  nop
00402dd8  move t9,v0
00402ddc  jalr t9
00402de0  _nop
00402de4  lw gp,0x10(s8)
00402de8  move a0,s1
00402dec  move a1,s0
00402df0  lw a2,0x28(s8)
00402df4  move a3,v0
00402df8  lw v0,-0x7f78(gp)
00402dfc  nop
00402e00  move t9,v0
00402e04  jalr t9
00402e08  _nop
00402e0c  lw gp,0x10(s8)
00402e10  clear v0
00402e14  move sp,s8
00402e18  lw ra,0x24(sp)
00402e1c  lw s8,0x20(sp)
00402e20  lw s1,0x1c(sp)
00402e24  lw s0,0x18(sp)
00402e28  addiu sp,sp,0x28
00402e2c  jr ra
00402e30  _nop
