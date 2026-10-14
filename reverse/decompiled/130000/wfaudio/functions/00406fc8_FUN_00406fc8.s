# FUN_00406fc8 @ 00406fc8
00406fc8  addiu sp,sp,-0x28
00406fcc  sw ra,0x24(sp)
00406fd0  sw s0,0x20(sp)
00406fd4  lui gp,0x43
00406fd8  addiu gp,gp,-0x4f70
00406fdc  sw gp,0x10(sp)
00406fe0  lw t9,-0x7ee0(gp)
00406fe4  li v0,-0x1
00406fe8  lui a1,0x41
00406fec  sw v0,0x18(sp)
00406ff0  jalr t9
00406ff4  _addiu a1,a1,0x1d04
00406ff8  move s0,v0
00406ffc  lw gp,0x10(sp)
00407000  beq s0,zero,0x0040703c
00407004  _li v0,-0x1
00407008  lw t9,-0x7df0(gp)
0040700c  lui a1,0x41
00407010  addiu a1,a1,0x1514
00407014  move a0,s0
00407018  jalr t9
0040701c  _addiu a2,sp,0x18
00407020  lw gp,0x10(sp)
00407024  nop
00407028  lw t9,-0x7ef8(gp)
0040702c  nop
00407030  jalr t9
00407034  _move a0,s0
00407038  lw v0,0x18(sp)
0040703c  lw ra,0x24(sp)
00407040  lw s0,0x20(sp)
00407044  jr ra
00407048  _addiu sp,sp,0x28
