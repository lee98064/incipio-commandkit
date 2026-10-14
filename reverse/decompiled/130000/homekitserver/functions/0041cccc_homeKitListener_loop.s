# homeKitListener_loop @ 0041cccc
0041cccc  addiu sp,sp,-0x110
0041ccd0  sw ra,0x10c(sp)
0041ccd4  sw s8,0x108(sp)
0041ccd8  sw s7,0x104(sp)
0041ccdc  sw s6,0x100(sp)
0041cce0  sw s5,0xfc(sp)
0041cce4  sw s4,0xf8(sp)
0041cce8  sw s3,0xf4(sp)
0041ccec  sw s2,0xf0(sp)
0041ccf0  sw s1,0xec(sp)
0041ccf4  sw s0,0xe8(sp)
0041ccf8  lui gp,0x62
0041ccfc  addiu gp,gp,-0x6b80
0041cd00  sw gp,0x18(sp)
0041cd04  lw t9,-0x778c(gp)
0041cd08  nop
0041cd0c  jalr t9
0041cd10  _move s1,a0
0041cd14  lw gp,0x18(sp)
0041cd18  nop
0041cd1c  lw t9,-0x5be4(gp)
0041cd20  nop
0041cd24  jalr t9
0041cd28  _nop
0041cd2c  lw gp,0x18(sp)
0041cd30  nop
0041cd34  lw t9,-0x5e48(gp)
0041cd38  nop
0041cd3c  jalr t9
0041cd40  _nop
0041cd44  lw gp,0x18(sp)
0041cd48  nop
0041cd4c  lw t9,-0x5888(gp)
0041cd50  nop
0041cd54  jalr t9
0041cd58  _nop
0041cd5c  lw gp,0x18(sp)
0041cd60  nop
0041cd64  lw t9,-0x73b0(gp)
0041cd68  beq v0,zero,0x0041cd80
0041cd6c  _lui a0,0x5b
0041cd70  lui a1,0x5b
0041cd74  addiu a0,a0,-0x4a3c
0041cd78  b 0x0041cd8c
0041cd7c  _addiu a1,a1,0xb78
0041cd80  lui a1,0x5b
0041cd84  addiu a0,a0,-0x4a3c
0041cd88  addiu a1,a1,-0x28a8
0041cd8c  jalr t9
0041cd90  _srl s3,s1,0x5
0041cd94  lw gp,0x18(sp)
0041cd98  li a1,0x1
0041cd9c  li a0,0x64
0041cda0  lw t9,-0x5a68(gp)
0041cda4  nop
0041cda8  jalr t9
0041cdac  _addiu s4,sp,0x20
0041cdb0  lw gp,0x18(sp)
0041cdb4  move a0,v0
0041cdb8  move s0,v0
0041cdbc  lw t9,-0x5848(gp)
0041cdc0  sll s3,s3,0x2
0041cdc4  jalr t9
0041cdc8  _li s5,0x1
0041cdcc  lw gp,0x18(sp)
0041cdd0  lui a0,0x5b
0041cdd4  move a1,s0
0041cdd8  lw t9,-0x73b0(gp)
0041cddc  addiu a0,a0,-0x4a38
0041cde0  jalr t9
0041cde4  _lui s6,0x42
0041cde8  lw gp,0x18(sp)
0041cdec  move a0,s0
0041cdf0  lui s0,0x61
0041cdf4  lw t9,-0x7aa4(gp)
0041cdf8  addiu s8,sp,0x60
0041cdfc  jalr t9
0041ce00  _addiu s7,sp,0x24
0041ce04  lw gp,0x18(sp)
0041ce08  li a1,0x1
0041ce0c  li a0,0xa
0041ce10  lw t9,-0x5a68(gp)
0041ce14  sllv s5,s5,s1
0041ce18  jalr t9
0041ce1c  _addu s3,s4,s3
0041ce20  lw gp,0x18(sp)
0041ce24  move a0,v0
0041ce28  move s2,v0
0041ce2c  lw t9,-0x6400(gp)
0041ce30  nop
0041ce34  jalr t9
0041ce38  _addiu s6,s6,-0x494
0041ce3c  lw gp,0x18(sp)
0041ce40  lui a0,0x5b
0041ce44  move a1,s2
0041ce48  lw t9,-0x73b0(gp)
0041ce4c  nop
0041ce50  jalr t9
0041ce54  _addiu a0,a0,-0x4a34
0041ce58  lw gp,0x18(sp)
0041ce5c  move a0,s2
0041ce60  lw t9,-0x7aa4(gp)
0041ce64  nop
0041ce68  jalr t9
0041ce6c  _addiu s2,sp,0x3c
0041ce70  lw gp,0x18(sp)
0041ce74  addiu a0,sp,0x2c
0041ce78  lw v0,-0x5b48(gp)
0041ce7c  lw t9,-0x5f7c(gp)
0041ce80  sw v0,0x2c(sp)
0041ce84  lw v0,-0x6ef0(gp)
0041ce88  nop
0041ce8c  sw v0,0x30(sp)
0041ce90  lw v0,-0x6548(gp)
0041ce94  nop
0041ce98  sw v0,0x34(sp)
0041ce9c  lw v0,-0x5f30(gp)
0041cea0  jalr t9
0041cea4  _sw v0,0x38(sp)
0041cea8  lw gp,0x18(sp)
0041ceac  nop
0041ceb0  lw t9,-0x7dc0(gp)
0041ceb4  nop
0041ceb8  jalr t9
0041cebc  _clear a0
0041cec0  lw gp,0x18(sp)
0041cec4  li a1,0x1
0041cec8  lw t9,-0x5a68(gp)
0041cecc  nop
0041ced0  jalr t9
0041ced4  _li a0,0x15c
0041ced8  lw gp,0x18(sp)
0041cedc  addiu a0,v0,0xbc
0041cee0  lw t9,-0x57fc(gp)
0041cee4  nop
0041cee8  jalr t9
0041ceec  _sw v0,0x3d50(s0)
0041cef0  lw gp,0x18(sp)
0041cef4  lw a0,0x3d50(s0)
0041cef8  addiu v0,s1,0x1
0041cefc  lw t9,-0x609c(gp)
0041cf00  nop
0041cf04  jalr t9
0041cf08  _sw v0,0xe0(sp)
0041cf0c  lw gp,0x18(sp)
0041cf10  lw v0,0x3d50(s0)
0041cf14  lw t9,-0x7cc4(gp)
0041cf18  lw a0,0x158(v0)
0041cf1c  jalr t9
0041cf20  _nop
0041cf24  lui v0,0x61
0041cf28  lw gp,0x18(sp)
0041cf2c  b 0x0041cf40
0041cf30  _sb zero,0x3d4c(v0)
0041cf34  sw zero,0x40(t0)
0041cf38  b 0x0041cf44
0041cf3c  _addiu v0,v0,0x1
0041cf40  clear v0
0041cf44  sll t0,v0,0x2
0041cf48  sltiu v1,v0,0x20
0041cf4c  lw t9,-0x6654(gp)
0041cf50  clear a3
0041cf54  lw a0,0xe0(sp)
0041cf58  move a1,s8
0041cf5c  clear a2
0041cf60  bne v1,zero,0x0041cf34
0041cf64  _addu t0,s4,t0
0041cf68  lw v0,0x40(s3)
0041cf6c  li v1,0x2
0041cf70  sw v1,0x24(sp)
0041cf74  or v0,v0,s5
0041cf78  sw v0,0x40(s3)
0041cf7c  sw zero,0x28(sp)
0041cf80  jalr t9
0041cf84  _sw s7,0x10(sp)
0041cf88  addiu v0,v0,0x1
0041cf8c  sltiu v0,v0,0x2
0041cf90  lw gp,0x18(sp)
0041cf94  bne v0,zero,0x0041cf44
0041cf98  _clear v0
0041cf9c  lw v0,0x40(s3)
0041cfa0  lw t9,-0x5a68(gp)
0041cfa4  li a0,0x24
0041cfa8  and v0,s5,v0
0041cfac  beq v0,zero,0x0041cf40
0041cfb0  _li a1,0x1
0041cfb4  jalr t9
0041cfb8  _nop
0041cfbc  lw gp,0x18(sp)
0041cfc0  move a0,s1
0041cfc4  addiu a2,v0,0x20
0041cfc8  lw t9,-0x7a80(gp)
0041cfcc  addiu a1,v0,0x4
0041cfd0  jalr t9
0041cfd4  _move s0,v0
0041cfd8  lw gp,0x18(sp)
0041cfdc  move a0,s2
0041cfe0  lw t9,-0x5f70(gp)
0041cfe4  bgtz v0,0x0041d004
0041cfe8  _sw v0,0x0(s0)
0041cfec  lw t9,-0x7aa4(gp)
0041cff0  nop
0041cff4  jalr t9
0041cff8  _move a0,s0
0041cffc  b 0x0041d0b8
0041d000  _nop
0041d004  jalr t9
0041d008  _nop
0041d00c  lw gp,0x18(sp)
0041d010  move a0,s2
0041d014  lw t9,-0x5bb4(gp)
0041d018  nop
0041d01c  jalr t9
0041d020  _li a1,0x1
0041d024  lw gp,0x18(sp)
0041d028  move a0,s4
0041d02c  move a1,s2
0041d030  lw t9,-0x6bdc(gp)
0041d034  move a2,s6
0041d038  jalr t9
0041d03c  _move a3,s0
0041d040  lw gp,0x18(sp)
0041d044  nop
0041d048  lw t9,-0x6aec(gp)
0041d04c  bgez v0,0x0041d0b0
0041d050  _move a0,s2
0041d054  lw t9,-0x6d14(gp)
0041d058  nop
0041d05c  jalr t9
0041d060  _move a0,s1
0041d064  lw gp,0x18(sp)
0041d068  nop
0041d06c  lw t9,-0x7aa4(gp)
0041d070  nop
0041d074  jalr t9
0041d078  _move a0,s0
0041d07c  lw ra,0x10c(sp)
0041d080  lw s8,0x108(sp)
0041d084  lw s7,0x104(sp)
0041d088  lw s6,0x100(sp)
0041d08c  lw s5,0xfc(sp)
0041d090  lw s4,0xf8(sp)
0041d094  lw s3,0xf4(sp)
0041d098  lw s2,0xf0(sp)
0041d09c  lw s1,0xec(sp)
0041d0a0  lw s0,0xe8(sp)
0041d0a4  li v0,0x1
0041d0a8  jr ra
0041d0ac  _addiu sp,sp,0x110
0041d0b0  jalr t9
0041d0b4  _nop
0041d0b8  lw gp,0x18(sp)
0041d0bc  b 0x0041cf44
0041d0c0  _clear v0
