# homeKitListener_loop @ 0041ce5c
0041ce5c  addiu sp,sp,-0x110
0041ce60  sw ra,0x10c(sp)
0041ce64  sw s8,0x108(sp)
0041ce68  sw s7,0x104(sp)
0041ce6c  sw s6,0x100(sp)
0041ce70  sw s5,0xfc(sp)
0041ce74  sw s4,0xf8(sp)
0041ce78  sw s3,0xf4(sp)
0041ce7c  sw s2,0xf0(sp)
0041ce80  sw s1,0xec(sp)
0041ce84  sw s0,0xe8(sp)
0041ce88  lui gp,0x62
0041ce8c  addiu gp,gp,-0x5cf0
0041ce90  sw gp,0x18(sp)
0041ce94  lw t9,-0x778c(gp)
0041ce98  nop
0041ce9c  jalr t9
0041cea0  _move s1,a0
0041cea4  lw gp,0x18(sp)
0041cea8  nop
0041ceac  lw t9,-0x5bd0(gp)
0041ceb0  nop
0041ceb4  jalr t9
0041ceb8  _nop
0041cebc  lw gp,0x18(sp)
0041cec0  nop
0041cec4  lw t9,-0x5e34(gp)
0041cec8  nop
0041cecc  jalr t9
0041ced0  _nop
0041ced4  lw gp,0x18(sp)
0041ced8  nop
0041cedc  lw t9,-0x5870(gp)
0041cee0  nop
0041cee4  jalr t9
0041cee8  _nop
0041ceec  lw gp,0x18(sp)
0041cef0  nop
0041cef4  lw t9,-0x73b0(gp)
0041cef8  beq v0,zero,0x0041cf10
0041cefc  _lui a0,0x5b
0041cf00  lui a1,0x5b
0041cf04  addiu a0,a0,-0x3c0c
0041cf08  b 0x0041cf1c
0041cf0c  _addiu a1,a1,0x1a18
0041cf10  lui a1,0x5b
0041cf14  addiu a0,a0,-0x3c0c
0041cf18  addiu a1,a1,-0x1930
0041cf1c  jalr t9
0041cf20  _srl s3,s1,0x5
0041cf24  lw gp,0x18(sp)
0041cf28  li a1,0x1
0041cf2c  li a0,0x64
0041cf30  lw t9,-0x5a50(gp)
0041cf34  nop
0041cf38  jalr t9
0041cf3c  _addiu s4,sp,0x20
0041cf40  lw gp,0x18(sp)
0041cf44  move a0,v0
0041cf48  move s0,v0
0041cf4c  lw t9,-0x5830(gp)
0041cf50  sll s3,s3,0x2
0041cf54  jalr t9
0041cf58  _li s5,0x1
0041cf5c  lw gp,0x18(sp)
0041cf60  lui a0,0x5b
0041cf64  move a1,s0
0041cf68  lw t9,-0x73b0(gp)
0041cf6c  addiu a0,a0,-0x3c08
0041cf70  jalr t9
0041cf74  _lui s6,0x42
0041cf78  lw gp,0x18(sp)
0041cf7c  move a0,s0
0041cf80  lui s0,0x61
0041cf84  lw t9,-0x7aa4(gp)
0041cf88  addiu s8,sp,0x60
0041cf8c  jalr t9
0041cf90  _addiu s7,sp,0x24
0041cf94  lw gp,0x18(sp)
0041cf98  li a1,0x1
0041cf9c  li a0,0xa
0041cfa0  lw t9,-0x5a50(gp)
0041cfa4  sllv s5,s5,s1
0041cfa8  jalr t9
0041cfac  _addu s3,s4,s3
0041cfb0  lw gp,0x18(sp)
0041cfb4  move a0,v0
0041cfb8  move s2,v0
0041cfbc  lw t9,-0x63f8(gp)
0041cfc0  nop
0041cfc4  jalr t9
0041cfc8  _addiu s6,s6,-0x24c
0041cfcc  lw gp,0x18(sp)
0041cfd0  lui a0,0x5b
0041cfd4  move a1,s2
0041cfd8  lw t9,-0x73b0(gp)
0041cfdc  nop
0041cfe0  jalr t9
0041cfe4  _addiu a0,a0,-0x3c04
0041cfe8  lw gp,0x18(sp)
0041cfec  move a0,s2
0041cff0  lw t9,-0x7aa4(gp)
0041cff4  nop
0041cff8  jalr t9
0041cffc  _addiu s2,sp,0x3c
0041d000  lw gp,0x18(sp)
0041d004  addiu a0,sp,0x2c
0041d008  lw v0,-0x5b34(gp)
0041d00c  lw t9,-0x5f68(gp)
0041d010  sw v0,0x2c(sp)
0041d014  lw v0,-0x6eec(gp)
0041d018  nop
0041d01c  sw v0,0x30(sp)
0041d020  lw v0,-0x6540(gp)
0041d024  nop
0041d028  sw v0,0x34(sp)
0041d02c  lw v0,-0x5f1c(gp)
0041d030  jalr t9
0041d034  _sw v0,0x38(sp)
0041d038  lw gp,0x18(sp)
0041d03c  nop
0041d040  lw t9,-0x7dc0(gp)
0041d044  nop
0041d048  jalr t9
0041d04c  _clear a0
0041d050  lw gp,0x18(sp)
0041d054  li a1,0x1
0041d058  lw t9,-0x5a50(gp)
0041d05c  nop
0041d060  jalr t9
0041d064  _li a0,0x15c
0041d068  lw gp,0x18(sp)
0041d06c  addiu a0,v0,0xbc
0041d070  lw t9,-0x57e4(gp)
0041d074  nop
0041d078  jalr t9
0041d07c  _sw v0,0x4bf0(s0)
0041d080  lw gp,0x18(sp)
0041d084  lw a0,0x4bf0(s0)
0041d088  addiu v0,s1,0x1
0041d08c  lw t9,-0x6088(gp)
0041d090  nop
0041d094  jalr t9
0041d098  _sw v0,0xe0(sp)
0041d09c  lw gp,0x18(sp)
0041d0a0  lw v0,0x4bf0(s0)
0041d0a4  lw t9,-0x7cc8(gp)
0041d0a8  lw a0,0x158(v0)
0041d0ac  jalr t9
0041d0b0  _nop
0041d0b4  lui v0,0x61
0041d0b8  lw gp,0x18(sp)
0041d0bc  b 0x0041d0d0
0041d0c0  _sb zero,0x4bec(v0)
0041d0c4  sw zero,0x40(t0)
0041d0c8  b 0x0041d0d4
0041d0cc  _addiu v0,v0,0x1
0041d0d0  clear v0
0041d0d4  sll t0,v0,0x2
0041d0d8  sltiu v1,v0,0x20
0041d0dc  lw t9,-0x664c(gp)
0041d0e0  clear a3
0041d0e4  lw a0,0xe0(sp)
0041d0e8  move a1,s8
0041d0ec  clear a2
0041d0f0  bne v1,zero,0x0041d0c4
0041d0f4  _addu t0,s4,t0
0041d0f8  lw v0,0x40(s3)
0041d0fc  li v1,0x2
0041d100  sw v1,0x24(sp)
0041d104  or v0,v0,s5
0041d108  sw v0,0x40(s3)
0041d10c  sw zero,0x28(sp)
0041d110  jalr t9
0041d114  _sw s7,0x10(sp)
0041d118  addiu v0,v0,0x1
0041d11c  sltiu v0,v0,0x2
0041d120  lw gp,0x18(sp)
0041d124  bne v0,zero,0x0041d0d4
0041d128  _clear v0
0041d12c  lw v0,0x40(s3)
0041d130  lw t9,-0x5a50(gp)
0041d134  li a0,0x24
0041d138  and v0,s5,v0
0041d13c  beq v0,zero,0x0041d0d0
0041d140  _li a1,0x1
0041d144  jalr t9
0041d148  _nop
0041d14c  lw gp,0x18(sp)
0041d150  move a0,s1
0041d154  addiu a2,v0,0x20
0041d158  lw t9,-0x7a80(gp)
0041d15c  addiu a1,v0,0x4
0041d160  jalr t9
0041d164  _move s0,v0
0041d168  lw gp,0x18(sp)
0041d16c  move a0,s2
0041d170  lw t9,-0x5f5c(gp)
0041d174  bgtz v0,0x0041d194
0041d178  _sw v0,0x0(s0)
0041d17c  lw t9,-0x7aa4(gp)
0041d180  nop
0041d184  jalr t9
0041d188  _move a0,s0
0041d18c  b 0x0041d248
0041d190  _nop
0041d194  jalr t9
0041d198  _nop
0041d19c  lw gp,0x18(sp)
0041d1a0  move a0,s2
0041d1a4  lw t9,-0x5ba0(gp)
0041d1a8  nop
0041d1ac  jalr t9
0041d1b0  _li a1,0x1
0041d1b4  lw gp,0x18(sp)
0041d1b8  move a0,s4
0041d1bc  move a1,s2
0041d1c0  lw t9,-0x6bd0(gp)
0041d1c4  move a2,s6
0041d1c8  jalr t9
0041d1cc  _move a3,s0
0041d1d0  lw gp,0x18(sp)
0041d1d4  nop
0041d1d8  lw t9,-0x6ae0(gp)
0041d1dc  bgez v0,0x0041d240
0041d1e0  _move a0,s2
0041d1e4  lw t9,-0x6d0c(gp)
0041d1e8  nop
0041d1ec  jalr t9
0041d1f0  _move a0,s1
0041d1f4  lw gp,0x18(sp)
0041d1f8  nop
0041d1fc  lw t9,-0x7aa4(gp)
0041d200  nop
0041d204  jalr t9
0041d208  _move a0,s0
0041d20c  lw ra,0x10c(sp)
0041d210  lw s8,0x108(sp)
0041d214  lw s7,0x104(sp)
0041d218  lw s6,0x100(sp)
0041d21c  lw s5,0xfc(sp)
0041d220  lw s4,0xf8(sp)
0041d224  lw s3,0xf4(sp)
0041d228  lw s2,0xf0(sp)
0041d22c  lw s1,0xec(sp)
0041d230  lw s0,0xe8(sp)
0041d234  li v0,0x1
0041d238  jr ra
0041d23c  _addiu sp,sp,0x110
0041d240  jalr t9
0041d244  _nop
0041d248  lw gp,0x18(sp)
0041d24c  b 0x0041d0d4
0041d250  _clear v0
