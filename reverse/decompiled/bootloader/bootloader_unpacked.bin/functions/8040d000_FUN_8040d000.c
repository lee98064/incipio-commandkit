/* FUN_8040d000 @ 8040d000 */

uint FUN_8040d000(void)

{
  uint uVar1;
  
  setCopReg(0,Status,Status & 0xffff00ff);
  FUN_80400ae4(0,&LAB_804005c0);
  uVar1 = Status & 0xffff00ff | 0xfc00;
  setCopReg(0,Status,uVar1);
  return uVar1;
}

