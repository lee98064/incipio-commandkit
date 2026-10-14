# FUN_00412b9c @ 00412b9c
00412b9c  addiu sp,sp,-0x20
00412ba0  sw ra,0x1c(sp)
00412ba4  lui gp,0x47
00412ba8  addiu gp,gp,0x2630
00412bac  sw gp,0x10(sp)
00412bb0  move a2,a1
00412bb4  lui a1,0x45
00412bb8  jal 0x00411c70
00412bbc  _addiu a1,a1,-0x3fec
00412bc0  lw gp,0x10(sp)
00412bc4  beq v0,zero,0x00412be0
00412bc8  _clear v1
00412bcc  li t0,0xd
00412bd0  li a3,0xa
00412bd4  lw a1,-0x7b10(gp)
00412bd8  b 0x00412bf8
00412bdc  _li a2,0x40
00412be0  lui a0,0x45
00412be4  lw t9,-0x7af4(gp)
00412be8  b 0x00412c40
00412bec  _addiu a0,a0,-0x3fcc
00412bf0  sb a0,0x0(t1)
00412bf4  addiu v1,v1,0x1
00412bf8  lb a0,0x0(v0)
00412bfc  nop
00412c00  bne a0,t0,0x00412c18
00412c04  _addu t1,a1,v1
00412c08  lb t2,0x1(v0)
00412c0c  nop
00412c10  beq t2,a3,0x00412c28
00412c14  _nop
00412c18  bne v1,a2,0x00412bf0
00412c1c  _addiu v0,v0,0x1
00412c20  b 0x00412c34
00412c24  _nop
00412c28  slti v0,v1,0x40
00412c2c  bne v0,zero,0x00412c50
00412c30  _nop
00412c34  lw t9,-0x7af4(gp)
00412c38  lui a0,0x45
00412c3c  addiu a0,a0,-0x3fb0
00412c40  jalr t9
00412c44  _nop
00412c48  b 0x00412c60
00412c4c  _li v0,-0x1
00412c50  lw a0,-0x7b10(gp)
00412c54  clear v0
00412c58  addu v1,a0,v1
00412c5c  sb zero,0x0(v1)
00412c60  lw ra,0x1c(sp)
00412c64  nop
00412c68  jr ra
00412c6c  _addiu sp,sp,0x20
