/* FUN_004352b0 @ 004352b0 */

undefined4 FUN_004352b0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  if ((DAT_00600b9c != -1) &&
     (iVar1 = (*(code *)PTR_mq_send_00612a04)(DAT_00600b9c,param_1,param_2,0), iVar1 == 0)) {
    return 0;
  }
  return 0xffffffff;
}

