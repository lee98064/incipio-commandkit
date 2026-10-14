# CreateEVENTRespondMessageNoCopy @ 00421944
00421944  addiu sp,sp,-0x468
00421948  sw ra,0x464(sp)
0042194c  sw s5,0x460(sp)
00421950  sw s4,0x45c(sp)
00421954  sw s3,0x458(sp)
00421958  sw s2,0x454(sp)
0042195c  sw s1,0x450(sp)
00421960  sw s0,0x44c(sp)
00421964  lui gp,0x62
00421968  addiu gp,gp,-0x5cf0
0042196c  sw gp,0x38(sp)
00421970  move s2,a1
00421974  move s1,a2
00421978  move s0,a3
0042197c  jal 0x00421678
00421980  _move s4,a0
00421984  lw gp,0x38(sp)
00421988  addiu s5,sp,0x40
0042198c  move a0,s5
00421990  lw t9,-0x6b0c(gp)
00421994  nop
00421998  jalr t9
0042199c  _move s3,v0
004219a0  lw gp,0x38(sp)
004219a4  nop
004219a8  lw t9,-0x6d00(gp)
004219ac  nop
004219b0  jalr t9
004219b4  _move a0,s5
004219b8  lw gp,0x38(sp)
004219bc  lui a2,0x5b
004219c0  addiu a2,a2,-0x3824
004219c4  lw t9,-0x5a44(gp)
004219c8  move a3,v0
004219cc  addiu a0,sp,0x44
004219d0  jalr t9
004219d4  _li a1,0x100
004219d8  lw gp,0x38(sp)
004219dc  beq s2,zero,0x00421a90
004219e0  _nop
004219e4  beq s1,zero,0x00421a90
004219e8  _li a0,0xc8
004219ec  lw t9,-0x5a50(gp)
004219f0  nop
004219f4  jalr t9
004219f8  _li a1,0x1
004219fc  lw gp,0x38(sp)
00421a00  beq v0,zero,0x00421a90
00421a04  _sw v0,0x0(s0)
00421a08  lui a0,0x5b
00421a0c  addiu a0,a0,-0x3844
00421a10  sw a0,0x1c(sp)
00421a14  lui a0,0x5b
00421a18  addiu a0,a0,-0x3834
00421a1c  lw t9,-0x64ec(gp)
00421a20  sw a0,0x28(sp)
00421a24  lui v1,0x5b
00421a28  lui a0,0x5e
00421a2c  addiu v1,v1,-0x3848
00421a30  addiu a0,a0,-0x2424
00421a34  lui a2,0x5b
00421a38  lui a3,0x5b
00421a3c  sw v1,0x24(sp)
00421a40  sw v1,0x18(sp)
00421a44  sw a0,0x30(sp)
00421a48  addiu a2,a2,-0x3808
00421a4c  move a0,v0
00421a50  addiu a3,a3,-0x37ec
00421a54  li a1,0xc8
00421a58  sw s4,0x10(sp)
00421a5c  sw s3,0x14(sp)
00421a60  sw s2,0x20(sp)
00421a64  jalr t9
00421a68  _sw s1,0x2c(sp)
00421a6c  lw gp,0x38(sp)
00421a70  lw a0,0x0(s0)
00421a74  lw t9,-0x63c4(gp)
00421a78  nop
00421a7c  jalr t9
00421a80  _nop
00421a84  lw v1,0x478(sp)
00421a88  nop
00421a8c  sw v0,0x0(v1)
00421a90  lw ra,0x464(sp)
00421a94  lw s5,0x460(sp)
00421a98  lw s4,0x45c(sp)
00421a9c  lw s3,0x458(sp)
00421aa0  lw s2,0x454(sp)
00421aa4  lw s1,0x450(sp)
00421aa8  lw s0,0x44c(sp)
00421aac  clear v0
00421ab0  jr ra
00421ab4  _addiu sp,sp,0x468
