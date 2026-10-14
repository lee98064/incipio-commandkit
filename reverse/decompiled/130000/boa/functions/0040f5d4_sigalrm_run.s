# sigalrm_run @ 0040f5d4
0040f5d4  lui v0,0x47
0040f5d8  lw v1,-0x2010(v0)
0040f5dc  lui gp,0x47
0040f5e0  addiu gp,gp,0x2630
0040f5e4  addiu v1,v1,0x1
0040f5e8  sw v1,-0x2010(v0)
0040f5ec  lw t9,-0x7bdc(gp)
0040f5f0  lw v0,-0x7ab0(gp)
0040f5f4  li a0,0x1
0040f5f8  sw zero,0x0(v0)
0040f5fc  jr t9
0040f600  _nop
