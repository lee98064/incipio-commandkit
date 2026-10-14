# FUN_00407278 @ 00407278
00407278  addiu sp,sp,-0x28
0040727c  sw ra,0x24(sp)
00407280  sw s0,0x20(sp)
00407284  lui gp,0x43
00407288  addiu gp,gp,-0x4c90
0040728c  sw gp,0x10(sp)
00407290  lw t9,-0x7ed8(gp)
00407294  li v0,-0x1
00407298  lui a1,0x41
0040729c  sw v0,0x18(sp)
004072a0  jalr t9
004072a4  _addiu a1,a1,0x1fe4
004072a8  move s0,v0
004072ac  lw gp,0x10(sp)
004072b0  beq s0,zero,0x004072ec
004072b4  _li v0,-0x1
004072b8  lw t9,-0x7de4(gp)
004072bc  lui a1,0x41
004072c0  addiu a1,a1,0x17f4
004072c4  move a0,s0
004072c8  jalr t9
004072cc  _addiu a2,sp,0x18
004072d0  lw gp,0x10(sp)
004072d4  nop
004072d8  lw t9,-0x7ef0(gp)
004072dc  nop
004072e0  jalr t9
004072e4  _move a0,s0
004072e8  lw v0,0x18(sp)
004072ec  lw ra,0x24(sp)
004072f0  lw s0,0x20(sp)
004072f4  jr ra
004072f8  _addiu sp,sp,0x28
