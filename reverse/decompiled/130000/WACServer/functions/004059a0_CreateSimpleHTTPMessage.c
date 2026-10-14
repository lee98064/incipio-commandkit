/* CreateSimpleHTTPMessage @ 004059a0 */

undefined4 CreateSimpleHTTPMessage(int param_1,int param_2,int param_3,int *param_4,int *param_5)

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
      iVar2 = (*(code *)PTR_malloc_00433280)(0x800);
      *param_4 = iVar2;
      uVar1 = 0xffffe5b8;
      if (iVar2 != 0) {
        (*(code *)PTR_sprintf_00433144)
                  (iVar2,"%s %s %s%s%s %s%s%s %d%s","HTTP/1.1",&DAT_0041d3c8,&DAT_0041d3cc,
                   &DAT_0041d3f4,"Content-Type:",param_1,&DAT_0041d3f4,"Content-Length:",param_3,
                   &DAT_0041d3d0);
        iVar2 = (*(code *)PTR_strlen_004330cc)(*param_4);
        *param_5 = iVar2 + param_3;
        iVar3 = *param_4;
        iVar2 = (*(code *)PTR_strlen_004330cc)(iVar3);
        (*(code *)PTR_memcpy_004332a8)(iVar3 + iVar2,param_2,param_3);
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}

