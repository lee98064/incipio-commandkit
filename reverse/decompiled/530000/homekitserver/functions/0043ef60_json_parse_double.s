# json_parse_double @ 0043ef60
0043ef60  lui gp,0x1e
0043ef64  addiu gp,gp,-0x4c50
0043ef68  addu gp,gp,t9
0043ef6c  addiu sp,sp,-0x20
0043ef70  sw ra,0x1c(sp)
0043ef74  sw s8,0x18(sp)
0043ef78  move s8,sp
0043ef7c  sw gp,0x10(sp)
0043ef80  sw a0,0x20(s8)
0043ef84  sw a1,0x24(s8)
0043ef88  lw a0,0x20(s8)
0043ef8c  lw v0,-0x7fd0(gp)
0043ef90  nop
0043ef94  addiu a1,v0,-0x10f8
0043ef98  lw a2,0x24(s8)
0043ef9c  lw v0,-0x6ea0(gp)
0043efa0  nop
0043efa4  move t9,v0
0043efa8  jalr t9
0043efac  _nop
0043efb0  lw gp,0x10(s8)
0043efb4  xori v0,v0,0x1
0043efb8  sltu v0,zero,v0
0043efbc  move sp,s8
0043efc0  lw ra,0x1c(sp)
0043efc4  lw s8,0x18(sp)
0043efc8  addiu sp,sp,0x20
0043efcc  jr ra
0043efd0  _nop
