# FUN_80406e68 @ 80406e68
80406e68  j 0x80406ed4
80406e6c  _clear a2
80406e70  addiu v1,v0,-0x30
80406e74  andi v1,v1,0xff
80406e78  sltiu a3,v1,0xa
80406e7c  bne a3,zero,0x80406ec0
80406e80  _nop
80406e84  addiu v1,v0,-0x61
80406e88  andi v1,v1,0xff
80406e8c  sltiu v1,v1,0x6
80406e90  beq v1,zero,0x80406ea4
80406e94  _nop
80406e98  addiu v0,v0,-0x57
80406e9c  j 0x80406ec0
80406ea0  _andi v1,v0,0xff
80406ea4  addiu v1,v0,-0x41
80406ea8  andi v1,v1,0xff
80406eac  sltiu v1,v1,0x6
80406eb0  beq v1,zero,0x80406ef0
80406eb4  _nop
80406eb8  addiu v0,v0,-0x37
80406ebc  andi v1,v0,0xff
80406ec0  sll v0,a2,0x4
80406ec4  addu v1,v1,v0
80406ec8  sltu a2,v1,a2
80406ecc  bne a2,zero,0x80406ef0
80406ed0  _move a2,v1
80406ed4  lbu v0,0x0(a0)
80406ed8  nop
80406edc  bne v0,zero,0x80406e70
80406ee0  _addiu a0,a0,0x1
80406ee4  sw a2,0x0(a1)
80406ee8  jr ra
80406eec  _li v0,0x1
80406ef0  jr ra
80406ef4  _clear v0
