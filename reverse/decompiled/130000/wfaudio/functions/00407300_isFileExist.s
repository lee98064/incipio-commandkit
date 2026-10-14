# isFileExist @ 00407300
00407300  addiu sp,sp,-0xb8
00407304  sw ra,0xb4(sp)
00407308  lui gp,0x43
0040730c  addiu gp,gp,-0x4f70
00407310  sw gp,0x10(sp)
00407314  lw t9,-0x7f4c(gp)
00407318  nop
0040731c  jalr t9
00407320  _addiu a1,sp,0x18
00407324  lw ra,0xb4(sp)
00407328  nor v0,zero,v0
0040732c  srl v0,v0,0x1f
00407330  jr ra
00407334  _addiu sp,sp,0xb8
