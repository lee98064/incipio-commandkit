/* FUN_00434484 @ 00434484 */

undefined4 FUN_00434484(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  if ((DAT_005ffd08 != -1) &&
     (iVar1 = (*(code *)PTR_mq_send_00611b74)(DAT_005ffd08,param_1,param_2,0), iVar1 == 0)) {
    return 0;
  }
  return 0xffffffff;
}

