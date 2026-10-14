/* FUN_80406390 @ 80406390 */

uint FUN_80406390(void)

{
  uint uVar1;
  
  uVar1 = (Status | 0x400000) ^ 0x400000 | 0xfc00;
  setCopReg(0,Status,uVar1);
  return uVar1;
}

