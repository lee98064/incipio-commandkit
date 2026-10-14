# FUN_0040188c @ 0040188c
0040188c  addiu sp,sp,-0x40
00401890  sw ra,0x3c(sp)
00401894  sw s4,0x38(sp)
00401898  sw s3,0x34(sp)
0040189c  sw s2,0x30(sp)
004018a0  sw s1,0x2c(sp)
004018a4  sw s0,0x28(sp)
004018a8  lui gp,0x43
004018ac  addiu gp,gp,-0x4be0
004018b0  sw gp,0x10(sp)
004018b4  ori v0,zero,0x8000
004018b8  beq a0,v0,0x004018dc
004018bc  _move s3,a0
004018c0  ori v0,zero,0xc000
004018c4  beq a0,v0,0x004018ec
004018c8  _li v0,0x6000
004018cc  bne a0,v0,0x004018fc
004018d0  _lui a0,0x41
004018d4  b 0x0040191c
004018d8  _lui s0,0x41
004018dc  lui s0,0x41
004018e0  addiu s0,s0,0xd28
004018e4  b 0x00401924
004018e8  _li a0,0x2
004018ec  lui s0,0x41
004018f0  addiu s0,s0,0xd38
004018f4  b 0x00401924
004018f8  _li a0,0x4
004018fc  lw t9,-0x7e5c(gp)
00401900  lui a1,0x41
00401904  addiu a0,a0,0xd8c
00401908  addiu a1,a1,0xd84
0040190c  jalr t9
00401910  _li a2,0x2c5f
00401914  b 0x00401a5c
00401918  _nop
0040191c  addiu s0,s0,0xd30
00401920  li a0,0x1
00401924  lw t9,-0x7e80(gp)
00401928  nop
0040192c  jalr t9
00401930  _addiu s1,sp,0x18
00401934  move a0,s1
00401938  move a1,s3
0040193c  li a2,0xc
00401940  jal 0x004017c0
00401944  _move s4,v0
00401948  lw gp,0x10(sp)
0040194c  move a0,s1
00401950  move a1,s0
00401954  lw t9,-0x7f10(gp)
00401958  nop
0040195c  jalr t9
00401960  _li a2,0x6
00401964  lw gp,0x10(sp)
00401968  bne v0,zero,0x00401af8
0040196c  _li v0,-0x1
00401970  lw s2,0x20(sp)
00401974  nop
00401978  beq s2,zero,0x00401af8
0040197c  _nop
00401980  sltu s4,s4,s2
00401984  bne s4,zero,0x00401af8
00401988  _addiu s4,s2,0xc
0040198c  lw t9,-0x7ee0(gp)
00401990  li a0,0x1
00401994  lhu s0,0x1e(sp)
00401998  jalr t9
0040199c  _move a1,s4
004019a0  lw gp,0x10(sp)
004019a4  beq v0,zero,0x00401af4
004019a8  _move s1,v0
004019ac  mult s0,s2
004019b0  lw t9,-0x7ee0(gp)
004019b4  li a0,0x1
004019b8  jalr t9
004019bc  _mflo a1
004019c0  lw gp,0x10(sp)
004019c4  bne v0,zero,0x004019d8
004019c8  _move s0,v0
004019cc  lw t9,-0x7fc4(gp)
004019d0  b 0x00401a54
004019d4  _move a0,s1
004019d8  move a1,s3
004019dc  move a2,s4
004019e0  jal 0x004017c0
004019e4  _move a0,s1
004019e8  lw gp,0x10(sp)
004019ec  move a1,s2
004019f0  addiu a0,s1,0xc
004019f4  lw t9,-0x7e70(gp)
004019f8  nop
004019fc  jalr t9
00401a00  _move a2,s0
00401a04  lw gp,0x10(sp)
00401a08  lbu s3,0x4(s0)
00401a0c  lbu v0,0x5(s0)
00401a10  lw t9,-0x7ee0(gp)
00401a14  sll s3,s3,0x8
00401a18  or s3,v0,s3
00401a1c  li a0,0x1
00401a20  jalr t9
00401a24  _move a1,s3
00401a28  lw gp,0x10(sp)
00401a2c  bne v0,zero,0x00401a64
00401a30  _move s2,v0
00401a34  lw t9,-0x7fc4(gp)
00401a38  nop
00401a3c  jalr t9
00401a40  _move a0,s1
00401a44  lw gp,0x10(sp)
00401a48  move a0,s0
00401a4c  lw t9,-0x7fc4(gp)
00401a50  nop
00401a54  jalr t9
00401a58  _nop
00401a5c  b 0x00401af8
00401a60  _li v0,-0x1
00401a64  lw t9,-0x7e7c(gp)
00401a68  move a2,s3
00401a6c  move a0,v0
00401a70  jalr t9
00401a74  _addiu a1,s0,0x6
00401a78  lw gp,0x10(sp)
00401a7c  addu s3,s2,s3
00401a80  move v0,s2
00401a84  b 0x00401a9c
00401a88  _clear v1
00401a8c  lbu a0,0x0(v0)
00401a90  addiu v0,v0,0x1
00401a94  addu v1,v1,a0
00401a98  andi v1,v1,0xff
00401a9c  bne v0,s3,0x00401a8c
00401aa0  _nop
00401aa4  bne v1,zero,0x00401af4
00401aa8  _nop
00401aac  lw t9,-0x7fc4(gp)
00401ab0  nop
00401ab4  jalr t9
00401ab8  _move a0,s1
00401abc  lw gp,0x10(sp)
00401ac0  nop
00401ac4  lw t9,-0x7fc4(gp)
00401ac8  nop
00401acc  jalr t9
00401ad0  _move a0,s0
00401ad4  lw gp,0x10(sp)
00401ad8  nop
00401adc  lw t9,-0x7fc4(gp)
00401ae0  nop
00401ae4  jalr t9
00401ae8  _move a0,s2
00401aec  b 0x00401af8
00401af0  _li v0,0x1
00401af4  li v0,-0x1
00401af8  lw ra,0x3c(sp)
00401afc  lw s4,0x38(sp)
00401b00  lw s3,0x34(sp)
00401b04  lw s2,0x30(sp)
00401b08  lw s1,0x2c(sp)
00401b0c  lw s0,0x28(sp)
00401b10  jr ra
00401b14  _addiu sp,sp,0x40
