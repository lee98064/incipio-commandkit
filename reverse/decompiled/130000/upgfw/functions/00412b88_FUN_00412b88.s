# FUN_00412b88 @ 00412b88
00412b88  addiu sp,sp,-0x430
00412b8c  sw ra,0x42c(sp)
00412b90  sw s2,0x428(sp)
00412b94  sw s1,0x424(sp)
00412b98  sw s0,0x420(sp)
00412b9c  lui gp,0x58
00412ba0  addiu gp,gp,0x5010
00412ba4  sw gp,0x18(sp)
00412ba8  lui s2,0x58
00412bac  lw v0,-0x1640(s2)
00412bb0  lw t9,-0x71e4(gp)
00412bb4  lui a1,0x55
00412bb8  sw a0,0x0(v0)
00412bbc  lui a0,0x53
00412bc0  addiu a1,a1,-0x5bf4
00412bc4  jalr t9
00412bc8  _addiu a0,a0,0x2898
00412bcc  lw gp,0x18(sp)
00412bd0  beq v0,zero,0x00412cb0
00412bd4  _move s0,v0
00412bd8  lw t9,-0x7348(gp)
00412bdc  move a0,v0
00412be0  jalr t9
00412be4  _addiu s1,sp,0x20
00412be8  lw gp,0x18(sp)
00412bec  move a0,v0
00412bf0  lw t9,-0x77d4(gp)
00412bf4  nop
00412bf8  jalr t9
00412bfc  _li a1,0x2
00412c00  lw v0,-0x1640(s2)
00412c04  lw gp,0x18(sp)
00412c08  lui a1,0x53
00412c0c  lw a2,0x0(v0)
00412c10  lui v0,0x58
00412c14  lw a3,-0x1638(v0)
00412c18  lui v0,0x58
00412c1c  lw v0,-0x163c(v0)
00412c20  lw t9,-0x7930(gp)
00412c24  addiu a1,a1,0x28a8
00412c28  move a0,s1
00412c2c  jalr t9
00412c30  _sw v0,0x10(sp)
00412c34  lw gp,0x18(sp)
00412c38  nop
00412c3c  lw t9,-0x6e34(gp)
00412c40  nop
00412c44  jalr t9
00412c48  _move a0,s1
00412c4c  lw gp,0x18(sp)
00412c50  move a2,v0
00412c54  move a3,s0
00412c58  lw t9,-0x6904(gp)
00412c5c  li a1,0x1
00412c60  jalr t9
00412c64  _move a0,s1
00412c68  lw gp,0x18(sp)
00412c6c  nop
00412c70  lw t9,-0x7348(gp)
00412c74  nop
00412c78  jalr t9
00412c7c  _move a0,s0
00412c80  lw gp,0x18(sp)
00412c84  move a0,v0
00412c88  lw t9,-0x77d4(gp)
00412c8c  nop
00412c90  jalr t9
00412c94  _li a1,0x8
00412c98  lw gp,0x18(sp)
00412c9c  nop
00412ca0  lw t9,-0x7158(gp)
00412ca4  nop
00412ca8  jalr t9
00412cac  _move a0,s0
00412cb0  lw ra,0x42c(sp)
00412cb4  lw s2,0x428(sp)
00412cb8  lw s1,0x424(sp)
00412cbc  lw s0,0x420(sp)
00412cc0  jr ra
00412cc4  _addiu sp,sp,0x430
