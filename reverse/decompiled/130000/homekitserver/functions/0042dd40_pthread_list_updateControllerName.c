/* pthread_list_updateControllerName @ 0042dd40 */

undefined4 pthread_list_updateControllerName(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  (*(code *)PTR_pthread_mutex_lock_0061308c)(&DAT_006147d0);
  if ((undefined4 **)DAT_006147e8 != &DAT_006147e8) {
    puVar1 = (undefined4 *)*DAT_00614810;
    puVar3 = DAT_00614810;
    while (puVar2 = puVar1, (undefined4 **)puVar3 != &DAT_00614810) {
      if (puVar3[-10] == param_1) {
        (*(code *)PTR_memcpy_006137d0)(puVar3 + -9,param_2,0x24);
        uVar4 = 0;
        goto LAB_0042dde0;
      }
      puVar1 = (undefined4 *)*puVar2;
      puVar3 = puVar2;
    }
  }
  uVar4 = 0xffffffff;
LAB_0042dde0:
  (*(code *)PTR_pthread_mutex_unlock_00611c8c)(&DAT_006147d0);
  return uVar4;
}

