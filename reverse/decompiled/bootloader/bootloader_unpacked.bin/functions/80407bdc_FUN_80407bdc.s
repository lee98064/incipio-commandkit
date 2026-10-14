# FUN_80407bdc @ 80407bdc
80407bdc  addiu sp,sp,-0x18
80407be0  sw ra,0x14(sp)
80407be4  lui v0,0xb800
80407be8  ori v0,v0,0x1000
80407bec  lw a0,0x0(v0)
80407bf0  lui v1,0x800
80407bf4  or v1,a0,v1
80407bf8  sw v1,0x0(v0)
80407bfc  lui v0,0x8041
80407c00  lw a0,-0x1340(v0)
80407c04  jal 0x80407b6c
80407c08  _nop
80407c0c  lw ra,0x14(sp)
80407c10  nop
80407c14  jr ra
80407c18  _addiu sp,sp,0x18
