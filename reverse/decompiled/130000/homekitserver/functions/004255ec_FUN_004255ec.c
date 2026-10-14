/* FUN_004255ec @ 004255ec */

undefined4 FUN_004255ec(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (param_1 != 0) {
    (*(code *)PTR_pthread_mutex_lock_0061308c)(&DAT_00613d60);
    uVar2 = 0xffffe5c2;
    iVar1 = (*(code *)PTR_open_006138f8)("/dev/mtdblock2",0);
    if (iVar1 != -1) {
      (*(code *)PTR_lseek_00612fd4)(iVar1,0,0);
      uVar2 = 0;
      (*(code *)PTR_read_00612ef0)(iVar1,param_1,0xc);
      (*(code *)PTR_close_0061276c)(iVar1);
    }
  }
  (*(code *)PTR_pthread_mutex_unlock_00611c8c)(&DAT_00613d60);
  return uVar2;
}

