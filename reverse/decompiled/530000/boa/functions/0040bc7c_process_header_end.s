# process_header_end @ 0040bc7c
0040bc7c  addiu sp,sp,-0x88
0040bc80  sw ra,0x84(sp)
0040bc84  sw s1,0x80(sp)
0040bc88  sw s0,0x7c(sp)
0040bc8c  lui gp,0x47
0040bc90  addiu gp,gp,0x2630
0040bc94  sw gp,0x10(sp)
0040bc98  lw v0,0x3c(a0)
0040bc9c  nop
0040bca0  bne v0,zero,0x0040bcc0
0040bca4  _move s0,a0
0040bca8  lw v0,-0x7e40(gp)
0040bcac  lui a0,0x45
0040bcb0  lw t9,-0x7f4c(gp)
0040bcb4  lw a1,0x0(v0)
0040bcb8  b 0x0040bda0
0040bcbc  _addiu a0,a0,-0x54b0
0040bcc0  lw t9,-0x7d10(gp)
0040bcc4  addiu s1,a0,0x8d4
0040bcc8  move a0,s1
0040bccc  jalr t9
0040bcd0  _addiu a1,s0,0x8c
0040bcd4  lw gp,0x10(sp)
0040bcd8  bne v0,zero,0x0040bd14
0040bcdc  _nop
0040bce0  lw v0,-0x7a3c(gp)
0040bce4  nop
0040bce8  lw v0,0x0(v0)
0040bcec  nop
0040bcf0  andi v0,v0,0x1
0040bcf4  beq v0,zero,0x0040be28
0040bcf8  _nop
0040bcfc  lw v0,-0x7e40(gp)
0040bd00  lui a0,0x45
0040bd04  lw t9,-0x7f4c(gp)
0040bd08  lw a1,0x0(v0)
0040bd0c  b 0x0040be18
0040bd10  _addiu a0,a0,-0x548c
0040bd14  lw t9,-0x7bac(gp)
0040bd18  nop
0040bd1c  jalr t9
0040bd20  _move a0,s1
0040bd24  lb v1,0x8d4(s0)
0040bd28  li v0,0x2f
0040bd2c  lw gp,0x10(sp)
0040bd30  bne v1,v0,0x0040be28
0040bd34  _nop
0040bd38  lw v0,-0x7a98(gp)
0040bd3c  nop
0040bd40  lw v0,0x0(v0)
0040bd44  nop
0040bd48  beq v0,zero,0x0040be34
0040bd4c  _nop
0040bd50  lw a0,0x60(s0)
0040bd54  lw t9,-0x7d8c(gp)
0040bd58  bne a0,zero,0x0040bd6c
0040bd5c  _nop
0040bd60  lw v0,-0x7ca0(gp)
0040bd64  nop
0040bd68  lw a0,0x0(v0)
0040bd6c  jalr t9
0040bd70  _nop
0040bd74  lw gp,0x10(sp)
0040bd78  sw v0,0x70(s0)
0040bd7c  lw a0,0x70(s0)
0040bd80  nop
0040bd84  bne a0,zero,0x0040bdb4
0040bd88  _nop
0040bd8c  lw v0,-0x7e40(gp)
0040bd90  lw t9,-0x7f4c(gp)
0040bd94  lui a0,0x45
0040bd98  lw a1,0x0(v0)
0040bd9c  addiu a0,a0,-0x546c
0040bda0  jalr t9
0040bda4  _nop
0040bda8  lw gp,0x10(sp)
0040bdac  b 0x0040bfa8
0040bdb0  _nop
0040bdb4  lw t9,-0x7a60(gp)
0040bdb8  nop
0040bdbc  jalr t9
0040bdc0  _nop
0040bdc4  lw gp,0x10(sp)
0040bdc8  lw a0,0x70(s0)
0040bdcc  lw t9,-0x7f48(gp)
0040bdd0  nop
0040bdd4  jalr t9
0040bdd8  _li a1,0x3a
0040bddc  lw gp,0x10(sp)
0040bde0  beq v0,zero,0x0040bdec
0040bde4  _nop
0040bde8  sb zero,0x0(v0)
0040bdec  lw t9,-0x7fa4(gp)
0040bdf0  lw a0,0x70(s0)
0040bdf4  jalr t9
0040bdf8  _nop
0040bdfc  lw gp,0x10(sp)
0040be00  bgtz v0,0x0040be34
0040be04  _lui a0,0x45
0040be08  lw v0,-0x7e40(gp)
0040be0c  lw t9,-0x7f4c(gp)
0040be10  lw a1,0x0(v0)
0040be14  addiu a0,a0,-0x5438
0040be18  jalr t9
0040be1c  _nop
0040be20  lw gp,0x10(sp)
0040be24  nop
0040be28  lw t9,-0x7cc8(gp)
0040be2c  b 0x0040bfb0
0040be30  _nop
0040be34  lw t9,-0x7b54(gp)
0040be38  li a0,0xb6
0040be3c  jalr t9
0040be40  _addiu a1,sp,0x38
0040be44  lw gp,0x10(sp)
0040be48  li a0,0xb7
0040be4c  lw t9,-0x7b54(gp)
0040be50  nop
0040be54  jalr t9
0040be58  _addiu a1,sp,0x58
0040be5c  lbu v0,0x38(sp)
0040be60  lw gp,0x10(sp)
0040be64  bne v0,zero,0x0040be7c
0040be68  _nop
0040be6c  lbu v0,0x58(sp)
0040be70  nop
0040be74  beq v0,zero,0x0040bf54
0040be78  _nop
0040be7c  lw v0,0xb0(s0)
0040be80  nop
0040be84  bne v0,zero,0x0040bf18
0040be88  _nop
0040be8c  lw a0,0xa8(s0)
0040be90  nop
0040be94  beq a0,zero,0x0040bf18
0040be98  _nop
0040be9c  lw t9,-0x7e0c(gp)
0040bea0  nop
0040bea4  jalr t9
0040bea8  _addiu a1,sp,0x38
0040beac  lw gp,0x10(sp)
0040beb0  bne v0,zero,0x0040bf10
0040beb4  _nop
0040beb8  lw a0,0xac(s0)
0040bebc  nop
0040bec0  beq a0,zero,0x0040bed8
0040bec4  _nop
0040bec8  lb v0,0x0(a0)
0040becc  nop
0040bed0  bne v0,zero,0x0040bee4
0040bed4  _nop
0040bed8  lb v0,0x58(sp)
0040bedc  b 0x0040bef8
0040bee0  _nop
0040bee4  lw t9,-0x7e0c(gp)
0040bee8  nop
0040beec  jalr t9
0040bef0  _addiu a1,sp,0x58
0040bef4  lw gp,0x10(sp)
0040bef8  bne v0,zero,0x0040bf08
0040befc  _li v1,0x1
0040bf00  li v0,0x1
0040bf04  sw v0,0xb0(s0)
0040bf08  lui v0,0x47
0040bf0c  sw v1,-0x2028(v0)
0040bf10  lw v0,0xb0(s0)
0040bf14  nop
0040bf18  bne v0,zero,0x0040bf54
0040bf1c  _nop
0040bf20  lw t9,-0x7b54(gp)
0040bf24  addiu s1,sp,0x18
0040bf28  move a1,s1
0040bf2c  jalr t9
0040bf30  _li a0,0xc5
0040bf34  lw gp,0x10(sp)
0040bf38  move a0,s0
0040bf3c  lw t9,-0x7d54(gp)
0040bf40  nop
0040bf44  jalr t9
0040bf48  _move a1,s1
0040bf4c  b 0x0040bfb8
0040bf50  _nop
0040bf54  lw t9,-0x7c54(gp)
0040bf58  nop
0040bf5c  jalr t9
0040bf60  _move a0,s0
0040bf64  lw gp,0x10(sp)
0040bf68  bne v0,zero,0x0040bf7c
0040bf6c  _li v0,0x4
0040bf70  li v0,0x2
0040bf74  b 0x0040bfb8
0040bf78  _sw v0,0x4(s0)
0040bf7c  lw v1,0xc(s0)
0040bf80  nop
0040bf84  bne v1,v0,0x0040c064
0040bf88  _lui a1,0x45
0040bf8c  lw t9,-0x7c1c(gp)
0040bf90  li a0,0x1
0040bf94  jalr t9
0040bf98  _li a1,0x2000
0040bf9c  lw gp,0x10(sp)
0040bfa0  bne v0,zero,0x0040bfc0
0040bfa4  _sw v0,0x74(s0)
0040bfa8  lw t9,-0x7f18(gp)
0040bfac  nop
0040bfb0  jalr t9
0040bfb4  _move a0,s0
0040bfb8  b 0x0040c0ec
0040bfbc  _clear v1
0040bfc0  lw s1,0x3c(s0)
0040bfc4  lw t9,-0x7cf0(gp)
0040bfc8  lui a1,0x45
0040bfcc  sw zero,0x7c(s0)
0040bfd0  sw zero,0x78(s0)
0040bfd4  addiu a1,a1,-0x523c
0040bfd8  jalr t9
0040bfdc  _move a0,s1
0040bfe0  lw gp,0x10(sp)
0040bfe4  bne v0,zero,0x0040c008
0040bfe8  _lui a1,0x45
0040bfec  lw t9,-0x7cf0(gp)
0040bff0  move a0,s1
0040bff4  jalr t9
0040bff8  _addiu a1,a1,-0x5428
0040bffc  lw gp,0x10(sp)
0040c000  beq v0,zero,0x0040c0ec
0040c004  _li v1,0x1
0040c008  lw t9,-0x7e5c(gp)
0040c00c  nop
0040c010  jalr t9
0040c014  _nop
0040c018  lw gp,0x10(sp)
0040c01c  beq v0,zero,0x0040c03c
0040c020  _nop
0040c024  lw t9,-0x7d78(gp)
0040c028  nop
0040c02c  jalr t9
0040c030  _move a0,v0
0040c034  lw gp,0x10(sp)
0040c038  nop
0040c03c  lw t9,-0x7b1c(gp)
0040c040  lui a0,0x3
0040c044  jalr t9
0040c048  _ori a0,a0,0xd40
0040c04c  sw v0,0x98(s0)
0040c050  beq v0,zero,0x0040c0ec
0040c054  _clear v1
0040c058  sw zero,0x9c(s0)
0040c05c  b 0x0040c0ec
0040c060  _li v1,0x1
0040c064  lw t9,-0x7cf0(gp)
0040c068  addiu a1,a1,-0x5e8c
0040c06c  jalr t9
0040c070  _move a0,s1
0040c074  lw gp,0x10(sp)
0040c078  bne v0,zero,0x0040c0a0
0040c07c  _li v0,0x3
0040c080  lw t9,-0x7cf0(gp)
0040c084  lui a1,0x45
0040c088  move a0,s1
0040c08c  jalr t9
0040c090  _addiu a1,a1,-0x5e2c
0040c094  lw gp,0x10(sp)
0040c098  beq v0,zero,0x0040c0a4
0040c09c  _li v0,0x3
0040c0a0  sw v0,0x14(s0)
0040c0a4  lw v0,0x14(s0)
0040c0a8  nop
0040c0ac  beq v0,zero,0x0040c0d4
0040c0b0  _li v1,0x3
0040c0b4  bne v0,v1,0x0040c0c8
0040c0b8  _nop
0040c0bc  lw t9,-0x7cec(gp)
0040c0c0  b 0x0040c0e0
0040c0c4  _nop
0040c0c8  lw t9,-0x7d00(gp)
0040c0cc  b 0x0040c0e0
0040c0d0  _nop
0040c0d4  lw t9,-0x7e38(gp)
0040c0d8  li v0,0x6
0040c0dc  sw v0,0x0(s0)
0040c0e0  jalr t9
0040c0e4  _move a0,s0
0040c0e8  move v1,v0
0040c0ec  lw ra,0x84(sp)
0040c0f0  lw s1,0x80(sp)
0040c0f4  lw s0,0x7c(sp)
0040c0f8  move v0,v1
0040c0fc  jr ra
0040c100  _addiu sp,sp,0x88
