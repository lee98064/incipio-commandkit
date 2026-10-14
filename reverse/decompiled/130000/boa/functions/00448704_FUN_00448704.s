# FUN_00448704 @ 00448704
00448704  addiu sp,sp,-0x148
00448708  sw ra,0x144(sp)
0044870c  sw s4,0x140(sp)
00448710  sw s3,0x13c(sp)
00448714  sw s2,0x138(sp)
00448718  sw s1,0x134(sp)
0044871c  sw s0,0x130(sp)
00448720  lui gp,0x47
00448724  addiu gp,gp,0x2630
00448728  sw gp,0x18(sp)
0044872c  lw t9,-0x7fbc(gp)
00448730  lui s1,0x45
00448734  lui a1,0x45
00448738  addiu a1,a1,0x79dc
0044873c  addiu a2,s1,-0x4cd4
00448740  jalr t9
00448744  _move s0,a0
00448748  lw gp,0x18(sp)
0044874c  lui a1,0x45
00448750  addiu a1,a1,0x7a7c
00448754  lw t9,-0x7fbc(gp)
00448758  move a0,s0
0044875c  addiu a2,s1,-0x4cd4
00448760  jalr t9
00448764  _move s4,v0
00448768  lw gp,0x18(sp)
0044876c  lui a1,0x45
00448770  addiu a1,a1,0x7a8c
00448774  lw t9,-0x7fbc(gp)
00448778  move a0,s0
0044877c  addiu a2,s1,-0x4cd4
00448780  jalr t9
00448784  _move s2,v0
00448788  lw gp,0x18(sp)
0044878c  move a0,s2
00448790  li a1,0x5c
00448794  lw t9,-0x7e14(gp)
00448798  li a2,0x2f
0044879c  jalr t9
004487a0  _move s3,v0
004487a4  lw gp,0x18(sp)
004487a8  move a0,s3
004487ac  li a1,0x5c
004487b0  lw t9,-0x7e14(gp)
004487b4  nop
004487b8  jalr t9
004487bc  _li a2,0x2f
004487c0  lw gp,0x18(sp)
004487c4  nop
004487c8  lw t9,-0x7e3c(gp)
004487cc  nop
004487d0  jalr t9
004487d4  _move a0,s2
004487d8  lw gp,0x18(sp)
004487dc  beq v0,zero,0x00448800
004487e0  _nop
004487e4  lw t9,-0x7e3c(gp)
004487e8  nop
004487ec  jalr t9
004487f0  _move a0,s3
004487f4  lw gp,0x18(sp)
004487f8  bne v0,zero,0x0044884c
004487fc  _nop
00448800  jal 0x00447f50
00448804  _move a0,s0
00448808  lw gp,0x18(sp)
0044880c  lui a1,0x45
00448810  lui a2,0x45
00448814  lw t9,-0x7cd4(gp)
00448818  move a0,s0
0044881c  addiu a1,a1,-0x271c
00448820  jalr t9
00448824  _addiu a2,a2,0x7a98
00448828  lw gp,0x18(sp)
0044882c  lui a1,0x45
00448830  move a0,s0
00448834  lw t9,-0x7cd4(gp)
00448838  nop
0044883c  jalr t9
00448840  _addiu a1,a1,-0x2050
00448844  b 0x00448a28
00448848  _nop
0044884c  lw t9,-0x7c08(gp)
00448850  move a1,s3
00448854  jalr t9
00448858  _li a0,0x2a8
0044885c  lw gp,0x18(sp)
00448860  move a1,s2
00448864  lw t9,-0x7c08(gp)
00448868  nop
0044886c  jalr t9
00448870  _li a0,0x2a9
00448874  lw gp,0x18(sp)
00448878  lui a1,0x45
0044887c  addiu a1,a1,0x7ab0
00448880  lw t9,-0x7fbc(gp)
00448884  addiu a2,s1,-0x4cd4
00448888  jalr t9
0044888c  _move a0,s0
00448890  lw gp,0x18(sp)
00448894  beq v0,zero,0x004488b4
00448898  _nop
0044889c  lw t9,-0x7ef4(gp)
004488a0  nop
004488a4  jalr t9
004488a8  _move a0,v0
004488ac  lw gp,0x18(sp)
004488b0  sw v0,0x20(sp)
004488b4  lw t9,-0x7c08(gp)
004488b8  li a0,0x2aa
004488bc  jalr t9
004488c0  _addiu a1,sp,0x20
004488c4  lw gp,0x18(sp)
004488c8  lui a1,0x45
004488cc  lui a2,0x45
004488d0  lw t9,-0x7fbc(gp)
004488d4  addiu a1,a1,0x7abc
004488d8  addiu a2,a2,-0x4cd4
004488dc  jalr t9
004488e0  _move a0,s0
004488e4  lw gp,0x18(sp)
004488e8  beq v0,zero,0x00448908
004488ec  _nop
004488f0  lw t9,-0x7ef4(gp)
004488f4  nop
004488f8  jalr t9
004488fc  _move a0,v0
00448900  lw gp,0x18(sp)
00448904  sw v0,0x24(sp)
00448908  lw t9,-0x7c08(gp)
0044890c  li a0,0x2ab
00448910  jalr t9
00448914  _addiu a1,sp,0x24
00448918  lw gp,0x18(sp)
0044891c  lui a1,0x45
00448920  lui a2,0x45
00448924  lw t9,-0x7fbc(gp)
00448928  addiu a1,a1,0x7ac8
0044892c  addiu a2,a2,-0x4cd4
00448930  jalr t9
00448934  _move a0,s0
00448938  lw gp,0x18(sp)
0044893c  beq v0,zero,0x0044895c
00448940  _nop
00448944  lw t9,-0x7ef4(gp)
00448948  nop
0044894c  jalr t9
00448950  _move a0,v0
00448954  lw gp,0x18(sp)
00448958  sw v0,0x28(sp)
0044895c  lw t9,-0x7c08(gp)
00448960  li a0,0x2ac
00448964  jalr t9
00448968  _addiu a1,sp,0x28
0044896c  lw gp,0x18(sp)
00448970  lui a1,0x45
00448974  lui a2,0x45
00448978  lw t9,-0x7fbc(gp)
0044897c  addiu a1,a1,0x1c84
00448980  addiu a2,a2,-0x4cd4
00448984  jalr t9
00448988  _move a0,s0
0044898c  lw gp,0x18(sp)
00448990  beq v0,zero,0x004489b0
00448994  _nop
00448998  lw t9,-0x7ef4(gp)
0044899c  nop
004489a0  jalr t9
004489a4  _move a0,v0
004489a8  lw gp,0x18(sp)
004489ac  sw v0,0x2c(sp)
004489b0  lw t9,-0x7c08(gp)
004489b4  addiu a1,sp,0x2c
004489b8  jalr t9
004489bc  _li a0,0x2ad
004489c0  lw gp,0x18(sp)
004489c4  nop
004489c8  lw t9,-0x7c04(gp)
004489cc  nop
004489d0  jalr t9
004489d4  _li a0,0x4
004489d8  lw gp,0x18(sp)
004489dc  nop
004489e0  lw t9,-0x7d68(gp)
004489e4  nop
004489e8  jalr t9
004489ec  _nop
004489f0  lw gp,0x18(sp)
004489f4  beq v0,zero,0x00448a48
004489f8  _addiu s1,sp,0x30
004489fc  lw t9,-0x79e8(gp)
00448a00  move a0,v0
00448a04  clear a1
00448a08  jalr t9
00448a0c  _clear a2
00448a10  lw gp,0x18(sp)
00448a14  move a0,s0
00448a18  lw t9,-0x79b8(gp)
00448a1c  nop
00448a20  jalr t9
00448a24  _move a1,s4
00448a28  lw ra,0x144(sp)
00448a2c  lw s4,0x140(sp)
00448a30  lw s3,0x13c(sp)
00448a34  lw s2,0x138(sp)
00448a38  lw s1,0x134(sp)
00448a3c  lw s0,0x130(sp)
00448a40  jr ra
00448a44  _addiu sp,sp,0x148
00448a48  lw t9,-0x7a4c(gp)
00448a4c  lui s0,0x45
00448a50  addiu s0,s0,0x7ad4
00448a54  lui a2,0x45
00448a58  lui a3,0x45
00448a5c  addiu a2,a2,-0x27e4
00448a60  addiu a3,a3,-0x27dc
00448a64  move a0,s1
00448a68  li a1,0x64
00448a6c  jalr t9
00448a70  _sw s0,0x10(sp)
00448a74  lw gp,0x18(sp)
00448a78  move a0,s1
00448a7c  move a1,s0
00448a80  lw t9,-0x7ae4(gp)
00448a84  nop
00448a88  jalr t9
00448a8c  _clear a2
00448a90  lw gp,0x18(sp)
00448a94  nop
00448a98  lw t9,-0x7ed4(gp)
00448a9c  nop
00448aa0  jalr t9
00448aa4  _li a0,0x1
