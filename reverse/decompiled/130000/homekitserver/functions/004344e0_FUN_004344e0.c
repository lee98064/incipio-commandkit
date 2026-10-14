/* FUN_004344e0 @ 004344e0 */

undefined4 FUN_004344e0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  if ((DAT_005ffd0c != -1) &&
     (iVar1 = (*(code *)PTR_mq_send_00611b74)(DAT_005ffd0c,param_1,param_2,0), iVar1 == 0)) {
    return 0;
  }
  return 0xffffffff;
}

