/* FUN_004433ec @ 004433ec */

undefined4 FUN_004433ec(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_18;
  undefined4 local_14;
  
  (*(code *)PTR_lseek_0046aa9c)(param_1,0x10000,0);
  local_18 = 0;
  local_14 = 0;
  iVar1 = (*(code *)PTR_read_0046a934)(param_1,param_2,0x10);
  uVar2 = 0;
  if (iVar1 == 0x10) {
    local_18 = DAT_004568a4;
    local_14 = DAT_004568ac;
    iVar1 = (*(code *)PTR_memcmp_0046a8d0)(param_2,&local_18,4);
    uVar2 = 1;
    if (iVar1 != 0) {
      iVar1 = (*(code *)PTR_memcmp_0046a8d0)(param_2,&local_14,4);
      uVar2 = 2;
      if (iVar1 != 0) {
        (*(code *)PTR_puts_0046ab3c)("no sys signature at !");
        uVar2 = 0;
      }
    }
  }
  (*(code *)PTR_lseek_0046aa9c)(param_1,0x10000,0);
  return uVar2;
}

