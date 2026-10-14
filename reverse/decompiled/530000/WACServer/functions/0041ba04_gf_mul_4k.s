# gf_mul_4k @ 0041ba04
0041ba04  addiu sp,sp,-0x30
0041ba08  sw ra,0x2c(sp)
0041ba0c  sw s3,0x28(sp)
0041ba10  sw s2,0x24(sp)
0041ba14  sw s1,0x20(sp)
0041ba18  sw s0,0x1c(sp)
0041ba1c  move s1,a0
0041ba20  sw zero,0x0(a2)
0041ba24  move a0,a2
0041ba28  sw zero,0x4(a2)
0041ba2c  sw zero,0x8(a2)
0041ba30  sw zero,0xc(a2)
0041ba34  move s0,a2
0041ba38  jal 0x0041b990
0041ba3c  _move s3,a1
0041ba40  lbu v0,0xf(s1)
0041ba44  lw a0,0x0(s0)
0041ba48  lw a2,0x4(s0)
0041ba4c  sll v0,v0,0x4
0041ba50  addu v0,s3,v0
0041ba54  lw v1,0x0(v0)
0041ba58  lw a1,0x8(s0)
0041ba5c  addiu s2,s0,0x8
0041ba60  xor v1,a0,v1
0041ba64  sw v1,0x0(s0)
0041ba68  lw v1,0x4(v0)
0041ba6c  move a0,s0
0041ba70  xor v1,a2,v1
0041ba74  sw v1,0x4(s0)
0041ba78  lw v1,0x8(v0)
0041ba7c  nop
0041ba80  xor v1,a1,v1
0041ba84  sw v1,0x8(s0)
0041ba88  lw v1,0x4(s2)
0041ba8c  lw v0,0xc(v0)
0041ba90  nop
0041ba94  xor v0,v1,v0
0041ba98  jal 0x0041b990
0041ba9c  _sw v0,0x4(s2)
0041baa0  lbu v0,0xe(s1)
0041baa4  lw a3,0x0(s0)
0041baa8  lw a2,0x4(s0)
0041baac  sll v0,v0,0x4
0041bab0  addu v0,s3,v0
0041bab4  lw v1,0x0(v0)
0041bab8  lw a1,0x8(s0)
0041babc  move a0,s0
0041bac0  xor v1,a3,v1
0041bac4  sw v1,0x0(s0)
0041bac8  lw v1,0x4(v0)
0041bacc  nop
0041bad0  xor v1,a2,v1
0041bad4  sw v1,0x4(s0)
0041bad8  lw v1,0x8(v0)
0041badc  nop
0041bae0  xor v1,a1,v1
0041bae4  sw v1,0x8(s0)
0041bae8  lw v1,0x4(s2)
0041baec  lw v0,0xc(v0)
0041baf0  nop
0041baf4  xor v0,v1,v0
0041baf8  jal 0x0041b990
0041bafc  _sw v0,0x4(s2)
0041bb00  lbu v0,0xd(s1)
0041bb04  lw a3,0x0(s0)
0041bb08  lw a2,0x4(s0)
0041bb0c  sll v0,v0,0x4
0041bb10  addu v0,s3,v0
0041bb14  lw v1,0x0(v0)
0041bb18  lw a1,0x8(s0)
0041bb1c  move a0,s0
0041bb20  xor v1,a3,v1
0041bb24  sw v1,0x0(s0)
0041bb28  lw v1,0x4(v0)
0041bb2c  nop
0041bb30  xor v1,a2,v1
0041bb34  sw v1,0x4(s0)
0041bb38  lw v1,0x8(v0)
0041bb3c  nop
0041bb40  xor v1,a1,v1
0041bb44  sw v1,0x8(s0)
0041bb48  lw v1,0x4(s2)
0041bb4c  lw v0,0xc(v0)
0041bb50  nop
0041bb54  xor v0,v1,v0
0041bb58  jal 0x0041b990
0041bb5c  _sw v0,0x4(s2)
0041bb60  lbu v0,0xc(s1)
0041bb64  lw a3,0x0(s0)
0041bb68  lw a2,0x4(s0)
0041bb6c  sll v0,v0,0x4
0041bb70  addu v0,s3,v0
0041bb74  lw v1,0x0(v0)
0041bb78  lw a1,0x8(s0)
0041bb7c  move a0,s0
0041bb80  xor v1,a3,v1
0041bb84  sw v1,0x0(s0)
0041bb88  lw v1,0x4(v0)
0041bb8c  nop
0041bb90  xor v1,a2,v1
0041bb94  sw v1,0x4(s0)
0041bb98  lw v1,0x8(v0)
0041bb9c  nop
0041bba0  xor v1,a1,v1
0041bba4  sw v1,0x8(s0)
0041bba8  lw v1,0x4(s2)
0041bbac  lw v0,0xc(v0)
0041bbb0  nop
0041bbb4  xor v0,v1,v0
0041bbb8  jal 0x0041b990
0041bbbc  _sw v0,0x4(s2)
0041bbc0  lbu v0,0xb(s1)
0041bbc4  lw a3,0x0(s0)
0041bbc8  lw a2,0x4(s0)
0041bbcc  sll v0,v0,0x4
0041bbd0  addu v0,s3,v0
0041bbd4  lw v1,0x0(v0)
0041bbd8  lw a1,0x8(s0)
0041bbdc  move a0,s0
0041bbe0  xor v1,a3,v1
0041bbe4  sw v1,0x0(s0)
0041bbe8  lw v1,0x4(v0)
0041bbec  nop
0041bbf0  xor v1,a2,v1
0041bbf4  sw v1,0x4(s0)
0041bbf8  lw v1,0x8(v0)
0041bbfc  nop
0041bc00  xor v1,a1,v1
0041bc04  sw v1,0x8(s0)
0041bc08  lw v1,0x4(s2)
0041bc0c  lw v0,0xc(v0)
0041bc10  nop
0041bc14  xor v0,v1,v0
0041bc18  jal 0x0041b990
0041bc1c  _sw v0,0x4(s2)
0041bc20  lbu v0,0xa(s1)
0041bc24  lw a3,0x0(s0)
0041bc28  lw a2,0x4(s0)
0041bc2c  sll v0,v0,0x4
0041bc30  addu v0,s3,v0
0041bc34  lw v1,0x0(v0)
0041bc38  lw a1,0x8(s0)
0041bc3c  move a0,s0
0041bc40  xor v1,a3,v1
0041bc44  sw v1,0x0(s0)
0041bc48  lw v1,0x4(v0)
0041bc4c  nop
0041bc50  xor v1,a2,v1
0041bc54  sw v1,0x4(s0)
0041bc58  lw v1,0x8(v0)
0041bc5c  nop
0041bc60  xor v1,a1,v1
0041bc64  sw v1,0x8(s0)
0041bc68  lw v1,0x4(s2)
0041bc6c  lw v0,0xc(v0)
0041bc70  nop
0041bc74  xor v0,v1,v0
0041bc78  jal 0x0041b990
0041bc7c  _sw v0,0x4(s2)
0041bc80  lbu v0,0x9(s1)
0041bc84  lw a3,0x0(s0)
0041bc88  lw a2,0x4(s0)
0041bc8c  sll v0,v0,0x4
0041bc90  addu v0,s3,v0
0041bc94  lw v1,0x0(v0)
0041bc98  lw a1,0x8(s0)
0041bc9c  move a0,s0
0041bca0  xor v1,a3,v1
0041bca4  sw v1,0x0(s0)
0041bca8  lw v1,0x4(v0)
0041bcac  nop
0041bcb0  xor v1,a2,v1
0041bcb4  sw v1,0x4(s0)
0041bcb8  lw v1,0x8(v0)
0041bcbc  nop
0041bcc0  xor v1,a1,v1
0041bcc4  sw v1,0x8(s0)
0041bcc8  lw v1,0x4(s2)
0041bccc  lw v0,0xc(v0)
0041bcd0  nop
0041bcd4  xor v0,v1,v0
0041bcd8  jal 0x0041b990
0041bcdc  _sw v0,0x4(s2)
0041bce0  lbu v0,0x8(s1)
0041bce4  lw a3,0x0(s0)
0041bce8  lw a2,0x4(s0)
0041bcec  sll v0,v0,0x4
0041bcf0  addu v0,s3,v0
0041bcf4  lw v1,0x0(v0)
0041bcf8  lw a1,0x8(s0)
0041bcfc  move a0,s0
0041bd00  xor v1,a3,v1
0041bd04  sw v1,0x0(s0)
0041bd08  lw v1,0x4(v0)
0041bd0c  nop
0041bd10  xor v1,a2,v1
0041bd14  sw v1,0x4(s0)
0041bd18  lw v1,0x8(v0)
0041bd1c  nop
0041bd20  xor v1,a1,v1
0041bd24  sw v1,0x8(s0)
0041bd28  lw v1,0x4(s2)
0041bd2c  lw v0,0xc(v0)
0041bd30  nop
0041bd34  xor v0,v1,v0
0041bd38  jal 0x0041b990
0041bd3c  _sw v0,0x4(s2)
0041bd40  lbu v0,0x7(s1)
0041bd44  lw a3,0x0(s0)
0041bd48  lw a2,0x4(s0)
0041bd4c  sll v0,v0,0x4
0041bd50  addu v0,s3,v0
0041bd54  lw v1,0x0(v0)
0041bd58  lw a1,0x8(s0)
0041bd5c  move a0,s0
0041bd60  xor v1,a3,v1
0041bd64  sw v1,0x0(s0)
0041bd68  lw v1,0x4(v0)
0041bd6c  nop
0041bd70  xor v1,a2,v1
0041bd74  sw v1,0x4(s0)
0041bd78  lw v1,0x8(v0)
0041bd7c  nop
0041bd80  xor v1,a1,v1
0041bd84  sw v1,0x8(s0)
0041bd88  lw v1,0x4(s2)
0041bd8c  lw v0,0xc(v0)
0041bd90  nop
0041bd94  xor v0,v1,v0
0041bd98  jal 0x0041b990
0041bd9c  _sw v0,0x4(s2)
0041bda0  lbu v0,0x6(s1)
0041bda4  lw a3,0x0(s0)
0041bda8  lw a2,0x4(s0)
0041bdac  sll v0,v0,0x4
0041bdb0  addu v0,s3,v0
0041bdb4  lw v1,0x0(v0)
0041bdb8  lw a1,0x8(s0)
0041bdbc  move a0,s0
0041bdc0  xor v1,a3,v1
0041bdc4  sw v1,0x0(s0)
0041bdc8  lw v1,0x4(v0)
0041bdcc  nop
0041bdd0  xor v1,a2,v1
0041bdd4  sw v1,0x4(s0)
0041bdd8  lw v1,0x8(v0)
0041bddc  nop
0041bde0  xor v1,a1,v1
0041bde4  sw v1,0x8(s0)
0041bde8  lw v1,0x4(s2)
0041bdec  lw v0,0xc(v0)
0041bdf0  nop
0041bdf4  xor v0,v1,v0
0041bdf8  jal 0x0041b990
0041bdfc  _sw v0,0x4(s2)
0041be00  lbu v0,0x5(s1)
0041be04  lw a3,0x0(s0)
0041be08  lw a2,0x4(s0)
0041be0c  sll v0,v0,0x4
0041be10  addu v0,s3,v0
0041be14  lw v1,0x0(v0)
0041be18  lw a1,0x8(s0)
0041be1c  move a0,s0
0041be20  xor v1,a3,v1
0041be24  sw v1,0x0(s0)
0041be28  lw v1,0x4(v0)
0041be2c  nop
0041be30  xor v1,a2,v1
0041be34  sw v1,0x4(s0)
0041be38  lw v1,0x8(v0)
0041be3c  nop
0041be40  xor v1,a1,v1
0041be44  sw v1,0x8(s0)
0041be48  lw v1,0x4(s2)
0041be4c  lw v0,0xc(v0)
0041be50  nop
0041be54  xor v0,v1,v0
0041be58  jal 0x0041b990
0041be5c  _sw v0,0x4(s2)
0041be60  lbu v0,0x4(s1)
0041be64  lw a3,0x0(s0)
0041be68  lw a2,0x4(s0)
0041be6c  sll v0,v0,0x4
0041be70  addu v0,s3,v0
0041be74  lw v1,0x0(v0)
0041be78  lw a1,0x8(s0)
0041be7c  move a0,s0
0041be80  xor v1,a3,v1
0041be84  sw v1,0x0(s0)
0041be88  lw v1,0x4(v0)
0041be8c  nop
0041be90  xor v1,a2,v1
0041be94  sw v1,0x4(s0)
0041be98  lw v1,0x8(v0)
0041be9c  nop
0041bea0  xor v1,a1,v1
0041bea4  sw v1,0x8(s0)
0041bea8  lw v1,0x4(s2)
0041beac  lw v0,0xc(v0)
0041beb0  nop
0041beb4  xor v0,v1,v0
0041beb8  jal 0x0041b990
0041bebc  _sw v0,0x4(s2)
0041bec0  lbu v0,0x3(s1)
0041bec4  lw a3,0x0(s0)
0041bec8  lw a2,0x4(s0)
0041becc  sll v0,v0,0x4
0041bed0  addu v0,s3,v0
0041bed4  lw v1,0x0(v0)
0041bed8  lw a1,0x8(s0)
0041bedc  move a0,s0
0041bee0  xor v1,a3,v1
0041bee4  sw v1,0x0(s0)
0041bee8  lw v1,0x4(v0)
0041beec  nop
0041bef0  xor v1,a2,v1
0041bef4  sw v1,0x4(s0)
0041bef8  lw v1,0x8(v0)
0041befc  nop
0041bf00  xor v1,a1,v1
0041bf04  sw v1,0x8(s0)
0041bf08  lw v1,0x4(s2)
0041bf0c  lw v0,0xc(v0)
0041bf10  nop
0041bf14  xor v0,v1,v0
0041bf18  jal 0x0041b990
0041bf1c  _sw v0,0x4(s2)
0041bf20  lbu v0,0x2(s1)
0041bf24  lw a3,0x0(s0)
0041bf28  lw a2,0x4(s0)
0041bf2c  sll v0,v0,0x4
0041bf30  addu v0,s3,v0
0041bf34  lw v1,0x0(v0)
0041bf38  lw a1,0x8(s0)
0041bf3c  move a0,s0
0041bf40  xor v1,a3,v1
0041bf44  sw v1,0x0(s0)
0041bf48  lw v1,0x4(v0)
0041bf4c  nop
0041bf50  xor v1,a2,v1
0041bf54  sw v1,0x4(s0)
0041bf58  lw v1,0x8(v0)
0041bf5c  nop
0041bf60  xor v1,a1,v1
0041bf64  sw v1,0x8(s0)
0041bf68  lw v1,0x4(s2)
0041bf6c  lw v0,0xc(v0)
0041bf70  nop
0041bf74  xor v0,v1,v0
0041bf78  jal 0x0041b990
0041bf7c  _sw v0,0x4(s2)
0041bf80  lbu v0,0x1(s1)
0041bf84  lw a3,0x0(s0)
0041bf88  lw a2,0x4(s0)
0041bf8c  sll v0,v0,0x4
0041bf90  addu v0,s3,v0
0041bf94  lw v1,0x0(v0)
0041bf98  lw a1,0x8(s0)
0041bf9c  move a0,s0
0041bfa0  xor v1,a3,v1
0041bfa4  sw v1,0x0(s0)
0041bfa8  lw v1,0x4(v0)
0041bfac  nop
0041bfb0  xor v1,a2,v1
0041bfb4  sw v1,0x4(s0)
0041bfb8  lw v1,0x8(v0)
0041bfbc  nop
0041bfc0  xor v1,a1,v1
0041bfc4  sw v1,0x8(s0)
0041bfc8  lw v1,0x4(s2)
0041bfcc  lw v0,0xc(v0)
0041bfd0  nop
0041bfd4  xor v0,v1,v0
0041bfd8  jal 0x0041b990
0041bfdc  _sw v0,0x4(s2)
0041bfe0  lbu v0,0x0(s1)
0041bfe4  lw a1,0x0(s0)
0041bfe8  lw a0,0x4(s0)
0041bfec  sll v0,v0,0x4
0041bff0  addu s3,s3,v0
0041bff4  lw v0,0x0(s3)
0041bff8  lw v1,0x8(s0)
0041bffc  xor v0,a1,v0
0041c000  sw v0,0x0(s0)
0041c004  lw v0,0x4(s3)
0041c008  nop
0041c00c  xor v0,a0,v0
0041c010  sw v0,0x4(s0)
0041c014  lw v0,0x8(s3)
0041c018  nop
0041c01c  xor v0,v1,v0
0041c020  sw v0,0x8(s0)
0041c024  lw v1,0x4(s2)
0041c028  lw v0,0xc(s3)
0041c02c  nop
0041c030  xor v0,v1,v0
0041c034  sw v0,0x4(s2)
0041c038  lw v1,0x4(s0)
0041c03c  lw v0,0x0(s0)
0041c040  sw v1,0x4(s1)
0041c044  sw v0,0x0(s1)
0041c048  lw v1,0xc(s0)
0041c04c  lw v0,0x8(s0)
0041c050  sw v1,0xc(s1)
0041c054  sw v0,0x8(s1)
0041c058  lw ra,0x2c(sp)
0041c05c  lw s3,0x28(sp)
0041c060  lw s2,0x24(sp)
0041c064  lw s1,0x20(sp)
0041c068  lw s0,0x1c(sp)
0041c06c  jr ra
0041c070  _addiu sp,sp,0x30
