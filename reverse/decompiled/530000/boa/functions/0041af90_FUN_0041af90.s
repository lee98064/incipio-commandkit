# FUN_0041af90 @ 0041af90
0041af90  addiu sp,sp,-0xd0
0041af94  sw ra,0xcc(sp)
0041af98  sw s8,0xc8(sp)
0041af9c  sw s7,0xc4(sp)
0041afa0  sw s6,0xc0(sp)
0041afa4  sw s5,0xbc(sp)
0041afa8  sw s4,0xb8(sp)
0041afac  sw s3,0xb4(sp)
0041afb0  sw s2,0xb0(sp)
0041afb4  sw s1,0xac(sp)
0041afb8  sw s0,0xa8(sp)
0041afbc  lui gp,0x47
0041afc0  addiu gp,gp,0x2630
0041afc4  sw gp,0x10(sp)
0041afc8  lw t9,-0x7fbc(gp)
0041afcc  lui a1,0x45
0041afd0  lui a2,0x45
0041afd4  addiu a1,a1,-0x614
0041afd8  addiu a2,a2,-0x4cd4
0041afdc  jalr t9
0041afe0  _move s1,a0
0041afe4  lb v1,0x0(v0)
0041afe8  lw gp,0x10(sp)
0041afec  beq v1,zero,0x0041b00c
0041aff0  _nop
0041aff4  lw t9,-0x7ef4(gp)
0041aff8  nop
0041affc  jalr t9
0041b000  _move a0,v0
0041b004  lw gp,0x10(sp)
0041b008  sw v0,0x18(sp)
0041b00c  lw t9,-0x7c08(gp)
0041b010  li a0,0x268
0041b014  jalr t9
0041b018  _addiu a1,sp,0x18
0041b01c  lw gp,0x10(sp)
0041b020  bne v0,zero,0x0041b038
0041b024  _li v0,0x1
0041b028  lui a1,0x45
0041b02c  lw t9,-0x79d0(gp)
0041b030  b 0x0041b470
0041b034  _addiu a1,a1,-0x608
0041b038  lw v1,0x18(sp)
0041b03c  nop
0041b040  bne v1,v0,0x0041b4d0
0041b044  _nop
0041b048  lw t9,-0x7c08(gp)
0041b04c  addiu s2,sp,0x1c
0041b050  lui a0,0x4
0041b054  ori a0,a0,0x26d
0041b058  jalr t9
0041b05c  _move a1,s2
0041b060  lw gp,0x10(sp)
0041b064  bne v0,zero,0x0041b07c
0041b068  _li s3,0x1
0041b06c  lui a1,0x45
0041b070  lw t9,-0x79d0(gp)
0041b074  b 0x0041b470
0041b078  _addiu a1,a1,-0x18fc
0041b07c  lui s4,0x45
0041b080  lui s8,0x45
0041b084  lui s7,0x45
0041b088  lui s6,0x45
0041b08c  lui s5,0x1
0041b090  addiu s4,s4,-0x4cd4
0041b094  addiu s8,s8,-0x5c4
0041b098  addiu s7,s7,-0x5b8
0041b09c  addiu s6,s6,-0x5ac
0041b0a0  ori s5,s5,0x26b
0041b0a4  addiu s0,sp,0x34
0041b0a8  lw t9,-0x7b54(gp)
0041b0ac  sw zero,0x0(s2)
0041b0b0  ori a0,zero,0x826a
0041b0b4  move a1,s2
0041b0b8  sw zero,0x4(s2)
0041b0bc  sw zero,0x8(s2)
0041b0c0  sw zero,0xc(s2)
0041b0c4  sw zero,0x10(s2)
0041b0c8  sh zero,0x14(s2)
0041b0cc  jalr t9
0041b0d0  _sb s3,0x0(s2)
0041b0d4  lw gp,0x10(sp)
0041b0d8  move a0,s0
0041b0dc  clear a1
0041b0e0  lw t9,-0x7db4(gp)
0041b0e4  nop
0041b0e8  jalr t9
0041b0ec  _li a2,0x64
0041b0f0  lw gp,0x10(sp)
0041b0f4  lui a1,0x45
0041b0f8  move a0,s0
0041b0fc  lw t9,-0x7e28(gp)
0041b100  addiu a1,a1,-0x5e4
0041b104  jalr t9
0041b108  _move a2,s3
0041b10c  lw gp,0x10(sp)
0041b110  move a0,s1
0041b114  move a1,s0
0041b118  lw t9,-0x7fbc(gp)
0041b11c  nop
0041b120  jalr t9
0041b124  _move a2,s4
0041b128  move a3,v0
0041b12c  lb v0,0x0(v0)
0041b130  lw gp,0x10(sp)
0041b134  beq v0,zero,0x0041b1d4
0041b138  _clear v1
0041b13c  li t0,0x10
0041b140  li v0,0x30
0041b144  mult v1,v0
0041b148  lui v0,0x47
0041b14c  lw t9,-0x7e0c(gp)
0041b150  addiu v0,v0,-0x77e0
0041b154  addiu v1,v1,0x1
0041b158  move a0,a3
0041b15c  sw v1,0x9c(sp)
0041b160  sw a3,0x98(sp)
0041b164  sw t0,0xa4(sp)
0041b168  mflo a2
0041b16c  addu a2,v0,a2
0041b170  move a1,a2
0041b174  jalr t9
0041b178  _sw a2,0xa0(sp)
0041b17c  lw gp,0x10(sp)
0041b180  lw v1,0x9c(sp)
0041b184  lw a2,0xa0(sp)
0041b188  lw a3,0x98(sp)
0041b18c  lw t0,0xa4(sp)
0041b190  bne v0,zero,0x0041b1a8
0041b194  _nop
0041b198  bne a2,zero,0x0041b1b8
0041b19c  _addiu a1,a2,0x20
0041b1a0  b 0x0041b204
0041b1a4  _nop
0041b1a8  bne v1,t0,0x0041b144
0041b1ac  _li v0,0x30
0041b1b0  b 0x0041b204
0041b1b4  _nop
0041b1b8  lw t9,-0x79d0(gp)
0041b1bc  nop
0041b1c0  jalr t9
0041b1c4  _addiu a0,sp,0x1d
0041b1c8  lw gp,0x10(sp)
0041b1cc  b 0x0041b204
0041b1d0  _nop
0041b1d4  lw t9,-0x7c08(gp)
0041b1d8  move a0,s5
0041b1dc  jalr t9
0041b1e0  _move a1,s2
0041b1e4  lw gp,0x10(sp)
0041b1e8  bne v0,zero,0x0041b4c4
0041b1ec  _addiu s3,s3,0x1
0041b1f0  lui a1,0x45
0041b1f4  lw t9,-0x79d0(gp)
0041b1f8  move a0,s0
0041b1fc  b 0x0041b474
0041b200  _addiu a1,a1,-0x1954
0041b204  lw t9,-0x7db4(gp)
0041b208  move a0,s0
0041b20c  clear a1
0041b210  jalr t9
0041b214  _li a2,0x64
0041b218  lw gp,0x10(sp)
0041b21c  lui a1,0x45
0041b220  move a0,s0
0041b224  lw t9,-0x7e28(gp)
0041b228  addiu a1,a1,-0x5d4
0041b22c  jalr t9
0041b230  _move a2,s3
0041b234  lw gp,0x10(sp)
0041b238  move a0,s1
0041b23c  move a1,s0
0041b240  lw t9,-0x7fbc(gp)
0041b244  nop
0041b248  jalr t9
0041b24c  _move a2,s4
0041b250  lb v1,0x0(v0)
0041b254  lw gp,0x10(sp)
0041b258  beq v1,zero,0x0041b278
0041b25c  _nop
0041b260  lw t9,-0x7ef4(gp)
0041b264  nop
0041b268  jalr t9
0041b26c  _move a0,v0
0041b270  lw gp,0x10(sp)
0041b274  sb v0,0x1c(sp)
0041b278  lw t9,-0x7db4(gp)
0041b27c  move a0,s0
0041b280  clear a1
0041b284  jalr t9
0041b288  _li a2,0x64
0041b28c  lw gp,0x10(sp)
0041b290  move a0,s0
0041b294  move a1,s8
0041b298  lw t9,-0x7e28(gp)
0041b29c  nop
0041b2a0  jalr t9
0041b2a4  _move a2,s3
0041b2a8  lw gp,0x10(sp)
0041b2ac  move a0,s1
0041b2b0  move a1,s0
0041b2b4  lw t9,-0x7fbc(gp)
0041b2b8  nop
0041b2bc  jalr t9
0041b2c0  _move a2,s4
0041b2c4  lb v1,0x0(v0)
0041b2c8  lw gp,0x10(sp)
0041b2cc  beq v1,zero,0x0041b2ec
0041b2d0  _nop
0041b2d4  lw t9,-0x7ef4(gp)
0041b2d8  nop
0041b2dc  jalr t9
0041b2e0  _move a0,v0
0041b2e4  lw gp,0x10(sp)
0041b2e8  sb v0,0x2d(sp)
0041b2ec  lw t9,-0x7db4(gp)
0041b2f0  move a0,s0
0041b2f4  clear a1
0041b2f8  jalr t9
0041b2fc  _li a2,0x64
0041b300  lw gp,0x10(sp)
0041b304  move a0,s0
0041b308  move a1,s7
0041b30c  lw t9,-0x7e28(gp)
0041b310  nop
0041b314  jalr t9
0041b318  _move a2,s3
0041b31c  lw gp,0x10(sp)
0041b320  move a0,s1
0041b324  move a1,s0
0041b328  lw t9,-0x7fbc(gp)
0041b32c  nop
0041b330  jalr t9
0041b334  _move a2,s4
0041b338  lb v1,0x0(v0)
0041b33c  lw gp,0x10(sp)
0041b340  beq v1,zero,0x0041b360
0041b344  _nop
0041b348  lw t9,-0x7ef4(gp)
0041b34c  nop
0041b350  jalr t9
0041b354  _move a0,v0
0041b358  lw gp,0x10(sp)
0041b35c  sb v0,0x2f(sp)
0041b360  lw t9,-0x7db4(gp)
0041b364  move a0,s0
0041b368  clear a1
0041b36c  jalr t9
0041b370  _li a2,0x64
0041b374  lw gp,0x10(sp)
0041b378  move a0,s0
0041b37c  move a1,s6
0041b380  lw t9,-0x7e28(gp)
0041b384  nop
0041b388  jalr t9
0041b38c  _move a2,s3
0041b390  lw gp,0x10(sp)
0041b394  move a0,s1
0041b398  move a1,s0
0041b39c  lw t9,-0x7fbc(gp)
0041b3a0  nop
0041b3a4  jalr t9
0041b3a8  _move a2,s4
0041b3ac  lb v1,0x0(v0)
0041b3b0  lw gp,0x10(sp)
0041b3b4  beq v1,zero,0x0041b3d4
0041b3b8  _nop
0041b3bc  lw t9,-0x7ef4(gp)
0041b3c0  nop
0041b3c4  jalr t9
0041b3c8  _move a0,v0
0041b3cc  lw gp,0x10(sp)
0041b3d0  sh v0,0x30(sp)
0041b3d4  lw t9,-0x7db4(gp)
0041b3d8  move a0,s0
0041b3dc  clear a1
0041b3e0  jalr t9
0041b3e4  _li a2,0x64
0041b3e8  lw gp,0x10(sp)
0041b3ec  lui a1,0x45
0041b3f0  move a0,s0
0041b3f4  lw t9,-0x7e28(gp)
0041b3f8  addiu a1,a1,-0x5a0
0041b3fc  jalr t9
0041b400  _move a2,s3
0041b404  lw gp,0x10(sp)
0041b408  move a0,s1
0041b40c  move a1,s0
0041b410  lw t9,-0x7fbc(gp)
0041b414  nop
0041b418  jalr t9
0041b41c  _move a2,s4
0041b420  lb v1,0x0(v0)
0041b424  lw gp,0x10(sp)
0041b428  beq v1,zero,0x0041b448
0041b42c  _nop
0041b430  lw t9,-0x7ef4(gp)
0041b434  nop
0041b438  jalr t9
0041b43c  _move a0,v0
0041b440  lw gp,0x10(sp)
0041b444  sb v0,0x2e(sp)
0041b448  lw t9,-0x7c08(gp)
0041b44c  move a0,s5
0041b450  jalr t9
0041b454  _move a1,s2
0041b458  lw gp,0x10(sp)
0041b45c  bne v0,zero,0x0041b4c4
0041b460  _addiu s3,s3,0x1
0041b464  lw t9,-0x79d0(gp)
0041b468  lui a1,0x45
0041b46c  addiu a1,a1,-0x1954
0041b470  addiu a0,sp,0x34
0041b474  jalr t9
0041b478  _nop
0041b47c  jal 0x00419fe8
0041b480  _move a0,s1
0041b484  lw gp,0x10(sp)
0041b488  lui a1,0x45
0041b48c  move a0,s1
0041b490  lw t9,-0x7cd4(gp)
0041b494  addiu a1,a1,-0x271c
0041b498  jalr t9
0041b49c  _addiu a2,sp,0x34
0041b4a0  lw gp,0x10(sp)
0041b4a4  lui a1,0x45
0041b4a8  move a0,s1
0041b4ac  lw t9,-0x7cd4(gp)
0041b4b0  nop
0041b4b4  jalr t9
0041b4b8  _addiu a1,a1,-0x2050
0041b4bc  b 0x0041b614
0041b4c0  _nop
0041b4c4  li v0,0x11
0041b4c8  bne s3,v0,0x0041b0a8
0041b4cc  _nop
0041b4d0  jal 0x0041af38
0041b4d4  _nop
0041b4d8  lw gp,0x10(sp)
0041b4dc  lui a0,0x45
0041b4e0  lw t9,-0x7dec(gp)
0041b4e4  nop
0041b4e8  jalr t9
0041b4ec  _addiu a0,a0,-0x260c
0041b4f0  lw gp,0x10(sp)
0041b4f4  lui a1,0x45
0041b4f8  lui a2,0x45
0041b4fc  lw t9,-0x7fbc(gp)
0041b500  addiu a1,a1,-0x3b10
0041b504  addiu a2,a2,-0x4cd4
0041b508  jalr t9
0041b50c  _move a0,s1
0041b510  move s0,v0
0041b514  lb v0,0x0(v0)
0041b518  lw gp,0x10(sp)
0041b51c  beq v0,zero,0x0041b614
0041b520  _li v1,0x1
0041b524  lw v0,-0x7c7c(gp)
0041b528  nop
0041b52c  sw v1,0x0(v0)
0041b530  lb v0,0x0(s0)
0041b534  nop
0041b538  bne v0,zero,0x0041b55c
0041b53c  _nop
0041b540  lw t9,-0x79d0(gp)
0041b544  lui a1,0x45
0041b548  addiu a1,a1,-0x22a8
0041b54c  jalr t9
0041b550  _move a0,s0
0041b554  lw gp,0x10(sp)
0041b558  nop
0041b55c  lw t9,-0x7cd4(gp)
0041b560  lui a1,0x45
0041b564  addiu a1,a1,-0x229c
0041b568  jalr t9
0041b56c  _move a0,s1
0041b570  lw gp,0x10(sp)
0041b574  lui a1,0x45
0041b578  addiu a1,a1,-0x21b0
0041b57c  lw t9,-0x7cd4(gp)
0041b580  nop
0041b584  jalr t9
0041b588  _move a0,s1
0041b58c  lw gp,0x10(sp)
0041b590  lui a1,0x45
0041b594  move a2,s0
0041b598  lw t9,-0x7cd4(gp)
0041b59c  addiu a1,a1,-0x216c
0041b5a0  jalr t9
0041b5a4  _move a0,s1
0041b5a8  lw gp,0x10(sp)
0041b5ac  lui a1,0x45
0041b5b0  addiu a1,a1,-0x2138
0041b5b4  lw t9,-0x7cd4(gp)
0041b5b8  nop
0041b5bc  jalr t9
0041b5c0  _move a0,s1
0041b5c4  lw gp,0x10(sp)
0041b5c8  lui a1,0x45
0041b5cc  move a2,s0
0041b5d0  lw t9,-0x7cd4(gp)
0041b5d4  addiu a1,a1,-0x20d8
0041b5d8  jalr t9
0041b5dc  _move a0,s1
0041b5e0  lw gp,0x10(sp)
0041b5e4  lui a1,0x45
0041b5e8  move a0,s1
0041b5ec  lw t9,-0x7cd4(gp)
0041b5f0  nop
0041b5f4  jalr t9
0041b5f8  _addiu a1,a1,-0x2074
0041b5fc  lw gp,0x10(sp)
0041b600  lui a0,0x45
0041b604  lw t9,-0x7c58(gp)
0041b608  nop
0041b60c  jalr t9
0041b610  _addiu a0,a0,-0x3bd8
0041b614  lw ra,0xcc(sp)
0041b618  lw s8,0xc8(sp)
0041b61c  lw s7,0xc4(sp)
0041b620  lw s6,0xc0(sp)
0041b624  lw s5,0xbc(sp)
0041b628  lw s4,0xb8(sp)
0041b62c  lw s3,0xb4(sp)
0041b630  lw s2,0xb0(sp)
0041b634  lw s1,0xac(sp)
0041b638  lw s0,0xa8(sp)
0041b63c  jr ra
0041b640  _addiu sp,sp,0xd0
