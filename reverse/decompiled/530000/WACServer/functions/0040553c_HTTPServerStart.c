/* HTTPServerStart @ 0040553c */

undefined4 HTTPServerStart(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = 0xffffe5cf;
  if (param_1 != 0) {
    iVar2 = (*(code *)PTR_pthread_create_004332dc)(param_1 + 0x34,0,FUN_004055b4,param_1);
    if (iVar2 == 0) {
      return 0;
    }
    (*(code *)PTR_perror_004332a0)("pthread_create perror");
    uVar1 = 0xffffe5b0;
  }
  *(undefined4 *)(param_1 + 8) = 4;
  return uVar1;
}

