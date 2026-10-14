# main @ 00402a04
00402a04  addiu sp,sp,-0x28
00402a08  sw ra,0x24(sp)
00402a0c  sw s1,0x20(sp)
00402a10  sw s0,0x1c(sp)
00402a14  lui gp,0x44
00402a18  addiu gp,gp,-0x4fc0
00402a1c  sw gp,0x10(sp)
00402a20  lw t9,-0x7d5c(gp)
00402a24  move s0,a0
00402a28  move s1,a1
00402a2c  lui a0,0x42
00402a30  lui a1,0x42
00402a34  addiu a0,a0,-0x31cc
00402a38  jalr t9
00402a3c  _addiu a1,a1,-0x34a0
00402a40  move a1,s1
00402a44  jal 0x00401f50
00402a48  _move a0,s0
00402a4c  jal 0x00402014
00402a50  _lui s1,0x43
00402a54  jal 0x004028e0
00402a58  _li a0,-0x1
00402a5c  lw gp,0x10(sp)
00402a60  lui a0,0x42
00402a64  addiu a0,a0,-0x3174
00402a68  lw t9,-0x7dac(gp)
00402a6c  nop
00402a70  jalr t9
00402a74  _lui s0,0x40
00402a78  lw gp,0x10(sp)
00402a7c  addiu a0,s1,0x3544
00402a80  lw t9,-0x7e88(gp)
00402a84  nop
00402a88  jalr t9
00402a8c  _addiu a1,s0,0x2b64
00402a90  lw gp,0x10(sp)
00402a94  beq v0,zero,0x00402ae8
00402a98  _lui a0,0x42
00402a9c  lw t9,-0x7dac(gp)
00402aa0  nop
00402aa4  jalr t9
00402aa8  _addiu a0,a0,-0x3130
00402aac  lw gp,0x10(sp)
00402ab0  nop
00402ab4  lw t9,-0x7dc4(gp)
00402ab8  nop
00402abc  jalr t9
00402ac0  _li a0,0x1
00402ac4  lw gp,0x10(sp)
00402ac8  addiu a0,s1,0x3544
00402acc  lw t9,-0x7e88(gp)
00402ad0  nop
00402ad4  jalr t9
00402ad8  _addiu a1,s0,0x2b64
00402adc  lw gp,0x10(sp)
00402ae0  bne v0,zero,0x00402b3c
00402ae4  _nop
00402ae8  lui s0,0x43
00402aec  addiu s0,s0,0x3544
00402af0  lui s1,0x43
00402af4  lbu v0,0x3540(s1)
00402af8  nop
00402afc  beq v0,zero,0x00402b18
00402b00  _nop
00402b04  lw t9,-0x7d68(gp)
00402b08  nop
00402b0c  jalr t9
00402b10  _move a0,s0
00402b14  lw gp,0x10(sp)
00402b18  lbu v0,0x40(s0)
00402b1c  lw t9,-0x7dc4(gp)
00402b20  bne v0,zero,0x00402b3c
00402b24  _li a0,0x1
00402b28  jalr t9
00402b2c  _nop
00402b30  lw gp,0x10(sp)
00402b34  b 0x00402af4
00402b38  _nop
00402b3c  lw t9,-0x7dac(gp)
00402b40  lui a0,0x42
00402b44  jalr t9
00402b48  _addiu a0,a0,-0x30f4
00402b4c  lw ra,0x24(sp)
00402b50  lw s1,0x20(sp)
00402b54  lw s0,0x1c(sp)
00402b58  clear v0
00402b5c  jr ra
00402b60  _addiu sp,sp,0x28
