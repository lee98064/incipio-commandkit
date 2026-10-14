/* pthread_list_updateControllerName @ 0042e534 */

undefined4 pthread_list_updateControllerName(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  (*(code *)PTR_pthread_mutex_lock_00613f24)(&DAT_00615670);
  if ((undefined4 **)DAT_00615688 != &DAT_00615688) {
    puVar1 = (undefined4 *)*DAT_006156b0;
    puVar3 = DAT_006156b0;
    while (puVar2 = puVar1, (undefined4 **)puVar3 != &DAT_006156b0) {
      if (puVar3[-10] == param_1) {
        (*(code *)PTR_memcpy_00614674)(puVar3 + -9,param_2,0x24);
        uVar4 = 0;
        goto LAB_0042e5d4;
      }
      puVar1 = (undefined4 *)*puVar2;
      puVar3 = puVar2;
    }
  }
  uVar4 = 0xffffffff;
LAB_0042e5d4:
  (*(code *)PTR_pthread_mutex_unlock_00612b1c)(&DAT_00615670);
  return uVar4;
}

