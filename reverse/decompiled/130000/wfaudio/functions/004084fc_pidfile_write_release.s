# pidfile_write_release @ 004084fc
004084fc  addiu sp,sp,-0x28
00408500  sw ra,0x24(sp)
00408504  sw s1,0x20(sp)
00408508  sw s0,0x1c(sp)
0040850c  lui gp,0x43
00408510  addiu gp,gp,-0x4f70
00408514  sw gp,0x10(sp)
00408518  bltz a0,0x004085bc
0040851c  _move s0,a0
00408520  lw t9,-0x7ebc(gp)
00408524  lui a1,0x41
00408528  jalr t9
0040852c  _addiu a1,a1,0xe64
00408530  lw gp,0x10(sp)
00408534  beq v0,zero,0x00408588
00408538  _move s1,v0
0040853c  lw t9,-0x7de8(gp)
00408540  nop
00408544  jalr t9
00408548  _nop
0040854c  lw gp,0x10(sp)
00408550  lui a1,0x41
00408554  addiu a1,a1,0xe60
00408558  lw t9,-0x7e6c(gp)
0040855c  move a2,v0
00408560  jalr t9
00408564  _move a0,s1
00408568  lw gp,0x10(sp)
0040856c  nop
00408570  lw t9,-0x7ef8(gp)
00408574  nop
00408578  jalr t9
0040857c  _move a0,s1
00408580  lw gp,0x10(sp)
00408584  nop
00408588  lw t9,-0x7ef0(gp)
0040858c  move a0,s0
00408590  li a1,0x2
00408594  jalr t9
00408598  _clear a2
0040859c  lw gp,0x10(sp)
004085a0  move a0,s0
004085a4  lw ra,0x24(sp)
004085a8  lw t9,-0x7fc4(gp)
004085ac  lw s1,0x20(sp)
004085b0  lw s0,0x1c(sp)
004085b4  jr t9
004085b8  _addiu sp,sp,0x28
004085bc  lw ra,0x24(sp)
004085c0  lw s1,0x20(sp)
004085c4  lw s0,0x1c(sp)
004085c8  jr ra
004085cc  _addiu sp,sp,0x28
