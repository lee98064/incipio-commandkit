/* CreateHTTPRespondMessageNoCopy @ 00421ab8 */

undefined4
CreateHTTPRespondMessageNoCopy(int param_1,int param_2,int param_3,int *param_4,undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_428 [4];
  undefined1 auStack_424 [1032];
  
  uVar1 = FUN_00421678();
  (*(code *)PTR_time_00613804)(auStack_428);
  uVar2 = (*(code *)PTR_localtime_00613610)(auStack_428);
  (*(code *)PTR_strftime_006148cc)(auStack_424,0x100,"%a, %d %b %Y %H:%M:%S %Z",uVar2);
  if (param_1 == 0xcc) {
    iVar3 = (*(code *)PTR_calloc_006148c0)(200,1);
    *param_4 = iVar3;
    if (iVar3 == 0) {
      return 0xffffe5b8;
    }
    (*(code *)PTR_snprintf_00613e24)
              (iVar3,200,"%s %3d %s%sDate: %s%s","HTTP/1.1",0xcc,uVar1,&DAT_005ac7b8,auStack_424,
               "\r\n\r\n");
  }
  else {
    if (param_2 == 0) {
      return 0xffffe5cf;
    }
    if (param_3 == 0) {
      return 0xffffe5cf;
    }
    iVar3 = (*(code *)PTR_calloc_006148c0)(200,1);
    *param_4 = iVar3;
    if (iVar3 == 0) {
      return 0xffffe5b8;
    }
    (*(code *)PTR_snprintf_00613e24)
              (iVar3,200,"%s %d %s%s%s %s%s%s %d%s","HTTP/1.1",param_1,uVar1,&DAT_005ac7b8,
               "Content-Type:",param_2,&DAT_005ac7b8,"Content-Length:",param_3,"\r\n\r\n");
  }
  uVar1 = (*(code *)PTR_strlen_00613f4c)(*param_4);
  *param_5 = uVar1;
  return 0;
}

