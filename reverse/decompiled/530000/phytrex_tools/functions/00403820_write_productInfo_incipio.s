# write_productInfo_incipio @ 00403820
00403820  addiu sp,sp,-0x48
00403824  sw ra,0x44(sp)
00403828  sw s8,0x40(sp)
0040382c  move s8,sp
00403830  lui gp,0x42
00403834  addiu gp,gp,-0x1db0
00403838  sw gp,0x10(sp)
0040383c  sw a0,0x48(s8)
00403840  addiu v0,s8,0x1c
00403844  move a0,v0
00403848  clear a1
0040384c  li a2,0x22
00403850  lw v0,-0x7f98(gp)
00403854  nop
00403858  move t9,v0
0040385c  jalr t9
00403860  _nop
00403864  lw gp,0x10(s8)
00403868  lw v0,0x48(s8)
0040386c  nop
00403870  addiu v0,v0,0xc
00403874  lw v0,0x0(v0)
00403878  nop
0040387c  beq v0,zero,0x00403a34
00403880  _nop
00403884  lw v0,0x48(s8)
00403888  nop
0040388c  addiu v0,v0,0x10
00403890  lw v0,0x0(v0)
00403894  nop
00403898  beq v0,zero,0x00403a34
0040389c  _nop
004038a0  lw v0,0x48(s8)
004038a4  nop
004038a8  addiu v0,v0,0xc
004038ac  lw v0,0x0(v0)
004038b0  nop
004038b4  move a0,v0
004038b8  lui v0,0x40
004038bc  addiu a1,v0,0x5e00
004038c0  li a2,0xe
004038c4  lw v0,-0x7f84(gp)
004038c8  nop
004038cc  move t9,v0
004038d0  jalr t9
004038d4  _nop
004038d8  lw gp,0x10(s8)
004038dc  beq v0,zero,0x0040390c
004038e0  _nop
004038e4  lui v0,0x40
004038e8  addiu a0,v0,0x5e10
004038ec  lw v0,-0x7f50(gp)
004038f0  nop
004038f4  move t9,v0
004038f8  jalr t9
004038fc  _nop
00403900  lw gp,0x10(s8)
00403904  b 0x00403b50
00403908  _nop
0040390c  lw v0,0x48(s8)
00403910  nop
00403914  addiu v0,v0,0xc
00403918  lw v0,0x0(v0)
0040391c  addiu v1,s8,0x1c
00403920  move a0,v1
00403924  move a1,v0
00403928  lw v0,-0x7f24(gp)
0040392c  nop
00403930  move t9,v0
00403934  jalr t9
00403938  _nop
0040393c  lw gp,0x10(s8)
00403940  lw v0,0x48(s8)
00403944  nop
00403948  addiu v0,v0,0x10
0040394c  lw v0,0x0(v0)
00403950  addiu v1,s8,0x1c
00403954  addiu v1,v1,0xe
00403958  move a0,v1
0040395c  move a1,v0
00403960  lw v0,-0x7f24(gp)
00403964  nop
00403968  move t9,v0
0040396c  jalr t9
00403970  _nop
00403974  lw gp,0x10(s8)
00403978  lui v0,0x40
0040397c  addiu a0,v0,0x5e20
00403980  lw v0,-0x7f50(gp)
00403984  nop
00403988  move t9,v0
0040398c  jalr t9
00403990  _nop
00403994  lw gp,0x10(s8)
00403998  lui v0,0x40
0040399c  addiu v1,v0,0x5e40
004039a0  addiu v0,s8,0x1c
004039a4  move a0,v1
004039a8  move a1,v0
004039ac  lw v0,-0x7f2c(gp)
004039b0  nop
004039b4  move t9,v0
004039b8  jalr t9
004039bc  _nop
004039c0  lw gp,0x10(s8)
004039c4  lui v0,0x40
004039c8  addiu v1,v0,0x5e64
004039cc  addiu v0,s8,0x1c
004039d0  addiu v0,v0,0xe
004039d4  move a0,v1
004039d8  move a1,v0
004039dc  lw v0,-0x7f2c(gp)
004039e0  nop
004039e4  move t9,v0
004039e8  jalr t9
004039ec  _nop
004039f0  lw gp,0x10(s8)
004039f4  lui v0,0x40
004039f8  addiu a0,v0,0x5e88
004039fc  li a1,0x2
00403a00  lw v0,-0x7fc4(gp)
00403a04  nop
00403a08  move t9,v0
00403a0c  jalr t9
00403a10  _nop
00403a14  lw gp,0x10(s8)
00403a18  sw v0,0x18(s8)
00403a1c  lw v0,0x18(s8)
00403a20  nop
00403a24  bgtz v0,0x00403a5c
00403a28  _nop
00403a2c  b 0x00403b14
00403a30  _nop
00403a34  lui v0,0x40
00403a38  addiu a0,v0,0x5e98
00403a3c  lw v0,-0x7f50(gp)
00403a40  nop
00403a44  move t9,v0
00403a48  jalr t9
00403a4c  _nop
00403a50  lw gp,0x10(s8)
00403a54  b 0x00403b50
00403a58  _nop
00403a5c  lw a0,0x18(s8)
00403a60  lui v0,0x1
00403a64  ori a1,v0,0x8000
00403a68  clear a2
00403a6c  lw v0,-0x7f64(gp)
00403a70  nop
00403a74  move t9,v0
00403a78  jalr t9
00403a7c  _nop
00403a80  lw gp,0x10(s8)
00403a84  move v1,v0
00403a88  li v0,-0x1
00403a8c  bne v1,v0,0x00403ab4
00403a90  _nop
00403a94  lui v0,0x40
00403a98  addiu a0,v0,0x5eac
00403a9c  lw v0,-0x7f50(gp)
00403aa0  nop
00403aa4  move t9,v0
00403aa8  jalr t9
00403aac  _nop
00403ab0  lw gp,0x10(s8)
00403ab4  addiu v0,s8,0x1c
00403ab8  lw a0,0x18(s8)
00403abc  move a1,v0
00403ac0  li a2,0x22
00403ac4  lw v0,-0x7f74(gp)
00403ac8  nop
00403acc  move t9,v0
00403ad0  jalr t9
00403ad4  _nop
00403ad8  lw gp,0x10(s8)
00403adc  move v1,v0
00403ae0  li v0,-0x1
00403ae4  bne v1,v0,0x00403b34
00403ae8  _nop
00403aec  lui v0,0x40
00403af0  addiu a0,v0,0x5ed8
00403af4  lw v0,-0x7f50(gp)
00403af8  nop
00403afc  move t9,v0
00403b00  jalr t9
00403b04  _nop
00403b08  lw gp,0x10(s8)
00403b0c  b 0x00403b34
00403b10  _nop
00403b14  lui v0,0x40
00403b18  addiu a0,v0,0x5f00
00403b1c  lw v0,-0x7f50(gp)
00403b20  nop
00403b24  move t9,v0
00403b28  jalr t9
00403b2c  _nop
00403b30  lw gp,0x10(s8)
00403b34  lw a0,0x18(s8)
00403b38  lw v0,-0x7fcc(gp)
00403b3c  nop
00403b40  move t9,v0
00403b44  jalr t9
00403b48  _nop
00403b4c  lw gp,0x10(s8)
00403b50  move sp,s8
00403b54  lw ra,0x44(sp)
00403b58  lw s8,0x40(sp)
00403b5c  addiu sp,sp,0x48
00403b60  jr ra
00403b64  _nop
