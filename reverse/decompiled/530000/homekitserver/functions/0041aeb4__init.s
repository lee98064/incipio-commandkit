# _init @ 0041aeb4
0041aeb4  lui gp,0x20
0041aeb8  addiu gp,gp,-0xba4
0041aebc  addu gp,gp,t9
0041aec0  addiu sp,sp,-0x20
0041aec4  sw gp,0x10(sp)
0041aec8  sw ra,0x1c(sp)
0041aecc  sw gp,0x18(sp)
0041aed0  bal 0x0041aed8
0041aed4  _nop
0041aed8  lui gp,0x20
0041aedc  addiu gp,gp,-0xbc8
0041aee0  addu gp,gp,ra
0041aee4  lw t9,-0x7fd4(gp)
0041aee8  nop
0041aeec  addiu t9,t9,-0x4f58
0041aef0  bal 0x0041b0a8
0041aef4  _nop
0041aef8  lw gp,0x10(sp)
0041aefc  nop
0041af00  bal 0x0041af08
0041af04  _nop
0041af08  lui gp,0x20
0041af0c  addiu gp,gp,-0xbf8
0041af10  addu gp,gp,ra
0041af14  lw t9,-0x7fd0(gp)
0041af18  nop
0041af1c  addiu t9,t9,-0x4e50
0041af20  jalr t9
0041af24  _nop
0041af28  lw gp,0x10(sp)
0041af2c  nop
0041af30  lw ra,0x1c(sp)
0041af34  nop
0041af38  jr ra
0041af3c  _addiu sp,sp,0x20
