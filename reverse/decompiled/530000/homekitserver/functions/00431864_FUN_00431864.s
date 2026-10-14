# FUN_00431864 @ 00431864
00431864  addiu sp,sp,-0x158
00431868  sw ra,0x154(sp)
0043186c  sw s8,0x150(sp)
00431870  sw s7,0x14c(sp)
00431874  sw s6,0x148(sp)
00431878  sw s5,0x144(sp)
0043187c  sw s4,0x140(sp)
00431880  sw s3,0x13c(sp)
00431884  sw s2,0x138(sp)
00431888  sw s1,0x134(sp)
0043188c  sw s0,0x130(sp)
00431890  lui gp,0x62
00431894  addiu gp,gp,-0x5cf0
00431898  sw gp,0x18(sp)
0043189c  lw t9,-0x7244(gp)
004318a0  clear a1
004318a4  li a2,0x88
004318a8  move s2,a0
004318ac  jalr t9
004318b0  _addiu a0,sp,0x20
004318b4  lw gp,0x18(sp)
004318b8  addiu s8,sp,0xa8
004318bc  move a0,s8
004318c0  lw t9,-0x7244(gp)
004318c4  clear a1
004318c8  jalr t9
004318cc  _li a2,0x88
004318d0  lw gp,0x18(sp)
004318d4  lui s3,0x5b
004318d8  lui s7,0x5b
004318dc  addiu s3,s3,-0x2014
004318e0  addiu s7,s7,-0x2004
004318e4  li s6,0xc8
004318e8  addiu s5,sp,0x128
004318ec  addiu s4,sp,0x12c
004318f0  lw t9,-0x6764(gp)
004318f4  move a0,s3
004318f8  jalr t9
004318fc  _li a1,0x4
00431900  lw gp,0x18(sp)
00431904  bne v0,zero,0x00431928
00431908  _lui a1,0x5b
0043190c  lw t9,-0x69b4(gp)
00431910  move a0,s3
00431914  jalr t9
00431918  _addiu a1,a1,0x2988
0043191c  lw gp,0x18(sp)
00431920  bne v0,zero,0x00431934
00431924  _move s1,v0
00431928  lw t9,-0x5dc4(gp)
0043192c  b 0x00431aac
00431930  _li a0,0x1
00431934  lw t9,-0x6ba8(gp)
00431938  nop
0043193c  jalr t9
00431940  _move a0,v0
00431944  lw gp,0x18(sp)
00431948  move a0,v0
0043194c  lw t9,-0x72e4(gp)
00431950  nop
00431954  jalr t9
00431958  _li a1,0x2
0043195c  lw gp,0x18(sp)
00431960  bne v0,zero,0x004319cc
00431964  _move a2,s8
00431968  lw t9,-0x7cd8(gp)
0043196c  move a3,s5
00431970  move a1,s7
00431974  move a0,s1
00431978  jalr t9
0043197c  _sw s4,0x10(sp)
00431980  lw gp,0x18(sp)
00431984  nop
00431988  lw t9,-0x6ba8(gp)
0043198c  nop
00431990  jalr t9
00431994  _move a0,s1
00431998  lw gp,0x18(sp)
0043199c  move a0,v0
004319a0  lw t9,-0x72e4(gp)
004319a4  nop
004319a8  jalr t9
004319ac  _li a1,0x8
004319b0  lw gp,0x18(sp)
004319b4  nop
004319b8  lw t9,-0x68d4(gp)
004319bc  nop
004319c0  jalr t9
004319c4  _move a0,s1
004319c8  lw gp,0x18(sp)
004319cc  lw v0,0x12c(sp)
004319d0  nop
004319d4  beq v0,s6,0x00431a1c
004319d8  _slti v1,v0,0xc9
004319dc  beq v1,zero,0x004319f8
004319e0  _nop
004319e4  sltiu v0,v0,0x8
004319e8  beq v0,zero,0x00431ac0
004319ec  _nop
004319f0  b 0x00431a78
004319f4  _nop
004319f8  li v1,0x191
004319fc  beq v0,v1,0x00431a40
00431a00  _li v1,0x192
00431a04  beq v0,v1,0x00431a5c
00431a08  _li v1,0x190
00431a0c  bne v0,v1,0x00431ac0
00431a10  _nop
00431a14  b 0x00431a24
00431a18  _lui a0,0x5b
00431a1c  b 0x00431ac0
00431a20  _clear s0
00431a24  lw t9,-0x7ca0(gp)
00431a28  nop
00431a2c  jalr t9
00431a30  _addiu a0,a0,-0x1ff8
00431a34  lw gp,0x18(sp)
00431a38  b 0x00431ac0
00431a3c  _li s0,0x2
00431a40  lw t9,-0x7ca0(gp)
00431a44  lui a0,0x5b
00431a48  jalr t9
00431a4c  _addiu a0,a0,-0x1fe4
00431a50  lw gp,0x18(sp)
00431a54  b 0x00431ac0
00431a58  _li s0,0x3
00431a5c  lw t9,-0x7ca0(gp)
00431a60  lui a0,0x5b
00431a64  jalr t9
00431a68  _addiu a0,a0,-0x1fd4
00431a6c  lw gp,0x18(sp)
00431a70  b 0x00431ac0
00431a74  _li s0,0x4
00431a78  lw a1,0x128(sp)
00431a7c  lw v0,0xa0(sp)
00431a80  nop
00431a84  beq a1,v0,0x00431aa4
00431a88  _li a0,0x13
00431a8c  lw t9,-0x5914(gp)
00431a90  sw a1,0xa0(sp)
00431a94  jalr t9
00431a98  _sw a1,0x804(s2)
00431a9c  lw gp,0x18(sp)
00431aa0  nop
00431aa4  lw t9,-0x5dc4(gp)
00431aa8  li a0,0x2
00431aac  jalr t9
00431ab0  _nop
00431ab4  lw gp,0x18(sp)
00431ab8  b 0x004318f0
00431abc  _nop
00431ac0  lw s1,0x128(sp)
00431ac4  lw t9,-0x7c28(gp)
00431ac8  lui a0,0x5b
00431acc  move a2,s0
00431ad0  addiu a0,a0,-0x1fc4
00431ad4  move a1,s1
00431ad8  jalr t9
00431adc  _sw s1,0x804(s2)
00431ae0  lw gp,0x18(sp)
00431ae4  move a1,s1
00431ae8  lw t9,-0x5914(gp)
00431aec  nop
00431af0  jalr t9
00431af4  _li a0,0x13
00431af8  lw gp,0x18(sp)
00431afc  move a1,s0
00431b00  li a0,0x14
00431b04  lw t9,-0x5914(gp)
00431b08  nop
00431b0c  jalr t9
00431b10  _sw s0,0x808(s2)
00431b14  lw gp,0x18(sp)
00431b18  addiu a0,sp,0xa8
00431b1c  clear a1
00431b20  lw t9,-0x7244(gp)
00431b24  nop
00431b28  jalr t9
00431b2c  _li a2,0x88
00431b30  lw gp,0x18(sp)
00431b34  addiu a0,sp,0x20
00431b38  clear a1
00431b3c  lw t9,-0x7244(gp)
00431b40  nop
00431b44  jalr t9
00431b48  _li a2,0x88
00431b4c  lw gp,0x18(sp)
00431b50  nop
00431b54  lw t9,-0x75a8(gp)
00431b58  nop
00431b5c  jalr t9
00431b60  _clear a0
