# gf_mul_4k @ 0041b874
0041b874  addiu sp,sp,-0x30
0041b878  sw ra,0x2c(sp)
0041b87c  sw s3,0x28(sp)
0041b880  sw s2,0x24(sp)
0041b884  sw s1,0x20(sp)
0041b888  sw s0,0x1c(sp)
0041b88c  move s1,a0
0041b890  sw zero,0x0(a2)
0041b894  move a0,a2
0041b898  sw zero,0x4(a2)
0041b89c  sw zero,0x8(a2)
0041b8a0  sw zero,0xc(a2)
0041b8a4  move s0,a2
0041b8a8  jal 0x0041b800
0041b8ac  _move s3,a1
0041b8b0  lbu v0,0xf(s1)
0041b8b4  lw a0,0x0(s0)
0041b8b8  lw a2,0x4(s0)
0041b8bc  sll v0,v0,0x4
0041b8c0  addu v0,s3,v0
0041b8c4  lw v1,0x0(v0)
0041b8c8  lw a1,0x8(s0)
0041b8cc  addiu s2,s0,0x8
0041b8d0  xor v1,a0,v1
0041b8d4  sw v1,0x0(s0)
0041b8d8  lw v1,0x4(v0)
0041b8dc  move a0,s0
0041b8e0  xor v1,a2,v1
0041b8e4  sw v1,0x4(s0)
0041b8e8  lw v1,0x8(v0)
0041b8ec  nop
0041b8f0  xor v1,a1,v1
0041b8f4  sw v1,0x8(s0)
0041b8f8  lw v1,0x4(s2)
0041b8fc  lw v0,0xc(v0)
0041b900  nop
0041b904  xor v0,v1,v0
0041b908  jal 0x0041b800
0041b90c  _sw v0,0x4(s2)
0041b910  lbu v0,0xe(s1)
0041b914  lw a3,0x0(s0)
0041b918  lw a2,0x4(s0)
0041b91c  sll v0,v0,0x4
0041b920  addu v0,s3,v0
0041b924  lw v1,0x0(v0)
0041b928  lw a1,0x8(s0)
0041b92c  move a0,s0
0041b930  xor v1,a3,v1
0041b934  sw v1,0x0(s0)
0041b938  lw v1,0x4(v0)
0041b93c  nop
0041b940  xor v1,a2,v1
0041b944  sw v1,0x4(s0)
0041b948  lw v1,0x8(v0)
0041b94c  nop
0041b950  xor v1,a1,v1
0041b954  sw v1,0x8(s0)
0041b958  lw v1,0x4(s2)
0041b95c  lw v0,0xc(v0)
0041b960  nop
0041b964  xor v0,v1,v0
0041b968  jal 0x0041b800
0041b96c  _sw v0,0x4(s2)
0041b970  lbu v0,0xd(s1)
0041b974  lw a3,0x0(s0)
0041b978  lw a2,0x4(s0)
0041b97c  sll v0,v0,0x4
0041b980  addu v0,s3,v0
0041b984  lw v1,0x0(v0)
0041b988  lw a1,0x8(s0)
0041b98c  move a0,s0
0041b990  xor v1,a3,v1
0041b994  sw v1,0x0(s0)
0041b998  lw v1,0x4(v0)
0041b99c  nop
0041b9a0  xor v1,a2,v1
0041b9a4  sw v1,0x4(s0)
0041b9a8  lw v1,0x8(v0)
0041b9ac  nop
0041b9b0  xor v1,a1,v1
0041b9b4  sw v1,0x8(s0)
0041b9b8  lw v1,0x4(s2)
0041b9bc  lw v0,0xc(v0)
0041b9c0  nop
0041b9c4  xor v0,v1,v0
0041b9c8  jal 0x0041b800
0041b9cc  _sw v0,0x4(s2)
0041b9d0  lbu v0,0xc(s1)
0041b9d4  lw a3,0x0(s0)
0041b9d8  lw a2,0x4(s0)
0041b9dc  sll v0,v0,0x4
0041b9e0  addu v0,s3,v0
0041b9e4  lw v1,0x0(v0)
0041b9e8  lw a1,0x8(s0)
0041b9ec  move a0,s0
0041b9f0  xor v1,a3,v1
0041b9f4  sw v1,0x0(s0)
0041b9f8  lw v1,0x4(v0)
0041b9fc  nop
0041ba00  xor v1,a2,v1
0041ba04  sw v1,0x4(s0)
0041ba08  lw v1,0x8(v0)
0041ba0c  nop
0041ba10  xor v1,a1,v1
0041ba14  sw v1,0x8(s0)
0041ba18  lw v1,0x4(s2)
0041ba1c  lw v0,0xc(v0)
0041ba20  nop
0041ba24  xor v0,v1,v0
0041ba28  jal 0x0041b800
0041ba2c  _sw v0,0x4(s2)
0041ba30  lbu v0,0xb(s1)
0041ba34  lw a3,0x0(s0)
0041ba38  lw a2,0x4(s0)
0041ba3c  sll v0,v0,0x4
0041ba40  addu v0,s3,v0
0041ba44  lw v1,0x0(v0)
0041ba48  lw a1,0x8(s0)
0041ba4c  move a0,s0
0041ba50  xor v1,a3,v1
0041ba54  sw v1,0x0(s0)
0041ba58  lw v1,0x4(v0)
0041ba5c  nop
0041ba60  xor v1,a2,v1
0041ba64  sw v1,0x4(s0)
0041ba68  lw v1,0x8(v0)
0041ba6c  nop
0041ba70  xor v1,a1,v1
0041ba74  sw v1,0x8(s0)
0041ba78  lw v1,0x4(s2)
0041ba7c  lw v0,0xc(v0)
0041ba80  nop
0041ba84  xor v0,v1,v0
0041ba88  jal 0x0041b800
0041ba8c  _sw v0,0x4(s2)
0041ba90  lbu v0,0xa(s1)
0041ba94  lw a3,0x0(s0)
0041ba98  lw a2,0x4(s0)
0041ba9c  sll v0,v0,0x4
0041baa0  addu v0,s3,v0
0041baa4  lw v1,0x0(v0)
0041baa8  lw a1,0x8(s0)
0041baac  move a0,s0
0041bab0  xor v1,a3,v1
0041bab4  sw v1,0x0(s0)
0041bab8  lw v1,0x4(v0)
0041babc  nop
0041bac0  xor v1,a2,v1
0041bac4  sw v1,0x4(s0)
0041bac8  lw v1,0x8(v0)
0041bacc  nop
0041bad0  xor v1,a1,v1
0041bad4  sw v1,0x8(s0)
0041bad8  lw v1,0x4(s2)
0041badc  lw v0,0xc(v0)
0041bae0  nop
0041bae4  xor v0,v1,v0
0041bae8  jal 0x0041b800
0041baec  _sw v0,0x4(s2)
0041baf0  lbu v0,0x9(s1)
0041baf4  lw a3,0x0(s0)
0041baf8  lw a2,0x4(s0)
0041bafc  sll v0,v0,0x4
0041bb00  addu v0,s3,v0
0041bb04  lw v1,0x0(v0)
0041bb08  lw a1,0x8(s0)
0041bb0c  move a0,s0
0041bb10  xor v1,a3,v1
0041bb14  sw v1,0x0(s0)
0041bb18  lw v1,0x4(v0)
0041bb1c  nop
0041bb20  xor v1,a2,v1
0041bb24  sw v1,0x4(s0)
0041bb28  lw v1,0x8(v0)
0041bb2c  nop
0041bb30  xor v1,a1,v1
0041bb34  sw v1,0x8(s0)
0041bb38  lw v1,0x4(s2)
0041bb3c  lw v0,0xc(v0)
0041bb40  nop
0041bb44  xor v0,v1,v0
0041bb48  jal 0x0041b800
0041bb4c  _sw v0,0x4(s2)
0041bb50  lbu v0,0x8(s1)
0041bb54  lw a3,0x0(s0)
0041bb58  lw a2,0x4(s0)
0041bb5c  sll v0,v0,0x4
0041bb60  addu v0,s3,v0
0041bb64  lw v1,0x0(v0)
0041bb68  lw a1,0x8(s0)
0041bb6c  move a0,s0
0041bb70  xor v1,a3,v1
0041bb74  sw v1,0x0(s0)
0041bb78  lw v1,0x4(v0)
0041bb7c  nop
0041bb80  xor v1,a2,v1
0041bb84  sw v1,0x4(s0)
0041bb88  lw v1,0x8(v0)
0041bb8c  nop
0041bb90  xor v1,a1,v1
0041bb94  sw v1,0x8(s0)
0041bb98  lw v1,0x4(s2)
0041bb9c  lw v0,0xc(v0)
0041bba0  nop
0041bba4  xor v0,v1,v0
0041bba8  jal 0x0041b800
0041bbac  _sw v0,0x4(s2)
0041bbb0  lbu v0,0x7(s1)
0041bbb4  lw a3,0x0(s0)
0041bbb8  lw a2,0x4(s0)
0041bbbc  sll v0,v0,0x4
0041bbc0  addu v0,s3,v0
0041bbc4  lw v1,0x0(v0)
0041bbc8  lw a1,0x8(s0)
0041bbcc  move a0,s0
0041bbd0  xor v1,a3,v1
0041bbd4  sw v1,0x0(s0)
0041bbd8  lw v1,0x4(v0)
0041bbdc  nop
0041bbe0  xor v1,a2,v1
0041bbe4  sw v1,0x4(s0)
0041bbe8  lw v1,0x8(v0)
0041bbec  nop
0041bbf0  xor v1,a1,v1
0041bbf4  sw v1,0x8(s0)
0041bbf8  lw v1,0x4(s2)
0041bbfc  lw v0,0xc(v0)
0041bc00  nop
0041bc04  xor v0,v1,v0
0041bc08  jal 0x0041b800
0041bc0c  _sw v0,0x4(s2)
0041bc10  lbu v0,0x6(s1)
0041bc14  lw a3,0x0(s0)
0041bc18  lw a2,0x4(s0)
0041bc1c  sll v0,v0,0x4
0041bc20  addu v0,s3,v0
0041bc24  lw v1,0x0(v0)
0041bc28  lw a1,0x8(s0)
0041bc2c  move a0,s0
0041bc30  xor v1,a3,v1
0041bc34  sw v1,0x0(s0)
0041bc38  lw v1,0x4(v0)
0041bc3c  nop
0041bc40  xor v1,a2,v1
0041bc44  sw v1,0x4(s0)
0041bc48  lw v1,0x8(v0)
0041bc4c  nop
0041bc50  xor v1,a1,v1
0041bc54  sw v1,0x8(s0)
0041bc58  lw v1,0x4(s2)
0041bc5c  lw v0,0xc(v0)
0041bc60  nop
0041bc64  xor v0,v1,v0
0041bc68  jal 0x0041b800
0041bc6c  _sw v0,0x4(s2)
0041bc70  lbu v0,0x5(s1)
0041bc74  lw a3,0x0(s0)
0041bc78  lw a2,0x4(s0)
0041bc7c  sll v0,v0,0x4
0041bc80  addu v0,s3,v0
0041bc84  lw v1,0x0(v0)
0041bc88  lw a1,0x8(s0)
0041bc8c  move a0,s0
0041bc90  xor v1,a3,v1
0041bc94  sw v1,0x0(s0)
0041bc98  lw v1,0x4(v0)
0041bc9c  nop
0041bca0  xor v1,a2,v1
0041bca4  sw v1,0x4(s0)
0041bca8  lw v1,0x8(v0)
0041bcac  nop
0041bcb0  xor v1,a1,v1
0041bcb4  sw v1,0x8(s0)
0041bcb8  lw v1,0x4(s2)
0041bcbc  lw v0,0xc(v0)
0041bcc0  nop
0041bcc4  xor v0,v1,v0
0041bcc8  jal 0x0041b800
0041bccc  _sw v0,0x4(s2)
0041bcd0  lbu v0,0x4(s1)
0041bcd4  lw a3,0x0(s0)
0041bcd8  lw a2,0x4(s0)
0041bcdc  sll v0,v0,0x4
0041bce0  addu v0,s3,v0
0041bce4  lw v1,0x0(v0)
0041bce8  lw a1,0x8(s0)
0041bcec  move a0,s0
0041bcf0  xor v1,a3,v1
0041bcf4  sw v1,0x0(s0)
0041bcf8  lw v1,0x4(v0)
0041bcfc  nop
0041bd00  xor v1,a2,v1
0041bd04  sw v1,0x4(s0)
0041bd08  lw v1,0x8(v0)
0041bd0c  nop
0041bd10  xor v1,a1,v1
0041bd14  sw v1,0x8(s0)
0041bd18  lw v1,0x4(s2)
0041bd1c  lw v0,0xc(v0)
0041bd20  nop
0041bd24  xor v0,v1,v0
0041bd28  jal 0x0041b800
0041bd2c  _sw v0,0x4(s2)
0041bd30  lbu v0,0x3(s1)
0041bd34  lw a3,0x0(s0)
0041bd38  lw a2,0x4(s0)
0041bd3c  sll v0,v0,0x4
0041bd40  addu v0,s3,v0
0041bd44  lw v1,0x0(v0)
0041bd48  lw a1,0x8(s0)
0041bd4c  move a0,s0
0041bd50  xor v1,a3,v1
0041bd54  sw v1,0x0(s0)
0041bd58  lw v1,0x4(v0)
0041bd5c  nop
0041bd60  xor v1,a2,v1
0041bd64  sw v1,0x4(s0)
0041bd68  lw v1,0x8(v0)
0041bd6c  nop
0041bd70  xor v1,a1,v1
0041bd74  sw v1,0x8(s0)
0041bd78  lw v1,0x4(s2)
0041bd7c  lw v0,0xc(v0)
0041bd80  nop
0041bd84  xor v0,v1,v0
0041bd88  jal 0x0041b800
0041bd8c  _sw v0,0x4(s2)
0041bd90  lbu v0,0x2(s1)
0041bd94  lw a3,0x0(s0)
0041bd98  lw a2,0x4(s0)
0041bd9c  sll v0,v0,0x4
0041bda0  addu v0,s3,v0
0041bda4  lw v1,0x0(v0)
0041bda8  lw a1,0x8(s0)
0041bdac  move a0,s0
0041bdb0  xor v1,a3,v1
0041bdb4  sw v1,0x0(s0)
0041bdb8  lw v1,0x4(v0)
0041bdbc  nop
0041bdc0  xor v1,a2,v1
0041bdc4  sw v1,0x4(s0)
0041bdc8  lw v1,0x8(v0)
0041bdcc  nop
0041bdd0  xor v1,a1,v1
0041bdd4  sw v1,0x8(s0)
0041bdd8  lw v1,0x4(s2)
0041bddc  lw v0,0xc(v0)
0041bde0  nop
0041bde4  xor v0,v1,v0
0041bde8  jal 0x0041b800
0041bdec  _sw v0,0x4(s2)
0041bdf0  lbu v0,0x1(s1)
0041bdf4  lw a3,0x0(s0)
0041bdf8  lw a2,0x4(s0)
0041bdfc  sll v0,v0,0x4
0041be00  addu v0,s3,v0
0041be04  lw v1,0x0(v0)
0041be08  lw a1,0x8(s0)
0041be0c  move a0,s0
0041be10  xor v1,a3,v1
0041be14  sw v1,0x0(s0)
0041be18  lw v1,0x4(v0)
0041be1c  nop
0041be20  xor v1,a2,v1
0041be24  sw v1,0x4(s0)
0041be28  lw v1,0x8(v0)
0041be2c  nop
0041be30  xor v1,a1,v1
0041be34  sw v1,0x8(s0)
0041be38  lw v1,0x4(s2)
0041be3c  lw v0,0xc(v0)
0041be40  nop
0041be44  xor v0,v1,v0
0041be48  jal 0x0041b800
0041be4c  _sw v0,0x4(s2)
0041be50  lbu v0,0x0(s1)
0041be54  lw a1,0x0(s0)
0041be58  lw a0,0x4(s0)
0041be5c  sll v0,v0,0x4
0041be60  addu s3,s3,v0
0041be64  lw v0,0x0(s3)
0041be68  lw v1,0x8(s0)
0041be6c  xor v0,a1,v0
0041be70  sw v0,0x0(s0)
0041be74  lw v0,0x4(s3)
0041be78  nop
0041be7c  xor v0,a0,v0
0041be80  sw v0,0x4(s0)
0041be84  lw v0,0x8(s3)
0041be88  nop
0041be8c  xor v0,v1,v0
0041be90  sw v0,0x8(s0)
0041be94  lw v1,0x4(s2)
0041be98  lw v0,0xc(s3)
0041be9c  nop
0041bea0  xor v0,v1,v0
0041bea4  sw v0,0x4(s2)
0041bea8  lw v1,0x4(s0)
0041beac  lw v0,0x0(s0)
0041beb0  sw v1,0x4(s1)
0041beb4  sw v0,0x0(s1)
0041beb8  lw v1,0xc(s0)
0041bebc  lw v0,0x8(s0)
0041bec0  sw v1,0xc(s1)
0041bec4  sw v0,0x8(s1)
0041bec8  lw ra,0x2c(sp)
0041becc  lw s3,0x28(sp)
0041bed0  lw s2,0x24(sp)
0041bed4  lw s1,0x20(sp)
0041bed8  lw s0,0x1c(sp)
0041bedc  jr ra
0041bee0  _addiu sp,sp,0x30
