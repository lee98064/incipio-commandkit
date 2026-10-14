# read_header @ 0040ae64
0040ae64  addiu sp,sp,-0x50
0040ae68  sw ra,0x4c(sp)
0040ae6c  sw s8,0x48(sp)
0040ae70  sw s7,0x44(sp)
0040ae74  sw s6,0x40(sp)
0040ae78  sw s5,0x3c(sp)
0040ae7c  sw s4,0x38(sp)
0040ae80  sw s3,0x34(sp)
0040ae84  sw s2,0x30(sp)
0040ae88  sw s1,0x2c(sp)
0040ae8c  sw s0,0x28(sp)
0040ae90  lui gp,0x47
0040ae94  addiu gp,gp,0x2630
0040ae98  sw gp,0x18(sp)
0040ae9c  lw v0,-0x7a3c(gp)
0040aea0  lw s1,0x48(a0)
0040aea4  move s0,a0
0040aea8  lw v0,0x0(v0)
0040aeac  addu s1,a0,s1
0040aeb0  lw s2,0x8c8(a0)
0040aeb4  andi v0,v0,0x10
0040aeb8  beq v0,zero,0x0040af04
0040aebc  _addiu s1,s1,0x10d5
0040aec0  addu v0,a0,s2
0040aec4  addiu v0,v0,0x10d5
0040aec8  sltu v0,s1,v0
0040aecc  beq v0,zero,0x0040af04
0040aed0  _addu v0,a0,s2
0040aed4  sb zero,0x10d5(v0)
0040aed8  lw v0,-0x7e40(gp)
0040aedc  lw t9,-0x7c44(gp)
0040aee0  lui a1,0x45
0040aee4  lw a0,0x0(v0)
0040aee8  lui a2,0x45
0040aeec  sw s1,0x10(sp)
0040aef0  addiu a1,a1,-0x5778
0040aef4  addiu a2,a2,-0x57d0
0040aef8  jalr t9
0040aefc  _li a3,0x5f
0040af00  lw gp,0x18(sp)
0040af04  addu s2,s0,s2
0040af08  addiu s2,s2,0x10d5
0040af0c  sw s2,0x20(sp)
0040af10  li s4,0xd
0040af14  li s3,0xa
0040af18  li s2,0x9
0040af1c  li s7,0x1
0040af20  li s6,0x2
0040af24  li s5,0x4
0040af28  b 0x0040b28c
0040af2c  _li s8,0x3
0040af30  lbu a2,0x0(s1)
0040af34  nop
0040af38  beq a2,s4,0x0040af90
0040af3c  _nop
0040af40  beq a2,s3,0x0040af90
0040af44  _nop
0040af48  beq a2,s2,0x0040af90
0040af4c  _addiu v0,a2,-0x20
0040af50  andi v0,v0,0xff
0040af54  sltiu v0,v0,0x60
0040af58  bne v0,zero,0x0040af90
0040af5c  _nop
0040af60  lw v0,-0x7a3c(gp)
0040af64  nop
0040af68  lw v0,0x0(v0)
0040af6c  nop
0040af70  andi v0,v0,0x1
0040af74  beq v0,zero,0x0040b1d4
0040af78  _lui a1,0x45
0040af7c  lw v0,-0x7e40(gp)
0040af80  lw t9,-0x7c44(gp)
0040af84  lw a0,0x0(v0)
0040af88  b 0x0040b1c4
0040af8c  _addiu a1,a1,-0x5758
0040af90  lw v0,0x0(s0)
0040af94  nop
0040af98  beq v0,s7,0x0040afe4
0040af9c  _nop
0040afa0  beq v0,zero,0x0040afc0
0040afa4  _nop
0040afa8  beq v0,s6,0x0040aff4
0040afac  _nop
0040afb0  bne v0,s8,0x0040b030
0040afb4  _nop
0040afb8  b 0x0040b014
0040afbc  _nop
0040afc0  bne a2,s4,0x0040afd0
0040afc4  _nop
0040afc8  b 0x0040afdc
0040afcc  _sw s7,0x0(s0)
0040afd0  bne a2,s3,0x0040b030
0040afd4  _nop
0040afd8  sw s6,0x0(s0)
0040afdc  b 0x0040b030
0040afe0  _sw s1,0x44(s0)
0040afe4  bne a2,s3,0x0040b024
0040afe8  _nop
0040afec  b 0x0040b030
0040aff0  _sw s6,0x0(s0)
0040aff4  bne a2,s4,0x0040b004
0040aff8  _clear v0
0040affc  b 0x0040b030
0040b000  _sw s8,0x0(s0)
0040b004  xor a2,a2,s3
0040b008  movz v0,s5,a2
0040b00c  b 0x0040b030
0040b010  _sw v0,0x0(s0)
0040b014  bne a2,s3,0x0040b024
0040b018  _nop
0040b01c  b 0x0040b030
0040b020  _sw s5,0x0(s0)
0040b024  beq a2,s4,0x0040b030
0040b028  _nop
0040b02c  sw zero,0x0(s0)
0040b030  lw v1,0x48(s0)
0040b034  lw v0,0x0(s0)
0040b038  addiu s1,s1,0x1
0040b03c  addiu v1,v1,0x1
0040b040  bne v0,s6,0x0040b13c
0040b044  _sw v1,0x48(s0)
0040b048  lw v0,0x44(s0)
0040b04c  nop
0040b050  sb zero,0x0(v0)
0040b054  lw a3,0x40(s0)
0040b058  lw a2,0x44(s0)
0040b05c  nop
0040b060  subu a2,a2,a3
0040b064  slti v0,a2,0x800
0040b068  bne v0,zero,0x0040b0a0
0040b06c  _nop
0040b070  lw v0,-0x7a3c(gp)
0040b074  nop
0040b078  lw v0,0x0(v0)
0040b07c  nop
0040b080  andi v0,v0,0x1
0040b084  beq v0,zero,0x0040b1d4
0040b088  _lui a1,0x45
0040b08c  lw v0,-0x7e40(gp)
0040b090  lw t9,-0x7c44(gp)
0040b094  lw a0,0x0(v0)
0040b098  b 0x0040b224
0040b09c  _addiu a1,a1,-0x5734
0040b0a0  lw v0,0x3c(s0)
0040b0a4  nop
0040b0a8  beq v0,zero,0x0040b0d4
0040b0ac  _nop
0040b0b0  lw t9,-0x7d7c(gp)
0040b0b4  nop
0040b0b8  jalr t9
0040b0bc  _move a0,s0
0040b0c0  lw gp,0x18(sp)
0040b0c4  bne v0,zero,0x0040b134
0040b0c8  _nop
0040b0cc  b 0x0040b49c
0040b0d0  _clear s2
0040b0d4  lw t9,-0x7cd8(gp)
0040b0d8  nop
0040b0dc  jalr t9
0040b0e0  _move a0,s0
0040b0e4  lw gp,0x18(sp)
0040b0e8  beq v0,zero,0x0040b490
0040b0ec  _nop
0040b0f0  lw v0,0x8(s0)
0040b0f4  nop
0040b0f8  bne v0,s7,0x0040b134
0040b0fc  _move a0,s0
0040b100  lw t9,-0x7bf8(gp)
0040b104  lw ra,0x4c(sp)
0040b108  lw s8,0x48(sp)
0040b10c  lw s7,0x44(sp)
0040b110  lw s6,0x40(sp)
0040b114  lw s5,0x3c(sp)
0040b118  lw s4,0x38(sp)
0040b11c  lw s3,0x34(sp)
0040b120  lw s2,0x30(sp)
0040b124  lw s1,0x2c(sp)
0040b128  lw s0,0x28(sp)
0040b12c  jr t9
0040b130  _addiu sp,sp,0x50
0040b134  b 0x0040b28c
0040b138  _sw s1,0x40(s0)
0040b13c  bne v0,s5,0x0040b28c
0040b140  _nop
0040b144  lw t9,-0x7bf8(gp)
0040b148  nop
0040b14c  jalr t9
0040b150  _move a0,s0
0040b154  lw gp,0x18(sp)
0040b158  beq v0,zero,0x0040b49c
0040b15c  _move s2,v0
0040b160  lw v0,0xc(s0)
0040b164  nop
0040b168  bne v0,s5,0x0040b4a0
0040b16c  _move v0,s2
0040b170  lw v0,0x8c8(s0)
0040b174  lw a0,0x94(s0)
0040b178  sw s1,0x40(s0)
0040b17c  addu v0,s0,v0
0040b180  addiu v0,v0,0x10d5
0040b184  sw v0,0x44(s0)
0040b188  li v0,0x5
0040b18c  beq a0,zero,0x0040b25c
0040b190  _sw v0,0x0(s0)
0040b194  lw t9,-0x7c28(gp)
0040b198  nop
0040b19c  jalr t9
0040b1a0  _nop
0040b1a4  lw gp,0x18(sp)
0040b1a8  bgez v0,0x0040b1f0
0040b1ac  _lui a1,0x45
0040b1b0  lw v0,-0x7e40(gp)
0040b1b4  lw a2,0x94(s0)
0040b1b8  lw t9,-0x7c44(gp)
0040b1bc  lw a0,0x0(v0)
0040b1c0  addiu a1,a1,-0x5710
0040b1c4  jalr t9
0040b1c8  _nop
0040b1cc  lw gp,0x18(sp)
0040b1d0  nop
0040b1d4  lw t9,-0x7cc8(gp)
0040b1d8  move a0,s0
0040b1dc  clear s2
0040b1e0  jalr t9
0040b1e4  _nop
0040b1e8  b 0x0040b4a0
0040b1ec  _move v0,s2
0040b1f0  lw v1,-0x7cb8(gp)
0040b1f4  nop
0040b1f8  lw a3,0x0(v1)
0040b1fc  nop
0040b200  beq a3,zero,0x0040b234
0040b204  _slt v1,a3,v0
0040b208  beq v1,zero,0x0040b234
0040b20c  _lui a1,0x45
0040b210  lw v1,-0x7e40(gp)
0040b214  lw t9,-0x7c44(gp)
0040b218  lw a0,0x0(v1)
0040b21c  addiu a1,a1,-0x56e8
0040b220  move a2,v0
0040b224  jalr t9
0040b228  _nop
0040b22c  b 0x0040b1cc
0040b230  _nop
0040b234  lw v1,0x40(s0)
0040b238  lw a0,0x44(s0)
0040b23c  sw v0,0x2c(s0)
0040b240  subu a0,a0,v1
0040b244  sltu a0,v0,a0
0040b248  beq a0,zero,0x0040b49c
0040b24c  _sw zero,0x30(s0)
0040b250  addu v0,v1,v0
0040b254  b 0x0040b49c
0040b258  _sw v0,0x44(s0)
0040b25c  lw v0,-0x7e40(gp)
0040b260  lw t9,-0x7f4c(gp)
0040b264  lui a0,0x45
0040b268  lw a1,0x0(v0)
0040b26c  addiu a0,a0,-0x56b0
0040b270  jalr t9
0040b274  _clear s2
0040b278  lw gp,0x18(sp)
0040b27c  nop
0040b280  lw t9,-0x7cc8(gp)
0040b284  b 0x0040b1e0
0040b288  _move a0,s0
0040b28c  lw v1,0x20(sp)
0040b290  nop
0040b294  sltu v0,s1,v1
0040b298  bne v0,zero,0x0040af30
0040b29c  _nop
0040b2a0  lw v0,0x0(s0)
0040b2a4  nop
0040b2a8  sltiu v0,v0,0x4
0040b2ac  beq v0,zero,0x0040b498
0040b2b0  _li a2,0x2000
0040b2b4  lw a1,0x8c8(s0)
0040b2b8  nop
0040b2bc  subu a2,a2,a1
0040b2c0  addiu v0,a2,-0x1
0040b2c4  sltiu v0,v0,0x2000
0040b2c8  bne v0,zero,0x0040b310
0040b2cc  _nop
0040b2d0  lw v0,-0x7a3c(gp)
0040b2d4  nop
0040b2d8  lw v0,0x0(v0)
0040b2dc  nop
0040b2e0  andi v0,v0,0x1
0040b2e4  beq v0,zero,0x0040b308
0040b2e8  _li v0,0xc
0040b2ec  lw v0,-0x7e40(gp)
0040b2f0  lw t9,-0x7f4c(gp)
0040b2f4  lui a0,0x45
0040b2f8  lw a1,0x0(v0)
0040b2fc  jalr t9
0040b300  _addiu a0,a0,-0x5690
0040b304  li v0,0xc
0040b308  b 0x0040b420
0040b30c  _sw v0,0x0(s0)
0040b310  lw t9,-0x7cfc(gp)
0040b314  lw a0,0xb4(s0)
0040b318  addu a1,s0,a1
0040b31c  jalr t9
0040b320  _addiu a1,a1,0x10d5
0040b324  lw gp,0x18(sp)
0040b328  bgez v0,0x0040b378
0040b32c  _nop
0040b330  lw t9,-0x7ecc(gp)
0040b334  nop
0040b338  jalr t9
0040b33c  _nop
0040b340  lw v0,0x0(v0)
0040b344  li v1,0x4
0040b348  lw gp,0x18(sp)
0040b34c  beq v0,v1,0x0040b49c
0040b350  _li s2,0x1
0040b354  li v1,0xb
0040b358  beq v0,v1,0x0040b49c
0040b35c  _li s2,-0x1
0040b360  lw t9,-0x7aec(gp)
0040b364  lui a0,0x45
0040b368  jalr t9
0040b36c  _addiu a0,a0,-0x5660
0040b370  b 0x0040b420
0040b374  _nop
0040b378  bne v0,zero,0x0040b42c
0040b37c  _nop
0040b380  lw v0,-0x7f94(gp)
0040b384  lw v1,0x8c4(s0)
0040b388  lw v0,0x0(v0)
0040b38c  nop
0040b390  sltu v0,v1,v0
0040b394  beq v0,zero,0x0040b3bc
0040b398  _nop
0040b39c  lw v0,0x3c(s0)
0040b3a0  nop
0040b3a4  bne v0,zero,0x0040b3bc
0040b3a8  _nop
0040b3ac  lw v0,0x8c8(s0)
0040b3b0  nop
0040b3b4  beq v0,zero,0x0040b424
0040b3b8  _li v0,0x190
0040b3bc  lw s1,-0x7e40(gp)
0040b3c0  lw t9,-0x7f4c(gp)
0040b3c4  lui a0,0x45
0040b3c8  lw a1,0x0(s1)
0040b3cc  jalr t9
0040b3d0  _addiu a0,a0,-0x5654
0040b3d4  lw a3,0x3c(s0)
0040b3d8  lw gp,0x18(sp)
0040b3dc  lw a0,0x0(s1)
0040b3e0  bne a3,zero,0x0040b3f0
0040b3e4  _nop
0040b3e8  lui a3,0x45
0040b3ec  addiu a3,a3,-0x562c
0040b3f0  lw v0,0x1c(s0)
0040b3f4  nop
0040b3f8  bne v0,zero,0x0040b408
0040b3fc  _nop
0040b400  lui v0,0x45
0040b404  addiu v0,v0,-0x562c
0040b408  lw t9,-0x7c44(gp)
0040b40c  lui a1,0x45
0040b410  sw v0,0x10(sp)
0040b414  addiu a1,a1,-0x5624
0040b418  jalr t9
0040b41c  _addiu a2,s0,0x4bd
0040b420  li v0,0x190
0040b424  b 0x0040b490
0040b428  _sw v0,0x10(s0)
0040b42c  lw v1,0x8c8(s0)
0040b430  lw a0,-0x7a3c(gp)
0040b434  addu v1,v0,v1
0040b438  sw v1,0x8c8(s0)
0040b43c  lw a0,0x0(a0)
0040b440  nop
0040b444  andi a0,a0,0x10
0040b448  beq a0,zero,0x0040b498
0040b44c  _addu s0,s0,v1
0040b450  lw v1,-0x7e40(gp)
0040b454  sb zero,0x10d5(s0)
0040b458  lw t9,-0x7c44(gp)
0040b45c  lw a0,0x0(v1)
0040b460  sw v0,0x10(sp)
0040b464  lui v0,0x45
0040b468  addiu v0,v0,-0x4cd4
0040b46c  lui a1,0x45
0040b470  lui a2,0x45
0040b474  sw v0,0x14(sp)
0040b478  addiu a1,a1,-0x5608
0040b47c  addiu a2,a2,-0x57d0
0040b480  jalr t9
0040b484  _li a3,0x151
0040b488  b 0x0040b49c
0040b48c  _li s2,0x1
0040b490  b 0x0040b49c
0040b494  _clear s2
0040b498  li s2,0x1
0040b49c  move v0,s2
0040b4a0  lw ra,0x4c(sp)
0040b4a4  lw s8,0x48(sp)
0040b4a8  lw s7,0x44(sp)
0040b4ac  lw s6,0x40(sp)
0040b4b0  lw s5,0x3c(sp)
0040b4b4  lw s4,0x38(sp)
0040b4b8  lw s3,0x34(sp)
0040b4bc  lw s2,0x30(sp)
0040b4c0  lw s1,0x2c(sp)
0040b4c4  lw s0,0x28(sp)
0040b4c8  jr ra
0040b4cc  _addiu sp,sp,0x50
