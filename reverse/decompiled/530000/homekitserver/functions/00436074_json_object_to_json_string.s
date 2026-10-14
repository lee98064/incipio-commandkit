# json_object_to_json_string @ 00436074
00436074  lui gp,0x1e
00436078  addiu gp,gp,0x429c
0043607c  addu gp,gp,t9
00436080  addiu sp,sp,-0x20
00436084  sw ra,0x1c(sp)
00436088  sw s8,0x18(sp)
0043608c  move s8,sp
00436090  sw gp,0x10(sp)
00436094  sw a0,0x20(s8)
00436098  lw a0,0x20(s8)
0043609c  li a1,0x1
004360a0  lw v0,-0x5f38(gp)
004360a4  nop
004360a8  move t9,v0
004360ac  jalr t9
004360b0  _nop
004360b4  lw gp,0x10(s8)
004360b8  move sp,s8
004360bc  lw ra,0x1c(sp)
004360c0  lw s8,0x18(sp)
004360c4  addiu sp,sp,0x20
004360c8  jr ra
004360cc  _nop
