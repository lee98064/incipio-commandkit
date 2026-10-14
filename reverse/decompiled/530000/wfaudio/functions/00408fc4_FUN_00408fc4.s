# FUN_00408fc4 @ 00408fc4
00408fc4  addiu sp,sp,-0x230
00408fc8  sw ra,0x22c(sp)
00408fcc  sw s2,0x228(sp)
00408fd0  sw s1,0x224(sp)
00408fd4  sw s0,0x220(sp)
00408fd8  lui gp,0x43
00408fdc  addiu gp,gp,-0x4c90
00408fe0  sw gp,0x10(sp)
00408fe4  lw t9,-0x7ee0(gp)
00408fe8  li v0,-0x1
00408fec  addiu s0,sp,0x1c
00408ff0  clear a1
00408ff4  li a2,0x200
00408ff8  sw v0,0x18(sp)
00408ffc  move s1,a0
00409000  jalr t9
00409004  _move a0,s0
00409008  lw gp,0x10(sp)
0040900c  addiu a1,sp,0x18
00409010  lw t9,-0x7e24(gp)
00409014  nop
00409018  jalr t9
0040901c  _li a0,0xc0
00409020  lui a1,0x42
00409024  lb v0,0x387c(a1)
00409028  lw gp,0x10(sp)
0040902c  beq v0,zero,0x00409064
00409030  _addiu a1,a1,0x387c
00409034  lw t9,-0x7e68(gp)
00409038  nop
0040903c  jalr t9
00409040  _move a0,s0
00409044  lw gp,0x10(sp)
00409048  lui a1,0x41
0040904c  move a0,s0
00409050  lw t9,-0x7e68(gp)
00409054  nop
00409058  jalr t9
0040905c  _addiu a1,a1,0xb34
00409060  lw gp,0x10(sp)
00409064  lui a1,0x42
00409068  lb v0,0x3af8(a1)
0040906c  nop
00409070  beq v0,zero,0x004090a8
00409074  _addiu s0,sp,0x1c
00409078  lw t9,-0x7e68(gp)
0040907c  addiu a1,a1,0x3af8
00409080  jalr t9
00409084  _move a0,s0
00409088  lw gp,0x10(sp)
0040908c  lui a1,0x41
00409090  move a0,s0
00409094  lw t9,-0x7e68(gp)
00409098  nop
0040909c  jalr t9
004090a0  _addiu a1,a1,0xb34
004090a4  lw gp,0x10(sp)
004090a8  lui a1,0x42
004090ac  lb v0,0x3a9c(a1)
004090b0  nop
004090b4  beq v0,zero,0x004090ec
004090b8  _addiu s0,sp,0x1c
004090bc  lw t9,-0x7e68(gp)
004090c0  addiu a1,a1,0x3a9c
004090c4  jalr t9
004090c8  _move a0,s0
004090cc  lw gp,0x10(sp)
004090d0  lui a1,0x41
004090d4  move a0,s0
004090d8  lw t9,-0x7e68(gp)
004090dc  nop
004090e0  jalr t9
004090e4  _addiu a1,a1,0xb34
004090e8  lw gp,0x10(sp)
004090ec  lui a1,0x42
004090f0  lb v0,0x3b08(a1)
004090f4  nop
004090f8  beq v0,zero,0x00409134
004090fc  _addiu s0,sp,0x1c
00409100  lw t9,-0x7e68(gp)
00409104  addiu a1,a1,0x3b08
00409108  jalr t9
0040910c  _move a0,s0
00409110  lw gp,0x10(sp)
00409114  lui a1,0x41
00409118  move a0,s0
0040911c  lw t9,-0x7e68(gp)
00409120  nop
00409124  jalr t9
00409128  _addiu a1,a1,0xb34
0040912c  lw gp,0x10(sp)
00409130  nop
00409134  lw t9,-0x7e68(gp)
00409138  addiu s0,sp,0x1c
0040913c  lui a1,0x42
00409140  addiu a1,a1,0x383c
00409144  jalr t9
00409148  _move a0,s0
0040914c  lw gp,0x10(sp)
00409150  lui s2,0x41
00409154  addiu s2,s2,0xb34
00409158  lw t9,-0x7e68(gp)
0040915c  move a0,s0
00409160  jalr t9
00409164  _move a1,s2
00409168  lw gp,0x10(sp)
0040916c  lui a1,0x42
00409170  addiu a1,a1,0x384c
00409174  lw t9,-0x7e68(gp)
00409178  nop
0040917c  jalr t9
00409180  _move a0,s0
00409184  lw v0,0x18(sp)
00409188  lw gp,0x10(sp)
0040918c  addiu v0,v0,-0x1
00409190  sltiu v0,v0,0x2
00409194  beq v0,zero,0x004091d0
00409198  _move a1,s2
0040919c  lw t9,-0x7e68(gp)
004091a0  nop
004091a4  jalr t9
004091a8  _move a0,s0
004091ac  lw gp,0x10(sp)
004091b0  lui a1,0x42
004091b4  move a0,s0
004091b8  lw t9,-0x7e68(gp)
004091bc  nop
004091c0  jalr t9
004091c4  _addiu a1,a1,0x385c
004091c8  lw gp,0x10(sp)
004091cc  nop
004091d0  lw t9,-0x7df4(gp)
004091d4  move a0,s1
004091d8  addiu a1,sp,0x1c
004091dc  jalr t9
004091e0  _li a2,0x200
004091e4  lw ra,0x22c(sp)
004091e8  lw s2,0x228(sp)
004091ec  lw s1,0x224(sp)
004091f0  lw s0,0x220(sp)
004091f4  jr ra
004091f8  _addiu sp,sp,0x230
