# FUN_0040573c @ 0040573c
0040573c  addiu sp,sp,-0x30
00405740  sw ra,0x2c(sp)
00405744  sw s2,0x28(sp)
00405748  sw s1,0x24(sp)
0040574c  sw s0,0x20(sp)
00405750  lui gp,0x43
00405754  addiu gp,gp,-0x4f70
00405758  sw gp,0x10(sp)
0040575c  lhu a1,0x0(a0)
00405760  li v0,0x2
00405764  lw t9,-0x7dbc(gp)
00405768  bne a1,v0,0x00405ad4
0040576c  _move s0,a0
00405770  lw a1,0x4(a0)
00405774  lui a0,0x41
00405778  jalr t9
0040577c  _addiu a0,a0,0xd14
00405780  lw v0,0x4(s0)
00405784  lw gp,0x10(sp)
00405788  bne v0,zero,0x00405ae0
0040578c  _nop
00405790  lw t9,-0x7e20(gp)
00405794  lui a0,0x41
00405798  jalr t9
0040579c  _addiu a0,a0,0xd24
004057a0  lw gp,0x10(sp)
004057a4  lui a0,0x41
004057a8  lw t9,-0x7e20(gp)
004057ac  nop
004057b0  jalr t9
004057b4  _addiu a0,a0,0xd48
004057b8  lw gp,0x10(sp)
004057bc  lui a0,0x41
004057c0  lw t9,-0x7e14(gp)
004057c4  nop
004057c8  jalr t9
004057cc  _addiu a0,a0,0xd64
004057d0  lw gp,0x10(sp)
004057d4  lui a0,0x41
004057d8  lw t9,-0x7df8(gp)
004057dc  nop
004057e0  jalr t9
004057e4  _addiu a0,a0,0x280
004057e8  lw gp,0x10(sp)
004057ec  beq v0,zero,0x0040580c
004057f0  _li a0,0x2b0
004057f4  lw t9,-0x7e2c(gp)
004057f8  nop
004057fc  jalr t9
00405800  _addiu a1,sp,0x18
00405804  lw gp,0x10(sp)
00405808  nop
0040580c  lw t9,-0x7f3c(gp)
00405810  nop
00405814  jalr t9
00405818  _nop
0040581c  move s0,v0
00405820  lw v0,0x18(sp)
00405824  lw gp,0x10(sp)
00405828  bne v0,zero,0x004058dc
0040582c  _lui a0,0x41
00405830  lw t9,-0x7f64(gp)
00405834  lw a0,-0x7e58(gp)
00405838  jalr t9
0040583c  _nop
00405840  lw gp,0x10(sp)
00405844  nop
00405848  lw v0,-0x7f50(gp)
0040584c  lw t9,-0x7f18(gp)
00405850  lw a0,-0x7e58(gp)
00405854  lw s2,0x0(v0)
00405858  lw v0,-0x7f6c(gp)
0040585c  nop
00405860  lw s1,0x0(v0)
00405864  jalr t9
00405868  _nop
0040586c  lw gp,0x10(sp)
00405870  bne s2,zero,0x00405880
00405874  _nop
00405878  beq s1,zero,0x00405910
0040587c  _nop
00405880  slti s0,s0,0x3
00405884  beq s0,zero,0x004058cc
00405888  _nop
0040588c  lw t9,-0x7f64(gp)
00405890  lw a0,-0x7e58(gp)
00405894  jalr t9
00405898  _nop
0040589c  lw gp,0x10(sp)
004058a0  nop
004058a4  lw v0,-0x7e48(gp)
004058a8  lw t9,-0x7f18(gp)
004058ac  lw a0,-0x7e58(gp)
004058b0  jalr t9
004058b4  _sw zero,0x0(v0)
004058b8  lw gp,0x10(sp)
004058bc  lui a0,0x41
004058c0  lw t9,-0x7e14(gp)
004058c4  b 0x00405ac4
004058c8  _addiu a0,a0,0xdb4
004058cc  lui a0,0x41
004058d0  lw t9,-0x7e14(gp)
004058d4  b 0x00405ac4
004058d8  _addiu a0,a0,0xde8
004058dc  lw t9,-0x7df8(gp)
004058e0  nop
004058e4  jalr t9
004058e8  _addiu a0,a0,0x280
004058ec  lw gp,0x10(sp)
004058f0  beq v0,zero,0x00405910
004058f4  _li a0,0x2b0
004058f8  lw t9,-0x7e54(gp)
004058fc  sw zero,0x18(sp)
00405900  jalr t9
00405904  _addiu a1,sp,0x18
00405908  lw gp,0x10(sp)
0040590c  nop
00405910  lw t9,-0x7efc(gp)
00405914  lw s0,-0x7de4(gp)
00405918  jalr t9
0040591c  _nop
00405920  lw gp,0x10(sp)
00405924  nop
00405928  lw t9,-0x7f64(gp)
0040592c  lw a0,-0x7e58(gp)
00405930  jalr t9
00405934  _nop
00405938  lb v0,0x0(s0)
0040593c  lw gp,0x10(sp)
00405940  beq v0,zero,0x00405998
00405944  _nop
00405948  lw t9,-0x7f88(gp)
0040594c  nop
00405950  jalr t9
00405954  _move a0,s0
00405958  lw gp,0x10(sp)
0040595c  lui a0,0x41
00405960  addiu a0,a0,0x280
00405964  lw t9,-0x7dd0(gp)
00405968  andi a2,v0,0xffff
0040596c  jalr t9
00405970  _move a1,s0
00405974  lw gp,0x10(sp)
00405978  move a0,s0
0040597c  clear a1
00405980  lw t9,-0x7ee8(gp)
00405984  nop
00405988  jalr t9
0040598c  _li a2,0x100
00405990  lw gp,0x10(sp)
00405994  nop
00405998  lw v0,-0x7f50(gp)
0040599c  lw t9,-0x7f18(gp)
004059a0  lw a0,-0x7e58(gp)
004059a4  sw zero,0x0(v0)
004059a8  lw v0,-0x7f6c(gp)
004059ac  nop
004059b0  sw zero,0x0(v0)
004059b4  lw v0,-0x7e48(gp)
004059b8  nop
004059bc  sw zero,0x0(v0)
004059c0  lw v0,-0x7e50(gp)
004059c4  jalr t9
004059c8  _sw zero,0x0(v0)
004059cc  lw gp,0x10(sp)
004059d0  nop
004059d4  lw t9,-0x7f64(gp)
004059d8  lw a0,-0x7da0(gp)
004059dc  jalr t9
004059e0  _nop
004059e4  lw gp,0x10(sp)
004059e8  nop
004059ec  lw v0,-0x7fb0(gp)
004059f0  lw t9,-0x7f18(gp)
004059f4  lw a0,-0x7da0(gp)
004059f8  jalr t9
004059fc  _sw zero,0x0(v0)
00405a00  lw gp,0x10(sp)
00405a04  nop
00405a08  lw t9,-0x7f64(gp)
00405a0c  lw a0,-0x7dd4(gp)
00405a10  jalr t9
00405a14  _nop
00405a18  lw gp,0x10(sp)
00405a1c  lui a1,0x41
00405a20  addiu a1,a1,0x1dc
00405a24  lw v0,-0x7fa4(gp)
00405a28  lw t9,-0x7d9c(gp)
00405a2c  lw a0,-0x7f10(gp)
00405a30  jalr t9
00405a34  _sw zero,0x0(v0)
00405a38  lw gp,0x10(sp)
00405a3c  nop
00405a40  lw t9,-0x7f18(gp)
00405a44  lw a0,-0x7dd4(gp)
00405a48  jalr t9
00405a4c  _nop
00405a50  lw gp,0x10(sp)
00405a54  lui a0,0x41
00405a58  lw t9,-0x7e20(gp)
00405a5c  nop
00405a60  jalr t9
00405a64  _addiu a0,a0,0x5b8
00405a68  lw gp,0x10(sp)
00405a6c  lui a0,0x41
00405a70  lw t9,-0x7e20(gp)
00405a74  nop
00405a78  jalr t9
00405a7c  _addiu a0,a0,0x5e4
00405a80  lw gp,0x10(sp)
00405a84  lui a0,0x41
00405a88  lw t9,-0x7e20(gp)
00405a8c  nop
00405a90  jalr t9
00405a94  _addiu a0,a0,0xd84
00405a98  lw gp,0x10(sp)
00405a9c  lui a0,0x41
00405aa0  lw t9,-0x7e14(gp)
00405aa4  nop
00405aa8  jalr t9
00405aac  _addiu a0,a0,0xd98
00405ab0  lw gp,0x10(sp)
00405ab4  lui a0,0x41
00405ab8  addiu a0,a0,0xdac
00405abc  lw t9,-0x7e20(gp)
00405ac0  nop
00405ac4  jalr t9
00405ac8  _nop
00405acc  b 0x00405ae0
00405ad0  _nop
00405ad4  lui a0,0x41
00405ad8  jalr t9
00405adc  _addiu a0,a0,0xe08
00405ae0  lw ra,0x2c(sp)
00405ae4  lw s2,0x28(sp)
00405ae8  lw s1,0x24(sp)
00405aec  lw s0,0x20(sp)
00405af0  clear v0
00405af4  jr ra
00405af8  _addiu sp,sp,0x30
