/* UploadFromUsb @ 00413e84 */

undefined4 UploadFromUsb(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 local_1a0;
  undefined2 local_19c;
  undefined1 local_19a;
  undefined1 auStack_199 [41];
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [200];
  undefined1 *local_28;
  
  local_19a = DAT_00533056;
  local_1a0 = DAT_00533050;
  local_19c = DAT_00533054;
  (*(code *)PTR_memset_0057d8ac)(auStack_199,0,0x29);
  if (param_1 == 0) {
    (*(code *)PTR_sprintf_0057d6e0)(auStack_170,"/var/tmp/usb/sda/%s",&local_1a0);
  }
  else {
    (*(code *)PTR_strcpy_0057d0d4)(auStack_170,param_1);
  }
  (*(code *)PTR_printf_0057d248)("USB Upload,File Path:%s\n",auStack_170);
  iVar1 = FUN_00413e4c(auStack_170);
  if (iVar1 == 0) {
    pcVar4 = "Error! Firmware is not exist in path!\n";
  }
  else {
    iVar1 = (*(code *)PTR_open_0057e750)(auStack_170,0);
    if (iVar1 != 0) {
      (*(code *)PTR_lseek_0057e15c)(iVar1,0,0);
      iVar6 = 0;
      iVar5 = 0;
      (*(code *)PTR_puts_0057d208)("\t\t<read image from usb storage device>");
      while( true ) {
        iVar6 = (*(code *)PTR_realloc_0057e5c8)(iVar6,iVar5 + 0x1000);
        if (iVar6 == 0) {
          pcVar4 = "reallco failed !\n";
          goto LAB_00413ffc;
        }
        iVar2 = (*(code *)PTR_read_0057e0d0)(iVar1,iVar6 + iVar5,0x1000);
        (*(code *)PTR_putchar_0057e518)(0x2e);
        if (iVar2 == -1) break;
        iVar5 = iVar5 + iVar2;
        if (iVar2 != 0x1000) {
          (*(code *)PTR_close_0057dbfc)(iVar1);
          (*(code *)PTR_putchar_0057e518)(10);
          if (*(int *)PTR_g_progress_flag_0057e3a8 != 0) {
            (*(code *)PTR_set_download_size_0057e6e8)(iVar5);
          }
          if (*(int *)PTR_g_progress_flag_0057e3a8 != 0) {
            (*(code *)PTR_increase_progress_0057e0fc)(iVar5,3);
          }
          local_28 = auStack_170;
          uVar3 = (*(code *)PTR_strlen_0057e1dc)(local_28);
          (*(code *)PTR_memcpy_0057e698)(param_2,local_28,uVar3);
          *(int *)(param_2 + 0x80) = iVar6;
          *(int *)(param_2 + 0x84) = iVar5;
          *(undefined4 *)(param_2 + 0x88) = 0;
          uVar3 = Upload(param_2);
          return uVar3;
        }
      }
      (*(code *)PTR_strcpy_0057d0d4)(auStack_f0,"file read error!\n");
      (*(code *)PTR_puts_0057d208)("file read error!");
      goto LAB_00414060;
    }
    pcVar4 = "Open image file  failed!\n";
  }
LAB_00413ffc:
  (*(code *)PTR_strcpy_0057d0d4)(auStack_f0,pcVar4);
LAB_00414060:
  (*(code *)PTR_printf_0057d248)("errmsg: %s\n",auStack_f0);
  return 400;
}

