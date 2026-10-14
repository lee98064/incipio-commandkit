# publish_boot_bank @ 80407ce4
80407ce4  addiu sp,sp,-0x18
80407ce8  sw ra,0x14(sp)
80407cec  sw s0,0x10(sp)
80407cf0  lui s0,0x8041
80407cf4  lui a0,0x8041
80407cf8  lui v0,0x8041
80407cfc  lw a1,-0x1194(v0)
80407d00  lw a2,-0x250(s0)
80407d04  lui v0,0x8041
80407d08  lw a3,-0x24c(v0)
80407d0c  jal 0x804079cc
80407d10  _addiu a0,a0,-0x2480
80407d14  lw v1,-0x250(s0)
80407d18  li v0,0x2
80407d1c  bne v1,v0,0x80407d38
80407d20  _lui v0,0xb800
80407d24  ori v0,v0,0x3504
80407d28  lw v1,0x0(v0)
80407d2c  nop
80407d30  ori v1,v1,0x1
80407d34  sw v1,0x0(v0)
80407d38  lw ra,0x14(sp)
80407d3c  lw s0,0x10(sp)
80407d40  jr ra
80407d44  _addiu sp,sp,0x18
