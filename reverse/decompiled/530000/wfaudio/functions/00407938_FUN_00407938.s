# FUN_00407938 @ 00407938
00407938  addiu sp,sp,-0xa0
0040793c  sw ra,0x9c(sp)
00407940  sw s4,0x98(sp)
00407944  sw s3,0x94(sp)
00407948  sw s2,0x90(sp)
0040794c  sw s1,0x8c(sp)
00407950  sw s0,0x88(sp)
00407954  lui gp,0x43
00407958  addiu gp,gp,-0x4c90
0040795c  sw gp,0x18(sp)
00407960  lw t9,-0x7f90(gp)
00407964  li a1,0x302
00407968  li a2,0x3f
0040796c  jalr t9
00407970  _move s0,a0
00407974  lw gp,0x18(sp)
00407978  bgez v0,0x004079bc
0040797c  _move s1,v0
00407980  lw v0,-0x7f2c(gp)
00407984  lw t9,-0x7e64(gp)
00407988  lui a1,0x41
0040798c  lw a0,0x0(v0)
00407990  lui a2,0x41
00407994  li v0,0x19c
00407998  lui a3,0x41
0040799c  sw v0,0x10(sp)
004079a0  sw s0,0x14(sp)
004079a4  addiu a1,a1,0x134c
004079a8  addiu a2,a2,0x1308
004079ac  jalr t9
004079b0  _addiu a3,a3,0x1794
004079b4  b 0x00407cf4
004079b8  _nop
004079bc  lw t9,-0x7d90(gp)
004079c0  addiu s0,sp,0x20
004079c4  lui a1,0x41
004079c8  addiu a1,a1,0x1384
004079cc  jalr t9
004079d0  _move a0,s0
004079d4  lw gp,0x18(sp)
004079d8  move a0,s0
004079dc  lui s2,0x41
004079e0  lw t9,-0x7f88(gp)
004079e4  addiu s2,s2,0x20f8
004079e8  jalr t9
004079ec  _lui s4,0x41
004079f0  lw gp,0x18(sp)
004079f4  move a2,v0
004079f8  move a0,s1
004079fc  lw t9,-0x7e60(gp)
00407a00  move a1,s0
00407a04  jalr t9
00407a08  _lui s3,0x41
00407a0c  lw gp,0x18(sp)
00407a10  lui a2,0x41
00407a14  addiu a2,a2,0x1390
00407a18  lw t9,-0x7f24(gp)
00407a1c  move a1,s2
00407a20  jalr t9
00407a24  _move a0,s0
00407a28  lw gp,0x18(sp)
00407a2c  nop
00407a30  lw t9,-0x7f88(gp)
00407a34  nop
00407a38  jalr t9
00407a3c  _move a0,s0
00407a40  lw gp,0x18(sp)
00407a44  move a2,v0
00407a48  move a0,s1
00407a4c  lw t9,-0x7e60(gp)
00407a50  nop
00407a54  jalr t9
00407a58  _move a1,s0
00407a5c  lw gp,0x18(sp)
00407a60  lui a2,0x41
00407a64  addiu a2,a2,0x13a8
00407a68  lw t9,-0x7f24(gp)
00407a6c  move a1,s2
00407a70  jalr t9
00407a74  _move a0,s0
00407a78  lw gp,0x18(sp)
00407a7c  nop
00407a80  lw t9,-0x7f88(gp)
00407a84  nop
00407a88  jalr t9
00407a8c  _move a0,s0
00407a90  lw gp,0x18(sp)
00407a94  move a2,v0
00407a98  move a0,s1
00407a9c  lw t9,-0x7e60(gp)
00407aa0  nop
00407aa4  jalr t9
00407aa8  _move a1,s0
00407aac  lw gp,0x18(sp)
00407ab0  move a1,s2
00407ab4  addiu a2,s4,0x13ec
00407ab8  lw t9,-0x7f24(gp)
00407abc  nop
00407ac0  jalr t9
00407ac4  _move a0,s0
00407ac8  lw gp,0x18(sp)
00407acc  nop
00407ad0  lw t9,-0x7f88(gp)
00407ad4  nop
00407ad8  jalr t9
00407adc  _move a0,s0
00407ae0  lw gp,0x18(sp)
00407ae4  move a2,v0
00407ae8  move a0,s1
00407aec  lw t9,-0x7e60(gp)
00407af0  nop
00407af4  jalr t9
00407af8  _move a1,s0
00407afc  lw gp,0x18(sp)
00407b00  lui a2,0x41
00407b04  addiu a2,a2,0x13f4
00407b08  lw t9,-0x7f24(gp)
00407b0c  move a1,s2
00407b10  jalr t9
00407b14  _move a0,s0
00407b18  lw gp,0x18(sp)
00407b1c  nop
00407b20  lw t9,-0x7f88(gp)
00407b24  nop
00407b28  jalr t9
00407b2c  _move a0,s0
00407b30  lw gp,0x18(sp)
00407b34  move a2,v0
00407b38  move a0,s1
00407b3c  lw t9,-0x7e60(gp)
00407b40  nop
00407b44  jalr t9
00407b48  _move a1,s0
00407b4c  lw gp,0x18(sp)
00407b50  lui a2,0x41
00407b54  addiu a2,a2,0x140c
00407b58  lw t9,-0x7f24(gp)
00407b5c  move a1,s2
00407b60  jalr t9
00407b64  _move a0,s0
00407b68  lw gp,0x18(sp)
00407b6c  nop
00407b70  lw t9,-0x7f88(gp)
00407b74  nop
00407b78  jalr t9
00407b7c  _move a0,s0
00407b80  lw gp,0x18(sp)
00407b84  move a2,v0
00407b88  move a0,s1
00407b8c  lw t9,-0x7e60(gp)
00407b90  nop
00407b94  jalr t9
00407b98  _move a1,s0
00407b9c  lw gp,0x18(sp)
00407ba0  addiu a2,s4,0x13ec
00407ba4  move a1,s2
00407ba8  lw t9,-0x7f24(gp)
00407bac  nop
00407bb0  jalr t9
00407bb4  _move a0,s0
00407bb8  lw gp,0x18(sp)
00407bbc  nop
00407bc0  lw t9,-0x7f88(gp)
00407bc4  nop
00407bc8  jalr t9
00407bcc  _move a0,s0
00407bd0  lw gp,0x18(sp)
00407bd4  move a2,v0
00407bd8  move a0,s1
00407bdc  lw t9,-0x7e60(gp)
00407be0  nop
00407be4  jalr t9
00407be8  _move a1,s0
00407bec  lw gp,0x18(sp)
00407bf0  lui a2,0x41
00407bf4  addiu a2,a2,0x1450
00407bf8  lw t9,-0x7f24(gp)
00407bfc  move a1,s2
00407c00  jalr t9
00407c04  _move a0,s0
00407c08  lw gp,0x18(sp)
00407c0c  nop
00407c10  lw t9,-0x7f88(gp)
00407c14  nop
00407c18  jalr t9
00407c1c  _move a0,s0
00407c20  lw gp,0x18(sp)
00407c24  move a2,v0
00407c28  move a0,s1
00407c2c  lw t9,-0x7e60(gp)
00407c30  nop
00407c34  jalr t9
00407c38  _move a1,s0
00407c3c  lw gp,0x18(sp)
00407c40  move a1,s2
00407c44  addiu a2,s3,0x1488
00407c48  lw t9,-0x7f24(gp)
00407c4c  nop
00407c50  jalr t9
00407c54  _move a0,s0
00407c58  lw gp,0x18(sp)
00407c5c  nop
00407c60  lw t9,-0x7f88(gp)
00407c64  nop
00407c68  jalr t9
00407c6c  _move a0,s0
00407c70  lw gp,0x18(sp)
00407c74  move a2,v0
00407c78  move a0,s1
00407c7c  lw t9,-0x7e60(gp)
00407c80  nop
00407c84  jalr t9
00407c88  _move a1,s0
00407c8c  lw gp,0x18(sp)
00407c90  move a1,s2
00407c94  addiu a2,s3,0x1488
00407c98  lw t9,-0x7f24(gp)
00407c9c  nop
00407ca0  jalr t9
00407ca4  _move a0,s0
00407ca8  lw gp,0x18(sp)
00407cac  nop
00407cb0  lw t9,-0x7f88(gp)
00407cb4  nop
00407cb8  jalr t9
00407cbc  _move a0,s0
00407cc0  lw gp,0x18(sp)
00407cc4  move a0,s1
00407cc8  move a1,s0
00407ccc  lw t9,-0x7e60(gp)
00407cd0  nop
00407cd4  jalr t9
00407cd8  _move a2,v0
00407cdc  lw gp,0x18(sp)
00407ce0  nop
00407ce4  lw t9,-0x7fc4(gp)
00407ce8  nop
00407cec  jalr t9
00407cf0  _move a0,s1
00407cf4  lw ra,0x9c(sp)
00407cf8  lw s4,0x98(sp)
00407cfc  lw s3,0x94(sp)
00407d00  lw s2,0x90(sp)
00407d04  lw s1,0x8c(sp)
00407d08  lw s0,0x88(sp)
00407d0c  jr ra
00407d10  _addiu sp,sp,0xa0
