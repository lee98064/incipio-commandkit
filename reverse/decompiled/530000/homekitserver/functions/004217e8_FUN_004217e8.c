/* FUN_004217e8 @ 004217e8 */

undefined4
FUN_004217e8(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5,int *param_6,
            int *param_7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (param_3 == 0) {
    uVar1 = 0xffffe5cf;
  }
  else {
    uVar1 = 0xffffe5cf;
    if ((param_4 != 0) && (param_5 != 0)) {
      iVar2 = (*(code *)PTR_calloc_006148c0)(param_5 + 500,1);
      *param_6 = iVar2;
      uVar1 = 0xffffe5b8;
      if (iVar2 != 0) {
        (*(code *)PTR_sprintf_00612e20)
                  (iVar2,"%s %s? %s %s%s %s%s%s %d%s",param_1,param_2,"HTTP/1.1",&DAT_005ac7b8,
                   "Content-Type:",param_3,&DAT_005ac7b8,"Content-Length:",param_5,"\r\n\r\n");
        iVar2 = (*(code *)PTR_strlen_00613f4c)(*param_6);
        *param_7 = iVar2 + param_5;
        iVar3 = *param_6;
        iVar2 = (*(code *)PTR_strlen_00613f4c)(iVar3);
        (*(code *)PTR_memcpy_00614674)(iVar3 + iVar2,param_4,param_5);
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}

