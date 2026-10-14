# mdnsPhytrex_HomekitRemove @ 0042df30
0042df30  addiu sp,sp,-0x28
0042df34  sw ra,0x24(sp)
0042df38  sw s2,0x20(sp)
0042df3c  sw s1,0x1c(sp)
0042df40  sw s0,0x18(sp)
0042df44  lui gp,0x62
0042df48  addiu gp,gp,-0x6b80
0042df4c  sw gp,0x10(sp)
0042df50  lw v0,-0x7de8(gp)
0042df54  nop
0042df58  lw v0,0x0(v0)
0042df5c  nop
0042df60  beq v0,zero,0x0042e068
0042df64  _lui a0,0x5b
0042df68  lw t9,-0x7cbc(gp)
0042df6c  addiu a0,a0,-0x39a0
0042df70  jalr t9
0042df74  _li a1,0x1
0042df78  lw gp,0x10(sp)
0042df7c  bne v0,zero,0x0042dfa4
0042df80  _move s0,v0
0042df84  lw v0,-0x6b54(gp)
0042df88  lw t9,-0x7058(gp)
0042df8c  lui a0,0x5b
0042df90  lw a1,0x0(v0)
0042df94  jalr t9
0042df98  _addiu a0,a0,-0x3990
0042df9c  lw gp,0x10(sp)
0042dfa0  nop
0042dfa4  lw t9,-0x67b0(gp)
0042dfa8  nop
0042dfac  jalr t9
0042dfb0  _lui s1,0x61
0042dfb4  lw gp,0x10(sp)
0042dfb8  lui a1,0x5b
0042dfbc  addiu a1,a1,-0x3978
0042dfc0  lw t9,-0x6310(gp)
0042dfc4  nop
0042dfc8  jalr t9
0042dfcc  _move a0,s0
0042dfd0  lw gp,0x10(sp)
0042dfd4  nop
0042dfd8  lw t9,-0x67b0(gp)
0042dfdc  nop
0042dfe0  jalr t9
0042dfe4  _move s2,v0
0042dfe8  lui a0,0x61
0042dfec  move t9,s2
0042dff0  jalr t9
0042dff4  _addiu a0,a0,0x4824
0042dff8  lw gp,0x10(sp)
0042dffc  nop
0042e000  lw t9,-0x67b0(gp)
0042e004  nop
0042e008  jalr t9
0042e00c  _nop
0042e010  lw v0,0x4820(s1)
0042e014  lw gp,0x10(sp)
0042e018  beq v0,zero,0x0042e048
0042e01c  _lui a1,0x5b
0042e020  lw t9,-0x6310(gp)
0042e024  addiu a1,a1,-0x3964
0042e028  jalr t9
0042e02c  _move a0,s0
0042e030  lw a0,0x4820(s1)
0042e034  move t9,v0
0042e038  jalr t9
0042e03c  _nop
0042e040  lw gp,0x10(sp)
0042e044  sw zero,0x4820(s1)
0042e048  move a0,s0
0042e04c  lw t9,-0x7ea8(gp)
0042e050  lw ra,0x24(sp)
0042e054  lw s2,0x20(sp)
0042e058  lw s1,0x1c(sp)
0042e05c  lw s0,0x18(sp)
0042e060  jr t9
0042e064  _addiu sp,sp,0x28
0042e068  lw ra,0x24(sp)
0042e06c  lw s2,0x20(sp)
0042e070  lw s1,0x1c(sp)
0042e074  lw s0,0x18(sp)
0042e078  jr ra
0042e07c  _addiu sp,sp,0x28
