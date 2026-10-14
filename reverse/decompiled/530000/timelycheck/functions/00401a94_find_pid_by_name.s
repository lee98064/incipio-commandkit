# find_pid_by_name @ 00401a94
00401a94  addiu sp,sp,-0xe0
00401a98  sw ra,0xdc(sp)
00401a9c  sw s8,0xd8(sp)
00401aa0  sw s7,0xd4(sp)
00401aa4  sw s6,0xd0(sp)
00401aa8  sw s5,0xcc(sp)
00401aac  sw s4,0xc8(sp)
00401ab0  sw s3,0xc4(sp)
00401ab4  sw s2,0xc0(sp)
00401ab8  sw s1,0xbc(sp)
00401abc  sw s0,0xb8(sp)
00401ac0  lui gp,0x43
00401ac4  addiu gp,gp,0x3060
00401ac8  sw gp,0x10(sp)
00401acc  lw t9,-0x7f64(gp)
00401ad0  lui a1,0x41
00401ad4  addiu a1,a1,0x79e8
00401ad8  jalr t9
00401adc  _sw a0,0xe0(sp)
00401ae0  lw gp,0x10(sp)
00401ae4  beq v0,zero,0x00401c9c
00401ae8  _li s0,0x1
00401aec  lw t9,-0x7f5c(gp)
00401af0  lui a0,0x41
00401af4  jalr t9
00401af8  _addiu a0,a0,0x786c
00401afc  lw gp,0x10(sp)
00401b00  bne v0,zero,0x00401c34
00401b04  _move s0,v0
00401b08  lui a0,0x41
00401b0c  lw t9,-0x7e70(gp)
00401b10  b 0x00401c94
00401b14  _addiu a0,a0,0x7860
00401b18  jalr t9
00401b1c  _nop
00401b20  lw gp,0x10(sp)
00401b24  beq v0,zero,0x00401c58
00401b28  _nop
00401b2c  lw a0,-0x7e84(gp)
00401b30  lb v0,0xb(s1)
00401b34  lw v1,0x0(a0)
00401b38  sll v0,v0,0x1
00401b3c  addu v0,v1,v0
00401b40  lhu v0,0x0(v0)
00401b44  nop
00401b48  andi v0,v0,0x8
00401b4c  beq v0,zero,0x00401c58
00401b50  _move a2,s2
00401b54  lw t9,-0x7f78(gp)
00401b58  move a0,s5
00401b5c  jalr t9
00401b60  _move a1,s8
00401b64  lw gp,0x10(sp)
00401b68  move a0,s5
00401b6c  lw t9,-0x7f48(gp)
00401b70  nop
00401b74  jalr t9
00401b78  _move a1,s7
00401b7c  lw gp,0x10(sp)
00401b80  li a1,0x31
00401b84  move a0,s4
00401b88  lw t9,-0x7e90(gp)
00401b8c  move s1,v0
00401b90  beq v0,zero,0x00401c58
00401b94  _move a2,v0
00401b98  jalr t9
00401b9c  _nop
00401ba0  lw gp,0x10(sp)
00401ba4  nop
00401ba8  lw t9,-0x7f54(gp)
00401bac  bne v0,zero,0x00401bc8
00401bb0  _move a0,s1
00401bb4  jalr t9
00401bb8  _nop
00401bbc  lw gp,0x10(sp)
00401bc0  b 0x00401c58
00401bc4  _nop
00401bc8  jalr t9
00401bcc  _nop
00401bd0  lw gp,0x10(sp)
00401bd4  move a0,s4
00401bd8  move a1,s6
00401bdc  lw t9,-0x7f30(gp)
00401be0  nop
00401be4  jalr t9
00401be8  _move a2,s3
00401bec  lw gp,0x10(sp)
00401bf0  lw a1,0xe0(sp)
00401bf4  lw t9,-0x7f64(gp)
00401bf8  nop
00401bfc  jalr t9
00401c00  _move a0,s3
00401c04  lw gp,0x10(sp)
00401c08  bne v0,zero,0x00401c58
00401c0c  _move a0,s2
00401c10  lw t9,-0x7ed4(gp)
00401c14  clear a1
00401c18  jalr t9
00401c1c  _clear a2
00401c20  lw gp,0x10(sp)
00401c24  move a0,s0
00401c28  lw t9,-0x7fbc(gp)
00401c2c  b 0x00401c94
00401c30  _move s0,v0
00401c34  lui s8,0x41
00401c38  lui s7,0x42
00401c3c  lui s6,0x41
00401c40  addiu s8,s8,0x7878
00401c44  addiu s7,s7,-0x78fc
00401c48  addiu s6,s6,0x7888
00401c4c  addiu s5,sp,0x18
00401c50  addiu s4,sp,0x4c
00401c54  addiu s3,sp,0x80
00401c58  lw t9,-0x7ec8(gp)
00401c5c  nop
00401c60  jalr t9
00401c64  _move a0,s0
00401c68  lw gp,0x10(sp)
00401c6c  lui a1,0x41
00401c70  addiu s2,v0,0xb
00401c74  lw t9,-0x7f64(gp)
00401c78  addiu a1,a1,0x7874
00401c7c  move s1,v0
00401c80  bne v0,zero,0x00401b18
00401c84  _move a0,s2
00401c88  lw t9,-0x7fbc(gp)
00401c8c  move a0,s0
00401c90  clear s0
00401c94  jalr t9
00401c98  _nop
00401c9c  move v0,s0
00401ca0  lw ra,0xdc(sp)
00401ca4  lw s8,0xd8(sp)
00401ca8  lw s7,0xd4(sp)
00401cac  lw s6,0xd0(sp)
00401cb0  lw s5,0xcc(sp)
00401cb4  lw s4,0xc8(sp)
00401cb8  lw s3,0xc4(sp)
00401cbc  lw s2,0xc0(sp)
00401cc0  lw s1,0xbc(sp)
00401cc4  lw s0,0xb8(sp)
00401cc8  jr ra
00401ccc  _addiu sp,sp,0xe0
