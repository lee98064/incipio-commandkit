# getWispRptIfaceName @ 004029f0
004029f0  addiu sp,sp,-0x48
004029f4  sw ra,0x44(sp)
004029f8  sw s2,0x40(sp)
004029fc  sw s1,0x3c(sp)
00402a00  sw s0,0x38(sp)
00402a04  lui gp,0x43
00402a08  addiu gp,gp,0x3060
00402a0c  sw gp,0x10(sp)
00402a10  move s2,a1
00402a14  move s0,a0
00402a18  sw zero,0x18(sp)
00402a1c  sw zero,0x1c(sp)
00402a20  sw zero,0x20(sp)
00402a24  sw zero,0x24(sp)
00402a28  sw zero,0x28(sp)
00402a2c  sw zero,0x2c(sp)
00402a30  bne a1,zero,0x00402a44
00402a34  _sw zero,0x30(sp)
00402a38  lw t9,-0x7ec0(gp)
00402a3c  b 0x00402a58
00402a40  _li a0,0xfa
00402a44  li v0,0x1
00402a48  bne a1,v0,0x00402b9c
00402a4c  _li v0,-0x1
00402a50  lw t9,-0x7ec0(gp)
00402a54  li a0,0xfc
00402a58  jalr t9
00402a5c  _addiu a1,sp,0x18
00402a60  lw gp,0x10(sp)
00402a64  li a0,0xc0
00402a68  lw t9,-0x7ec0(gp)
00402a6c  nop
00402a70  jalr t9
00402a74  _addiu a1,sp,0x20
00402a78  lw v1,0x20(sp)
00402a7c  li v0,0x2
00402a80  lw gp,0x10(sp)
00402a84  bne v1,v0,0x00402b9c
00402a88  _li v0,-0x1
00402a8c  lw t9,-0x7f24(gp)
00402a90  nop
00402a94  jalr t9
00402a98  _addiu s1,sp,0x24
00402a9c  lw gp,0x10(sp)
00402aa0  lui a1,0x41
00402aa4  addiu a1,a1,0x7aa0
00402aa8  lw t9,-0x7f78(gp)
00402aac  move a2,s2
00402ab0  jalr t9
00402ab4  _move a0,s1
00402ab8  lw gp,0x10(sp)
00402abc  nop
00402ac0  lw t9,-0x7e94(gp)
00402ac4  nop
00402ac8  jalr t9
00402acc  _move a0,s1
00402ad0  lw gp,0x10(sp)
00402ad4  li a0,0x3b
00402ad8  lw t9,-0x7ec0(gp)
00402adc  nop
00402ae0  jalr t9
00402ae4  _addiu a1,sp,0x1c
00402ae8  lw v0,0x1c(sp)
00402aec  lw gp,0x10(sp)
00402af0  beq v0,zero,0x00402b10
00402af4  _li v1,0x3
00402af8  beq v0,v1,0x00402b10
00402afc  _li v1,0x4
00402b00  beq v0,v1,0x00402b10
00402b04  _li v1,0x5
00402b08  bne v0,v1,0x00402b58
00402b0c  _nop
00402b10  lw v0,0x18(sp)
00402b14  nop
00402b18  beq v0,zero,0x00402b58
00402b1c  _lui s1,0x41
00402b20  lw t9,-0x7f00(gp)
00402b24  move a0,s0
00402b28  jalr t9
00402b2c  _addiu a1,s1,0x7aa8
00402b30  lw gp,0x10(sp)
00402b34  bne v0,zero,0x00402b88
00402b38  _move a0,s0
00402b3c  lw t9,-0x7ef0(gp)
00402b40  nop
00402b44  jalr t9
00402b48  _addiu a1,s1,0x7aa8
00402b4c  lw gp,0x10(sp)
00402b50  b 0x00402b88
00402b54  _nop
00402b58  lw t9,-0x7f00(gp)
00402b5c  lui a1,0x41
00402b60  move a0,s0
00402b64  jalr t9
00402b68  _addiu a1,a1,0x7aa8
00402b6c  lw gp,0x10(sp)
00402b70  beq v0,zero,0x00402b88
00402b74  _nop
00402b78  sb zero,0x3(v0)
00402b7c  sb zero,0x0(v0)
00402b80  sb zero,0x1(v0)
00402b84  sb zero,0x2(v0)
00402b88  lw t9,-0x7ee4(gp)
00402b8c  nop
00402b90  jalr t9
00402b94  _nop
00402b98  clear v0
00402b9c  lw ra,0x44(sp)
00402ba0  lw s2,0x40(sp)
00402ba4  lw s1,0x3c(sp)
00402ba8  lw s0,0x38(sp)
00402bac  jr ra
00402bb0  _addiu sp,sp,0x48
