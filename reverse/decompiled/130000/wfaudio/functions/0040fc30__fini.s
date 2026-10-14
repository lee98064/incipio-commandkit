# _fini @ 0040fc30
0040fc30  lui gp,0x2
0040fc34  addiu gp,gp,-0x4ba0
0040fc38  addu gp,gp,t9
0040fc3c  addiu sp,sp,-0x20
0040fc40  sw gp,0x10(sp)
0040fc44  sw ra,0x1c(sp)
0040fc48  sw gp,0x18(sp)
0040fc4c  bal 0x0040fc54
0040fc50  _nop
0040fc54  lui gp,0x2
0040fc58  addiu gp,gp,-0x4bc4
0040fc5c  addu gp,gp,ra
0040fc60  lw t9,-0x7fd8(gp)
0040fc64  nop
0040fc68  addiu t9,t9,0x19c0
0040fc6c  bal 0x004019c0
0040fc70  _nop
0040fc74  lw gp,0x10(sp)
0040fc78  nop
0040fc7c  lw ra,0x1c(sp)
0040fc80  nop
0040fc84  jr ra
0040fc88  _addiu sp,sp,0x20
