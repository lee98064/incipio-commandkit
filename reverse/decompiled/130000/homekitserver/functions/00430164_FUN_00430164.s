# FUN_00430164 @ 00430164
00430164  addiu sp,sp,-0x30
00430168  sw ra,0x2c(sp)
0043016c  sw s4,0x28(sp)
00430170  sw s3,0x24(sp)
00430174  sw s2,0x20(sp)
00430178  sw s1,0x1c(sp)
0043017c  sw s0,0x18(sp)
00430180  lui gp,0x62
00430184  addiu gp,gp,-0x6b80
00430188  sw gp,0x10(sp)
0043018c  sb zero,0x0(a1)
00430190  sb zero,0x1(a1)
00430194  sb zero,0x2(a1)
00430198  sb zero,0x3(a1)
0043019c  sb zero,0x0(a2)
004301a0  sb zero,0x1(a2)
004301a4  sb zero,0x2(a2)
004301a8  sb zero,0x3(a2)
004301ac  sw zero,0x0(a3)
004301b0  lb v0,0x0(a0)
004301b4  move s0,a1
004301b8  move s1,a2
004301bc  move s4,a3
004301c0  beq v0,zero,0x00430360
004301c4  _move s3,a0
004301c8  lw t9,-0x6254(gp)
004301cc  lui a1,0x5b
004301d0  addiu a1,a1,-0x31b0
004301d4  jalr t9
004301d8  _li a2,0x7
004301dc  lw gp,0x10(sp)
004301e0  bne v0,zero,0x004301f8
004301e4  _lui a1,0x5b
004301e8  li v0,0x50
004301ec  sw v0,0x0(s4)
004301f0  b 0x00430224
004301f4  _addiu s2,s3,0x7
004301f8  lw t9,-0x6254(gp)
004301fc  addiu a1,a1,-0x31a8
00430200  move a0,s3
00430204  jalr t9
00430208  _li a2,0x8
0043020c  lw gp,0x10(sp)
00430210  bne v0,zero,0x00430224
00430214  _move s2,s3
00430218  li v0,0x1bb
0043021c  sw v0,0x0(s4)
00430220  addiu s2,s3,0x8
00430224  lw t9,-0x7b28(gp)
00430228  move a0,s2
0043022c  jalr t9
00430230  _li a1,0x2f
00430234  lw gp,0x10(sp)
00430238  nop
0043023c  lw t9,-0x63cc(gp)
00430240  beq v0,zero,0x004302e4
00430244  _move s3,v0
00430248  jalr t9
0043024c  _move a0,s2
00430250  lw gp,0x10(sp)
00430254  move a0,s3
00430258  lw t9,-0x63cc(gp)
0043025c  nop
00430260  jalr t9
00430264  _move s4,v0
00430268  lw gp,0x10(sp)
0043026c  subu a2,s4,v0
00430270  move a0,s0
00430274  lw t9,-0x5cb0(gp)
00430278  move a1,s2
0043027c  jalr t9
00430280  _addiu s4,s3,0x1
00430284  lw gp,0x10(sp)
00430288  beq s4,zero,0x0043032c
0043028c  _nop
00430290  lw t9,-0x63cc(gp)
00430294  nop
00430298  jalr t9
0043029c  _move a0,s3
004302a0  lw gp,0x10(sp)
004302a4  move a1,s4
004302a8  addiu a2,v0,-0x1
004302ac  lw t9,-0x5cb0(gp)
004302b0  nop
004302b4  jalr t9
004302b8  _move a0,s1
004302bc  lw gp,0x10(sp)
004302c0  nop
004302c4  lw t9,-0x63cc(gp)
004302c8  nop
004302cc  jalr t9
004302d0  _move a0,s3
004302d4  addu v0,s1,v0
004302d8  lw gp,0x10(sp)
004302dc  b 0x0043032c
004302e0  _sb zero,-0x1(v0)
004302e4  jalr t9
004302e8  _move a0,s2
004302ec  lw gp,0x10(sp)
004302f0  move a2,v0
004302f4  move a0,s0
004302f8  lw t9,-0x5cb0(gp)
004302fc  nop
00430300  jalr t9
00430304  _move a1,s2
00430308  lw gp,0x10(sp)
0043030c  nop
00430310  lw t9,-0x63cc(gp)
00430314  nop
00430318  jalr t9
0043031c  _move a0,s2
00430320  addu v0,s0,v0
00430324  b 0x00430360
00430328  _sb zero,0x0(v0)
0043032c  lw t9,-0x63cc(gp)
00430330  nop
00430334  jalr t9
00430338  _move a0,s2
0043033c  lw gp,0x10(sp)
00430340  move a0,s3
00430344  lw t9,-0x63cc(gp)
00430348  nop
0043034c  jalr t9
00430350  _move s1,v0
00430354  subu s1,s1,v0
00430358  addu s0,s0,s1
0043035c  sb zero,0x0(s0)
00430360  lw ra,0x2c(sp)
00430364  lw s4,0x28(sp)
00430368  lw s3,0x24(sp)
0043036c  lw s2,0x20(sp)
00430370  lw s1,0x1c(sp)
00430374  lw s0,0x18(sp)
00430378  jr ra
0043037c  _addiu sp,sp,0x30
