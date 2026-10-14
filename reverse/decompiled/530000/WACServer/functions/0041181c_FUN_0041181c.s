# FUN_0041181c @ 0041181c
0041181c  addiu sp,sp,-0x48
00411820  sw ra,0x44(sp)
00411824  sw s8,0x40(sp)
00411828  sw s7,0x3c(sp)
0041182c  sw s6,0x38(sp)
00411830  sw s5,0x34(sp)
00411834  sw s4,0x30(sp)
00411838  sw s3,0x2c(sp)
0041183c  sw s2,0x28(sp)
00411840  sw s1,0x24(sp)
00411844  sw s0,0x20(sp)
00411848  lui gp,0x44
0041184c  addiu gp,gp,-0x4fc0
00411850  sw gp,0x10(sp)
00411854  lw s5,0x58(sp)
00411858  move s0,a0
0041185c  move s1,a1
00411860  lbu v0,0xf2(s5)
00411864  move s4,a2
00411868  bne v0,zero,0x0041187c
0041186c  _move s2,a3
00411870  clear s3
00411874  b 0x004118d0
00411878  _clear v1
0041187c  addu a0,a3,v0
00411880  b 0x004118a8
00411884  _clear v1
00411888  lbu a2,0x0(s0)
0041188c  lbu a1,0x0(a0)
00411890  addiu s0,s0,0x1
00411894  addiu v1,v1,0x1
00411898  xor a1,a2,a1
0041189c  sb a1,0x0(s1)
004118a0  addiu a0,a0,0x1
004118a4  addiu s1,s1,0x1
004118a8  addu s3,v1,v0
004118ac  slti a2,s3,0x10
004118b0  beq a2,zero,0x004118c8
004118b4  _slt a1,v1,s4
004118b8  bne a1,zero,0x00411888
004118bc  _nop
004118c0  b 0x004118d4
004118c4  _subu v0,s4,v1
004118c8  xori v0,s3,0x10
004118cc  movz s3,zero,v0
004118d0  subu v0,s4,v1
004118d4  sra v0,v0,0x4
004118d8  beq v0,zero,0x00411bfc
004118dc  _slt v0,v1,s4
004118e0  andi v0,s0,0x3
004118e4  bne v0,zero,0x00411b58
004118e8  _lui s8,0x42
004118ec  andi v0,s1,0x3
004118f0  bne v0,zero,0x00411b5c
004118f4  _lui s7,0x42
004118f8  andi v0,s2,0x3
004118fc  beq v0,zero,0x004119ac
00411900  _addiu s7,s7,-0x2510
00411904  b 0x00411b5c
00411908  _lui s7,0x42
0041190c  beq s3,zero,0x00411934
00411910  _lui a0,0x42
00411914  lw t9,-0x7f80(gp)
00411918  addiu a0,a0,-0x2580
0041191c  move a1,s8
00411920  move a3,s7
00411924  jalr t9
00411928  _li a2,0x31c
0041192c  lw gp,0x10(sp)
00411930  nop
00411934  lw t9,-0x7fbc(gp)
00411938  move a0,s2
0041193c  move a1,s2
00411940  jalr t9
00411944  _move a2,s5
00411948  lw gp,0x10(sp)
0041194c  bne v0,zero,0x00411c0c
00411950  _move v1,s6
00411954  lw v0,0x0(s0)
00411958  lw a0,0x0(s2)
0041195c  nop
00411960  xor v0,a0,v0
00411964  sw v0,0x0(s1)
00411968  lw v0,0x4(s0)
0041196c  lw a0,0x4(s2)
00411970  nop
00411974  xor v0,a0,v0
00411978  sw v0,0x4(s1)
0041197c  lw v0,0x8(s0)
00411980  lw a0,0x8(s2)
00411984  nop
00411988  xor v0,a0,v0
0041198c  sw v0,0x8(s1)
00411990  lw v0,0xc(s0)
00411994  lw a0,0xc(s2)
00411998  addiu s0,s0,0x10
0041199c  xor v0,a0,v0
004119a0  sw v0,0xc(s1)
004119a4  b 0x004119b0
004119a8  _addiu s1,s1,0x10
004119ac  addiu s8,s8,-0x2574
004119b0  addiu s6,v1,0x10
004119b4  slt v0,s4,s6
004119b8  beq v0,zero,0x0041190c
004119bc  _slt v0,v1,s4
004119c0  b 0x00411bfc
004119c4  _nop
004119c8  beq s3,zero,0x004119f0
004119cc  _lui a0,0x42
004119d0  lw t9,-0x7f80(gp)
004119d4  addiu a0,a0,-0x2580
004119d8  move a1,s8
004119dc  move a3,s7
004119e0  jalr t9
004119e4  _li a2,0x32b
004119e8  lw gp,0x10(sp)
004119ec  nop
004119f0  lw t9,-0x7fbc(gp)
004119f4  move a0,s2
004119f8  move a1,s2
004119fc  jalr t9
00411a00  _move a2,s5
00411a04  lw gp,0x10(sp)
00411a08  bne v0,zero,0x00411c0c
00411a0c  _move v1,s6
00411a10  lbu v0,0x0(s0)
00411a14  lbu a0,0x0(s2)
00411a18  nop
00411a1c  xor v0,a0,v0
00411a20  sb v0,0x0(s1)
00411a24  lbu v0,0x1(s0)
00411a28  lbu a0,0x1(s2)
00411a2c  nop
00411a30  xor v0,a0,v0
00411a34  sb v0,0x1(s1)
00411a38  lbu v0,0x2(s0)
00411a3c  lbu a0,0x2(s2)
00411a40  nop
00411a44  xor v0,a0,v0
00411a48  sb v0,0x2(s1)
00411a4c  lbu v0,0x3(s0)
00411a50  lbu a0,0x3(s2)
00411a54  nop
00411a58  xor v0,a0,v0
00411a5c  sb v0,0x3(s1)
00411a60  lbu v0,0x4(s0)
00411a64  lbu a0,0x4(s2)
00411a68  nop
00411a6c  xor v0,a0,v0
00411a70  sb v0,0x4(s1)
00411a74  lbu v0,0x5(s0)
00411a78  lbu a0,0x5(s2)
00411a7c  nop
00411a80  xor v0,a0,v0
00411a84  sb v0,0x5(s1)
00411a88  lbu v0,0x6(s0)
00411a8c  lbu a0,0x6(s2)
00411a90  nop
00411a94  xor v0,a0,v0
00411a98  sb v0,0x6(s1)
00411a9c  lbu v0,0x7(s0)
00411aa0  lbu a0,0x7(s2)
00411aa4  nop
00411aa8  xor v0,a0,v0
00411aac  sb v0,0x7(s1)
00411ab0  lbu v0,0x8(s0)
00411ab4  lbu a0,0x8(s2)
00411ab8  nop
00411abc  xor v0,a0,v0
00411ac0  sb v0,0x8(s1)
00411ac4  lbu v0,0x9(s0)
00411ac8  lbu a0,0x9(s2)
00411acc  nop
00411ad0  xor v0,a0,v0
00411ad4  sb v0,0x9(s1)
00411ad8  lbu v0,0xa(s0)
00411adc  lbu a0,0xa(s2)
00411ae0  nop
00411ae4  xor v0,a0,v0
00411ae8  sb v0,0xa(s1)
00411aec  lbu v0,0xb(s0)
00411af0  lbu a0,0xb(s2)
00411af4  nop
00411af8  xor v0,a0,v0
00411afc  sb v0,0xb(s1)
00411b00  lbu v0,0xc(s0)
00411b04  lbu a0,0xc(s2)
00411b08  nop
00411b0c  xor v0,a0,v0
00411b10  sb v0,0xc(s1)
00411b14  lbu v0,0xd(s0)
00411b18  lbu a0,0xd(s2)
00411b1c  nop
00411b20  xor v0,a0,v0
00411b24  sb v0,0xd(s1)
00411b28  lbu v0,0xe(s0)
00411b2c  lbu a0,0xe(s2)
00411b30  nop
00411b34  xor v0,a0,v0
00411b38  sb v0,0xe(s1)
00411b3c  lbu v0,0xf(s0)
00411b40  lbu a0,0xf(s2)
00411b44  addiu s0,s0,0x10
00411b48  xor v0,a0,v0
00411b4c  sb v0,0xf(s1)
00411b50  b 0x00411b64
00411b54  _addiu s1,s1,0x10
00411b58  lui s7,0x42
00411b5c  addiu s8,s8,-0x2574
00411b60  addiu s7,s7,-0x2510
00411b64  addiu s6,v1,0x10
00411b68  slt v0,s4,s6
00411b6c  beq v0,zero,0x004119c8
00411b70  _slt v0,v1,s4
00411b74  b 0x00411bfc
00411b78  _nop
00411b7c  beq s3,zero,0x00411b8c
00411b80  _move a0,s2
00411b84  b 0x00411be4
00411b88  _addu v0,s2,s3
00411b8c  lw t9,-0x7fbc(gp)
00411b90  sw v1,0x18(sp)
00411b94  move a1,s2
00411b98  jalr t9
00411b9c  _move a2,s5
00411ba0  lw gp,0x10(sp)
00411ba4  lw v1,0x18(sp)
00411ba8  beq v0,zero,0x00411b84
00411bac  _nop
00411bb0  b 0x00411c10
00411bb4  _li v0,0x1
00411bb8  lbu a2,0x0(s0)
00411bbc  lbu a1,0x0(v0)
00411bc0  addiu v1,v1,0x1
00411bc4  slt a0,v1,s4
00411bc8  xor a1,a2,a1
00411bcc  sb a1,0x0(s1)
00411bd0  addiu s3,s3,0x1
00411bd4  addiu s1,s1,0x1
00411bd8  addiu s0,s0,0x1
00411bdc  beq a0,zero,0x00411bf0
00411be0  _addiu v0,v0,0x1
00411be4  slti a0,s3,0x10
00411be8  bne a0,zero,0x00411bb8
00411bec  _nop
00411bf0  xori v0,s3,0x10
00411bf4  movz s3,zero,v0
00411bf8  slt v0,v1,s4
00411bfc  bne v0,zero,0x00411b7c
00411c00  _clear v0
00411c04  b 0x00411c10
00411c08  _sb s3,0xf2(s5)
00411c0c  li v0,0x1
00411c10  lw ra,0x44(sp)
00411c14  lw s8,0x40(sp)
00411c18  lw s7,0x3c(sp)
00411c1c  lw s6,0x38(sp)
00411c20  lw s5,0x34(sp)
00411c24  lw s4,0x30(sp)
00411c28  lw s3,0x2c(sp)
00411c2c  lw s2,0x28(sp)
00411c30  lw s1,0x24(sp)
00411c34  lw s0,0x20(sp)
00411c38  jr ra
00411c3c  _addiu sp,sp,0x48
