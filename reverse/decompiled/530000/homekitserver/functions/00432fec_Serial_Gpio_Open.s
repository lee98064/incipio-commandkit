# Serial_Gpio_Open @ 00432fec
00432fec  addiu sp,sp,-0x28
00432ff0  sw ra,0x24(sp)
00432ff4  sw s2,0x20(sp)
00432ff8  sw s1,0x1c(sp)
00432ffc  sw s0,0x18(sp)
00433000  lui gp,0x62
00433004  addiu gp,gp,-0x5cf0
00433008  sw gp,0x10(sp)
0043300c  lw t9,-0x69b4(gp)
00433010  lui s1,0x5b
00433014  lui s0,0x5d
00433018  addiu s1,s1,-0x1bb4
0043301c  addiu s0,s0,-0x4350
00433020  move a0,s1
00433024  jalr t9
00433028  _move a1,s0
0043302c  lw gp,0x10(sp)
00433030  beq v0,zero,0x00433070
00433034  _move s2,v0
00433038  lw t9,-0x73b4(gp)
0043303c  lui a1,0x5b
00433040  addiu a1,a1,-0x1afc
00433044  move a0,v0
00433048  jalr t9
0043304c  _li a2,0x6
00433050  lw gp,0x10(sp)
00433054  nop
00433058  lw t9,-0x68d4(gp)
0043305c  nop
00433060  jalr t9
00433064  _move a0,s2
00433068  lw gp,0x10(sp)
0043306c  nop
00433070  lw t9,-0x69b4(gp)
00433074  move a0,s1
00433078  jalr t9
0043307c  _move a1,s0
00433080  lw gp,0x10(sp)
00433084  beq v0,zero,0x004330c4
00433088  _move s2,v0
0043308c  lw t9,-0x73b4(gp)
00433090  lui a1,0x5b
00433094  addiu a1,a1,-0x1af0
00433098  move a0,v0
0043309c  jalr t9
004330a0  _clear a2
004330a4  lw gp,0x10(sp)
004330a8  nop
004330ac  lw t9,-0x68d4(gp)
004330b0  nop
004330b4  jalr t9
004330b8  _move a0,s2
004330bc  lw gp,0x10(sp)
004330c0  nop
004330c4  lw t9,-0x69b4(gp)
004330c8  move a1,s0
004330cc  jalr t9
004330d0  _move a0,s1
004330d4  lw gp,0x10(sp)
004330d8  beq v0,zero,0x00433118
004330dc  _move s0,v0
004330e0  lw t9,-0x73b4(gp)
004330e4  lui a1,0x5b
004330e8  addiu a1,a1,-0x1afc
004330ec  move a0,v0
004330f0  jalr t9
004330f4  _li a2,0x5
004330f8  lw gp,0x10(sp)
004330fc  nop
00433100  lw t9,-0x68d4(gp)
00433104  nop
00433108  jalr t9
0043310c  _move a0,s0
00433110  lw gp,0x10(sp)
00433114  nop
00433118  lw t9,-0x7c28(gp)
0043311c  lui a0,0x5b
00433120  lui a1,0x5b
00433124  addiu a1,a1,-0x2390
00433128  jalr t9
0043312c  _addiu a0,a0,-0x1ae4
00433130  jal 0x00432d24
00433134  _clear a0
00433138  lw ra,0x24(sp)
0043313c  lw s2,0x20(sp)
00433140  lw s1,0x1c(sp)
00433144  lw s0,0x18(sp)
00433148  clear v0
0043314c  jr ra
00433150  _addiu sp,sp,0x28
