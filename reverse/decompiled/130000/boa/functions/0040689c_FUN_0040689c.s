# FUN_0040689c @ 0040689c
0040689c  addiu sp,sp,-0x450
004068a0  sw ra,0x44c(sp)
004068a4  sw s8,0x448(sp)
004068a8  sw s7,0x444(sp)
004068ac  sw s6,0x440(sp)
004068b0  sw s5,0x43c(sp)
004068b4  sw s4,0x438(sp)
004068b8  sw s3,0x434(sp)
004068bc  sw s2,0x430(sp)
004068c0  sw s1,0x42c(sp)
004068c4  sw s0,0x428(sp)
004068c8  lui gp,0x47
004068cc  addiu gp,gp,0x2630
004068d0  sw gp,0x18(sp)
004068d4  lw t9,-0x7b04(gp)
004068d8  sw a0,0x450(sp)
004068dc  jalr t9
004068e0  _clear s3
004068e4  lw gp,0x18(sp)
004068e8  lui v1,0x47
004068ec  sw v0,-0x3a1c(v1)
004068f0  addiu s2,sp,0x20
004068f4  li s8,0xa
004068f8  lw s4,-0x7a70(gp)
004068fc  lw s7,-0x7a3c(gp)
00406900  lw s5,-0x7e40(gp)
00406904  b 0x00406b78
00406908  _li s6,0x2
0040690c  lb v0,0x20(sp)
00406910  nop
00406914  beq v0,zero,0x00406b78
00406918  _addiu s3,s3,0x1
0040691c  li v1,0x23
00406920  beq v0,v1,0x00406b78
00406924  _nop
00406928  beq v0,s8,0x00406b78
0040692c  _nop
00406930  lw t9,-0x7f1c(gp)
00406934  nop
00406938  jalr t9
0040693c  _move a0,s2
00406940  addiu v0,v0,-0x1
00406944  lw gp,0x18(sp)
00406948  b 0x00406958
0040694c  _addu v0,s2,v0
00406950  sb zero,0x0(v0)
00406954  addiu v0,v0,-0x1
00406958  lb v1,0x0(v0)
0040695c  lw a0,0x0(s4)
00406960  sll v1,v1,0x1
00406964  addu v1,a0,v1
00406968  lhu v1,0x0(v1)
0040696c  nop
00406970  andi v1,v1,0x20
00406974  beq v1,zero,0x00406984
00406978  _sltu v1,s2,v0
0040697c  bne v1,zero,0x00406950
00406980  _nop
00406984  lb v1,0x20(sp)
00406988  nop
0040698c  beq v1,zero,0x00406b78
00406990  _move v0,s2
00406994  lb v1,0x0(v0)
00406998  nop
0040699c  sll a1,v1,0x1
004069a0  addu a1,a0,a1
004069a4  lhu a1,0x0(a1)
004069a8  nop
004069ac  andi a1,a1,0x20
004069b0  beq a1,zero,0x00406994
004069b4  _addiu v0,v0,0x1
004069b8  addiu v0,v0,-0x1
004069bc  beq v1,zero,0x004069cc
004069c0  _clear s0
004069c4  sb zero,0x0(v0)
004069c8  addiu s0,v0,0x1
004069cc  jal 0x004067ec
004069d0  _move a0,s2
004069d4  lw gp,0x18(sp)
004069d8  bne v0,zero,0x00406a08
004069dc  _move s1,v0
004069e0  lw v0,-0x7e40(gp)
004069e4  lw t9,-0x7c44(gp)
004069e8  lui a1,0x45
004069ec  lw a0,0x0(v0)
004069f0  addiu a1,a1,-0x6468
004069f4  move a2,s3
004069f8  jalr t9
004069fc  _move a3,s2
00406a00  b 0x00406ae0
00406a04  _nop
00406a08  lw v0,0x0(s7)
00406a0c  nop
00406a10  andi v0,v0,0x100
00406a14  beq v0,zero,0x00406a3c
00406a18  _lui a1,0x45
00406a1c  lw t9,-0x7c44(gp)
00406a20  lw a2,0x0(s1)
00406a24  lw a0,0x0(s5)
00406a28  sw s0,0x10(sp)
00406a2c  addiu a1,a1,-0x6444
00406a30  jalr t9
00406a34  _move a3,s2
00406a38  lw gp,0x18(sp)
00406a3c  lw v0,0x4(s1)
00406a40  nop
00406a44  beq v0,s6,0x00406a80
00406a48  _li v1,0x3
00406a4c  beq v0,v1,0x00406a64
00406a50  _li v1,0x1
00406a54  bne v0,v1,0x00406ae8
00406a58  _clear a0
00406a5c  b 0x00406a70
00406a60  _nop
00406a64  lw v0,0x0(s4)
00406a68  b 0x00406a94
00406a6c  _nop
00406a70  lw a2,0xc(s1)
00406a74  lw t9,0x8(s1)
00406a78  b 0x00406b68
00406a7c  _clear a1
00406a80  lw a2,0xc(s1)
00406a84  lw t9,0x8(s1)
00406a88  move a0,s0
00406a8c  b 0x00406b68
00406a90  _clear a1
00406a94  lb v1,0x0(s0)
00406a98  nop
00406a9c  sll a0,v1,0x1
00406aa0  addu a0,v0,a0
00406aa4  lhu a0,0x0(a0)
00406aa8  nop
00406aac  andi a0,a0,0x20
00406ab0  bne a0,zero,0x00406a94
00406ab4  _addiu s0,s0,0x1
00406ab8  addiu s0,s0,-0x1
00406abc  bne v1,zero,0x00406af8
00406ac0  _move a0,s0
00406ac4  lw v0,-0x7e40(gp)
00406ac8  lw a2,0x0(s1)
00406acc  lw t9,-0x7c44(gp)
00406ad0  lw a0,0x0(v0)
00406ad4  lui a1,0x45
00406ad8  jalr t9
00406adc  _addiu a1,a1,-0x6424
00406ae0  lw gp,0x18(sp)
00406ae4  nop
00406ae8  lw t9,-0x7ed4(gp)
00406aec  nop
00406af0  jalr t9
00406af4  _li a0,0x1
00406af8  lb v1,0x0(s0)
00406afc  nop
00406b00  sll a1,v1,0x1
00406b04  addu a1,v0,a1
00406b08  lhu a1,0x0(a1)
00406b0c  nop
00406b10  andi a1,a1,0x20
00406b14  beq a1,zero,0x00406af8
00406b18  _addiu s0,s0,0x1
00406b1c  beq v1,zero,0x00406b58
00406b20  _addiu s0,s0,-0x1
00406b24  sb zero,0x0(s0)
00406b28  addiu a1,s0,0x1
00406b2c  lb v1,0x0(a1)
00406b30  nop
00406b34  sll a2,v1,0x1
00406b38  addu a2,v0,a2
00406b3c  lhu a2,0x0(a2)
00406b40  nop
00406b44  andi a2,a2,0x20
00406b48  bne a2,zero,0x00406b2c
00406b4c  _addiu a1,a1,0x1
00406b50  bne v1,zero,0x00406b5c
00406b54  _addiu a1,a1,-0x1
00406b58  clear a1
00406b5c  lw a2,0xc(s1)
00406b60  lw t9,0x8(s1)
00406b64  nop
00406b68  jalr t9
00406b6c  _nop
00406b70  lw gp,0x18(sp)
00406b74  nop
00406b78  lw t9,-0x7ab8(gp)
00406b7c  lw a2,0x450(sp)
00406b80  move a0,s2
00406b84  jalr t9
00406b88  _li a1,0x400
00406b8c  lw gp,0x18(sp)
00406b90  bne v0,zero,0x0040690c
00406b94  _nop
00406b98  lw ra,0x44c(sp)
00406b9c  lw s8,0x448(sp)
00406ba0  lw s7,0x444(sp)
00406ba4  lw s6,0x440(sp)
00406ba8  lw s5,0x43c(sp)
00406bac  lw s4,0x438(sp)
00406bb0  lw s3,0x434(sp)
00406bb4  lw s2,0x430(sp)
00406bb8  lw s1,0x42c(sp)
00406bbc  lw s0,0x428(sp)
00406bc0  jr ra
00406bc4  _addiu sp,sp,0x450
