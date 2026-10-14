/* CreateSimpleHTTPMessageNoCopy @ 00421ca8 */

undefined4 CreateSimpleHTTPMessageNoCopy(int param_1,int param_2,int *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    uVar2 = 0xffffe5cf;
  }
  else {
    iVar1 = (*(code *)PTR_calloc_006148c0)(200,1);
    *param_3 = iVar1;
    uVar2 = 0xffffe5b8;
    if (iVar1 != 0) {
      (*(code *)PTR_snprintf_00613e24)
                (iVar1,200,"%s %s %s%s%s %s%s%s %d%s","HTTP/1.1",&DAT_005ac798,&DAT_005ac728,
                 &DAT_005ac7b8,"Content-Type:",param_1,&DAT_005ac7b8,"Content-Length:",param_2,
                 "\r\n\r\n");
      uVar2 = (*(code *)PTR_strlen_00613f4c)(*param_3);
      *param_4 = uVar2;
      uVar2 = 0;
    }
  }
  return uVar2;
}

