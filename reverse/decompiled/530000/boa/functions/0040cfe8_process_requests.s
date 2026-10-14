# process_requests @ 0040cfe8
0040cfe8  addiu sp,sp,-0x48
0040cfec  sw ra,0x44(sp)
0040cff0  sw s8,0x40(sp)
0040cff4  sw s7,0x3c(sp)
0040cff8  sw s6,0x38(sp)
0040cffc  sw s5,0x34(sp)
0040d000  sw s4,0x30(sp)
0040d004  sw s3,0x2c(sp)
0040d008  sw s2,0x28(sp)
0040d00c  sw s1,0x24(sp)
0040d010  sw s0,0x20(sp)
0040d014  lui gp,0x47
0040d018  addiu gp,gp,0x2630
0040d01c  sw gp,0x10(sp)
0040d020  lw v0,-0x7c50(gp)
0040d024  sw a0,0x48(sp)
0040d028  lw v0,0x0(v0)
0040d02c  nop
0040d030  beq v0,zero,0x0040d048
0040d034  _nop
0040d038  jal 0x0040cd1c
0040d03c  _nop
0040d040  lw gp,0x10(sp)
0040d044  nop
0040d048  lw v0,-0x79dc(gp)
0040d04c  lw s6,-0x7ac8(gp)
0040d050  lw s5,-0x7e40(gp)
0040d054  lw s0,0x0(v0)
0040d058  li s1,0xc
0040d05c  li s4,0x2
0040d060  li s3,-0x2
0040d064  lw s8,-0x7c50(gp)
0040d068  lw s7,-0x7aa0(gp)
0040d06c  b 0x0040d2d0
0040d070  _li s2,0x1
0040d074  lw t9,-0x7de4(gp)
0040d078  lw a0,-0x7ac8(gp)
0040d07c  jalr t9
0040d080  _nop
0040d084  lw v0,0x50(s0)
0040d088  lw gp,0x10(sp)
0040d08c  beq v0,zero,0x0040d0cc
0040d090  _nop
0040d094  lw v0,0x0(s0)
0040d098  nop
0040d09c  sltiu v0,v0,0xb
0040d0a0  beq v0,zero,0x0040d0cc
0040d0a4  _nop
0040d0a8  lw t9,-0x7f98(gp)
0040d0ac  nop
0040d0b0  jalr t9
0040d0b4  _move a0,s0
0040d0b8  lw gp,0x10(sp)
0040d0bc  beq v0,s3,0x0040d1a8
0040d0c0  _nop
0040d0c4  bltz v0,0x0040d1b0
0040d0c8  _nop
0040d0cc  lw a2,0x0(s0)
0040d0d0  nop
0040d0d4  sltiu v0,a2,0xd
0040d0d8  beq v0,zero,0x0040d194
0040d0dc  _lui a1,0x45
0040d0e0  lui v0,0x45
0040d0e4  addiu v0,v0,-0x51f0
0040d0e8  sll a2,a2,0x2
0040d0ec  addu a2,v0,a2
0040d0f0  lw v0,0x0(a2)
0040d0f4  nop
0040d0f8  jr v0
0040d0fc  _nop
0040d100  lw t9,-0x7bc0(gp)
0040d104  b 0x0040d150
0040d108  _nop
0040d10c  lw t9,-0x7f68(gp)
0040d110  b 0x0040d150
0040d114  _nop
0040d118  lw t9,-0x7dfc(gp)
0040d11c  b 0x0040d150
0040d120  _nop
0040d124  lw t9,-0x7f7c(gp)
0040d128  b 0x0040d150
0040d12c  _nop
0040d130  lw t9,-0x7c94(gp)
0040d134  b 0x0040d150
0040d138  _nop
0040d13c  lw t9,-0x7cc4(gp)
0040d140  b 0x0040d150
0040d144  _nop
0040d148  lw t9,-0x7f40(gp)
0040d14c  nop
0040d150  jalr t9
0040d154  _move a0,s0
0040d158  lw gp,0x10(sp)
0040d15c  b 0x0040d1b0
0040d160  _nop
0040d164  lw t9,-0x7f98(gp)
0040d168  nop
0040d16c  jalr t9
0040d170  _move a0,s0
0040d174  lw gp,0x10(sp)
0040d178  beq v0,s3,0x0040d1a8
0040d17c  _slti v1,v0,0x1
0040d180  b 0x0040d1b0
0040d184  _movz v0,s2,v1
0040d188  sw zero,0x50(s0)
0040d18c  b 0x0040d1ac
0040d190  _sw s4,0x4(s0)
0040d194  lw t9,-0x7c44(gp)
0040d198  lw a0,0x0(s5)
0040d19c  jalr t9
0040d1a0  _addiu a1,a1,-0x5264
0040d1a4  lw gp,0x10(sp)
0040d1a8  sw s1,0x0(s0)
0040d1ac  clear v0
0040d1b0  lw a0,-0x7c84(gp)
0040d1b4  nop
0040d1b8  lw v1,0x0(a0)
0040d1bc  nop
0040d1c0  beq v1,zero,0x0040d1cc
0040d1c4  _nop
0040d1c8  sw s4,0x4(s0)
0040d1cc  lw v1,0x0(s8)
0040d1d0  nop
0040d1d4  beq v1,zero,0x0040d1f4
0040d1d8  _nop
0040d1dc  lw a0,0x48(sp)
0040d1e0  jal 0x0040cd1c
0040d1e4  _sw v0,0x18(sp)
0040d1e8  lw gp,0x10(sp)
0040d1ec  lw v0,0x18(sp)
0040d1f0  nop
0040d1f4  beq v0,zero,0x0040d22c
0040d1f8  _nop
0040d1fc  beq v0,s2,0x0040d29c
0040d200  _li v1,-0x1
0040d204  bne v0,v1,0x0040d2a8
0040d208  _move a3,v0
0040d20c  lw t9,-0x7b64(gp)
0040d210  lw v0,0x327c(s0)
0040d214  move a0,s0
0040d218  jalr t9
0040d21c  _move s0,v0
0040d220  lw gp,0x10(sp)
0040d224  b 0x0040d2d0
0040d228  _nop
0040d22c  lw v0,0x0(s6)
0040d230  nop
0040d234  sw v0,0xb8(s0)
0040d238  lw v0,0x0(s7)
0040d23c  nop
0040d240  bne v0,s2,0x0040d27c
0040d244  _addiu a0,s0,0x8d4
0040d248  lw t9,-0x7e0c(gp)
0040d24c  lui a1,0x45
0040d250  jalr t9
0040d254  _addiu a1,a1,-0x5244
0040d258  lw gp,0x10(sp)
0040d25c  bne v0,zero,0x0040d27c
0040d260  _lui a0,0x47
0040d264  lw v0,0x9c(s0)
0040d268  lw v1,-0x7be0(gp)
0040d26c  sw v0,-0x2024(a0)
0040d270  lw v0,0x98(s0)
0040d274  nop
0040d278  sw v0,0x0(v1)
0040d27c  lw v0,0x327c(s0)
0040d280  move a0,s0
0040d284  jal 0x0040c6c4
0040d288  _sw v0,0x18(sp)
0040d28c  lw v0,0x18(sp)
0040d290  lw gp,0x10(sp)
0040d294  b 0x0040d2d0
0040d298  _move s0,v0
0040d29c  lw v0,0x0(s6)
0040d2a0  b 0x0040d2c8
0040d2a4  _sw v0,0xb8(s0)
0040d2a8  lw t9,-0x7c44(gp)
0040d2ac  lw a2,0x0(s0)
0040d2b0  lw a0,0x0(s5)
0040d2b4  lui a1,0x45
0040d2b8  jalr t9
0040d2bc  _addiu a1,a1,-0x5230
0040d2c0  lw gp,0x10(sp)
0040d2c4  sw s1,0x0(s0)
0040d2c8  lw s0,0x327c(s0)
0040d2cc  nop
0040d2d0  bne s0,zero,0x0040d074
0040d2d4  _nop
0040d2d8  lw ra,0x44(sp)
0040d2dc  lw s8,0x40(sp)
0040d2e0  lw s7,0x3c(sp)
0040d2e4  lw s6,0x38(sp)
0040d2e8  lw s5,0x34(sp)
0040d2ec  lw s4,0x30(sp)
0040d2f0  lw s3,0x2c(sp)
0040d2f4  lw s2,0x28(sp)
0040d2f8  lw s1,0x24(sp)
0040d2fc  lw s0,0x20(sp)
0040d300  jr ra
0040d304  _addiu sp,sp,0x48
