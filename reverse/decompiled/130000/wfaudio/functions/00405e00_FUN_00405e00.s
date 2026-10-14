# FUN_00405e00 @ 00405e00
00405e00  lui gp,0x43
00405e04  addiu gp,gp,-0x4f70
00405e08  lw v1,-0x7dd8(gp)
00405e0c  nop
00405e10  lw v1,0x0(v1)
00405e14  move v0,a1
00405e18  lb a1,0x0(v0)
00405e1c  nop
00405e20  sll a1,a1,0x1
00405e24  addu a1,v1,a1
00405e28  lhu a1,0x0(a1)
00405e2c  nop
00405e30  andi a1,a1,0x20
00405e34  bne a1,zero,0x00405e18
00405e38  _addiu v0,v0,0x1
00405e3c  addiu v0,v0,-0x1
00405e40  b 0x00405ee4
00405e44  _li a3,0x3a
00405e48  lw t2,0x0(t0)
00405e4c  nop
00405e50  addu t1,t2,t1
00405e54  lhu t1,0x0(t1)
00405e58  nop
00405e5c  andi t1,t1,0x20
00405e60  bne t1,zero,0x00405efc
00405e64  _nop
00405e68  bne a2,a3,0x00405ed4
00405e6c  _nop
00405e70  sb a3,0x0(a0)
00405e74  lw a3,-0x7dd8(gp)
00405e78  b 0x00405e8c
00405e7c  _nop
00405e80  sb a2,0x0(a1)
00405e84  addiu v1,v1,0x1
00405e88  addiu a1,a1,0x1
00405e8c  lb a2,0x0(v1)
00405e90  lw t1,0x0(a3)
00405e94  sll t0,a2,0x1
00405e98  addu t0,t1,t0
00405e9c  lhu t0,0x0(t0)
00405ea0  nop
00405ea4  andi t0,t0,0x8
00405ea8  bne t0,zero,0x00405e80
00405eac  _nop
00405eb0  xori a2,a2,0x3a
00405eb4  movn v1,v0,a2
00405eb8  lb a3,0x0(v1)
00405ebc  movn a1,a0,a2
00405ec0  beq a3,zero,0x00405f00
00405ec4  _clear v0
00405ec8  addiu v0,v1,0x1
00405ecc  b 0x00405efc
00405ed0  _move a0,a1
00405ed4  sb a2,0x0(a0)
00405ed8  move v0,v1
00405edc  b 0x00405ee8
00405ee0  _move a0,a1
00405ee4  lw t0,-0x7dd8(gp)
00405ee8  lb a2,0x0(v0)
00405eec  addiu v1,v0,0x1
00405ef0  addiu a1,a0,0x1
00405ef4  bne a2,zero,0x00405e48
00405ef8  _sll t1,a2,0x1
00405efc  sb zero,0x0(a0)
00405f00  jr ra
00405f04  _nop
