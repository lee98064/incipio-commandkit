# FUN_00448238 @ 00448238
00448238  addiu sp,sp,-0xb0
0044823c  sw ra,0xac(sp)
00448240  sw s4,0xa8(sp)
00448244  sw s3,0xa4(sp)
00448248  sw s2,0xa0(sp)
0044824c  sw s1,0x9c(sp)
00448250  sw s0,0x98(sp)
00448254  lui gp,0x47
00448258  addiu gp,gp,0x2630
0044825c  sw gp,0x10(sp)
00448260  lw t9,-0x7fbc(gp)
00448264  lui s0,0x45
00448268  lui a1,0x45
0044826c  addiu a1,a1,0x79dc
00448270  addiu a2,s0,-0x4cd4
00448274  jalr t9
00448278  _move s1,a0
0044827c  lw gp,0x10(sp)
00448280  lui a1,0x45
00448284  addiu a1,a1,0x79e8
00448288  lw t9,-0x7fbc(gp)
0044828c  addiu a2,s0,-0x4cd4
00448290  move a0,s1
00448294  jalr t9
00448298  _move s3,v0
0044829c  lw gp,0x10(sp)
004482a0  beq v0,zero,0x004482c0
004482a4  _nop
004482a8  lw t9,-0x7ef4(gp)
004482ac  nop
004482b0  jalr t9
004482b4  _move a0,v0
004482b8  lw gp,0x10(sp)
004482bc  move s2,v0
004482c0  lw t9,-0x7fbc(gp)
004482c4  lui s0,0x45
004482c8  lui a1,0x45
004482cc  addiu a2,s0,-0x4cd4
004482d0  addiu a1,a1,0x79f4
004482d4  jalr t9
004482d8  _move a0,s1
004482dc  lw gp,0x10(sp)
004482e0  lui a1,0x45
004482e4  addiu a2,s0,-0x4cd4
004482e8  lw t9,-0x7fbc(gp)
004482ec  addiu a1,a1,0x7a04
004482f0  move a0,s1
004482f4  jalr t9
004482f8  _move s0,v0
004482fc  lw gp,0x10(sp)
00448300  beq v0,zero,0x00448320
00448304  _nop
00448308  lw t9,-0x7ef4(gp)
0044830c  nop
00448310  jalr t9
00448314  _move a0,v0
00448318  lw gp,0x10(sp)
0044831c  move s4,v0
00448320  lw t9,-0x7b38(gp)
00448324  move a2,s0
00448328  move a1,s4
0044832c  jalr t9
00448330  _move a0,s2
00448334  lw gp,0x10(sp)
00448338  li a0,0x1
0044833c  lw t9,-0x7b24(gp)
00448340  nop
00448344  jalr t9
00448348  _addiu s0,sp,0x18
0044834c  lw gp,0x10(sp)
00448350  move a1,s3
00448354  lw t9,-0x79d0(gp)
00448358  nop
0044835c  jalr t9
00448360  _move a0,s0
00448364  lw gp,0x10(sp)
00448368  nop
0044836c  lw t9,-0x7f1c(gp)
00448370  nop
00448374  jalr t9
00448378  _move a0,s0
0044837c  lw gp,0x10(sp)
00448380  lui a1,0x45
00448384  move a2,s2
00448388  lw t9,-0x7e28(gp)
0044838c  addu a0,s0,v0
00448390  jalr t9
00448394  _addiu a1,a1,0x7a10
00448398  lw gp,0x10(sp)
0044839c  move a0,s1
004483a0  lw t9,-0x79b8(gp)
004483a4  nop
004483a8  jalr t9
004483ac  _move a1,s0
004483b0  lw ra,0xac(sp)
004483b4  lw s4,0xa8(sp)
004483b8  lw s3,0xa4(sp)
004483bc  lw s2,0xa0(sp)
004483c0  lw s1,0x9c(sp)
004483c4  lw s0,0x98(sp)
004483c8  jr ra
004483cc  _addiu sp,sp,0xb0
