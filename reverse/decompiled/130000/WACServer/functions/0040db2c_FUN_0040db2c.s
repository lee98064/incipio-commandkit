# FUN_0040db2c @ 0040db2c
0040db2c  addiu sp,sp,-0x20
0040db30  sw ra,0x1c(sp)
0040db34  sw s0,0x18(sp)
0040db38  lui gp,0x44
0040db3c  addiu gp,gp,-0x4fc0
0040db40  sw gp,0x10(sp)
0040db44  lbu v0,0x140(a0)
0040db48  nop
0040db4c  beq v0,zero,0x0040db6c
0040db50  _move s0,a0
0040db54  lw t9,-0x7f84(gp)
0040db58  nop
0040db5c  jalr t9
0040db60  _addiu a0,a0,0x24
0040db64  lw gp,0x10(sp)
0040db68  nop
0040db6c  lw t9,-0x7eb0(gp)
0040db70  move a0,s0
0040db74  clear a1
0040db78  jalr t9
0040db7c  _li a2,0x144
0040db80  lw gp,0x10(sp)
0040db84  move a0,s0
0040db88  lw ra,0x1c(sp)
0040db8c  lw t9,-0x7fb8(gp)
0040db90  lw s0,0x18(sp)
0040db94  jr t9
0040db98  _addiu sp,sp,0x20
