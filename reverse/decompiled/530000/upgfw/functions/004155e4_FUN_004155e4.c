/* FUN_004155e4 @ 004155e4 */

int FUN_004155e4(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return -1;
  }
  iVar1 = (*(code *)PTR_strstr_0057d5ec)(param_1,"/octet-stream\r\n");
  iVar2 = 0x11;
  if (iVar1 == 0) {
    iVar1 = (*(code *)PTR_strstr_0057d5ec)(param_1,"/x-ns-proxy-autoconfig\r\n");
    iVar2 = 0x1a;
    if (iVar1 == 0) {
      iVar1 = (*(code *)PTR_strstr_0057d5ec)(param_1,"/macbinary\r\n");
      iVar2 = 0xe;
      if (iVar1 == 0) {
        iVar1 = (*(code *)PTR_strstr_0057d5ec)(param_1,"/x-macbinary\r\n");
        iVar2 = 0x10;
        if (iVar1 == 0) {
          iVar1 = (*(code *)PTR_strstr_0057d5ec)(param_1,"filename=");
          if ((iVar1 != 0) && (iVar1 = (*(code *)PTR_strchr_0057d400)(iVar1,0x22), iVar1 != 0)) {
            iVar1 = (*(code *)PTR_strstr_0057d5ec)(iVar1,&DAT_0053321c);
            iVar2 = 4;
            if (iVar1 != 0) goto LAB_004156d4;
          }
          return -1;
        }
      }
    }
  }
LAB_004156d4:
  return (iVar1 - param_1) + iVar2;
}

