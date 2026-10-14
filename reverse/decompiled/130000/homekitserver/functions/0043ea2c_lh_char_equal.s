# lh_char_equal @ 0043ea2c
0043ea2c  lui gp,0x1e
0043ea30  addiu gp,gp,-0x55ac
0043ea34  addu gp,gp,t9
0043ea38  addiu sp,sp,-0x20
0043ea3c  sw ra,0x1c(sp)
0043ea40  sw s8,0x18(sp)
0043ea44  move s8,sp
0043ea48  sw gp,0x10(sp)
0043ea4c  sw a0,0x20(s8)
0043ea50  sw a1,0x24(s8)
0043ea54  lw v1,0x20(s8)
0043ea58  lw v0,0x24(s8)
0043ea5c  move a0,v1
0043ea60  move a1,v0
0043ea64  lw v0,-0x7894(gp)
0043ea68  nop
0043ea6c  move t9,v0
0043ea70  jalr t9
0043ea74  _nop
0043ea78  lw gp,0x10(s8)
0043ea7c  sltiu v0,v0,0x1
0043ea80  move sp,s8
0043ea84  lw ra,0x1c(sp)
0043ea88  lw s8,0x18(sp)
0043ea8c  addiu sp,sp,0x20
0043ea90  jr ra
0043ea94  _nop
