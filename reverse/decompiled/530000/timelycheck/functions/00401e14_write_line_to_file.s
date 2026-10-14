# write_line_to_file @ 00401e14
00401e14  addiu sp,sp,-0x228
00401e18  sw ra,0x224(sp)
00401e1c  sw s2,0x220(sp)
00401e20  sw s1,0x21c(sp)
00401e24  sw s0,0x218(sp)
00401e28  lui gp,0x43
00401e2c  addiu gp,gp,0x3060
00401e30  sw gp,0x10(sp)
00401e34  li v0,0x1
00401e38  move s2,a2
00401e3c  bne a1,v0,0x00401e50
00401e40  _move s1,a0
00401e44  lw t9,-0x7fac(gp)
00401e48  b 0x00401e64
00401e4c  _li a1,0x302
00401e50  li v0,0x2
00401e54  bne a1,v0,0x00401e9c
00401e58  _clear s0
00401e5c  lw t9,-0x7fac(gp)
00401e60  li a1,0xa
00401e64  jalr t9
00401e68  _nop
00401e6c  lw gp,0x10(sp)
00401e70  bgez v0,0x00401e9c
00401e74  _move s0,v0
00401e78  lw v0,-0x7f7c(gp)
00401e7c  lw t9,-0x7eec(gp)
00401e80  lui a1,0x41
00401e84  lw a0,0x0(v0)
00401e88  addiu a1,a1,0x7900
00401e8c  jalr t9
00401e90  _move a2,s1
00401e94  b 0x00401f00
00401e98  _clear v0
00401e9c  lw t9,-0x7e58(gp)
00401ea0  addiu s1,sp,0x18
00401ea4  move a1,s2
00401ea8  jalr t9
00401eac  _move a0,s1
00401eb0  lw gp,0x10(sp)
00401eb4  nop
00401eb8  lw t9,-0x7fa4(gp)
00401ebc  nop
00401ec0  jalr t9
00401ec4  _move a0,s1
00401ec8  lw gp,0x10(sp)
00401ecc  move a1,s1
00401ed0  move a2,v0
00401ed4  lw t9,-0x7ee8(gp)
00401ed8  nop
00401edc  jalr t9
00401ee0  _move a0,s0
00401ee4  lw gp,0x10(sp)
00401ee8  nop
00401eec  lw t9,-0x7fc8(gp)
00401ef0  nop
00401ef4  jalr t9
00401ef8  _move a0,s0
00401efc  li v0,0x1
00401f00  lw ra,0x224(sp)
00401f04  lw s2,0x220(sp)
00401f08  lw s1,0x21c(sp)
00401f0c  lw s0,0x218(sp)
00401f10  jr ra
00401f14  _addiu sp,sp,0x228
