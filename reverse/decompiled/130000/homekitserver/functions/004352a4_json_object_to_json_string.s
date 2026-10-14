# json_object_to_json_string @ 004352a4
004352a4  lui gp,0x1e
004352a8  addiu gp,gp,0x41dc
004352ac  addu gp,gp,t9
004352b0  addiu sp,sp,-0x20
004352b4  sw ra,0x1c(sp)
004352b8  sw s8,0x18(sp)
004352bc  move s8,sp
004352c0  sw gp,0x10(sp)
004352c4  sw a0,0x20(s8)
004352c8  lw a0,0x20(s8)
004352cc  li a1,0x1
004352d0  lw v0,-0x5f4c(gp)
004352d4  nop
004352d8  move t9,v0
004352dc  jalr t9
004352e0  _nop
004352e4  lw gp,0x10(s8)
004352e8  move sp,s8
004352ec  lw ra,0x1c(sp)
004352f0  lw s8,0x18(sp)
004352f4  addiu sp,sp,0x20
004352f8  jr ra
004352fc  _nop
