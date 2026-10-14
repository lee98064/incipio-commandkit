# FUN_0043db50 @ 0043db50
0043db50  lui gp,0x1e
0043db54  addiu gp,gp,-0x46d0
0043db58  addu gp,gp,t9
0043db5c  addiu sp,sp,-0x1030
0043db60  sw ra,0x102c(sp)
0043db64  sw s8,0x1028(sp)
0043db68  move s8,sp
0043db6c  sw gp,0x10(sp)
0043db70  sw a0,0x1030(s8)
0043db74  lw a0,0x1030(s8)
0043db78  clear a1
0043db7c  lw v0,-0x5b88(gp)
0043db80  nop
0043db84  move t9,v0
0043db88  jalr t9
0043db8c  _nop
0043db90  lw gp,0x10(s8)
0043db94  sw v0,0x1c(s8)
0043db98  lw v0,0x1c(s8)
0043db9c  nop
0043dba0  bgez v0,0x0043dc20
0043dba4  _nop
0043dba8  lw v0,-0x5b04(gp)
0043dbac  nop
0043dbb0  move t9,v0
0043dbb4  jalr t9
0043dbb8  _nop
0043dbbc  lw gp,0x10(s8)
0043dbc0  lw v0,0x0(v0)
0043dbc4  nop
0043dbc8  move a0,v0
0043dbcc  lw v0,-0x7bc8(gp)
0043dbd0  nop
0043dbd4  move t9,v0
0043dbd8  jalr t9
0043dbdc  _nop
0043dbe0  lw gp,0x10(s8)
0043dbe4  nop
0043dbe8  lw v1,-0x7fd0(gp)
0043dbec  nop
0043dbf0  addiu a0,v1,-0x2080
0043dbf4  lw a1,0x1030(s8)
0043dbf8  move a2,v0
0043dbfc  lw v0,-0x611c(gp)
0043dc00  nop
0043dc04  move t9,v0
0043dc08  jalr t9
0043dc0c  _nop
0043dc10  lw gp,0x10(s8)
0043dc14  clear v0
0043dc18  b 0x0043de1c
0043dc1c  _nop
0043dc20  lw v0,-0x685c(gp)
0043dc24  nop
0043dc28  move t9,v0
0043dc2c  jalr t9
0043dc30  _nop
0043dc34  lw gp,0x10(s8)
0043dc38  sw v0,0x24(s8)
0043dc3c  lw v0,0x24(s8)
0043dc40  nop
0043dc44  bne v0,zero,0x0043dccc
0043dc48  _nop
0043dc4c  lw a0,0x1c(s8)
0043dc50  lw v0,-0x6d14(gp)
0043dc54  nop
0043dc58  move t9,v0
0043dc5c  jalr t9
0043dc60  _nop
0043dc64  lw gp,0x10(s8)
0043dc68  nop
0043dc6c  lw v0,-0x7fd0(gp)
0043dc70  nop
0043dc74  addiu a0,v0,-0x204c
0043dc78  lw v0,-0x611c(gp)
0043dc7c  nop
0043dc80  move t9,v0
0043dc84  jalr t9
0043dc88  _nop
0043dc8c  lw gp,0x10(s8)
0043dc90  clear v0
0043dc94  b 0x0043de1c
0043dc98  _nop
0043dc9c  addiu v0,s8,0x28
0043dca0  lw a0,0x24(s8)
0043dca4  move a1,v0
0043dca8  lw a2,0x18(s8)
0043dcac  lw v0,-0x7d18(gp)
0043dcb0  nop
0043dcb4  move t9,v0
0043dcb8  jalr t9
0043dcbc  _nop
0043dcc0  lw gp,0x10(s8)
0043dcc4  b 0x0043dcd0
0043dcc8  _nop
0043dccc  nop
0043dcd0  addiu v0,s8,0x28
0043dcd4  lw a0,0x1c(s8)
0043dcd8  move a1,v0
0043dcdc  li a2,0x1000
0043dce0  lw v0,-0x6590(gp)
0043dce4  nop
0043dce8  move t9,v0
0043dcec  jalr t9
0043dcf0  _nop
0043dcf4  lw gp,0x10(s8)
0043dcf8  sw v0,0x18(s8)
0043dcfc  lw v0,0x18(s8)
0043dd00  nop
0043dd04  bgtz v0,0x0043dc9c
0043dd08  _nop
0043dd0c  lw a0,0x1c(s8)
0043dd10  lw v0,-0x6d14(gp)
0043dd14  nop
0043dd18  move t9,v0
0043dd1c  jalr t9
0043dd20  _nop
0043dd24  lw gp,0x10(s8)
0043dd28  lw v0,0x18(s8)
0043dd2c  nop
0043dd30  bgez v0,0x0043ddcc
0043dd34  _nop
0043dd38  lw v0,-0x5b04(gp)
0043dd3c  nop
0043dd40  move t9,v0
0043dd44  jalr t9
0043dd48  _nop
0043dd4c  lw gp,0x10(s8)
0043dd50  lw v0,0x0(v0)
0043dd54  nop
0043dd58  move a0,v0
0043dd5c  lw v0,-0x7bc8(gp)
0043dd60  nop
0043dd64  move t9,v0
0043dd68  jalr t9
0043dd6c  _nop
0043dd70  lw gp,0x10(s8)
0043dd74  nop
0043dd78  lw v1,-0x7fd0(gp)
0043dd7c  nop
0043dd80  addiu a0,v1,-0x2080
0043dd84  lw a1,0x1030(s8)
0043dd88  move a2,v0
0043dd8c  lw v0,-0x65a0(gp)
0043dd90  nop
0043dd94  move t9,v0
0043dd98  jalr t9
0043dd9c  _nop
0043dda0  lw gp,0x10(s8)
0043dda4  lw a0,0x24(s8)
0043dda8  lw v0,-0x7b7c(gp)
0043ddac  nop
0043ddb0  move t9,v0
0043ddb4  jalr t9
0043ddb8  _nop
0043ddbc  lw gp,0x10(s8)
0043ddc0  clear v0
0043ddc4  b 0x0043de1c
0043ddc8  _nop
0043ddcc  lw v0,0x24(s8)
0043ddd0  nop
0043ddd4  lw v0,0x0(v0)
0043ddd8  nop
0043dddc  move a0,v0
0043dde0  lw v0,-0x6838(gp)
0043dde4  nop
0043dde8  move t9,v0
0043ddec  jalr t9
0043ddf0  _nop
0043ddf4  lw gp,0x10(s8)
0043ddf8  sw v0,0x20(s8)
0043ddfc  lw a0,0x24(s8)
0043de00  lw v0,-0x7b7c(gp)
0043de04  nop
0043de08  move t9,v0
0043de0c  jalr t9
0043de10  _nop
0043de14  lw gp,0x10(s8)
0043de18  lw v0,0x20(s8)
0043de1c  move sp,s8
0043de20  lw ra,0x102c(sp)
0043de24  lw s8,0x1028(sp)
0043de28  addiu sp,sp,0x1030
0043de2c  jr ra
0043de30  _nop
