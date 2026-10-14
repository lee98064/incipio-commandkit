/* FUN_00421dc0 @ 00421dc0 */

undefined4 FUN_00421dc0(int param_1,int param_2,int param_3,int *param_4,int *param_5)

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
      iVar2 = (*(code *)PTR_calloc_006148c0)(param_3 + 200,1);
      *param_4 = iVar2;
      uVar1 = 0xffffe5b8;
      if (iVar2 != 0) {
        (*(code *)PTR_snprintf_00613e24)
                  (iVar2,200,"%s %d %s%s%s %s%s%s %d%s","HTTP/1.1",200,&DAT_005ac728,&DAT_005ac7b8,
                   "Content-Type:",param_1,&DAT_005ac7b8,"Content-Length:",param_3,"\r\n\r\n");
        iVar2 = (*(code *)PTR_strlen_00613f4c)(*param_4);
        *param_5 = iVar2 + param_3;
        iVar3 = *param_4;
        iVar2 = (*(code *)PTR_strlen_00613f4c)(iVar3);
        (*(code *)PTR_memcpy_00614674)(iVar3 + iVar2,param_2,param_3);
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}

