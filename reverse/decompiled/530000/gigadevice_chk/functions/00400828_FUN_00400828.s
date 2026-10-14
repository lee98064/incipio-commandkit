# FUN_00400828 @ 00400828
00400828  lui gp,0x2
0040082c  addiu gp,gp,-0x7958
00400830  addu gp,gp,t9
00400834  addiu sp,sp,-0x20
00400838  sw ra,0x1c(sp)
0040083c  sw gp,0x10(sp)
00400840  lw v0,-0x7f98(gp)
00400844  nop
00400848  beq v0,zero,0x00400870
0040084c  _nop
00400850  lw a0,-0x7fdc(gp)
00400854  lw a1,-0x7fe8(gp)
00400858  lw t9,-0x7f98(gp)
0040085c  addiu a0,a0,0xea0
00400860  jalr t9
00400864  _addiu a1,a1,0xf58
00400868  lw gp,0x10(sp)
0040086c  nop
00400870  lw a0,-0x7fe8(gp)
00400874  nop
00400878  lw v0,0xeb4(a0)
0040087c  nop
00400880  beq v0,zero,0x004008a4
00400884  _nop
00400888  lw t9,-0x7fc8(gp)
0040088c  nop
00400890  beq t9,zero,0x004008a4
00400894  _addiu a0,a0,0xeb4
00400898  lw ra,0x1c(sp)
0040089c  jr t9
004008a0  _addiu sp,sp,0x20
004008a4  lw ra,0x1c(sp)
004008a8  nop
004008ac  jr ra
004008b0  _addiu sp,sp,0x20
