/* FUN_00441be4 @ 00441be4 */

int FUN_00441be4(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint local_120;
  undefined1 auStack_11c [32];
  undefined1 auStack_fc [204];
  int local_30;
  
  (*(code *)PTR_apmib_get_0046aadc)(0xb8,&local_120);
  if (((local_120 & 1) == 0) ||
     (iVar1 = (*(code *)PTR_fopen_0046a894)("/var/log/log_split","r"), iVar1 == 0)) {
    iVar1 = 0;
  }
  else {
    (*(code *)PTR_fgets_0046ab78)(auStack_fc,200,iVar1);
    iVar2 = (*(code *)PTR_atoi_0046a73c)(auStack_fc);
    (*(code *)PTR_fclose_0046a85c)(iVar1);
    iVar1 = 0;
    while (-1 < iVar2) {
      if (iVar2 == 0) {
        (*(code *)PTR_snprintf_0046abe4)(auStack_11c,0x20,"/var/log/messages");
      }
      else {
        (*(code *)PTR_snprintf_0046abe4)(auStack_11c,0x20,"/var/log/messages.%d",iVar2 + -1);
      }
      local_30 = (*(code *)PTR_fopen_0046a894)(auStack_11c,"r");
      if (local_30 == 0) {
        iVar2 = iVar2 + -1;
      }
      else {
        while (iVar3 = (*(code *)PTR_fgets_0046ab78)(auStack_fc,200,local_30), iVar3 != 0) {
          if ((local_120 & 2) != 0) {
            uVar4 = 0;
            goto LAB_00441d84;
          }
          if ((local_120 & 0xc) == 0xc) {
            uVar4 = 3;
            goto LAB_00441d84;
          }
          if ((local_120 & 4) != 0) {
            uVar4 = 1;
            goto LAB_00441d84;
          }
          if ((local_120 & 8) != 0) {
            uVar4 = 2;
LAB_00441d84:
            iVar3 = FUN_00441a1c(auStack_fc,uVar4);
            if (iVar3 != 0) {
              iVar3 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,auStack_fc);
              iVar1 = iVar1 + iVar3;
            }
          }
        }
        iVar2 = iVar2 + -1;
        (*(code *)PTR_fclose_0046a85c)(local_30);
      }
    }
  }
  return iVar1;
}

