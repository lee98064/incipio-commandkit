/* pthread_list_GetControllerName @ 0042dc6c */

undefined4 pthread_list_GetControllerName(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  uVar3 = 0xffffffff;
  if (param_2 != 0) {
    (*(code *)PTR_pthread_mutex_lock_0061308c)(&DAT_006147d0);
    if ((undefined4 **)DAT_006147e8 != &DAT_006147e8) {
      puVar1 = DAT_00614810;
      puVar2 = (undefined4 *)*DAT_00614810;
      while ((undefined4 **)puVar1 != &DAT_00614810) {
        if (puVar1[-10] == param_1) {
          (*(code *)PTR_memcpy_006137d0)(param_2,puVar1 + -9,0x24);
          uVar3 = 0;
          goto LAB_0042dd18;
        }
        puVar1 = puVar2;
        puVar2 = (undefined4 *)*puVar2;
      }
    }
    uVar3 = 0xffffffff;
LAB_0042dd18:
    (*(code *)PTR_pthread_mutex_unlock_00611c8c)(&DAT_006147d0);
  }
  return uVar3;
}

