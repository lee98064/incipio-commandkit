/* FUN_00421c3c @ 00421c3c */

undefined4 FUN_00421c3c(int param_1,int param_2,int param_3,int *param_4,int *param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == 0) {
    uVar1 = 0xffffe5cf;
  }
  else {
    uVar1 = 0xffffe5cf;
    if ((param_2 != 0) && (param_3 != 0)) {
      iVar2 = (*(code *)PTR_calloc_00613a18)(param_3 + 200,1);
      *param_4 = iVar2;
      uVar1 = 0xffffe5b8;
      if (iVar2 != 0) {
        (*(code *)PTR_snprintf_00612f8c)
                  (iVar2,200,"%s %d %s%s%s %s%s%s %d%s","HTTP/1.1",200,&DAT_005ab8f8,&DAT_005ab974,
                   "Content-Type:",param_1,&DAT_005ab974,"Content-Length:",param_3,"\r\n\r\n");
        iVar2 = (*(code *)PTR_strlen_006130b4)(*param_4);
        *param_5 = iVar2 + param_3;
        iVar3 = *param_4;
        iVar2 = (*(code *)PTR_strlen_006130b4)(iVar3);
        (*(code *)PTR_memcpy_006137d0)(iVar3 + iVar2,param_2,param_3);
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}

