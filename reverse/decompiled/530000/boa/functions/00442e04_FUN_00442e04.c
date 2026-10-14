/* FUN_00442e04 @ 00442e04 */

int FUN_00442e04(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return -1;
  }
  iVar1 = (*(code *)PTR_strstr_0046a940)(param_1,"/octet-stream\r\n");
  iVar2 = 0x11;
  if (iVar1 == 0) {
    iVar1 = (*(code *)PTR_strstr_0046a940)(param_1,"/x-ns-proxy-autoconfig\r\n");
    iVar2 = 0x1a;
    if (iVar1 == 0) {
      iVar1 = (*(code *)PTR_strstr_0046a940)(param_1,"/macbinary\r\n");
      iVar2 = 0xe;
      if (iVar1 == 0) {
        iVar1 = (*(code *)PTR_strstr_0046a940)(param_1,"/x-macbinary\r\n");
        iVar2 = 0x10;
        if (iVar1 == 0) {
          iVar1 = (*(code *)PTR_strstr_0046a940)(param_1,"filename=");
          if ((iVar1 != 0) && (iVar1 = (*(code *)PTR_strchr_0046a6e8)(iVar1,0x22), iVar1 != 0)) {
            iVar1 = (*(code *)PTR_strstr_0046a940)(iVar1,&DAT_004578fc);
            iVar2 = 4;
            if (iVar1 != 0) goto LAB_00442ef4;
          }
          return -1;
        }
      }
    }
  }
LAB_00442ef4:
  return (iVar1 - param_1) + iVar2;
}

