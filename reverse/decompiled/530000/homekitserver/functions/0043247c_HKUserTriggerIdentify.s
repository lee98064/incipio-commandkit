# HKUserTriggerIdentify @ 0043247c
0043247c  addiu sp,sp,-0x28
00432480  sw ra,0x24(sp)
00432484  sw s1,0x20(sp)
00432488  sw s0,0x1c(sp)
0043248c  lui gp,0x62
00432490  addiu gp,gp,-0x5cf0
00432494  sw gp,0x10(sp)
00432498  clear s0
0043249c  li s1,0x3
004324a0  lw t9,-0x5dc4(gp)
004324a4  li a0,0x1
004324a8  jalr t9
004324ac  _addiu s0,s0,0x1
004324b0  lw gp,0x10(sp)
004324b4  nop
004324b8  lw t9,-0x7c1c(gp)
004324bc  nop
004324c0  jalr t9
004324c4  _li a0,0x1
004324c8  lw gp,0x10(sp)
004324cc  nop
004324d0  lw t9,-0x5dc4(gp)
004324d4  nop
004324d8  jalr t9
004324dc  _li a0,0x1
004324e0  lw gp,0x10(sp)
004324e4  nop
004324e8  lw t9,-0x7c1c(gp)
004324ec  nop
004324f0  jalr t9
004324f4  _clear a0
004324f8  lw gp,0x10(sp)
004324fc  bne s0,s1,0x004324a0
00432500  _nop
00432504  lw ra,0x24(sp)
00432508  lw s1,0x20(sp)
0043250c  lw s0,0x1c(sp)
00432510  jr ra
00432514  _addiu sp,sp,0x28
