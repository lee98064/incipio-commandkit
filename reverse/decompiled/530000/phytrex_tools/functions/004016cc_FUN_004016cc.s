# FUN_004016cc @ 004016cc
004016cc  addiu sp,sp,-0x68
004016d0  sw ra,0x64(sp)
004016d4  sw s8,0x60(sp)
004016d8  sw s4,0x5c(sp)
004016dc  sw s3,0x58(sp)
004016e0  sw s2,0x54(sp)
004016e4  sw s1,0x50(sp)
004016e8  sw s0,0x4c(sp)
004016ec  move s8,sp
004016f0  lui gp,0x42
004016f4  addiu gp,gp,-0x1db0
004016f8  sw gp,0x18(sp)
004016fc  sw a0,0x68(s8)
00401700  sw a1,0x6c(s8)
00401704  sw a2,0x70(s8)
00401708  move a0,sp
0040170c  move s4,a0
00401710  lw a1,0x6c(s8)
00401714  lw a0,0x68(s8)
00401718  nop
0040171c  subu a0,a1,a0
00401720  move a1,a0
00401724  addiu a1,a1,-0x1
00401728  sw a1,0x40(s8)
0040172c  move t1,a0
00401730  clear t0
00401734  andi s2,t0,0xf
00401738  li a1,-0x1
0040173c  and s3,t1,a1
00401740  move t1,s3
00401744  move t0,s2
00401748  srl a1,t1,0x1d
0040174c  sll t4,t0,0x3
00401750  or t4,a1,t4
00401754  sll t5,t1,0x3
00401758  andi s0,t4,0xf
0040175c  li a1,-0x1
00401760  and s1,t5,a1
00401764  move t5,s1
00401768  move t4,s0
0040176c  move v1,a0
00401770  clear v0
00401774  andi t8,v0,0xf
00401778  li a1,-0x1
0040177c  and t9,v1,a1
00401780  move v1,t9
00401784  move v0,t8
00401788  srl a1,v1,0x1d
0040178c  sll t2,v0,0x3
00401790  or t2,a1,t2
00401794  sll t3,v1,0x3
00401798  andi t6,t2,0xf
0040179c  li v0,-0x1
004017a0  and t7,t3,v0
004017a4  move t3,t7
004017a8  move t2,t6
004017ac  move v0,a0
004017b0  addiu v0,v0,0x7
004017b4  addiu v0,v0,0x7
004017b8  srl v0,v0,0x3
004017bc  sll v0,v0,0x3
004017c0  subu sp,sp,v0
004017c4  addiu v0,sp,0x18
004017c8  addiu v0,v0,0x7
004017cc  srl v0,v0,0x3
004017d0  sll v0,v0,0x3
004017d4  sw v0,0x3c(s8)
004017d8  lui v0,0x40
004017dc  addiu a0,v0,0x54d8
004017e0  li a1,0x80
004017e4  lw v0,-0x7fc4(gp)
004017e8  nop
004017ec  move t9,v0
004017f0  jalr t9
004017f4  _nop
004017f8  lw gp,0x18(s8)
004017fc  sw v0,0x38(s8)
00401800  lw v1,0x38(s8)
00401804  li v0,-0x1
00401808  bne v1,v0,0x00401894
0040180c  _nop
00401810  lw v0,-0x7fb0(gp)
00401814  nop
00401818  lw s1,0x0(v0)
0040181c  lui v0,0x40
00401820  addiu s0,v0,0x54e8
00401824  lw v0,-0x7fbc(gp)
00401828  nop
0040182c  move t9,v0
00401830  jalr t9
00401834  _nop
00401838  lw gp,0x18(s8)
0040183c  lw v0,0x0(v0)
00401840  nop
00401844  move a0,v0
00401848  lw v0,-0x7f38(gp)
0040184c  nop
00401850  move t9,v0
00401854  jalr t9
00401858  _nop
0040185c  lw gp,0x18(s8)
00401860  move a0,s1
00401864  move a1,s0
00401868  lw a2,0x70(s8)
0040186c  move a3,v0
00401870  lw v0,-0x7f78(gp)
00401874  nop
00401878  move t9,v0
0040187c  jalr t9
00401880  _nop
00401884  lw gp,0x18(s8)
00401888  clear v0
0040188c  b 0x00401d38
00401890  _nop
00401894  lui v0,0x40
00401898  addiu a0,v0,0x5518
0040189c  li a1,0x2
004018a0  lw v0,-0x7fc4(gp)
004018a4  nop
004018a8  move t9,v0
004018ac  jalr t9
004018b0  _nop
004018b4  lw gp,0x18(s8)
004018b8  sw v0,0x34(s8)
004018bc  lw v1,0x34(s8)
004018c0  li v0,-0x1
004018c4  bne v1,v0,0x00401958
004018c8  _nop
004018cc  lw v0,-0x7fb0(gp)
004018d0  nop
004018d4  lw s1,0x0(v0)
004018d8  lui v0,0x40
004018dc  addiu s0,v0,0x5528
004018e0  lw v0,-0x7fbc(gp)
004018e4  nop
004018e8  move t9,v0
004018ec  jalr t9
004018f0  _nop
004018f4  lw gp,0x18(s8)
004018f8  lw v0,0x0(v0)
004018fc  nop
00401900  move a0,v0
00401904  lw v0,-0x7f38(gp)
00401908  nop
0040190c  move t9,v0
00401910  jalr t9
00401914  _nop
00401918  lw gp,0x18(s8)
0040191c  sw v0,0x10(sp)
00401920  move a0,s1
00401924  move a1,s0
00401928  lw a2,0x70(s8)
0040192c  lui v0,0x40
00401930  addiu a3,v0,0x5518
00401934  lw v0,-0x7f78(gp)
00401938  nop
0040193c  move t9,v0
00401940  jalr t9
00401944  _nop
00401948  lw gp,0x18(s8)
0040194c  clear v0
00401950  b 0x00401d38
00401954  _nop
00401958  lw a0,0x38(s8)
0040195c  lw a1,0x68(s8)
00401960  clear a2
00401964  lw v0,-0x7f64(gp)
00401968  nop
0040196c  move t9,v0
00401970  jalr t9
00401974  _nop
00401978  lw gp,0x18(s8)
0040197c  sw v0,0x24(s8)
00401980  lw v1,0x24(s8)
00401984  li v0,-0x1
00401988  bne v1,v0,0x00401a14
0040198c  _nop
00401990  lw v0,-0x7fb0(gp)
00401994  nop
00401998  lw s1,0x0(v0)
0040199c  lui v0,0x40
004019a0  addiu s0,v0,0x5554
004019a4  lw v0,-0x7fbc(gp)
004019a8  nop
004019ac  move t9,v0
004019b0  jalr t9
004019b4  _nop
004019b8  lw gp,0x18(s8)
004019bc  lw v0,0x0(v0)
004019c0  nop
004019c4  move a0,v0
004019c8  lw v0,-0x7f38(gp)
004019cc  nop
004019d0  move t9,v0
004019d4  jalr t9
004019d8  _nop
004019dc  lw gp,0x18(s8)
004019e0  move a0,s1
004019e4  move a1,s0
004019e8  lw a2,0x70(s8)
004019ec  move a3,v0
004019f0  lw v0,-0x7f78(gp)
004019f4  nop
004019f8  move t9,v0
004019fc  jalr t9
00401a00  _nop
00401a04  lw gp,0x18(s8)
00401a08  clear v0
00401a0c  b 0x00401d38
00401a10  _nop
00401a14  lw v1,0x3c(s8)
00401a18  lw a0,0x6c(s8)
00401a1c  lw v0,0x68(s8)
00401a20  nop
00401a24  subu v0,a0,v0
00401a28  lw a0,0x38(s8)
00401a2c  move a1,v1
00401a30  move a2,v0
00401a34  lw v0,-0x7f80(gp)
00401a38  nop
00401a3c  move t9,v0
00401a40  jalr t9
00401a44  _nop
00401a48  lw gp,0x18(s8)
00401a4c  sw v0,0x30(s8)
00401a50  lw v0,0x30(s8)
00401a54  nop
00401a58  bgez v0,0x00401ae4
00401a5c  _nop
00401a60  lw v0,-0x7fb0(gp)
00401a64  nop
00401a68  lw s1,0x0(v0)
00401a6c  lui v0,0x40
00401a70  addiu s0,v0,0x557c
00401a74  lw v0,-0x7fbc(gp)
00401a78  nop
00401a7c  move t9,v0
00401a80  jalr t9
00401a84  _nop
00401a88  lw gp,0x18(s8)
00401a8c  lw v0,0x0(v0)
00401a90  nop
00401a94  move a0,v0
00401a98  lw v0,-0x7f38(gp)
00401a9c  nop
00401aa0  move t9,v0
00401aa4  jalr t9
00401aa8  _nop
00401aac  lw gp,0x18(s8)
00401ab0  move a0,s1
00401ab4  move a1,s0
00401ab8  lw a2,0x70(s8)
00401abc  move a3,v0
00401ac0  lw v0,-0x7f78(gp)
00401ac4  nop
00401ac8  move t9,v0
00401acc  jalr t9
00401ad0  _nop
00401ad4  lw gp,0x18(s8)
00401ad8  clear v0
00401adc  b 0x00401d38
00401ae0  _nop
00401ae4  lw a0,0x70(s8)
00401ae8  lui v0,0x40
00401aec  addiu a1,v0,0x55a4
00401af0  lw v0,-0x7f7c(gp)
00401af4  nop
00401af8  move t9,v0
00401afc  jalr t9
00401b00  _nop
00401b04  lw gp,0x18(s8)
00401b08  bne v0,zero,0x00401b3c
00401b0c  _nop
00401b10  lw a0,0x70(s8)
00401b14  lui v0,0x40
00401b18  addiu a1,v0,0x55b0
00401b1c  lw v0,-0x7f7c(gp)
00401b20  nop
00401b24  move t9,v0
00401b28  jalr t9
00401b2c  _nop
00401b30  lw gp,0x18(s8)
00401b34  beq v0,zero,0x00401c04
00401b38  _nop
00401b3c  lw v0,0x68(s8)
00401b40  nop
00401b44  addiu v0,v0,-0x6000
00401b48  lw a0,0x34(s8)
00401b4c  move a1,v0
00401b50  clear a2
00401b54  lw v0,-0x7f64(gp)
00401b58  nop
00401b5c  move t9,v0
00401b60  jalr t9
00401b64  _nop
00401b68  lw gp,0x18(s8)
00401b6c  sw v0,0x20(s8)
00401b70  lw v1,0x24(s8)
00401b74  li v0,-0x1
00401b78  bne v1,v0,0x00401c04
00401b7c  _nop
00401b80  lw v0,-0x7fb0(gp)
00401b84  nop
00401b88  lw s1,0x0(v0)
00401b8c  lui v0,0x40
00401b90  addiu s0,v0,0x55bc
00401b94  lw v0,-0x7fbc(gp)
00401b98  nop
00401b9c  move t9,v0
00401ba0  jalr t9
00401ba4  _nop
00401ba8  lw gp,0x18(s8)
00401bac  lw v0,0x0(v0)
00401bb0  nop
00401bb4  move a0,v0
00401bb8  lw v0,-0x7f38(gp)
00401bbc  nop
00401bc0  move t9,v0
00401bc4  jalr t9
00401bc8  _nop
00401bcc  lw gp,0x18(s8)
00401bd0  move a0,s1
00401bd4  move a1,s0
00401bd8  lw a2,0x70(s8)
00401bdc  move a3,v0
00401be0  lw v0,-0x7f78(gp)
00401be4  nop
00401be8  move t9,v0
00401bec  jalr t9
00401bf0  _nop
00401bf4  lw gp,0x18(s8)
00401bf8  clear v0
00401bfc  b 0x00401d38
00401c00  _nop
00401c04  lw v1,0x3c(s8)
00401c08  lw a0,0x6c(s8)
00401c0c  lw v0,0x68(s8)
00401c10  nop
00401c14  subu v0,a0,v0
00401c18  lw a0,0x34(s8)
00401c1c  move a1,v1
00401c20  move a2,v0
00401c24  lw v0,-0x7f74(gp)
00401c28  nop
00401c2c  move t9,v0
00401c30  jalr t9
00401c34  _nop
00401c38  lw gp,0x18(s8)
00401c3c  sw v0,0x28(s8)
00401c40  lw v0,0x28(s8)
00401c44  nop
00401c48  bgez v0,0x00401cd4
00401c4c  _nop
00401c50  lw v0,-0x7fb0(gp)
00401c54  nop
00401c58  lw s1,0x0(v0)
00401c5c  lui v0,0x40
00401c60  addiu s0,v0,0x55e4
00401c64  lw v0,-0x7fbc(gp)
00401c68  nop
00401c6c  move t9,v0
00401c70  jalr t9
00401c74  _nop
00401c78  lw gp,0x18(s8)
00401c7c  lw v0,0x0(v0)
00401c80  nop
00401c84  move a0,v0
00401c88  lw v0,-0x7f38(gp)
00401c8c  nop
00401c90  move t9,v0
00401c94  jalr t9
00401c98  _nop
00401c9c  lw gp,0x18(s8)
00401ca0  move a0,s1
00401ca4  move a1,s0
00401ca8  lw a2,0x70(s8)
00401cac  move a3,v0
00401cb0  lw v0,-0x7f78(gp)
00401cb4  nop
00401cb8  move t9,v0
00401cbc  jalr t9
00401cc0  _nop
00401cc4  lw gp,0x18(s8)
00401cc8  clear v0
00401ccc  b 0x00401d38
00401cd0  _nop
00401cd4  lw a0,0x34(s8)
00401cd8  lw v0,-0x7fcc(gp)
00401cdc  nop
00401ce0  move t9,v0
00401ce4  jalr t9
00401ce8  _nop
00401cec  lw gp,0x18(s8)
00401cf0  lw a0,0x38(s8)
00401cf4  lw v0,-0x7fcc(gp)
00401cf8  nop
00401cfc  move t9,v0
00401d00  jalr t9
00401d04  _nop
00401d08  lw gp,0x18(s8)
00401d0c  lui v0,0x40
00401d10  addiu v0,v0,0x560c
00401d14  move a0,v0
00401d18  lw a1,0x70(s8)
00401d1c  lw v0,-0x7f2c(gp)
00401d20  nop
00401d24  move t9,v0
00401d28  jalr t9
00401d2c  _nop
00401d30  lw gp,0x18(s8)
00401d34  li v0,0x1
00401d38  move sp,s4
00401d3c  move sp,s8
00401d40  lw ra,0x64(sp)
00401d44  lw s8,0x60(sp)
00401d48  lw s4,0x5c(sp)
00401d4c  lw s3,0x58(sp)
00401d50  lw s2,0x54(sp)
00401d54  lw s1,0x50(sp)
00401d58  lw s0,0x4c(sp)
00401d5c  addiu sp,sp,0x68
00401d60  jr ra
00401d64  _nop
