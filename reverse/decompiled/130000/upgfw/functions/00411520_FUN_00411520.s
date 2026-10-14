# FUN_00411520 @ 00411520
00411520  addiu sp,sp,-0xcf0
00411524  sw ra,0xcec(sp)
00411528  sw s6,0xce8(sp)
0041152c  sw s5,0xce4(sp)
00411530  sw s4,0xce0(sp)
00411534  sw s3,0xcdc(sp)
00411538  sw s2,0xcd8(sp)
0041153c  sw s1,0xcd4(sp)
00411540  sw s0,0xcd0(sp)
00411544  lui gp,0x58
00411548  addiu gp,gp,0x5010
0041154c  sw gp,0x18(sp)
00411550  lw t9,-0x7764(gp)
00411554  addiu s0,sp,0x834
00411558  move s2,a0
0041155c  li a2,0x49c
00411560  move a0,s0
00411564  move s1,a1
00411568  jalr t9
0041156c  _clear a1
00411570  lw gp,0x18(sp)
00411574  li a2,0x400
00411578  addiu a0,sp,0x34
0041157c  lw t9,-0x7764(gp)
00411580  nop
00411584  jalr t9
00411588  _clear a1
0041158c  move a1,s0
00411590  jal 0x004113f0
00411594  _move a0,s2
00411598  lw gp,0x18(sp)
0041159c  lw a1,0xcc4(sp)
004115a0  lui a0,0x53
004115a4  lw t9,-0x7dc8(gp)
004115a8  addiu a0,a0,0x2548
004115ac  jalr t9
004115b0  _li s0,-0x1
004115b4  lw gp,0x18(sp)
004115b8  lui a0,0x53
004115bc  addiu a0,a0,0x2558
004115c0  lw t9,-0x7dc8(gp)
004115c4  nop
004115c8  jalr t9
004115cc  _addiu a1,sp,0x83c
004115d0  lw gp,0x18(sp)
004115d4  lui a0,0x53
004115d8  addiu a0,a0,0x2564
004115dc  lw t9,-0x7dc8(gp)
004115e0  nop
004115e4  jalr t9
004115e8  _addiu a1,sp,0x8bc
004115ec  lw gp,0x18(sp)
004115f0  lw a1,0x838(sp)
004115f4  lui a0,0x53
004115f8  lw t9,-0x7dc8(gp)
004115fc  nop
00411600  jalr t9
00411604  _addiu a0,a0,0x2574
00411608  lw gp,0x18(sp)
0041160c  li a0,0x2
00411610  li a1,0x2
00411614  lw t9,-0x79ac(gp)
00411618  nop
0041161c  jalr t9
00411620  _clear a2
00411624  lw gp,0x18(sp)
00411628  bne v0,s0,0x004116b4
0041162c  _sw v0,0x834(sp)
00411630  lw t9,-0x686c(gp)
00411634  lw v0,-0x72fc(gp)
00411638  nop
0041163c  lw s0,0x0(v0)
00411640  jalr t9
00411644  _nop
00411648  lw gp,0x18(sp)
0041164c  lw a0,0x0(v0)
00411650  lw t9,-0x7d94(gp)
00411654  nop
00411658  jalr t9
0041165c  _nop
00411660  lw gp,0x18(sp)
00411664  lui a1,0x53
00411668  move a0,s0
0041166c  lw t9,-0x785c(gp)
00411670  addiu a1,a1,0x2584
00411674  jalr t9
00411678  _move a2,v0
0041167c  lw gp,0x18(sp)
00411680  nop
00411684  lw v1,-0x6c68(gp)
00411688  nop
0041168c  lw v1,0x0(v1)
00411690  nop
00411694  beq v1,zero,0x00411df8
00411698  _li v0,0x194
0041169c  lw t9,-0x7a98(gp)
004116a0  nop
004116a4  jalr t9
004116a8  _li a0,0x194
004116ac  b 0x00411df8
004116b0  _li v0,0x194
004116b4  addiu a1,sp,0x24
004116b8  li v1,0x2
004116bc  sw zero,0x4(a1)
004116c0  sh v1,0x24(sp)
004116c4  sw zero,0x8(a1)
004116c8  sw zero,0xc(a1)
004116cc  sh zero,0x26(sp)
004116d0  move a0,v0
004116d4  lw v0,0x10(zero)
004116d8  lw t9,-0x6990(gp)
004116dc  li a2,0x10
004116e0  lw v0,0x0(v0)
004116e4  nop
004116e8  lw v0,0x0(v0)
004116ec  jalr t9
004116f0  _sw v0,0x28(sp)
004116f4  lw gp,0x18(sp)
004116f8  bne v0,s0,0x00411784
004116fc  _nop
00411700  lw t9,-0x686c(gp)
00411704  lw v0,-0x72fc(gp)
00411708  nop
0041170c  lw s0,0x0(v0)
00411710  jalr t9
00411714  _nop
00411718  lw gp,0x18(sp)
0041171c  lw a0,0x0(v0)
00411720  lw t9,-0x7d94(gp)
00411724  nop
00411728  jalr t9
0041172c  _nop
00411730  lw gp,0x18(sp)
00411734  lui a1,0x53
00411738  move a0,s0
0041173c  lw t9,-0x785c(gp)
00411740  addiu a1,a1,0x2598
00411744  jalr t9
00411748  _move a2,v0
0041174c  lw gp,0x18(sp)
00411750  nop
00411754  lw v1,-0x6c68(gp)
00411758  nop
0041175c  lw v1,0x0(v1)
00411760  nop
00411764  beq v1,zero,0x00411df8
00411768  _li v0,0x195
0041176c  lw t9,-0x7a98(gp)
00411770  nop
00411774  jalr t9
00411778  _li a0,0x195
0041177c  b 0x00411df8
00411780  _li v0,0x195
00411784  lw v1,0xcc4(sp)
00411788  li v0,0x1
0041178c  bne v1,v0,0x00411988
00411790  _nop
00411794  lw t9,-0x76d0(gp)
00411798  lw s0,-0x72fc(gp)
0041179c  jalr t9
004117a0  _nop
004117a4  lw gp,0x18(sp)
004117a8  lw a1,0x0(s0)
004117ac  lui a0,0x53
004117b0  lw t9,-0x7630(gp)
004117b4  nop
004117b8  jalr t9
004117bc  _addiu a0,a0,0x25ac
004117c0  lw gp,0x18(sp)
004117c4  nop
004117c8  lw t9,-0x6be0(gp)
004117cc  nop
004117d0  jalr t9
004117d4  _nop
004117d8  lw gp,0x18(sp)
004117dc  nop
004117e0  lw t9,-0x7588(gp)
004117e4  nop
004117e8  jalr t9
004117ec  _nop
004117f0  lw gp,0x18(sp)
004117f4  nop
004117f8  lw t9,-0x7110(gp)
004117fc  nop
00411800  jalr t9
00411804  _move a0,v0
00411808  lw gp,0x18(sp)
0041180c  beq v0,zero,0x00411830
00411810  _sw v0,0xccc(sp)
00411814  lw t9,-0x7814(gp)
00411818  nop
0041181c  jalr t9
00411820  _move a0,v0
00411824  lw gp,0x18(sp)
00411828  bne v0,zero,0x00411878
0041182c  _sw v0,0xcc8(sp)
00411830  lw t9,-0x67d0(gp)
00411834  lw a0,0x0(s0)
00411838  jalr t9
0041183c  _nop
00411840  lw gp,0x18(sp)
00411844  nop
00411848  lw v0,-0x6c68(gp)
0041184c  nop
00411850  lw v0,0x0(v0)
00411854  nop
00411858  beq v0,zero,0x00411df4
0041185c  _nop
00411860  lw t9,-0x7a98(gp)
00411864  nop
00411868  jalr t9
0041186c  _li a0,0x196
00411870  b 0x00411df8
00411874  _li v0,0x196
00411878  lw t9,-0x71f0(gp)
0041187c  lw a1,0x834(sp)
00411880  jalr t9
00411884  _move a0,v0
00411888  lw gp,0x18(sp)
0041188c  bne v0,zero,0x004118a4
00411890  _nop
00411894  lw a0,0x0(s0)
00411898  lw t9,-0x67d0(gp)
0041189c  b 0x00411d20
004118a0  _nop
004118a4  lw t9,-0x6d58(gp)
004118a8  lui s0,0x1
004118ac  jalr t9
004118b0  _addiu s2,sp,0x20
004118b4  b 0x004118f8
004118b8  _nop
004118bc  lw t9,-0x79f8(gp)
004118c0  nop
004118c4  jalr t9
004118c8  _nop
004118cc  div v0,s0
004118d0  bne s0,zero,0x004118dc
004118d4  _nop
004118d8  break 0x1c00
004118dc  lw gp,0x18(sp)
004118e0  move a0,s2
004118e4  li a1,0x2
004118e8  lw t9,-0x710c(gp)
004118ec  mfhi v0
004118f0  jalr t9
004118f4  _sh v0,0x20(sp)
004118f8  lw gp,0x18(sp)
004118fc  nop
00411900  lw t9,-0x7c3c(gp)
00411904  nop
00411908  jalr t9
0041190c  _nop
00411910  lw gp,0x18(sp)
00411914  beq v0,zero,0x004118bc
00411918  _nop
0041191c  lw t9,-0x66fc(gp)
00411920  lw a0,0xcc8(sp)
00411924  jalr t9
00411928  _nop
0041192c  li v1,0x1
00411930  lw gp,0x18(sp)
00411934  beq v0,v1,0x00411988
00411938  _nop
0041193c  lw v0,-0x72fc(gp)
00411940  lw t9,-0x67d0(gp)
00411944  lw a0,0x0(v0)
00411948  jalr t9
0041194c  _nop
00411950  lw gp,0x18(sp)
00411954  nop
00411958  lw v1,-0x6c68(gp)
0041195c  nop
00411960  lw v1,0x0(v1)
00411964  nop
00411968  beq v1,zero,0x00411df8
0041196c  _li v0,0x197
00411970  lw t9,-0x7a98(gp)
00411974  nop
00411978  jalr t9
0041197c  _li a0,0x197
00411980  b 0x00411df8
00411984  _li v0,0x197
00411988  lw v0,0x838(sp)
0041198c  lw t9,-0x7930(gp)
00411990  addiu s0,sp,0x434
00411994  lui a1,0x53
00411998  addiu a2,sp,0x8bc
0041199c  addiu a3,sp,0x83c
004119a0  addiu a1,a1,0x25c0
004119a4  move a0,s0
004119a8  jalr t9
004119ac  _sw v0,0x10(sp)
004119b0  lw gp,0x18(sp)
004119b4  lui a0,0x55
004119b8  addiu a0,a0,0x735c
004119bc  lw t9,-0x7dc8(gp)
004119c0  move a1,s0
004119c4  jalr t9
004119c8  _lui s6,0x53
004119cc  lw gp,0x18(sp)
004119d0  move a0,s0
004119d4  addiu s6,s6,0x265c
004119d8  lw t9,-0x6e34(gp)
004119dc  clear s2
004119e0  jalr t9
004119e4  _li s5,0x50
004119e8  lw gp,0x18(sp)
004119ec  move s3,v0
004119f0  b 0x00411a8c
004119f4  _li s4,-0x1
004119f8  beq s5,zero,0x00411a10
004119fc  _subu a2,s3,s2
00411a00  lw t9,-0x7858(gp)
00411a04  lw a0,0xcc8(sp)
00411a08  b 0x00411a18
00411a0c  _nop
00411a10  lw t9,-0x735c(gp)
00411a14  lw a0,0x834(sp)
00411a18  jalr t9
00411a1c  _addu a1,s0,s2
00411a20  lw gp,0x18(sp)
00411a24  bne v0,s4,0x00411a78
00411a28  _addu s2,s2,v0
00411a2c  lw v0,-0x72fc(gp)
00411a30  lw t9,-0x67d0(gp)
00411a34  lw a0,0x0(v0)
00411a38  jalr t9
00411a3c  _nop
00411a40  lw gp,0x18(sp)
00411a44  nop
00411a48  lw v1,-0x6c68(gp)
00411a4c  nop
00411a50  lw v1,0x0(v1)
00411a54  nop
00411a58  beq v1,zero,0x00411df8
00411a5c  _li v0,0x198
00411a60  lw t9,-0x7a98(gp)
00411a64  nop
00411a68  jalr t9
00411a6c  _li a0,0x198
00411a70  b 0x00411df8
00411a74  _li v0,0x198
00411a78  lw t9,-0x7dc8(gp)
00411a7c  move a0,s6
00411a80  jalr t9
00411a84  _move a1,s2
00411a88  lw gp,0x18(sp)
00411a8c  slt v0,s2,s3
00411a90  bne v0,zero,0x004119f8
00411a94  _lui a1,0x54
00411a98  lw t9,-0x71e4(gp)
00411a9c  addiu a1,a1,-0x36f8
00411aa0  jalr t9
00411aa4  _move a0,s1
00411aa8  lw gp,0x18(sp)
00411aac  lui a0,0x53
00411ab0  move s0,v0
00411ab4  lw t9,-0x7dc8(gp)
00411ab8  addiu a0,a0,0x2670
00411abc  jalr t9
00411ac0  _move a1,s1
00411ac4  lw gp,0x18(sp)
00411ac8  bne s0,zero,0x00411b1c
00411acc  _lui a0,0x53
00411ad0  lw t9,-0x686c(gp)
00411ad4  nop
00411ad8  jalr t9
00411adc  _nop
00411ae0  lw gp,0x18(sp)
00411ae4  lw a0,0x0(v0)
00411ae8  lw t9,-0x7d94(gp)
00411aec  nop
00411af0  jalr t9
00411af4  _nop
00411af8  lw gp,0x18(sp)
00411afc  lui a0,0x53
00411b00  addiu a0,a0,0x267c
00411b04  lw t9,-0x7dc8(gp)
00411b08  nop
00411b0c  jalr t9
00411b10  _move a1,v0
00411b14  b 0x00411df8
00411b18  _clear v0
00411b1c  lw t9,-0x7e08(gp)
00411b20  nop
00411b24  jalr t9
00411b28  _addiu a0,a0,0x2694
00411b2c  lw v1,0xcc4(sp)
00411b30  li v0,0x1
00411b34  lw gp,0x18(sp)
00411b38  beq v1,v0,0x00411b54
00411b3c  _nop
00411b40  clear s1
00411b44  addiu s2,sp,0x34
00411b48  li s4,0xd
00411b4c  b 0x00411cd4
00411b50  _li s3,0xa
00411b54  clear s1
00411b58  addiu s2,sp,0x34
00411b5c  li s4,0xd
00411b60  b 0x00411be0
00411b64  _li s3,0xa
00411b68  beq v0,zero,0x00411ba0
00411b6c  _move a0,s2
00411b70  lb a0,0x34(sp)
00411b74  nop
00411b78  beq a0,s4,0x00411b90
00411b7c  _nop
00411b80  beq a0,s3,0x00411b90
00411b84  _nop
00411b88  b 0x00411b94
00411b8c  _clear s1
00411b90  addiu s1,s1,0x1
00411b94  lw t9,-0x6af8(gp)
00411b98  b 0x00411bd0
00411b9c  _nop
00411ba0  lw t9,-0x6904(gp)
00411ba4  addiu s1,s1,0x1
00411ba8  li a1,0x1
00411bac  li a2,0x1
00411bb0  jalr t9
00411bb4  _move a3,s0
00411bb8  andi v0,s1,0x3ff
00411bbc  lw gp,0x18(sp)
00411bc0  bne v0,zero,0x00411be0
00411bc4  _move a0,s0
00411bc8  lw t9,-0x774c(gp)
00411bcc  nop
00411bd0  jalr t9
00411bd4  _nop
00411bd8  lw gp,0x18(sp)
00411bdc  nop
00411be0  lw t9,-0x71b0(gp)
00411be4  lw a0,0xcc8(sp)
00411be8  move a1,s2
00411bec  jalr t9
00411bf0  _li a2,0x1
00411bf4  li s5,0x1
00411bf8  lw gp,0x18(sp)
00411bfc  beq v0,s5,0x00411b68
00411c00  _slti v0,s1,0x4
00411c04  lw t9,-0x7158(gp)
00411c08  nop
00411c0c  jalr t9
00411c10  _move a0,s0
00411c14  lw gp,0x18(sp)
00411c18  lw a0,0xcc8(sp)
00411c1c  lw t9,-0x7af0(gp)
00411c20  nop
00411c24  jalr t9
00411c28  _nop
00411c2c  lw gp,0x18(sp)
00411c30  lui a0,0x53
00411c34  move s0,v0
00411c38  lw t9,-0x7dc8(gp)
00411c3c  addiu a0,a0,0x26bc
00411c40  jalr t9
00411c44  _move a1,v0
00411c48  lw gp,0x18(sp)
00411c4c  beq s0,s5,0x00411d40
00411c50  _nop
00411c54  b 0x00411d14
00411c58  _nop
00411c5c  beq v0,zero,0x00411c94
00411c60  _move a0,s2
00411c64  lb a0,0x34(sp)
00411c68  nop
00411c6c  beq a0,s4,0x00411c84
00411c70  _nop
00411c74  beq a0,s3,0x00411c84
00411c78  _nop
00411c7c  b 0x00411c88
00411c80  _clear s1
00411c84  addiu s1,s1,0x1
00411c88  lw t9,-0x6af8(gp)
00411c8c  b 0x00411cc4
00411c90  _nop
00411c94  lw t9,-0x6904(gp)
00411c98  addiu s1,s1,0x1
00411c9c  li a1,0x1
00411ca0  li a2,0x1
00411ca4  jalr t9
00411ca8  _move a3,s0
00411cac  andi v0,s1,0x3ff
00411cb0  lw gp,0x18(sp)
00411cb4  bne v0,zero,0x00411cd4
00411cb8  _move a0,s0
00411cbc  lw t9,-0x774c(gp)
00411cc0  nop
00411cc4  jalr t9
00411cc8  _nop
00411ccc  lw gp,0x18(sp)
00411cd0  nop
00411cd4  lw t9,-0x6f40(gp)
00411cd8  lw a0,0x834(sp)
00411cdc  move a1,s2
00411ce0  jalr t9
00411ce4  _li a2,0x1
00411ce8  li v1,0x1
00411cec  lw gp,0x18(sp)
00411cf0  beq v0,v1,0x00411c5c
00411cf4  _slti v0,s1,0x4
00411cf8  lw t9,-0x7158(gp)
00411cfc  nop
00411d00  jalr t9
00411d04  _move a0,s0
00411d08  lw gp,0x18(sp)
00411d0c  b 0x00411d40
00411d10  _nop
00411d14  lw v0,-0x72fc(gp)
00411d18  lw t9,-0x67d0(gp)
00411d1c  lw a0,0x0(v0)
00411d20  jalr t9
00411d24  _nop
00411d28  lw gp,0x18(sp)
00411d2c  nop
00411d30  lw t9,-0x7aa8(gp)
00411d34  nop
00411d38  jalr t9
00411d3c  _li a0,0x1
00411d40  lw t9,-0x7414(gp)
00411d44  lw a0,0x834(sp)
00411d48  jalr t9
00411d4c  _nop
00411d50  lw v1,0xcc4(sp)
00411d54  li v0,0x1
00411d58  lw gp,0x18(sp)
00411d5c  bne v1,v0,0x00411dac
00411d60  _nop
00411d64  lw t9,-0x6e90(gp)
00411d68  lw a0,0xcc8(sp)
00411d6c  jalr t9
00411d70  _nop
00411d74  lw gp,0x18(sp)
00411d78  lw a0,0xccc(sp)
00411d7c  lw t9,-0x7ec4(gp)
00411d80  nop
00411d84  jalr t9
00411d88  _nop
00411d8c  lw gp,0x18(sp)
00411d90  lui a0,0x53
00411d94  lw t9,-0x7e08(gp)
00411d98  nop
00411d9c  jalr t9
00411da0  _addiu a0,a0,0x26d0
00411da4  lw gp,0x18(sp)
00411da8  nop
00411dac  lw t9,-0x70c4(gp)
00411db0  nop
00411db4  jalr t9
00411db8  _nop
00411dbc  lw gp,0x18(sp)
00411dc0  nop
00411dc4  lw v1,-0x6c68(gp)
00411dc8  nop
00411dcc  lw v1,0x0(v1)
00411dd0  nop
00411dd4  beq v1,zero,0x00411df8
00411dd8  _li v0,0x1
00411ddc  lw t9,-0x7a98(gp)
00411de0  nop
00411de4  jalr t9
00411de8  _li a0,0x1
00411dec  b 0x00411df8
00411df0  _li v0,0x1
00411df4  li v0,0x196
00411df8  lw ra,0xcec(sp)
00411dfc  lw s6,0xce8(sp)
00411e00  lw s5,0xce4(sp)
00411e04  lw s4,0xce0(sp)
00411e08  lw s3,0xcdc(sp)
00411e0c  lw s2,0xcd8(sp)
00411e10  lw s1,0xcd4(sp)
00411e14  lw s0,0xcd0(sp)
00411e18  jr ra
00411e1c  _addiu sp,sp,0xcf0
