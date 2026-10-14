/* CreateEVENTRespondMessageNoCopy @ 004216f0 */

undefined4
CreateEVENTRespondMessageNoCopy
          (int param_1,int param_2,int param_3,int *param_4,undefined4 *param_5)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  undefined1 auStack_428 [4];
  undefined1 auStack_424 [1032];
  
  if (param_1 != 200) {
    if (param_1 == 400) {
      pcVar3 = "Bad Request";
      goto LAB_004217a4;
    }
    if (param_1 == 0x193) {
      pcVar3 = "Forbidden";
      goto LAB_004217a4;
    }
    if (param_1 == 500) {
      pcVar3 = "Internal Server Error";
      goto LAB_004217a4;
    }
    if (param_1 == 0xcf) {
      pcVar3 = "Multi-Status";
      goto LAB_004217a4;
    }
    if (param_1 == 0xcc) {
      pcVar3 = "No Content";
      goto LAB_004217a4;
    }
  }
  pcVar3 = "OK";
LAB_004217a4:
  (*(code *)PTR_time_00612968)(auStack_428);
  uVar1 = (*(code *)PTR_localtime_00612778)(auStack_428);
  (*(code *)PTR_strftime_00613a24)(auStack_424,0x100,"%a, %d %b %Y %H:%M:%S %Z",uVar1);
  if ((param_2 != 0) && (param_3 != 0)) {
    iVar2 = (*(code *)PTR_calloc_00613a18)(200,1);
    *param_4 = iVar2;
    if (iVar2 != 0) {
      (*(code *)PTR_snprintf_00612f8c)
                (iVar2,200,"%s %d %s%s%s %s%s%s %d%s","EVENT/1.0",param_1,pcVar3,&DAT_005ab974,
                 "Content-Type:",param_2,&DAT_005ab974,"Content-Length:",param_3,"\r\n\r\n");
      uVar1 = (*(code *)PTR_strlen_006130b4)(*param_4);
      *param_5 = uVar1;
    }
  }
  return 0;
}

