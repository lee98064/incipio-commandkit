# FUN_00403884 @ 00403884
00403884  addiu sp,sp,-0x30
00403888  sw ra,0x2c(sp)
0040388c  sw s0,0x28(sp)
00403890  lui gp,0x43
00403894  addiu gp,gp,-0x4c90
00403898  sw gp,0x18(sp)
0040389c  lw t9,-0x7df0(gp)
004038a0  lui a0,0x41
004038a4  sw zero,0x20(sp)
004038a8  jalr t9
004038ac  _addiu a0,a0,0x540
004038b0  lw gp,0x18(sp)
004038b4  beq v0,zero,0x004038cc
004038b8  _li a0,0x2b0
004038bc  lw t9,-0x7e4c(gp)
004038c0  sw zero,0x20(sp)
004038c4  jalr t9
004038c8  _addiu a1,sp,0x20
004038cc  jal 0x0040318c
004038d0  _lui s0,0x42
004038d4  lw gp,0x18(sp)
004038d8  nop
004038dc  lw t9,-0x7f64(gp)
004038e0  lw a0,-0x7e50(gp)
004038e4  jalr t9
004038e8  _nop
004038ec  lb v0,0x36d4(s0)
004038f0  lw gp,0x18(sp)
004038f4  beq v0,zero,0x00403984
004038f8  _lui v0,0x42
004038fc  lw v0,-0x7f2c(gp)
00403900  lw t9,-0x7e64(gp)
00403904  lui a3,0x41
00403908  lw a0,0x0(v0)
0040390c  lui a1,0x41
00403910  li v0,0x2ca
00403914  lui a2,0x41
00403918  addiu a3,a3,0xf2c
0040391c  addiu a1,a1,0x834
00403920  addiu a2,a2,-0x74
00403924  jalr t9
00403928  _sw v0,0x10(sp)
0040392c  lw gp,0x18(sp)
00403930  nop
00403934  lw t9,-0x7f88(gp)
00403938  nop
0040393c  jalr t9
00403940  _addiu a0,s0,0x36d4
00403944  lw gp,0x18(sp)
00403948  lui a0,0x41
0040394c  addiu a0,a0,0x540
00403950  lw t9,-0x7dc4(gp)
00403954  andi a2,v0,0xffff
00403958  jalr t9
0040395c  _addiu a1,s0,0x36d4
00403960  lw gp,0x18(sp)
00403964  addiu a0,s0,0x36d4
00403968  clear a1
0040396c  lw t9,-0x7ee0(gp)
00403970  nop
00403974  jalr t9
00403978  _li a2,0x100
0040397c  lw gp,0x18(sp)
00403980  lui v0,0x42
00403984  sw zero,0x36bc(v0)
00403988  lui v0,0x42
0040398c  lw t9,-0x7f10(gp)
00403990  lw a0,-0x7e50(gp)
00403994  sw zero,0x36c0(v0)
00403998  lui v0,0x42
0040399c  sw zero,0x36c4(v0)
004039a0  lui v0,0x42
004039a4  jalr t9
004039a8  _sw zero,0x36c8(v0)
004039ac  lw gp,0x18(sp)
004039b0  nop
004039b4  lw t9,-0x7f64(gp)
004039b8  lw a0,-0x7d94(gp)
004039bc  jalr t9
004039c0  _nop
004039c4  lw gp,0x18(sp)
004039c8  lui v0,0x42
004039cc  lw t9,-0x7f10(gp)
004039d0  lw a0,-0x7d94(gp)
004039d4  jalr t9
004039d8  _sw zero,0x36cc(v0)
004039dc  lw gp,0x18(sp)
004039e0  nop
004039e4  lw t9,-0x7f64(gp)
004039e8  lw a0,-0x7dc8(gp)
004039ec  jalr t9
004039f0  _nop
004039f4  lw gp,0x18(sp)
004039f8  lui v0,0x42
004039fc  lui a1,0x41
00403a00  lw t9,-0x7d90(gp)
00403a04  lui a0,0x42
00403a08  addiu a1,a1,0x49c
00403a0c  addiu a0,a0,0x3690
00403a10  jalr t9
00403a14  _sw zero,0x37d4(v0)
00403a18  lw gp,0x18(sp)
00403a1c  nop
00403a20  lw t9,-0x7f10(gp)
00403a24  lw a0,-0x7dc8(gp)
00403a28  jalr t9
00403a2c  _nop
00403a30  lw gp,0x18(sp)
00403a34  lui a0,0x41
00403a38  lw t9,-0x7e18(gp)
00403a3c  nop
00403a40  jalr t9
00403a44  _addiu a0,a0,0x888
00403a48  lw gp,0x18(sp)
00403a4c  lui a0,0x41
00403a50  lw t9,-0x7e18(gp)
00403a54  nop
00403a58  jalr t9
00403a5c  _addiu a0,a0,0x8b4
00403a60  lw gp,0x18(sp)
00403a64  lui a0,0x41
00403a68  lw t9,-0x7e18(gp)
00403a6c  nop
00403a70  jalr t9
00403a74  _addiu a0,a0,0x548
00403a78  lw gp,0x18(sp)
00403a7c  lui a0,0x41
00403a80  lw t9,-0x7e98(gp)
00403a84  nop
00403a88  jalr t9
00403a8c  _addiu a0,a0,0x4a8
00403a90  lw gp,0x18(sp)
00403a94  lui a0,0x41
00403a98  lw t9,-0x7e98(gp)
00403a9c  nop
00403aa0  jalr t9
00403aa4  _addiu a0,a0,0x1e0
00403aa8  lw gp,0x18(sp)
00403aac  lui a0,0x41
00403ab0  lw t9,-0x7e98(gp)
00403ab4  nop
00403ab8  jalr t9
00403abc  _addiu a0,a0,0x430
00403ac0  lw gp,0x18(sp)
00403ac4  lui a0,0x41
00403ac8  lw t9,-0x7e98(gp)
00403acc  nop
00403ad0  jalr t9
00403ad4  _addiu a0,a0,0x3a0
00403ad8  lw gp,0x18(sp)
00403adc  lui a0,0x41
00403ae0  lw t9,-0x7e98(gp)
00403ae4  nop
00403ae8  jalr t9
00403aec  _addiu a0,a0,0x464
00403af0  lw gp,0x18(sp)
00403af4  lui a0,0x41
00403af8  lw t9,-0x7e98(gp)
00403afc  nop
00403b00  jalr t9
00403b04  _addiu a0,a0,0x240
00403b08  lw gp,0x18(sp)
00403b0c  lui a0,0x41
00403b10  lw t9,-0x7e98(gp)
00403b14  nop
00403b18  jalr t9
00403b1c  _addiu a0,a0,0x2c8
00403b20  lw gp,0x18(sp)
00403b24  lui a0,0x41
00403b28  lw t9,-0x7e98(gp)
00403b2c  nop
00403b30  jalr t9
00403b34  _addiu a0,a0,0x568
00403b38  lw gp,0x18(sp)
00403b3c  lui a0,0x41
00403b40  lw t9,-0x7e98(gp)
00403b44  nop
00403b48  jalr t9
00403b4c  _addiu a0,a0,0x58c
00403b50  lw gp,0x18(sp)
00403b54  nop
00403b58  lw t9,-0x7da4(gp)
00403b5c  nop
00403b60  jalr t9
00403b64  _nop
00403b68  jal 0x004034f4
00403b6c  _nop
00403b70  lw ra,0x2c(sp)
00403b74  lw s0,0x28(sp)
00403b78  jr ra
00403b7c  _addiu sp,sp,0x30
