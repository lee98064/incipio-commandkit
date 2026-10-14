# FUN_00430a14 @ 00430a14
00430a14  addiu sp,sp,-0x30
00430a18  sw ra,0x2c(sp)
00430a1c  sw s4,0x28(sp)
00430a20  sw s3,0x24(sp)
00430a24  sw s2,0x20(sp)
00430a28  sw s1,0x1c(sp)
00430a2c  sw s0,0x18(sp)
00430a30  lui gp,0x62
00430a34  addiu gp,gp,-0x5cf0
00430a38  sw gp,0x10(sp)
00430a3c  sb zero,0x0(a1)
00430a40  sb zero,0x1(a1)
00430a44  sb zero,0x2(a1)
00430a48  sb zero,0x3(a1)
00430a4c  sb zero,0x0(a2)
00430a50  sb zero,0x1(a2)
00430a54  sb zero,0x2(a2)
00430a58  sb zero,0x3(a2)
00430a5c  sw zero,0x0(a3)
00430a60  lb v0,0x0(a0)
00430a64  move s0,a1
00430a68  move s1,a2
00430a6c  move s4,a3
00430a70  beq v0,zero,0x00430c10
00430a74  _move s3,a0
00430a78  lw t9,-0x6248(gp)
00430a7c  lui a1,0x5b
00430a80  addiu a1,a1,-0x2320
00430a84  jalr t9
00430a88  _li a2,0x7
00430a8c  lw gp,0x10(sp)
00430a90  bne v0,zero,0x00430aa8
00430a94  _lui a1,0x5b
00430a98  li v0,0x50
00430a9c  sw v0,0x0(s4)
00430aa0  b 0x00430ad4
00430aa4  _addiu s2,s3,0x7
00430aa8  lw t9,-0x6248(gp)
00430aac  addiu a1,a1,-0x2318
00430ab0  move a0,s3
00430ab4  jalr t9
00430ab8  _li a2,0x8
00430abc  lw gp,0x10(sp)
00430ac0  bne v0,zero,0x00430ad4
00430ac4  _move s2,s3
00430ac8  li v0,0x1bb
00430acc  sw v0,0x0(s4)
00430ad0  addiu s2,s3,0x8
00430ad4  lw t9,-0x7b28(gp)
00430ad8  move a0,s2
00430adc  jalr t9
00430ae0  _li a1,0x2f
00430ae4  lw gp,0x10(sp)
00430ae8  nop
00430aec  lw t9,-0x63c4(gp)
00430af0  beq v0,zero,0x00430b94
00430af4  _move s3,v0
00430af8  jalr t9
00430afc  _move a0,s2
00430b00  lw gp,0x10(sp)
00430b04  move a0,s3
00430b08  lw t9,-0x63c4(gp)
00430b0c  nop
00430b10  jalr t9
00430b14  _move s4,v0
00430b18  lw gp,0x10(sp)
00430b1c  subu a2,s4,v0
00430b20  move a0,s0
00430b24  lw t9,-0x5c9c(gp)
00430b28  move a1,s2
00430b2c  jalr t9
00430b30  _addiu s4,s3,0x1
00430b34  lw gp,0x10(sp)
00430b38  beq s4,zero,0x00430bdc
00430b3c  _nop
00430b40  lw t9,-0x63c4(gp)
00430b44  nop
00430b48  jalr t9
00430b4c  _move a0,s3
00430b50  lw gp,0x10(sp)
00430b54  move a1,s4
00430b58  addiu a2,v0,-0x1
00430b5c  lw t9,-0x5c9c(gp)
00430b60  nop
00430b64  jalr t9
00430b68  _move a0,s1
00430b6c  lw gp,0x10(sp)
00430b70  nop
00430b74  lw t9,-0x63c4(gp)
00430b78  nop
00430b7c  jalr t9
00430b80  _move a0,s3
00430b84  addu v0,s1,v0
00430b88  lw gp,0x10(sp)
00430b8c  b 0x00430bdc
00430b90  _sb zero,-0x1(v0)
00430b94  jalr t9
00430b98  _move a0,s2
00430b9c  lw gp,0x10(sp)
00430ba0  move a2,v0
00430ba4  move a0,s0
00430ba8  lw t9,-0x5c9c(gp)
00430bac  nop
00430bb0  jalr t9
00430bb4  _move a1,s2
00430bb8  lw gp,0x10(sp)
00430bbc  nop
00430bc0  lw t9,-0x63c4(gp)
00430bc4  nop
00430bc8  jalr t9
00430bcc  _move a0,s2
00430bd0  addu v0,s0,v0
00430bd4  b 0x00430c10
00430bd8  _sb zero,0x0(v0)
00430bdc  lw t9,-0x63c4(gp)
00430be0  nop
00430be4  jalr t9
00430be8  _move a0,s2
00430bec  lw gp,0x10(sp)
00430bf0  move a0,s3
00430bf4  lw t9,-0x63c4(gp)
00430bf8  nop
00430bfc  jalr t9
00430c00  _move s1,v0
00430c04  subu s1,s1,v0
00430c08  addu s0,s0,s1
00430c0c  sb zero,0x0(s0)
00430c10  lw ra,0x2c(sp)
00430c14  lw s4,0x28(sp)
00430c18  lw s3,0x24(sp)
00430c1c  lw s2,0x20(sp)
00430c20  lw s1,0x1c(sp)
00430c24  lw s0,0x18(sp)
00430c28  jr ra
00430c2c  _addiu sp,sp,0x30
