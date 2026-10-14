# FUN_004028fc @ 004028fc
004028fc  addiu sp,sp,-0x28
00402900  sw ra,0x24(sp)
00402904  sw s1,0x20(sp)
00402908  sw s0,0x1c(sp)
0040290c  lui gp,0x43
00402910  addiu gp,gp,-0x4c90
00402914  sw gp,0x10(sp)
00402918  lw t9,-0x7f64(gp)
0040291c  lw a0,-0x7e50(gp)
00402920  jalr t9
00402924  _nop
00402928  lw gp,0x10(sp)
0040292c  lui v0,0x42
00402930  lw s1,0x36c0(v0)
00402934  lw t9,-0x7f10(gp)
00402938  lw a0,-0x7e50(gp)
0040293c  lui v0,0x42
00402940  lw s0,0x36bc(v0)
00402944  jalr t9
00402948  _nop
0040294c  jal 0x00402784
00402950  _nop
00402954  li v1,0x3
00402958  lw gp,0x10(sp)
0040295c  bne v0,v1,0x00402988
00402960  _nop
00402964  beq s0,zero,0x00402988
00402968  _lui a0,0x41
0040296c  lw t9,-0x7e0c(gp)
00402970  lw ra,0x24(sp)
00402974  lw s1,0x20(sp)
00402978  lw s0,0x1c(sp)
0040297c  addiu a0,a0,0x4c0
00402980  jr t9
00402984  _addiu sp,sp,0x28
00402988  lw t9,-0x7f64(gp)
0040298c  lw a0,-0x7e50(gp)
00402990  jalr t9
00402994  _lui s0,0x42
00402998  lb v0,0x36d4(s0)
0040299c  lw gp,0x10(sp)
004029a0  beq v0,zero,0x004029f8
004029a4  _nop
004029a8  lw t9,-0x7f88(gp)
004029ac  nop
004029b0  jalr t9
004029b4  _addiu a0,s0,0x36d4
004029b8  lw gp,0x10(sp)
004029bc  lui a0,0x41
004029c0  addiu a0,a0,0x540
004029c4  lw t9,-0x7dc4(gp)
004029c8  andi a2,v0,0xffff
004029cc  jalr t9
004029d0  _addiu a1,s0,0x36d4
004029d4  lw gp,0x10(sp)
004029d8  addiu a0,s0,0x36d4
004029dc  clear a1
004029e0  lw t9,-0x7ee0(gp)
004029e4  nop
004029e8  jalr t9
004029ec  _li a2,0x100
004029f0  lw gp,0x10(sp)
004029f4  nop
004029f8  lw t9,-0x7f10(gp)
004029fc  lw a0,-0x7e50(gp)
00402a00  jalr t9
00402a04  _nop
00402a08  lw gp,0x10(sp)
00402a0c  beq s1,zero,0x00402a2c
00402a10  _nop
00402a14  lw t9,-0x7e18(gp)
00402a18  lui a0,0x41
00402a1c  jalr t9
00402a20  _addiu a0,a0,0x548
00402a24  lw gp,0x10(sp)
00402a28  nop
00402a2c  lw t9,-0x7f64(gp)
00402a30  lw a0,-0x7e50(gp)
00402a34  jalr t9
00402a38  _nop
00402a3c  lw gp,0x10(sp)
00402a40  lui v0,0x42
00402a44  sw zero,0x36bc(v0)
00402a48  lui v0,0x42
00402a4c  lw t9,-0x7f10(gp)
00402a50  lw a0,-0x7e50(gp)
00402a54  sw zero,0x36c0(v0)
00402a58  lui v0,0x42
00402a5c  sw zero,0x36c4(v0)
00402a60  lui v0,0x42
00402a64  jalr t9
00402a68  _sw zero,0x36c8(v0)
00402a6c  lw gp,0x10(sp)
00402a70  lui a0,0x41
00402a74  lw t9,-0x7e98(gp)
00402a78  nop
00402a7c  jalr t9
00402a80  _addiu a0,a0,0x4a8
00402a84  lw gp,0x10(sp)
00402a88  lui a0,0x41
00402a8c  lw t9,-0x7e98(gp)
00402a90  nop
00402a94  jalr t9
00402a98  _addiu a0,a0,0x1e0
00402a9c  lw gp,0x10(sp)
00402aa0  lui a0,0x41
00402aa4  lw t9,-0x7e98(gp)
00402aa8  nop
00402aac  jalr t9
00402ab0  _addiu a0,a0,0x430
00402ab4  lw gp,0x10(sp)
00402ab8  lui a0,0x41
00402abc  lw t9,-0x7e98(gp)
00402ac0  nop
00402ac4  jalr t9
00402ac8  _addiu a0,a0,0x3a0
00402acc  lw gp,0x10(sp)
00402ad0  lui a0,0x41
00402ad4  lw t9,-0x7e98(gp)
00402ad8  nop
00402adc  jalr t9
00402ae0  _addiu a0,a0,0x464
00402ae4  lw gp,0x10(sp)
00402ae8  lui a0,0x41
00402aec  lw t9,-0x7e98(gp)
00402af0  nop
00402af4  jalr t9
00402af8  _addiu a0,a0,0x240
00402afc  lw gp,0x10(sp)
00402b00  lui a0,0x41
00402b04  lw t9,-0x7e98(gp)
00402b08  nop
00402b0c  jalr t9
00402b10  _addiu a0,a0,0x2c8
00402b14  lw gp,0x10(sp)
00402b18  lui a0,0x41
00402b1c  lw t9,-0x7e98(gp)
00402b20  nop
00402b24  jalr t9
00402b28  _addiu a0,a0,0x568
00402b2c  lw gp,0x10(sp)
00402b30  lw ra,0x24(sp)
00402b34  lw s1,0x20(sp)
00402b38  lw t9,-0x7e98(gp)
00402b3c  lw s0,0x1c(sp)
00402b40  lui a0,0x41
00402b44  addiu a0,a0,0x58c
00402b48  jr t9
00402b4c  _addiu sp,sp,0x28
