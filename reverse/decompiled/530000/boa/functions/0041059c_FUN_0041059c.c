/* FUN_0041059c @ 0041059c */

int FUN_0041059c(short param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  (*(code *)PTR_snprintf_0046abe4)
            (&DAT_0046e000,0x1000,"%s/boa-temp.XXXXXX",*(undefined4 *)PTR_tempdir_0046aa60);
  iVar1 = (*(code *)PTR_mkstemp_0046a7e8)(&DAT_0046e000);
  if (iVar1 == -1) {
    (*(code *)PTR_perror_0046ab44)("mkstemp");
    return 0;
  }
  if (param_2 != 0) {
    uVar2 = (*(code *)PTR_strlen_0046a714)(&DAT_0046e000);
    if (param_3 <= uVar2) {
      iVar3 = 0;
      (*(code *)PTR_close_0046a694)(iVar1);
      (*(code *)PTR_fputs_0046a6e4)
                ("not enough memory for memcpy in storage\n",*(undefined4 *)PTR_stderr_0046a7f0);
      goto LAB_004106c0;
    }
    (*(code *)PTR_memcpy_0046ab5c)(param_2,&DAT_0046e000,uVar2 + 1);
  }
  iVar3 = iVar1;
  if (param_1 == 0) {
    return iVar1;
  }
LAB_004106c0:
  iVar1 = (*(code *)PTR_unlink_0046a900)(&DAT_0046e000);
  if (iVar1 == -1) {
    (*(code *)PTR_close_0046a694)(iVar3);
    (*(code *)PTR_fputs_0046a6e4)("unlink temp file\n",*(undefined4 *)PTR_stderr_0046a7f0);
    return 0;
  }
  return iVar3;
}

