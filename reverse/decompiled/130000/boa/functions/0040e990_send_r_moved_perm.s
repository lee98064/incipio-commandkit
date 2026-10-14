# send_r_moved_perm @ 0040e990
0040e990  addiu sp,sp,-0x28
0040e994  sw ra,0x24(sp)
0040e998  sw s1,0x20(sp)
0040e99c  sw s0,0x1c(sp)
0040e9a0  lui gp,0x47
0040e9a4  addiu gp,gp,0x2630
0040e9a8  sw gp,0x10(sp)
0040e9ac  lw v0,0x8(a0)
0040e9b0  li v1,0x2
0040e9b4  sw v1,0x4(a0)
0040e9b8  li v1,0x12d
0040e9bc  sw v1,0x10(a0)
0040e9c0  li v1,0x1
0040e9c4  move s0,a0
0040e9c8  beq v0,v1,0x0040ea94
0040e9cc  _move s1,a1
0040e9d0  li v1,0x3
0040e9d4  beq v0,v1,0x0040e9e8
0040e9d8  _nop
0040e9dc  lui a1,0x45
0040e9e0  b 0x0040e9f0
0040e9e4  _addiu a1,a1,-0x51b0
0040e9e8  lui a1,0x45
0040e9ec  addiu a1,a1,-0x5198
0040e9f0  lw t9,-0x7a44(gp)
0040e9f4  nop
0040e9f8  jalr t9
0040e9fc  _move a0,s0
0040ea00  lw gp,0x10(sp)
0040ea04  lui a1,0x45
0040ea08  addiu a1,a1,-0x47a8
0040ea0c  lw t9,-0x7a44(gp)
0040ea10  nop
0040ea14  jalr t9
0040ea18  _move a0,s0
0040ea1c  jal 0x0040d688
0040ea20  _move a0,s0
0040ea24  lw gp,0x10(sp)
0040ea28  lui a1,0x45
0040ea2c  addiu a1,a1,-0x4d08
0040ea30  lw t9,-0x7a44(gp)
0040ea34  nop
0040ea38  jalr t9
0040ea3c  _move a0,s0
0040ea40  lw gp,0x10(sp)
0040ea44  lui a1,0x45
0040ea48  addiu a1,a1,-0x66dc
0040ea4c  lw t9,-0x7a44(gp)
0040ea50  nop
0040ea54  jalr t9
0040ea58  _move a0,s0
0040ea5c  lw gp,0x10(sp)
0040ea60  move a0,s0
0040ea64  lw t9,-0x7c10(gp)
0040ea68  nop
0040ea6c  jalr t9
0040ea70  _move a1,s1
0040ea74  lw gp,0x10(sp)
0040ea78  lui a1,0x45
0040ea7c  addiu a1,a1,-0x4cd8
0040ea80  lw t9,-0x7a44(gp)
0040ea84  nop
0040ea88  jalr t9
0040ea8c  _move a0,s0
0040ea90  lw gp,0x10(sp)
0040ea94  lw v1,0xc(s0)
0040ea98  li v0,0x2
0040ea9c  beq v1,v0,0x0040eaec
0040eaa0  _lui a1,0x45
0040eaa4  lw t9,-0x7a44(gp)
0040eaa8  addiu a1,a1,-0x478c
0040eaac  jalr t9
0040eab0  _move a0,s0
0040eab4  lw gp,0x10(sp)
0040eab8  move a1,s1
0040eabc  lw t9,-0x7ef8(gp)
0040eac0  nop
0040eac4  jalr t9
0040eac8  _move a0,s0
0040eacc  lw gp,0x10(sp)
0040ead0  lui a1,0x45
0040ead4  addiu a1,a1,-0x4840
0040ead8  lw t9,-0x7a44(gp)
0040eadc  nop
0040eae0  jalr t9
0040eae4  _move a0,s0
0040eae8  lw gp,0x10(sp)
0040eaec  move a0,s0
0040eaf0  lw t9,-0x7f98(gp)
0040eaf4  lw ra,0x24(sp)
0040eaf8  lw s1,0x20(sp)
0040eafc  lw s0,0x1c(sp)
0040eb00  jr t9
0040eb04  _addiu sp,sp,0x28
