# _init @ 0041adc4
0041adc4  lui gp,0x20
0041adc8  addiu gp,gp,-0x1944
0041adcc  addu gp,gp,t9
0041add0  addiu sp,sp,-0x20
0041add4  sw gp,0x10(sp)
0041add8  sw ra,0x1c(sp)
0041addc  sw gp,0x18(sp)
0041ade0  bal 0x0041ade8
0041ade4  _nop
0041ade8  lui gp,0x20
0041adec  addiu gp,gp,-0x1968
0041adf0  addu gp,gp,ra
0041adf4  lw t9,-0x7fd4(gp)
0041adf8  nop
0041adfc  addiu t9,t9,-0x5048
0041ae00  bal 0x0041afb8
0041ae04  _nop
0041ae08  lw gp,0x10(sp)
0041ae0c  nop
0041ae10  bal 0x0041ae18
0041ae14  _nop
0041ae18  lui gp,0x20
0041ae1c  addiu gp,gp,-0x1998
0041ae20  addu gp,gp,ra
0041ae24  lw t9,-0x7fd0(gp)
0041ae28  nop
0041ae2c  addiu t9,t9,-0x5c20
0041ae30  jalr t9
0041ae34  _nop
0041ae38  lw gp,0x10(sp)
0041ae3c  nop
0041ae40  lw ra,0x1c(sp)
0041ae44  nop
0041ae48  jr ra
0041ae4c  _addiu sp,sp,0x20
