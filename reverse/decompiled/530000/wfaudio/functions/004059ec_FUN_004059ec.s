# FUN_004059ec @ 004059ec
004059ec  addiu sp,sp,-0x30
004059f0  sw ra,0x2c(sp)
004059f4  sw s2,0x28(sp)
004059f8  sw s1,0x24(sp)
004059fc  sw s0,0x20(sp)
00405a00  lui gp,0x43
00405a04  addiu gp,gp,-0x4c90
00405a08  sw gp,0x10(sp)
00405a0c  lhu a1,0x0(a0)
00405a10  li v0,0x2
00405a14  lw t9,-0x7db0(gp)
00405a18  bne a1,v0,0x00405d84
00405a1c  _move s0,a0
00405a20  lw a1,0x4(a0)
00405a24  lui a0,0x41
00405a28  jalr t9
00405a2c  _addiu a0,a0,0xff4
00405a30  lw v0,0x4(s0)
00405a34  lw gp,0x10(sp)
00405a38  bne v0,zero,0x00405d90
00405a3c  _nop
00405a40  lw t9,-0x7e18(gp)
00405a44  lui a0,0x41
00405a48  jalr t9
00405a4c  _addiu a0,a0,0x1004
00405a50  lw gp,0x10(sp)
00405a54  lui a0,0x41
00405a58  lw t9,-0x7e18(gp)
00405a5c  nop
00405a60  jalr t9
00405a64  _addiu a0,a0,0x1028
00405a68  lw gp,0x10(sp)
00405a6c  lui a0,0x41
00405a70  lw t9,-0x7e0c(gp)
00405a74  nop
00405a78  jalr t9
00405a7c  _addiu a0,a0,0x1044
00405a80  lw gp,0x10(sp)
00405a84  lui a0,0x41
00405a88  lw t9,-0x7df0(gp)
00405a8c  nop
00405a90  jalr t9
00405a94  _addiu a0,a0,0x540
00405a98  lw gp,0x10(sp)
00405a9c  beq v0,zero,0x00405abc
00405aa0  _li a0,0x2b0
00405aa4  lw t9,-0x7e24(gp)
00405aa8  nop
00405aac  jalr t9
00405ab0  _addiu a1,sp,0x18
00405ab4  lw gp,0x10(sp)
00405ab8  nop
00405abc  lw t9,-0x7f3c(gp)
00405ac0  nop
00405ac4  jalr t9
00405ac8  _nop
00405acc  move s0,v0
00405ad0  lw v0,0x18(sp)
00405ad4  lw gp,0x10(sp)
00405ad8  bne v0,zero,0x00405b8c
00405adc  _lui a0,0x41
00405ae0  lw t9,-0x7f64(gp)
00405ae4  lw a0,-0x7e50(gp)
00405ae8  jalr t9
00405aec  _nop
00405af0  lw gp,0x10(sp)
00405af4  nop
00405af8  lw v0,-0x7f50(gp)
00405afc  lw t9,-0x7f10(gp)
00405b00  lw a0,-0x7e50(gp)
00405b04  lw s2,0x0(v0)
00405b08  lw v0,-0x7f6c(gp)
00405b0c  nop
00405b10  lw s1,0x0(v0)
00405b14  jalr t9
00405b18  _nop
00405b1c  lw gp,0x10(sp)
00405b20  bne s2,zero,0x00405b30
00405b24  _nop
00405b28  beq s1,zero,0x00405bc0
00405b2c  _nop
00405b30  slti s0,s0,0x3
00405b34  beq s0,zero,0x00405b7c
00405b38  _nop
00405b3c  lw t9,-0x7f64(gp)
00405b40  lw a0,-0x7e50(gp)
00405b44  jalr t9
00405b48  _nop
00405b4c  lw gp,0x10(sp)
00405b50  nop
00405b54  lw v0,-0x7e40(gp)
00405b58  lw t9,-0x7f10(gp)
00405b5c  lw a0,-0x7e50(gp)
00405b60  jalr t9
00405b64  _sw zero,0x0(v0)
00405b68  lw gp,0x10(sp)
00405b6c  lui a0,0x41
00405b70  lw t9,-0x7e0c(gp)
00405b74  b 0x00405d74
00405b78  _addiu a0,a0,0x1094
00405b7c  lui a0,0x41
00405b80  lw t9,-0x7e0c(gp)
00405b84  b 0x00405d74
00405b88  _addiu a0,a0,0x10c8
00405b8c  lw t9,-0x7df0(gp)
00405b90  nop
00405b94  jalr t9
00405b98  _addiu a0,a0,0x540
00405b9c  lw gp,0x10(sp)
00405ba0  beq v0,zero,0x00405bc0
00405ba4  _li a0,0x2b0
00405ba8  lw t9,-0x7e4c(gp)
00405bac  sw zero,0x18(sp)
00405bb0  jalr t9
00405bb4  _addiu a1,sp,0x18
00405bb8  lw gp,0x10(sp)
00405bbc  nop
00405bc0  lw t9,-0x7ef4(gp)
00405bc4  lw s0,-0x7dd8(gp)
00405bc8  jalr t9
00405bcc  _nop
00405bd0  lw gp,0x10(sp)
00405bd4  nop
00405bd8  lw t9,-0x7f64(gp)
00405bdc  lw a0,-0x7e50(gp)
00405be0  jalr t9
00405be4  _nop
00405be8  lb v0,0x0(s0)
00405bec  lw gp,0x10(sp)
00405bf0  beq v0,zero,0x00405c48
00405bf4  _nop
00405bf8  lw t9,-0x7f88(gp)
00405bfc  nop
00405c00  jalr t9
00405c04  _move a0,s0
00405c08  lw gp,0x10(sp)
00405c0c  lui a0,0x41
00405c10  addiu a0,a0,0x540
00405c14  lw t9,-0x7dc4(gp)
00405c18  andi a2,v0,0xffff
00405c1c  jalr t9
00405c20  _move a1,s0
00405c24  lw gp,0x10(sp)
00405c28  move a0,s0
00405c2c  clear a1
00405c30  lw t9,-0x7ee0(gp)
00405c34  nop
00405c38  jalr t9
00405c3c  _li a2,0x100
00405c40  lw gp,0x10(sp)
00405c44  nop
00405c48  lw v0,-0x7f50(gp)
00405c4c  lw t9,-0x7f10(gp)
00405c50  lw a0,-0x7e50(gp)
00405c54  sw zero,0x0(v0)
00405c58  lw v0,-0x7f6c(gp)
00405c5c  nop
00405c60  sw zero,0x0(v0)
00405c64  lw v0,-0x7e40(gp)
00405c68  nop
00405c6c  sw zero,0x0(v0)
00405c70  lw v0,-0x7e48(gp)
00405c74  jalr t9
00405c78  _sw zero,0x0(v0)
00405c7c  lw gp,0x10(sp)
00405c80  nop
00405c84  lw t9,-0x7f64(gp)
00405c88  lw a0,-0x7d94(gp)
00405c8c  jalr t9
00405c90  _nop
00405c94  lw gp,0x10(sp)
00405c98  nop
00405c9c  lw v0,-0x7fb0(gp)
00405ca0  lw t9,-0x7f10(gp)
00405ca4  lw a0,-0x7d94(gp)
00405ca8  jalr t9
00405cac  _sw zero,0x0(v0)
00405cb0  lw gp,0x10(sp)
00405cb4  nop
00405cb8  lw t9,-0x7f64(gp)
00405cbc  lw a0,-0x7dc8(gp)
00405cc0  jalr t9
00405cc4  _nop
00405cc8  lw gp,0x10(sp)
00405ccc  lui a1,0x41
00405cd0  addiu a1,a1,0x49c
00405cd4  lw v0,-0x7fa4(gp)
00405cd8  lw t9,-0x7d90(gp)
00405cdc  lw a0,-0x7f08(gp)
00405ce0  jalr t9
00405ce4  _sw zero,0x0(v0)
00405ce8  lw gp,0x10(sp)
00405cec  nop
00405cf0  lw t9,-0x7f10(gp)
00405cf4  lw a0,-0x7dc8(gp)
00405cf8  jalr t9
00405cfc  _nop
00405d00  lw gp,0x10(sp)
00405d04  lui a0,0x41
00405d08  lw t9,-0x7e18(gp)
00405d0c  nop
00405d10  jalr t9
00405d14  _addiu a0,a0,0x888
00405d18  lw gp,0x10(sp)
00405d1c  lui a0,0x41
00405d20  lw t9,-0x7e18(gp)
00405d24  nop
00405d28  jalr t9
00405d2c  _addiu a0,a0,0x8b4
00405d30  lw gp,0x10(sp)
00405d34  lui a0,0x41
00405d38  lw t9,-0x7e18(gp)
00405d3c  nop
00405d40  jalr t9
00405d44  _addiu a0,a0,0x1064
00405d48  lw gp,0x10(sp)
00405d4c  lui a0,0x41
00405d50  lw t9,-0x7e0c(gp)
00405d54  nop
00405d58  jalr t9
00405d5c  _addiu a0,a0,0x1078
00405d60  lw gp,0x10(sp)
00405d64  lui a0,0x41
00405d68  addiu a0,a0,0x108c
00405d6c  lw t9,-0x7e18(gp)
00405d70  nop
00405d74  jalr t9
00405d78  _nop
00405d7c  b 0x00405d90
00405d80  _nop
00405d84  lui a0,0x41
00405d88  jalr t9
00405d8c  _addiu a0,a0,0x10e8
00405d90  lw ra,0x2c(sp)
00405d94  lw s2,0x28(sp)
00405d98  lw s1,0x24(sp)
00405d9c  lw s0,0x20(sp)
00405da0  clear v0
00405da4  jr ra
00405da8  _addiu sp,sp,0x30
