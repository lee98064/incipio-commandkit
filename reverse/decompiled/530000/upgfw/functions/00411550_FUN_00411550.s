# FUN_00411550 @ 00411550
00411550  addiu sp,sp,-0xcf0
00411554  sw ra,0xcec(sp)
00411558  sw s6,0xce8(sp)
0041155c  sw s5,0xce4(sp)
00411560  sw s4,0xce0(sp)
00411564  sw s3,0xcdc(sp)
00411568  sw s2,0xcd8(sp)
0041156c  sw s1,0xcd4(sp)
00411570  sw s0,0xcd0(sp)
00411574  lui gp,0x58
00411578  addiu gp,gp,0x5140
0041157c  sw gp,0x18(sp)
00411580  lw t9,-0x7764(gp)
00411584  addiu s0,sp,0x834
00411588  move s2,a0
0041158c  li a2,0x49c
00411590  move a0,s0
00411594  move s1,a1
00411598  jalr t9
0041159c  _clear a1
004115a0  lw gp,0x18(sp)
004115a4  li a2,0x400
004115a8  addiu a0,sp,0x34
004115ac  lw t9,-0x7764(gp)
004115b0  nop
004115b4  jalr t9
004115b8  _clear a1
004115bc  move a1,s0
004115c0  jal 0x00411420
004115c4  _move a0,s2
004115c8  lw gp,0x18(sp)
004115cc  lw a1,0xcc4(sp)
004115d0  lui a0,0x53
004115d4  lw t9,-0x7dc8(gp)
004115d8  addiu a0,a0,0x2648
004115dc  jalr t9
004115e0  _li s0,-0x1
004115e4  lw gp,0x18(sp)
004115e8  lui a0,0x53
004115ec  addiu a0,a0,0x2658
004115f0  lw t9,-0x7dc8(gp)
004115f4  nop
004115f8  jalr t9
004115fc  _addiu a1,sp,0x83c
00411600  lw gp,0x18(sp)
00411604  lui a0,0x53
00411608  addiu a0,a0,0x2664
0041160c  lw t9,-0x7dc8(gp)
00411610  nop
00411614  jalr t9
00411618  _addiu a1,sp,0x8bc
0041161c  lw gp,0x18(sp)
00411620  lw a1,0x838(sp)
00411624  lui a0,0x53
00411628  lw t9,-0x7dc8(gp)
0041162c  nop
00411630  jalr t9
00411634  _addiu a0,a0,0x2674
00411638  lw gp,0x18(sp)
0041163c  li a0,0x2
00411640  li a1,0x2
00411644  lw t9,-0x79ac(gp)
00411648  nop
0041164c  jalr t9
00411650  _clear a2
00411654  lw gp,0x18(sp)
00411658  bne v0,s0,0x004116e4
0041165c  _sw v0,0x834(sp)
00411660  lw t9,-0x6868(gp)
00411664  lw v0,-0x72fc(gp)
00411668  nop
0041166c  lw s0,0x0(v0)
00411670  jalr t9
00411674  _nop
00411678  lw gp,0x18(sp)
0041167c  lw a0,0x0(v0)
00411680  lw t9,-0x7d94(gp)
00411684  nop
00411688  jalr t9
0041168c  _nop
00411690  lw gp,0x18(sp)
00411694  lui a1,0x53
00411698  move a0,s0
0041169c  lw t9,-0x785c(gp)
004116a0  addiu a1,a1,0x2684
004116a4  jalr t9
004116a8  _move a2,v0
004116ac  lw gp,0x18(sp)
004116b0  nop
004116b4  lw v1,-0x6c64(gp)
004116b8  nop
004116bc  lw v1,0x0(v1)
004116c0  nop
004116c4  beq v1,zero,0x00411e28
004116c8  _li v0,0x194
004116cc  lw t9,-0x7a98(gp)
004116d0  nop
004116d4  jalr t9
004116d8  _li a0,0x194
004116dc  b 0x00411e28
004116e0  _li v0,0x194
004116e4  addiu a1,sp,0x24
004116e8  li v1,0x2
004116ec  sw zero,0x4(a1)
004116f0  sh v1,0x24(sp)
004116f4  sw zero,0x8(a1)
004116f8  sw zero,0xc(a1)
004116fc  sh zero,0x26(sp)
00411700  move a0,v0
00411704  lw v0,0x10(zero)
00411708  lw t9,-0x698c(gp)
0041170c  li a2,0x10
00411710  lw v0,0x0(v0)
00411714  nop
00411718  lw v0,0x0(v0)
0041171c  jalr t9
00411720  _sw v0,0x28(sp)
00411724  lw gp,0x18(sp)
00411728  bne v0,s0,0x004117b4
0041172c  _nop
00411730  lw t9,-0x6868(gp)
00411734  lw v0,-0x72fc(gp)
00411738  nop
0041173c  lw s0,0x0(v0)
00411740  jalr t9
00411744  _nop
00411748  lw gp,0x18(sp)
0041174c  lw a0,0x0(v0)
00411750  lw t9,-0x7d94(gp)
00411754  nop
00411758  jalr t9
0041175c  _nop
00411760  lw gp,0x18(sp)
00411764  lui a1,0x53
00411768  move a0,s0
0041176c  lw t9,-0x785c(gp)
00411770  addiu a1,a1,0x2698
00411774  jalr t9
00411778  _move a2,v0
0041177c  lw gp,0x18(sp)
00411780  nop
00411784  lw v1,-0x6c64(gp)
00411788  nop
0041178c  lw v1,0x0(v1)
00411790  nop
00411794  beq v1,zero,0x00411e28
00411798  _li v0,0x195
0041179c  lw t9,-0x7a98(gp)
004117a0  nop
004117a4  jalr t9
004117a8  _li a0,0x195
004117ac  b 0x00411e28
004117b0  _li v0,0x195
004117b4  lw v1,0xcc4(sp)
004117b8  li v0,0x1
004117bc  bne v1,v0,0x004119b8
004117c0  _nop
004117c4  lw t9,-0x76d0(gp)
004117c8  lw s0,-0x72fc(gp)
004117cc  jalr t9
004117d0  _nop
004117d4  lw gp,0x18(sp)
004117d8  lw a1,0x0(s0)
004117dc  lui a0,0x53
004117e0  lw t9,-0x7630(gp)
004117e4  nop
004117e8  jalr t9
004117ec  _addiu a0,a0,0x26ac
004117f0  lw gp,0x18(sp)
004117f4  nop
004117f8  lw t9,-0x6bdc(gp)
004117fc  nop
00411800  jalr t9
00411804  _nop
00411808  lw gp,0x18(sp)
0041180c  nop
00411810  lw t9,-0x7588(gp)
00411814  nop
00411818  jalr t9
0041181c  _nop
00411820  lw gp,0x18(sp)
00411824  nop
00411828  lw t9,-0x710c(gp)
0041182c  nop
00411830  jalr t9
00411834  _move a0,v0
00411838  lw gp,0x18(sp)
0041183c  beq v0,zero,0x00411860
00411840  _sw v0,0xccc(sp)
00411844  lw t9,-0x7814(gp)
00411848  nop
0041184c  jalr t9
00411850  _move a0,v0
00411854  lw gp,0x18(sp)
00411858  bne v0,zero,0x004118a8
0041185c  _sw v0,0xcc8(sp)
00411860  lw t9,-0x67cc(gp)
00411864  lw a0,0x0(s0)
00411868  jalr t9
0041186c  _nop
00411870  lw gp,0x18(sp)
00411874  nop
00411878  lw v0,-0x6c64(gp)
0041187c  nop
00411880  lw v0,0x0(v0)
00411884  nop
00411888  beq v0,zero,0x00411e24
0041188c  _nop
00411890  lw t9,-0x7a98(gp)
00411894  nop
00411898  jalr t9
0041189c  _li a0,0x196
004118a0  b 0x00411e28
004118a4  _li v0,0x196
004118a8  lw t9,-0x71f0(gp)
004118ac  lw a1,0x834(sp)
004118b0  jalr t9
004118b4  _move a0,v0
004118b8  lw gp,0x18(sp)
004118bc  bne v0,zero,0x004118d4
004118c0  _nop
004118c4  lw a0,0x0(s0)
004118c8  lw t9,-0x67cc(gp)
004118cc  b 0x00411d50
004118d0  _nop
004118d4  lw t9,-0x6d54(gp)
004118d8  lui s0,0x1
004118dc  jalr t9
004118e0  _addiu s2,sp,0x20
004118e4  b 0x00411928
004118e8  _nop
004118ec  lw t9,-0x79f8(gp)
004118f0  nop
004118f4  jalr t9
004118f8  _nop
004118fc  div v0,s0
00411900  bne s0,zero,0x0041190c
00411904  _nop
00411908  break 0x1c00
0041190c  lw gp,0x18(sp)
00411910  move a0,s2
00411914  li a1,0x2
00411918  lw t9,-0x7108(gp)
0041191c  mfhi v0
00411920  jalr t9
00411924  _sh v0,0x20(sp)
00411928  lw gp,0x18(sp)
0041192c  nop
00411930  lw t9,-0x7c3c(gp)
00411934  nop
00411938  jalr t9
0041193c  _nop
00411940  lw gp,0x18(sp)
00411944  beq v0,zero,0x004118ec
00411948  _nop
0041194c  lw t9,-0x66f8(gp)
00411950  lw a0,0xcc8(sp)
00411954  jalr t9
00411958  _nop
0041195c  li v1,0x1
00411960  lw gp,0x18(sp)
00411964  beq v0,v1,0x004119b8
00411968  _nop
0041196c  lw v0,-0x72fc(gp)
00411970  lw t9,-0x67cc(gp)
00411974  lw a0,0x0(v0)
00411978  jalr t9
0041197c  _nop
00411980  lw gp,0x18(sp)
00411984  nop
00411988  lw v1,-0x6c64(gp)
0041198c  nop
00411990  lw v1,0x0(v1)
00411994  nop
00411998  beq v1,zero,0x00411e28
0041199c  _li v0,0x197
004119a0  lw t9,-0x7a98(gp)
004119a4  nop
004119a8  jalr t9
004119ac  _li a0,0x197
004119b0  b 0x00411e28
004119b4  _li v0,0x197
004119b8  lw v0,0x838(sp)
004119bc  lw t9,-0x7930(gp)
004119c0  addiu s0,sp,0x434
004119c4  lui a1,0x53
004119c8  addiu a2,sp,0x8bc
004119cc  addiu a3,sp,0x83c
004119d0  addiu a1,a1,0x26c0
004119d4  move a0,s0
004119d8  jalr t9
004119dc  _sw v0,0x10(sp)
004119e0  lw gp,0x18(sp)
004119e4  lui a0,0x55
004119e8  addiu a0,a0,0x748c
004119ec  lw t9,-0x7dc8(gp)
004119f0  move a1,s0
004119f4  jalr t9
004119f8  _lui s6,0x53
004119fc  lw gp,0x18(sp)
00411a00  move a0,s0
00411a04  addiu s6,s6,0x275c
00411a08  lw t9,-0x6e30(gp)
00411a0c  clear s2
00411a10  jalr t9
00411a14  _li s5,0x50
00411a18  lw gp,0x18(sp)
00411a1c  move s3,v0
00411a20  b 0x00411abc
00411a24  _li s4,-0x1
00411a28  beq s5,zero,0x00411a40
00411a2c  _subu a2,s3,s2
00411a30  lw t9,-0x7858(gp)
00411a34  lw a0,0xcc8(sp)
00411a38  b 0x00411a48
00411a3c  _nop
00411a40  lw t9,-0x735c(gp)
00411a44  lw a0,0x834(sp)
00411a48  jalr t9
00411a4c  _addu a1,s0,s2
00411a50  lw gp,0x18(sp)
00411a54  bne v0,s4,0x00411aa8
00411a58  _addu s2,s2,v0
00411a5c  lw v0,-0x72fc(gp)
00411a60  lw t9,-0x67cc(gp)
00411a64  lw a0,0x0(v0)
00411a68  jalr t9
00411a6c  _nop
00411a70  lw gp,0x18(sp)
00411a74  nop
00411a78  lw v1,-0x6c64(gp)
00411a7c  nop
00411a80  lw v1,0x0(v1)
00411a84  nop
00411a88  beq v1,zero,0x00411e28
00411a8c  _li v0,0x198
00411a90  lw t9,-0x7a98(gp)
00411a94  nop
00411a98  jalr t9
00411a9c  _li a0,0x198
00411aa0  b 0x00411e28
00411aa4  _li v0,0x198
00411aa8  lw t9,-0x7dc8(gp)
00411aac  move a0,s6
00411ab0  jalr t9
00411ab4  _move a1,s2
00411ab8  lw gp,0x18(sp)
00411abc  slt v0,s2,s3
00411ac0  bne v0,zero,0x00411a28
00411ac4  _lui a1,0x54
00411ac8  lw t9,-0x71e4(gp)
00411acc  addiu a1,a1,-0x35c8
00411ad0  jalr t9
00411ad4  _move a0,s1
00411ad8  lw gp,0x18(sp)
00411adc  lui a0,0x53
00411ae0  move s0,v0
00411ae4  lw t9,-0x7dc8(gp)
00411ae8  addiu a0,a0,0x2770
00411aec  jalr t9
00411af0  _move a1,s1
00411af4  lw gp,0x18(sp)
00411af8  bne s0,zero,0x00411b4c
00411afc  _lui a0,0x53
00411b00  lw t9,-0x6868(gp)
00411b04  nop
00411b08  jalr t9
00411b0c  _nop
00411b10  lw gp,0x18(sp)
00411b14  lw a0,0x0(v0)
00411b18  lw t9,-0x7d94(gp)
00411b1c  nop
00411b20  jalr t9
00411b24  _nop
00411b28  lw gp,0x18(sp)
00411b2c  lui a0,0x53
00411b30  addiu a0,a0,0x277c
00411b34  lw t9,-0x7dc8(gp)
00411b38  nop
00411b3c  jalr t9
00411b40  _move a1,v0
00411b44  b 0x00411e28
00411b48  _clear v0
00411b4c  lw t9,-0x7e08(gp)
00411b50  nop
00411b54  jalr t9
00411b58  _addiu a0,a0,0x2794
00411b5c  lw v1,0xcc4(sp)
00411b60  li v0,0x1
00411b64  lw gp,0x18(sp)
00411b68  beq v1,v0,0x00411b84
00411b6c  _nop
00411b70  clear s1
00411b74  addiu s2,sp,0x34
00411b78  li s4,0xd
00411b7c  b 0x00411d04
00411b80  _li s3,0xa
00411b84  clear s1
00411b88  addiu s2,sp,0x34
00411b8c  li s4,0xd
00411b90  b 0x00411c10
00411b94  _li s3,0xa
00411b98  beq v0,zero,0x00411bd0
00411b9c  _move a0,s2
00411ba0  lb a0,0x34(sp)
00411ba4  nop
00411ba8  beq a0,s4,0x00411bc0
00411bac  _nop
00411bb0  beq a0,s3,0x00411bc0
00411bb4  _nop
00411bb8  b 0x00411bc4
00411bbc  _clear s1
00411bc0  addiu s1,s1,0x1
00411bc4  lw t9,-0x6af4(gp)
00411bc8  b 0x00411c00
00411bcc  _nop
00411bd0  lw t9,-0x6900(gp)
00411bd4  addiu s1,s1,0x1
00411bd8  li a1,0x1
00411bdc  li a2,0x1
00411be0  jalr t9
00411be4  _move a3,s0
00411be8  andi v0,s1,0x3ff
00411bec  lw gp,0x18(sp)
00411bf0  bne v0,zero,0x00411c10
00411bf4  _move a0,s0
00411bf8  lw t9,-0x774c(gp)
00411bfc  nop
00411c00  jalr t9
00411c04  _nop
00411c08  lw gp,0x18(sp)
00411c0c  nop
00411c10  lw t9,-0x71b0(gp)
00411c14  lw a0,0xcc8(sp)
00411c18  move a1,s2
00411c1c  jalr t9
00411c20  _li a2,0x1
00411c24  li s5,0x1
00411c28  lw gp,0x18(sp)
00411c2c  beq v0,s5,0x00411b98
00411c30  _slti v0,s1,0x4
00411c34  lw t9,-0x7154(gp)
00411c38  nop
00411c3c  jalr t9
00411c40  _move a0,s0
00411c44  lw gp,0x18(sp)
00411c48  lw a0,0xcc8(sp)
00411c4c  lw t9,-0x7af0(gp)
00411c50  nop
00411c54  jalr t9
00411c58  _nop
00411c5c  lw gp,0x18(sp)
00411c60  lui a0,0x53
00411c64  move s0,v0
00411c68  lw t9,-0x7dc8(gp)
00411c6c  addiu a0,a0,0x27bc
00411c70  jalr t9
00411c74  _move a1,v0
00411c78  lw gp,0x18(sp)
00411c7c  beq s0,s5,0x00411d70
00411c80  _nop
00411c84  b 0x00411d44
00411c88  _nop
00411c8c  beq v0,zero,0x00411cc4
00411c90  _move a0,s2
00411c94  lb a0,0x34(sp)
00411c98  nop
00411c9c  beq a0,s4,0x00411cb4
00411ca0  _nop
00411ca4  beq a0,s3,0x00411cb4
00411ca8  _nop
00411cac  b 0x00411cb8
00411cb0  _clear s1
00411cb4  addiu s1,s1,0x1
00411cb8  lw t9,-0x6af4(gp)
00411cbc  b 0x00411cf4
00411cc0  _nop
00411cc4  lw t9,-0x6900(gp)
00411cc8  addiu s1,s1,0x1
00411ccc  li a1,0x1
00411cd0  li a2,0x1
00411cd4  jalr t9
00411cd8  _move a3,s0
00411cdc  andi v0,s1,0x3ff
00411ce0  lw gp,0x18(sp)
00411ce4  bne v0,zero,0x00411d04
00411ce8  _move a0,s0
00411cec  lw t9,-0x774c(gp)
00411cf0  nop
00411cf4  jalr t9
00411cf8  _nop
00411cfc  lw gp,0x18(sp)
00411d00  nop
00411d04  lw t9,-0x6f3c(gp)
00411d08  lw a0,0x834(sp)
00411d0c  move a1,s2
00411d10  jalr t9
00411d14  _li a2,0x1
00411d18  li v1,0x1
00411d1c  lw gp,0x18(sp)
00411d20  beq v0,v1,0x00411c8c
00411d24  _slti v0,s1,0x4
00411d28  lw t9,-0x7154(gp)
00411d2c  nop
00411d30  jalr t9
00411d34  _move a0,s0
00411d38  lw gp,0x18(sp)
00411d3c  b 0x00411d70
00411d40  _nop
00411d44  lw v0,-0x72fc(gp)
00411d48  lw t9,-0x67cc(gp)
00411d4c  lw a0,0x0(v0)
00411d50  jalr t9
00411d54  _nop
00411d58  lw gp,0x18(sp)
00411d5c  nop
00411d60  lw t9,-0x7aa8(gp)
00411d64  nop
00411d68  jalr t9
00411d6c  _li a0,0x1
00411d70  lw t9,-0x7414(gp)
00411d74  lw a0,0x834(sp)
00411d78  jalr t9
00411d7c  _nop
00411d80  lw v1,0xcc4(sp)
00411d84  li v0,0x1
00411d88  lw gp,0x18(sp)
00411d8c  bne v1,v0,0x00411ddc
00411d90  _nop
00411d94  lw t9,-0x6e8c(gp)
00411d98  lw a0,0xcc8(sp)
00411d9c  jalr t9
00411da0  _nop
00411da4  lw gp,0x18(sp)
00411da8  lw a0,0xccc(sp)
00411dac  lw t9,-0x7ec4(gp)
00411db0  nop
00411db4  jalr t9
00411db8  _nop
00411dbc  lw gp,0x18(sp)
00411dc0  lui a0,0x53
00411dc4  lw t9,-0x7e08(gp)
00411dc8  nop
00411dcc  jalr t9
00411dd0  _addiu a0,a0,0x27d0
00411dd4  lw gp,0x18(sp)
00411dd8  nop
00411ddc  lw t9,-0x70c0(gp)
00411de0  nop
00411de4  jalr t9
00411de8  _nop
00411dec  lw gp,0x18(sp)
00411df0  nop
00411df4  lw v1,-0x6c64(gp)
00411df8  nop
00411dfc  lw v1,0x0(v1)
00411e00  nop
00411e04  beq v1,zero,0x00411e28
00411e08  _li v0,0x1
00411e0c  lw t9,-0x7a98(gp)
00411e10  nop
00411e14  jalr t9
00411e18  _li a0,0x1
00411e1c  b 0x00411e28
00411e20  _li v0,0x1
00411e24  li v0,0x196
00411e28  lw ra,0xcec(sp)
00411e2c  lw s6,0xce8(sp)
00411e30  lw s5,0xce4(sp)
00411e34  lw s4,0xce0(sp)
00411e38  lw s3,0xcdc(sp)
00411e3c  lw s2,0xcd8(sp)
00411e40  lw s1,0xcd4(sp)
00411e44  lw s0,0xcd0(sp)
00411e48  jr ra
00411e4c  _addiu sp,sp,0xcf0
