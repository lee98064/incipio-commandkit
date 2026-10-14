# FUN_0041afb8 @ 0041afb8
0041afb8  lui gp,0x20
0041afbc  addiu gp,gp,-0x1b38
0041afc0  addu gp,gp,t9
0041afc4  addiu sp,sp,-0x20
0041afc8  sw ra,0x1c(sp)
0041afcc  sw gp,0x10(sp)
0041afd0  lw v0,-0x60e0(gp)
0041afd4  nop
0041afd8  beq v0,zero,0x0041b000
0041afdc  _nop
0041afe0  lw a0,-0x7fd8(gp)
0041afe4  lw a1,-0x7fe8(gp)
0041afe8  lw t9,-0x60e0(gp)
0041afec  addiu a0,a0,-0x2850
0041aff0  jalr t9
0041aff4  _addiu a1,a1,0x3cc8
0041aff8  lw gp,0x10(sp)
0041affc  nop
0041b000  lw a0,-0x7fdc(gp)
0041b004  nop
0041b008  lw v0,-0x283c(a0)
0041b00c  nop
0041b010  beq v0,zero,0x0041b034
0041b014  _nop
0041b018  lw t9,-0x5d8c(gp)
0041b01c  nop
0041b020  beq t9,zero,0x0041b034
0041b024  _addiu a0,a0,-0x283c
0041b028  lw ra,0x1c(sp)
0041b02c  jr t9
0041b030  _addiu sp,sp,0x20
0041b034  lw ra,0x1c(sp)
0041b038  nop
0041b03c  jr ra
0041b040  _addiu sp,sp,0x20
