# FUN_0040164c @ 0040164c
0040164c  addiu sp,sp,-0x68
00401650  sw ra,0x64(sp)
00401654  sw s8,0x60(sp)
00401658  sw s4,0x5c(sp)
0040165c  sw s3,0x58(sp)
00401660  sw s2,0x54(sp)
00401664  sw s1,0x50(sp)
00401668  sw s0,0x4c(sp)
0040166c  move s8,sp
00401670  lui gp,0x42
00401674  addiu gp,gp,-0x21a0
00401678  sw gp,0x18(sp)
0040167c  sw a0,0x68(s8)
00401680  sw a1,0x6c(s8)
00401684  sw a2,0x70(s8)
00401688  move a0,sp
0040168c  move s4,a0
00401690  lw a1,0x6c(s8)
00401694  lw a0,0x68(s8)
00401698  nop
0040169c  subu a0,a1,a0
004016a0  move a1,a0
004016a4  addiu a1,a1,-0x1
004016a8  sw a1,0x40(s8)
004016ac  move t1,a0
004016b0  clear t0
004016b4  andi s2,t0,0xf
004016b8  li a1,-0x1
004016bc  and s3,t1,a1
004016c0  move t1,s3
004016c4  move t0,s2
004016c8  srl a1,t1,0x1d
004016cc  sll t4,t0,0x3
004016d0  or t4,a1,t4
004016d4  sll t5,t1,0x3
004016d8  andi s0,t4,0xf
004016dc  li a1,-0x1
004016e0  and s1,t5,a1
004016e4  move t5,s1
004016e8  move t4,s0
004016ec  move v1,a0
004016f0  clear v0
004016f4  andi t8,v0,0xf
004016f8  li a1,-0x1
004016fc  and t9,v1,a1
00401700  move v1,t9
00401704  move v0,t8
00401708  srl a1,v1,0x1d
0040170c  sll t2,v0,0x3
00401710  or t2,a1,t2
00401714  sll t3,v1,0x3
00401718  andi t6,t2,0xf
0040171c  li v0,-0x1
00401720  and t7,t3,v0
00401724  move t3,t7
00401728  move t2,t6
0040172c  move v0,a0
00401730  addiu v0,v0,0x7
00401734  addiu v0,v0,0x7
00401738  srl v0,v0,0x3
0040173c  sll v0,v0,0x3
00401740  subu sp,sp,v0
00401744  addiu v0,sp,0x18
00401748  addiu v0,v0,0x7
0040174c  srl v0,v0,0x3
00401750  sll v0,v0,0x3
00401754  sw v0,0x3c(s8)
00401758  lui v0,0x40
0040175c  addiu a0,v0,0x51f8
00401760  li a1,0x80
00401764  lw v0,-0x7fc4(gp)
00401768  nop
0040176c  move t9,v0
00401770  jalr t9
00401774  _nop
00401778  lw gp,0x18(s8)
0040177c  sw v0,0x38(s8)
00401780  lw v1,0x38(s8)
00401784  li v0,-0x1
00401788  bne v1,v0,0x00401814
0040178c  _nop
00401790  lw v0,-0x7fb0(gp)
00401794  nop
00401798  lw s1,0x0(v0)
0040179c  lui v0,0x40
004017a0  addiu s0,v0,0x5208
004017a4  lw v0,-0x7fbc(gp)
004017a8  nop
004017ac  move t9,v0
004017b0  jalr t9
004017b4  _nop
004017b8  lw gp,0x18(s8)
004017bc  lw v0,0x0(v0)
004017c0  nop
004017c4  move a0,v0
004017c8  lw v0,-0x7f3c(gp)
004017cc  nop
004017d0  move t9,v0
004017d4  jalr t9
004017d8  _nop
004017dc  lw gp,0x18(s8)
004017e0  move a0,s1
004017e4  move a1,s0
004017e8  lw a2,0x70(s8)
004017ec  move a3,v0
004017f0  lw v0,-0x7f78(gp)
004017f4  nop
004017f8  move t9,v0
004017fc  jalr t9
00401800  _nop
00401804  lw gp,0x18(s8)
00401808  clear v0
0040180c  b 0x00401cb8
00401810  _nop
00401814  lui v0,0x40
00401818  addiu a0,v0,0x5238
0040181c  li a1,0x2
00401820  lw v0,-0x7fc4(gp)
00401824  nop
00401828  move t9,v0
0040182c  jalr t9
00401830  _nop
00401834  lw gp,0x18(s8)
00401838  sw v0,0x34(s8)
0040183c  lw v1,0x34(s8)
00401840  li v0,-0x1
00401844  bne v1,v0,0x004018d8
00401848  _nop
0040184c  lw v0,-0x7fb0(gp)
00401850  nop
00401854  lw s1,0x0(v0)
00401858  lui v0,0x40
0040185c  addiu s0,v0,0x5248
00401860  lw v0,-0x7fbc(gp)
00401864  nop
00401868  move t9,v0
0040186c  jalr t9
00401870  _nop
00401874  lw gp,0x18(s8)
00401878  lw v0,0x0(v0)
0040187c  nop
00401880  move a0,v0
00401884  lw v0,-0x7f3c(gp)
00401888  nop
0040188c  move t9,v0
00401890  jalr t9
00401894  _nop
00401898  lw gp,0x18(s8)
0040189c  sw v0,0x10(sp)
004018a0  move a0,s1
004018a4  move a1,s0
004018a8  lw a2,0x70(s8)
004018ac  lui v0,0x40
004018b0  addiu a3,v0,0x5238
004018b4  lw v0,-0x7f78(gp)
004018b8  nop
004018bc  move t9,v0
004018c0  jalr t9
004018c4  _nop
004018c8  lw gp,0x18(s8)
004018cc  clear v0
004018d0  b 0x00401cb8
004018d4  _nop
004018d8  lw a0,0x38(s8)
004018dc  lw a1,0x68(s8)
004018e0  clear a2
004018e4  lw v0,-0x7f64(gp)
004018e8  nop
004018ec  move t9,v0
004018f0  jalr t9
004018f4  _nop
004018f8  lw gp,0x18(s8)
004018fc  sw v0,0x24(s8)
00401900  lw v1,0x24(s8)
00401904  li v0,-0x1
00401908  bne v1,v0,0x00401994
0040190c  _nop
00401910  lw v0,-0x7fb0(gp)
00401914  nop
00401918  lw s1,0x0(v0)
0040191c  lui v0,0x40
00401920  addiu s0,v0,0x5274
00401924  lw v0,-0x7fbc(gp)
00401928  nop
0040192c  move t9,v0
00401930  jalr t9
00401934  _nop
00401938  lw gp,0x18(s8)
0040193c  lw v0,0x0(v0)
00401940  nop
00401944  move a0,v0
00401948  lw v0,-0x7f3c(gp)
0040194c  nop
00401950  move t9,v0
00401954  jalr t9
00401958  _nop
0040195c  lw gp,0x18(s8)
00401960  move a0,s1
00401964  move a1,s0
00401968  lw a2,0x70(s8)
0040196c  move a3,v0
00401970  lw v0,-0x7f78(gp)
00401974  nop
00401978  move t9,v0
0040197c  jalr t9
00401980  _nop
00401984  lw gp,0x18(s8)
00401988  clear v0
0040198c  b 0x00401cb8
00401990  _nop
00401994  lw v1,0x3c(s8)
00401998  lw a0,0x6c(s8)
0040199c  lw v0,0x68(s8)
004019a0  nop
004019a4  subu v0,a0,v0
004019a8  lw a0,0x38(s8)
004019ac  move a1,v1
004019b0  move a2,v0
004019b4  lw v0,-0x7f80(gp)
004019b8  nop
004019bc  move t9,v0
004019c0  jalr t9
004019c4  _nop
004019c8  lw gp,0x18(s8)
004019cc  sw v0,0x30(s8)
004019d0  lw v0,0x30(s8)
004019d4  nop
004019d8  bgez v0,0x00401a64
004019dc  _nop
004019e0  lw v0,-0x7fb0(gp)
004019e4  nop
004019e8  lw s1,0x0(v0)
004019ec  lui v0,0x40
004019f0  addiu s0,v0,0x529c
004019f4  lw v0,-0x7fbc(gp)
004019f8  nop
004019fc  move t9,v0
00401a00  jalr t9
00401a04  _nop
00401a08  lw gp,0x18(s8)
00401a0c  lw v0,0x0(v0)
00401a10  nop
00401a14  move a0,v0
00401a18  lw v0,-0x7f3c(gp)
00401a1c  nop
00401a20  move t9,v0
00401a24  jalr t9
00401a28  _nop
00401a2c  lw gp,0x18(s8)
00401a30  move a0,s1
00401a34  move a1,s0
00401a38  lw a2,0x70(s8)
00401a3c  move a3,v0
00401a40  lw v0,-0x7f78(gp)
00401a44  nop
00401a48  move t9,v0
00401a4c  jalr t9
00401a50  _nop
00401a54  lw gp,0x18(s8)
00401a58  clear v0
00401a5c  b 0x00401cb8
00401a60  _nop
00401a64  lw a0,0x70(s8)
00401a68  lui v0,0x40
00401a6c  addiu a1,v0,0x52c4
00401a70  lw v0,-0x7f7c(gp)
00401a74  nop
00401a78  move t9,v0
00401a7c  jalr t9
00401a80  _nop
00401a84  lw gp,0x18(s8)
00401a88  bne v0,zero,0x00401abc
00401a8c  _nop
00401a90  lw a0,0x70(s8)
00401a94  lui v0,0x40
00401a98  addiu a1,v0,0x52d0
00401a9c  lw v0,-0x7f7c(gp)
00401aa0  nop
00401aa4  move t9,v0
00401aa8  jalr t9
00401aac  _nop
00401ab0  lw gp,0x18(s8)
00401ab4  beq v0,zero,0x00401b84
00401ab8  _nop
00401abc  lw v0,0x68(s8)
00401ac0  nop
00401ac4  addiu v0,v0,-0x6000
00401ac8  lw a0,0x34(s8)
00401acc  move a1,v0
00401ad0  clear a2
00401ad4  lw v0,-0x7f64(gp)
00401ad8  nop
00401adc  move t9,v0
00401ae0  jalr t9
00401ae4  _nop
00401ae8  lw gp,0x18(s8)
00401aec  sw v0,0x20(s8)
00401af0  lw v1,0x24(s8)
00401af4  li v0,-0x1
00401af8  bne v1,v0,0x00401b84
00401afc  _nop
00401b00  lw v0,-0x7fb0(gp)
00401b04  nop
00401b08  lw s1,0x0(v0)
00401b0c  lui v0,0x40
00401b10  addiu s0,v0,0x52dc
00401b14  lw v0,-0x7fbc(gp)
00401b18  nop
00401b1c  move t9,v0
00401b20  jalr t9
00401b24  _nop
00401b28  lw gp,0x18(s8)
00401b2c  lw v0,0x0(v0)
00401b30  nop
00401b34  move a0,v0
00401b38  lw v0,-0x7f3c(gp)
00401b3c  nop
00401b40  move t9,v0
00401b44  jalr t9
00401b48  _nop
00401b4c  lw gp,0x18(s8)
00401b50  move a0,s1
00401b54  move a1,s0
00401b58  lw a2,0x70(s8)
00401b5c  move a3,v0
00401b60  lw v0,-0x7f78(gp)
00401b64  nop
00401b68  move t9,v0
00401b6c  jalr t9
00401b70  _nop
00401b74  lw gp,0x18(s8)
00401b78  clear v0
00401b7c  b 0x00401cb8
00401b80  _nop
00401b84  lw v1,0x3c(s8)
00401b88  lw a0,0x6c(s8)
00401b8c  lw v0,0x68(s8)
00401b90  nop
00401b94  subu v0,a0,v0
00401b98  lw a0,0x34(s8)
00401b9c  move a1,v1
00401ba0  move a2,v0
00401ba4  lw v0,-0x7f74(gp)
00401ba8  nop
00401bac  move t9,v0
00401bb0  jalr t9
00401bb4  _nop
00401bb8  lw gp,0x18(s8)
00401bbc  sw v0,0x28(s8)
00401bc0  lw v0,0x28(s8)
00401bc4  nop
00401bc8  bgez v0,0x00401c54
00401bcc  _nop
00401bd0  lw v0,-0x7fb0(gp)
00401bd4  nop
00401bd8  lw s1,0x0(v0)
00401bdc  lui v0,0x40
00401be0  addiu s0,v0,0x5304
00401be4  lw v0,-0x7fbc(gp)
00401be8  nop
00401bec  move t9,v0
00401bf0  jalr t9
00401bf4  _nop
00401bf8  lw gp,0x18(s8)
00401bfc  lw v0,0x0(v0)
00401c00  nop
00401c04  move a0,v0
00401c08  lw v0,-0x7f3c(gp)
00401c0c  nop
00401c10  move t9,v0
00401c14  jalr t9
00401c18  _nop
00401c1c  lw gp,0x18(s8)
00401c20  move a0,s1
00401c24  move a1,s0
00401c28  lw a2,0x70(s8)
00401c2c  move a3,v0
00401c30  lw v0,-0x7f78(gp)
00401c34  nop
00401c38  move t9,v0
00401c3c  jalr t9
00401c40  _nop
00401c44  lw gp,0x18(s8)
00401c48  clear v0
00401c4c  b 0x00401cb8
00401c50  _nop
00401c54  lw a0,0x34(s8)
00401c58  lw v0,-0x7fcc(gp)
00401c5c  nop
00401c60  move t9,v0
00401c64  jalr t9
00401c68  _nop
00401c6c  lw gp,0x18(s8)
00401c70  lw a0,0x38(s8)
00401c74  lw v0,-0x7fcc(gp)
00401c78  nop
00401c7c  move t9,v0
00401c80  jalr t9
00401c84  _nop
00401c88  lw gp,0x18(s8)
00401c8c  lui v0,0x40
00401c90  addiu v0,v0,0x532c
00401c94  move a0,v0
00401c98  lw a1,0x70(s8)
00401c9c  lw v0,-0x7f30(gp)
00401ca0  nop
00401ca4  move t9,v0
00401ca8  jalr t9
00401cac  _nop
00401cb0  lw gp,0x18(s8)
00401cb4  li v0,0x1
00401cb8  move sp,s4
00401cbc  move sp,s8
00401cc0  lw ra,0x64(sp)
00401cc4  lw s8,0x60(sp)
00401cc8  lw s4,0x5c(sp)
00401ccc  lw s3,0x58(sp)
00401cd0  lw s2,0x54(sp)
00401cd4  lw s1,0x50(sp)
00401cd8  lw s0,0x4c(sp)
00401cdc  addiu sp,sp,0x68
00401ce0  jr ra
00401ce4  _nop
