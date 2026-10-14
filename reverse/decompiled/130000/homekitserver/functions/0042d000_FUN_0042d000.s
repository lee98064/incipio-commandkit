# FUN_0042d000 @ 0042d000
0042d000  addiu sp,sp,-0x20
0042d004  sw ra,0x1c(sp)
0042d008  lui gp,0x62
0042d00c  addiu gp,gp,-0x6b80
0042d010  sw gp,0x10(sp)
0042d014  lw t9,-0x7244(gp)
0042d018  clear a1
0042d01c  jalr t9
0042d020  _li a2,0x118
0042d024  lw ra,0x1c(sp)
0042d028  clear v0
0042d02c  jr ra
0042d030  _addiu sp,sp,0x20
