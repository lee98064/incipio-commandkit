# FUN_004008c0 @ 004008c0
004008c0  addiu sp,sp,-0x68
004008c4  sw ra,0x64(sp)
004008c8  sw s8,0x60(sp)
004008cc  move s8,sp
004008d0  lui gp,0x42
004008d4  addiu gp,gp,-0x7130
004008d8  sw gp,0x10(sp)
004008dc  sw a0,0x68(s8)
004008e0  lw v0,0x68(s8)
004008e4  nop
004008e8  addiu v0,v0,0x4
004008ec  lw v0,0x0(v0)
004008f0  nop
004008f4  beq v0,zero,0x00400c88
004008f8  _nop
004008fc  lui v0,0x40
00400900  addiu a0,v0,0xe50
00400904  li a1,0x82
00400908  lw v0,-0x7fc4(gp)
0040090c  nop
00400910  move t9,v0
00400914  jalr t9
00400918  _nop
0040091c  lw gp,0x10(s8)
00400920  sw v0,0x18(s8)
00400924  lw v0,0x18(s8)
00400928  nop
0040092c  bgez v0,0x0040095c
00400930  _nop
00400934  lui v0,0x40
00400938  addiu a0,v0,0xe5c
0040093c  lw v0,-0x7f9c(gp)
00400940  nop
00400944  move t9,v0
00400948  jalr t9
0040094c  _nop
00400950  lw gp,0x10(s8)
00400954  b 0x00400ca4
00400958  _nop
0040095c  addiu v1,s8,0x24
00400960  lw v0,0x68(s8)
00400964  nop
00400968  addiu v0,v0,0x4
0040096c  lw v0,0x0(v0)
00400970  move a0,v1
00400974  move a1,v0
00400978  lw v0,-0x7f94(gp)
0040097c  nop
00400980  move t9,v0
00400984  jalr t9
00400988  _nop
0040098c  lw gp,0x10(s8)
00400990  addiu v0,s8,0x24
00400994  move a0,v0
00400998  lui v0,0x40
0040099c  addiu a1,v0,0xe70
004009a0  lw v0,-0x7fbc(gp)
004009a4  nop
004009a8  move t9,v0
004009ac  jalr t9
004009b0  _nop
004009b4  lw gp,0x10(s8)
004009b8  bne v0,zero,0x00400b00
004009bc  _nop
004009c0  lw v0,0x68(s8)
004009c4  nop
004009c8  addiu v0,v0,0x8
004009cc  lw v0,0x0(v0)
004009d0  nop
004009d4  beq v0,zero,0x00400c94
004009d8  _nop
004009dc  lw v0,0x68(s8)
004009e0  nop
004009e4  addiu v0,v0,0x8
004009e8  lw v0,0x0(v0)
004009ec  nop
004009f0  sw v0,0x20(s8)
004009f4  b 0x00400a0c
004009f8  _nop
004009fc  lw v0,0x20(s8)
00400a00  nop
00400a04  addiu v0,v0,0x1
00400a08  sw v0,0x20(s8)
00400a0c  lw v0,0x20(s8)
00400a10  nop
00400a14  lbu v0,0x0(v0)
00400a18  nop
00400a1c  beq v0,zero,0x00400a3c
00400a20  _nop
00400a24  lw v0,0x20(s8)
00400a28  nop
00400a2c  lbu v1,0x0(v0)
00400a30  li v0,0x3d
00400a34  bne v1,v0,0x004009fc
00400a38  _nop
00400a3c  addiu v0,s8,0x24
00400a40  addiu v1,v0,0xa
00400a44  lw v0,0x20(s8)
00400a48  nop
00400a4c  lbu v0,0x0(v0)
00400a50  nop
00400a54  beq v0,zero,0x00400a70
00400a58  _nop
00400a5c  lw v0,0x20(s8)
00400a60  nop
00400a64  addiu v0,v0,0x1
00400a68  b 0x00400a78
00400a6c  _nop
00400a70  lui v0,0x40
00400a74  addiu v0,v0,0xe74
00400a78  move a0,v1
00400a7c  move a1,v0
00400a80  lw v0,-0x7f94(gp)
00400a84  nop
00400a88  move t9,v0
00400a8c  jalr t9
00400a90  _nop
00400a94  lw gp,0x10(s8)
00400a98  addiu v0,s8,0x24
00400a9c  addiu v1,v0,0xa
00400aa0  lui v0,0x40
00400aa4  addiu v0,v0,0xe7c
00400aa8  move a0,v1
00400aac  move a1,v0
00400ab0  lw v0,-0x7fb0(gp)
00400ab4  nop
00400ab8  move t9,v0
00400abc  jalr t9
00400ac0  _nop
00400ac4  lw gp,0x10(s8)
00400ac8  addiu v0,s8,0x24
00400acc  addiu v1,v0,0xa
00400ad0  lui v0,0x40
00400ad4  addiu v0,v0,0xe80
00400ad8  move a0,v1
00400adc  move a1,v0
00400ae0  lw v0,-0x7fb0(gp)
00400ae4  nop
00400ae8  move t9,v0
00400aec  jalr t9
00400af0  _nop
00400af4  lw gp,0x10(s8)
00400af8  b 0x00400c08
00400afc  _nop
00400b00  addiu v0,s8,0x24
00400b04  move a0,v0
00400b08  lui v0,0x40
00400b0c  addiu a1,v0,0xe88
00400b10  lw v0,-0x7fbc(gp)
00400b14  nop
00400b18  move t9,v0
00400b1c  jalr t9
00400b20  _nop
00400b24  lw gp,0x10(s8)
00400b28  bne v0,zero,0x00400c08
00400b2c  _nop
00400b30  lw v0,0x68(s8)
00400b34  nop
00400b38  addiu v0,v0,0x8
00400b3c  lw v0,0x0(v0)
00400b40  nop
00400b44  beq v0,zero,0x00400ca0
00400b48  _nop
00400b4c  lw v0,0x68(s8)
00400b50  nop
00400b54  addiu v0,v0,0x8
00400b58  lw v0,0x0(v0)
00400b5c  nop
00400b60  sw v0,0x20(s8)
00400b64  b 0x00400b7c
00400b68  _nop
00400b6c  lw v0,0x20(s8)
00400b70  nop
00400b74  addiu v0,v0,0x1
00400b78  sw v0,0x20(s8)
00400b7c  lw v0,0x20(s8)
00400b80  nop
00400b84  lbu v0,0x0(v0)
00400b88  nop
00400b8c  beq v0,zero,0x00400bac
00400b90  _nop
00400b94  lw v0,0x20(s8)
00400b98  nop
00400b9c  lbu v1,0x0(v0)
00400ba0  li v0,0x3d
00400ba4  bne v1,v0,0x00400b6c
00400ba8  _nop
00400bac  addiu v0,s8,0x24
00400bb0  addiu v1,v0,0xa
00400bb4  lw v0,0x20(s8)
00400bb8  nop
00400bbc  lbu v0,0x0(v0)
00400bc0  nop
00400bc4  beq v0,zero,0x00400be0
00400bc8  _nop
00400bcc  lw v0,0x20(s8)
00400bd0  nop
00400bd4  addiu v0,v0,0x1
00400bd8  b 0x00400be8
00400bdc  _nop
00400be0  lui v0,0x40
00400be4  addiu v0,v0,0xe74
00400be8  move a0,v1
00400bec  move a1,v0
00400bf0  lw v0,-0x7f94(gp)
00400bf4  nop
00400bf8  move t9,v0
00400bfc  jalr t9
00400c00  _nop
00400c04  lw gp,0x10(s8)
00400c08  addiu v0,s8,0x24
00400c0c  lw a0,0x18(s8)
00400c10  move a1,v0
00400c14  li a2,0x3c
00400c18  lw v0,-0x7fac(gp)
00400c1c  nop
00400c20  move t9,v0
00400c24  jalr t9
00400c28  _nop
00400c2c  lw gp,0x10(s8)
00400c30  sw v0,0x1c(s8)
00400c34  lw v0,0x1c(s8)
00400c38  nop
00400c3c  bgtz v0,0x00400c64
00400c40  _nop
00400c44  lui v0,0x40
00400c48  addiu a0,v0,0xe8c
00400c4c  lw v0,-0x7f9c(gp)
00400c50  nop
00400c54  move t9,v0
00400c58  jalr t9
00400c5c  _nop
00400c60  lw gp,0x10(s8)
00400c64  lw a0,0x18(s8)
00400c68  lw v0,-0x7fcc(gp)
00400c6c  nop
00400c70  move t9,v0
00400c74  jalr t9
00400c78  _nop
00400c7c  lw gp,0x10(s8)
00400c80  b 0x00400ca4
00400c84  _nop
00400c88  nop
00400c8c  b 0x00400ca4
00400c90  _nop
00400c94  nop
00400c98  b 0x00400ca4
00400c9c  _nop
00400ca0  nop
00400ca4  li v0,0x1
00400ca8  move sp,s8
00400cac  lw ra,0x64(sp)
00400cb0  lw s8,0x60(sp)
00400cb4  addiu sp,sp,0x68
00400cb8  jr ra
00400cbc  _nop
