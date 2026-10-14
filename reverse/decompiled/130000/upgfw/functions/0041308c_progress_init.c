/* progress_init @ 0041308c */

/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined4 progress_init(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined1 auStack_410 [1024];
  
  if (param_1 != (int *)0x0) {
    DAT_0057e9c8 = 0;
    DAT_0057e9c0 = param_1;
    (*(code *)PTR_printf_0057d248)("T %d\n",param_1[1]);
    (*(code *)PTR_printf_0057d248)("D %d\n",DAT_0057e9c0[2]);
    (*(code *)PTR_printf_0057d248)("U %d\n\n",DAT_0057e9c0[3]);
    if (DAT_0057e9c0[3] + DAT_0057e9c0[2] == DAT_0057e9c0[1]) {
      if (*DAT_0057e9c0 != 0) {
        iVar1 = (*(code *)PTR_fopen_0057de2c)("/var/fwProgress","w");
        if (iVar1 == 0) {
          return 0;
        }
        uVar2 = (*(code *)PTR_fileno_0057dcc8)(iVar1);
        (*(code *)PTR_flock_0057d83c)(uVar2,2);
        (*(code *)PTR_sprintf_0057d6e0)(auStack_410,"%s %d %d",*DAT_0057e9c0,0,0);
        uVar2 = (*(code *)PTR_strlen_0057e1dc)(auStack_410);
        (*(code *)PTR_fwrite_0057e70c)(auStack_410,1,uVar2,iVar1);
        uVar2 = (*(code *)PTR_fileno_0057dcc8)(iVar1);
        (*(code *)PTR_flock_0057d83c)(uVar2,8);
        (*(code *)PTR_fclose_0057deb8)(iVar1);
        return 0;
      }
      pcVar3 = "progressName null";
    }
    else {
      pcVar3 = "totalProgress != subprogress";
    }
    (*(code *)PTR_puts_0057d208)(pcVar3);
  }
  return 1;
}

