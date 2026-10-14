/* getWLAN_ChipVersion @ 0041e8a4 */

undefined4 getWLAN_ChipVersion(void)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char local_118 [100];
  undefined1 auStack_b4 [132];
  char *local_30;
  
  (*(code *)PTR_sprintf_0046a808)
            (auStack_b4,"/proc/wlan%d/mib_rf",*(undefined4 *)PTR_wlan_idx_0046a93c);
  uVar4 = 0;
  iVar2 = (*(code *)PTR_fopen_0046a894)(auStack_b4,"r");
  if (iVar2 == 0) {
    uVar4 = 0;
  }
  else {
LAB_0041eaac:
    iVar3 = (*(code *)PTR_fgets_0046ab78)(local_118,100,iVar2);
    pcVar1 = local_118;
    if (iVar3 != 0) {
      while (local_30 = pcVar1, *local_30 == ' ') {
        pcVar1 = local_30 + 1;
      }
      iVar3 = (*(code *)PTR_strstr_0046a940)(local_30,"RTL8192SE");
      if (iVar3 == 0) {
        iVar3 = (*(code *)PTR_strstr_0046a940)(local_30,"RTL8188C");
        if (((iVar3 != 0) ||
            (iVar3 = (*(code *)PTR_strstr_0046a940)(local_30,"RTL8188R"), iVar3 != 0)) ||
           (iVar3 = (*(code *)PTR_strstr_0046a940)(local_30,"RTL6195B"), iVar3 != 0)) {
          uVar4 = 1;
          goto LAB_0041eaac;
        }
        iVar3 = (*(code *)PTR_strstr_0046a940)(local_30,"RTL8188E");
        if (iVar3 == 0) {
          iVar3 = (*(code *)PTR_strstr_0046a940)(local_30,"RTL8192C");
          if (iVar3 == 0) {
            iVar3 = (*(code *)PTR_strstr_0046a940)(local_30,"RTL8192D");
            if (iVar3 != 0) {
              uVar4 = 3;
              goto LAB_0041eaac;
            }
            iVar3 = (*(code *)PTR_strstr_0046a940)(local_30,"RTL8812");
            if (iVar3 == 0) {
              iVar3 = (*(code *)PTR_strstr_0046a940)(local_30,"RTL8192E");
              if (iVar3 != 0) {
                uVar4 = 4;
              }
              goto LAB_0041eaac;
            }
          }
          uVar4 = 2;
          goto LAB_0041eaac;
        }
        uVar4 = 5;
      }
      else {
        uVar4 = 0;
      }
      goto LAB_0041eaac;
    }
    (*(code *)PTR_fclose_0046a85c)(iVar2);
  }
  return uVar4;
}

