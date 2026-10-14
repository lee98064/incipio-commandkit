# FUN_0040288c @ 0040288c
0040288c  addiu sp,sp,-0x28
00402890  sw ra,0x24(sp)
00402894  sw s1,0x20(sp)
00402898  sw s0,0x1c(sp)
0040289c  lui gp,0x43
004028a0  addiu gp,gp,-0x4f70
004028a4  sw gp,0x10(sp)
004028a8  lw t9,-0x7f64(gp)
004028ac  lw a0,-0x7e58(gp)
004028b0  jalr t9
004028b4  _nop
004028b8  lw gp,0x10(sp)
004028bc  lui v0,0x42
004028c0  lw s1,0x33e0(v0)
004028c4  lw t9,-0x7f18(gp)
004028c8  lw a0,-0x7e58(gp)
004028cc  lui v0,0x42
004028d0  lw s0,0x33dc(v0)
004028d4  jalr t9
004028d8  _nop
004028dc  jal 0x00402714
004028e0  _nop
004028e4  li v1,0x3
004028e8  lw gp,0x10(sp)
004028ec  bne v0,v1,0x00402918
004028f0  _nop
004028f4  beq s0,zero,0x00402918
004028f8  _lui a0,0x41
004028fc  lw t9,-0x7e14(gp)
00402900  lw ra,0x24(sp)
00402904  lw s1,0x20(sp)
00402908  lw s0,0x1c(sp)
0040290c  addiu a0,a0,0x200
00402910  jr t9
00402914  _addiu sp,sp,0x28
00402918  lw t9,-0x7f64(gp)
0040291c  lw a0,-0x7e58(gp)
00402920  jalr t9
00402924  _lui s0,0x42
00402928  lb v0,0x33f4(s0)
0040292c  lw gp,0x10(sp)
00402930  beq v0,zero,0x00402988
00402934  _nop
00402938  lw t9,-0x7f88(gp)
0040293c  nop
00402940  jalr t9
00402944  _addiu a0,s0,0x33f4
00402948  lw gp,0x10(sp)
0040294c  lui a0,0x41
00402950  addiu a0,a0,0x280
00402954  lw t9,-0x7dd0(gp)
00402958  andi a2,v0,0xffff
0040295c  jalr t9
00402960  _addiu a1,s0,0x33f4
00402964  lw gp,0x10(sp)
00402968  addiu a0,s0,0x33f4
0040296c  clear a1
00402970  lw t9,-0x7ee8(gp)
00402974  nop
00402978  jalr t9
0040297c  _li a2,0x100
00402980  lw gp,0x10(sp)
00402984  nop
00402988  lw t9,-0x7f18(gp)
0040298c  lw a0,-0x7e58(gp)
00402990  jalr t9
00402994  _nop
00402998  lw gp,0x10(sp)
0040299c  beq s1,zero,0x004029bc
004029a0  _nop
004029a4  lw t9,-0x7e20(gp)
004029a8  lui a0,0x41
004029ac  jalr t9
004029b0  _addiu a0,a0,0x288
004029b4  lw gp,0x10(sp)
004029b8  nop
004029bc  lw t9,-0x7f64(gp)
004029c0  lw a0,-0x7e58(gp)
004029c4  jalr t9
004029c8  _nop
004029cc  lw gp,0x10(sp)
004029d0  lui v0,0x42
004029d4  sw zero,0x33dc(v0)
004029d8  lui v0,0x42
004029dc  lw t9,-0x7f18(gp)
004029e0  lw a0,-0x7e58(gp)
004029e4  sw zero,0x33e0(v0)
004029e8  lui v0,0x42
004029ec  sw zero,0x33e4(v0)
004029f0  lui v0,0x42
004029f4  jalr t9
004029f8  _sw zero,0x33e8(v0)
004029fc  lw gp,0x10(sp)
00402a00  lui a0,0x41
00402a04  lw t9,-0x7ea0(gp)
00402a08  nop
00402a0c  jalr t9
00402a10  _addiu a0,a0,0x1e8
00402a14  lw gp,0x10(sp)
00402a18  lui a0,0x41
00402a1c  lw t9,-0x7ea0(gp)
00402a20  nop
00402a24  jalr t9
00402a28  _addiu a0,a0,-0xe0
00402a2c  lw gp,0x10(sp)
00402a30  lui a0,0x41
00402a34  lw t9,-0x7ea0(gp)
00402a38  nop
00402a3c  jalr t9
00402a40  _addiu a0,a0,0x170
00402a44  lw gp,0x10(sp)
00402a48  lui a0,0x41
00402a4c  lw t9,-0x7ea0(gp)
00402a50  nop
00402a54  jalr t9
00402a58  _addiu a0,a0,0xe0
00402a5c  lw gp,0x10(sp)
00402a60  lui a0,0x41
00402a64  lw t9,-0x7ea0(gp)
00402a68  nop
00402a6c  jalr t9
00402a70  _addiu a0,a0,0x1a4
00402a74  lw gp,0x10(sp)
00402a78  lui a0,0x41
00402a7c  lw t9,-0x7ea0(gp)
00402a80  nop
00402a84  jalr t9
00402a88  _addiu a0,a0,-0x80
00402a8c  lw gp,0x10(sp)
00402a90  lui a0,0x41
00402a94  lw t9,-0x7ea0(gp)
00402a98  nop
00402a9c  jalr t9
00402aa0  _addiu a0,a0,0x8
00402aa4  lw gp,0x10(sp)
00402aa8  lui a0,0x41
00402aac  lw t9,-0x7ea0(gp)
00402ab0  nop
00402ab4  jalr t9
00402ab8  _addiu a0,a0,0x2a8
00402abc  lw gp,0x10(sp)
00402ac0  lw ra,0x24(sp)
00402ac4  lw s1,0x20(sp)
00402ac8  lw t9,-0x7ea0(gp)
00402acc  lw s0,0x1c(sp)
00402ad0  lui a0,0x41
00402ad4  addiu a0,a0,0x2cc
00402ad8  jr t9
00402adc  _addiu sp,sp,0x28
