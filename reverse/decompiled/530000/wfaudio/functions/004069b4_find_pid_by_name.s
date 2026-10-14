# find_pid_by_name @ 004069b4
004069b4  addiu sp,sp,-0xe0
004069b8  sw ra,0xdc(sp)
004069bc  sw s8,0xd8(sp)
004069c0  sw s7,0xd4(sp)
004069c4  sw s6,0xd0(sp)
004069c8  sw s5,0xcc(sp)
004069cc  sw s4,0xc8(sp)
004069d0  sw s3,0xc4(sp)
004069d4  sw s2,0xc0(sp)
004069d8  sw s1,0xbc(sp)
004069dc  sw s0,0xb8(sp)
004069e0  lui gp,0x43
004069e4  addiu gp,gp,-0x4c90
004069e8  sw gp,0x10(sp)
004069ec  lw t9,-0x7f00(gp)
004069f0  move s2,a0
004069f4  lui a0,0x41
004069f8  jalr t9
004069fc  _addiu a0,a0,0x1224
00406a00  lw gp,0x10(sp)
00406a04  bne v0,zero,0x00406b38
00406a08  _move s6,v0
00406a0c  lw t9,-0x7db0(gp)
00406a10  lui a0,0x41
00406a14  jalr t9
00406a18  _addiu a0,a0,0x1218
00406a1c  b 0x00406b98
00406a20  _clear v0
00406a24  jalr t9
00406a28  _nop
00406a2c  lw gp,0x10(sp)
00406a30  beq v0,zero,0x00406b54
00406a34  _nop
00406a38  lw a0,-0x7dcc(gp)
00406a3c  lb v0,0xb(s0)
00406a40  lw v1,0x0(a0)
00406a44  sll v0,v0,0x1
00406a48  addu v0,v1,v0
00406a4c  lhu v0,0x0(v0)
00406a50  nop
00406a54  andi v0,v0,0x8
00406a58  beq v0,zero,0x00406b54
00406a5c  _lui a1,0x41
00406a60  lw t9,-0x7f24(gp)
00406a64  move a2,s1
00406a68  move a0,s5
00406a6c  jalr t9
00406a70  _addiu a1,a1,0x1230
00406a74  lw gp,0x10(sp)
00406a78  move a0,s5
00406a7c  lw t9,-0x7ed8(gp)
00406a80  nop
00406a84  jalr t9
00406a88  _move a1,s8
00406a8c  lw gp,0x10(sp)
00406a90  li a1,0x31
00406a94  move a0,s4
00406a98  lw t9,-0x7de8(gp)
00406a9c  move s0,v0
00406aa0  beq v0,zero,0x00406b54
00406aa4  _move a2,v0
00406aa8  jalr t9
00406aac  _nop
00406ab0  lw gp,0x10(sp)
00406ab4  nop
00406ab8  lw t9,-0x7ef0(gp)
00406abc  bne v0,zero,0x00406ad8
00406ac0  _move a0,s0
00406ac4  jalr t9
00406ac8  _nop
00406acc  lw gp,0x10(sp)
00406ad0  b 0x00406b54
00406ad4  _nop
00406ad8  jalr t9
00406adc  _nop
00406ae0  lw gp,0x10(sp)
00406ae4  move a0,s4
00406ae8  move a1,s7
00406aec  lw t9,-0x7ebc(gp)
00406af0  nop
00406af4  jalr t9
00406af8  _move a2,s3
00406afc  lw gp,0x10(sp)
00406b00  move a0,s3
00406b04  lw t9,-0x7f0c(gp)
00406b08  nop
00406b0c  jalr t9
00406b10  _move a1,s2
00406b14  lw gp,0x10(sp)
00406b18  bne v0,zero,0x00406b54
00406b1c  _move a0,s1
00406b20  lw t9,-0x7e3c(gp)
00406b24  clear a1
00406b28  jalr t9
00406b2c  _clear a2
00406b30  b 0x00406b98
00406b34  _nop
00406b38  lui s8,0x41
00406b3c  lui s7,0x41
00406b40  addiu s8,s8,0x1fe4
00406b44  addiu s7,s7,0x1240
00406b48  addiu s5,sp,0x18
00406b4c  addiu s4,sp,0x4c
00406b50  addiu s3,sp,0x80
00406b54  lw t9,-0x7e2c(gp)
00406b58  nop
00406b5c  jalr t9
00406b60  _move a0,s6
00406b64  lw gp,0x10(sp)
00406b68  lui a1,0x41
00406b6c  addiu s1,v0,0xb
00406b70  addiu a1,a1,0x122c
00406b74  move s0,v0
00406b78  lw t9,-0x7f0c(gp)
00406b7c  bne v0,zero,0x00406a24
00406b80  _move a0,s1
00406b84  lui a1,0x41
00406b88  move a0,s2
00406b8c  jalr t9
00406b90  _addiu a1,a1,0x1fd0
00406b94  sltiu v0,v0,0x1
00406b98  lw ra,0xdc(sp)
00406b9c  lw s8,0xd8(sp)
00406ba0  lw s7,0xd4(sp)
00406ba4  lw s6,0xd0(sp)
00406ba8  lw s5,0xcc(sp)
00406bac  lw s4,0xc8(sp)
00406bb0  lw s3,0xc4(sp)
00406bb4  lw s2,0xc0(sp)
00406bb8  lw s1,0xbc(sp)
00406bbc  lw s0,0xb8(sp)
00406bc0  jr ra
00406bc4  _addiu sp,sp,0xe0
