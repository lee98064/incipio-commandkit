# FUN_0041aeb0 @ 0041aeb0
0041aeb0  lui gp,0x20
0041aeb4  addiu gp,gp,-0x1a30
0041aeb8  addu gp,gp,t9
0041aebc  addiu sp,sp,-0x28
0041aec0  sw ra,0x24(sp)
0041aec4  sw s2,0x20(sp)
0041aec8  sw s1,0x1c(sp)
0041aecc  sw s0,0x18(sp)
0041aed0  sw gp,0x10(sp)
0041aed4  lw v0,-0x7fe8(gp)
0041aed8  nop
0041aedc  lbu v0,0x3cc0(v0)
0041aee0  nop
0041aee4  bne v0,zero,0x0041afa0
0041aee8  _nop
0041aeec  lw v0,-0x60fc(gp)
0041aef0  nop
0041aef4  beq v0,zero,0x0041af18
0041aef8  _nop
0041aefc  lw v0,-0x7fe4(gp)
0041af00  lw t9,-0x60fc(gp)
0041af04  lw a0,0x0(v0)
0041af08  jalr t9
0041af0c  _nop
0041af10  lw gp,0x10(sp)
0041af14  nop
0041af18  lw s1,-0x7fdc(gp)
0041af1c  lw s2,-0x7fe0(gp)
0041af20  lw s0,-0x7fe8(gp)
0041af24  addiu s1,s1,-0x2844
0041af28  subu s2,s2,s1
0041af2c  sra s2,s2,0x2
0041af30  b 0x0041af4c
0041af34  _addiu s2,s2,-0x1
0041af38  lw t9,0x0(a0)
0041af3c  nop
0041af40  jalr t9
0041af44  _sw v1,0x3cc4(s0)
0041af48  lw gp,0x10(sp)
0041af4c  lw v0,0x3cc4(s0)
0041af50  nop
0041af54  addiu v1,v0,0x1
0041af58  sll a0,v1,0x2
0041af5c  sltu v0,v0,s2
0041af60  bne v0,zero,0x0041af38
0041af64  _addu a0,a0,s1
0041af68  lw v0,-0x5920(gp)
0041af6c  nop
0041af70  beq v0,zero,0x0041af94
0041af74  _nop
0041af78  lw a0,-0x7fd8(gp)
0041af7c  lw t9,-0x5920(gp)
0041af80  nop
0041af84  jalr t9
0041af88  _addiu a0,a0,-0x2850
0041af8c  lw gp,0x10(sp)
0041af90  nop
0041af94  lw v0,-0x7fe8(gp)
0041af98  li v1,0x1
0041af9c  sb v1,0x3cc0(v0)
0041afa0  lw ra,0x24(sp)
0041afa4  lw s2,0x20(sp)
0041afa8  lw s1,0x1c(sp)
0041afac  lw s0,0x18(sp)
0041afb0  jr ra
0041afb4  _addiu sp,sp,0x28
