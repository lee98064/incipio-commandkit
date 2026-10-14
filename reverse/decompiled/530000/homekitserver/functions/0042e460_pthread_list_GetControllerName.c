/* pthread_list_GetControllerName @ 0042e460 */

undefined4 pthread_list_GetControllerName(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  uVar3 = 0xffffffff;
  if (param_2 != 0) {
    (*(code *)PTR_pthread_mutex_lock_00613f24)(&DAT_00615670);
    if ((undefined4 **)DAT_00615688 != &DAT_00615688) {
      puVar1 = DAT_006156b0;
      puVar2 = (undefined4 *)*DAT_006156b0;
      while ((undefined4 **)puVar1 != &DAT_006156b0) {
        if (puVar1[-10] == param_1) {
          (*(code *)PTR_memcpy_00614674)(param_2,puVar1 + -9,0x24);
          uVar3 = 0;
          goto LAB_0042e50c;
        }
        puVar1 = puVar2;
        puVar2 = (undefined4 *)*puVar2;
      }
    }
    uVar3 = 0xffffffff;
LAB_0042e50c:
    (*(code *)PTR_pthread_mutex_unlock_00612b1c)(&DAT_00615670);
  }
  return uVar3;
}

