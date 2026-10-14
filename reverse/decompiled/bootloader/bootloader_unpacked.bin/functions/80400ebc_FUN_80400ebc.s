# FUN_80400ebc @ 80400ebc
80400ebc  sra a1,a1,0x1
80400ec0  clear v0
80400ec4  lui t0,0x1
80400ec8  lui a3,0xffff
80400ecc  j 0x80400ef4
80400ed0  _ori a3,a3,0x1
80400ed4  lhu v1,0x0(a0)
80400ed8  nop
80400edc  addu v0,v0,v1
80400ee0  sltu a2,v0,t0
80400ee4  addu v1,v0,a3
80400ee8  movz v0,v1,a2
80400eec  addiu a0,a0,0x2
80400ef0  addiu a1,a1,-0x1
80400ef4  bne a1,zero,0x80400ed4
80400ef8  _nop
80400efc  nor v0,zero,v0
80400f00  jr ra
80400f04  _andi v0,v0,0xffff
