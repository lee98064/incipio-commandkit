/* main @ 00410e60 */

undefined4 main(undefined4 param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 local_108;
  undefined1 *local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined1 auStack_e4 [64];
  undefined1 auStack_a4 [128];
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  undefined1 *local_18;
  
  (*(code *)PTR_memset_0057d9dc)(auStack_a4,0,0x8c);
  (*(code *)PTR_signal_0057d2e4)(2,FUN_00410d60);
  (*(code *)PTR_signal_0057d2e4)(9,FUN_00410d60);
  (*(code *)PTR_strcpy_0057d204)(auStack_e4,"Incipiofw");
  if (*(int *)(param_2 + 4) == 0) {
    (*(code *)PTR_puts_0057d338)("---upgrade from usb---");
    (*(code *)PTR_UploadFromUsb_0057e5e8)("/var/tmp/usb/sda/fw.bin.rsa",auStack_a4);
    (*(code *)PTR_puts_0057d338)("---upgrade ok---");
    (*(code *)PTR_sleep_0057e70c)(10);
    (*(code *)PTR_system_0057e830)("reboot");
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  iVar1 = FUN_00410da0(*(int *)(param_2 + 4),&DAT_005324a8);
  if (iVar1 != 0) {
    (*(code *)PTR_printf_0057d378)("[UPGFW] fwpath:%s\n",*(undefined4 *)(param_2 + 4));
  }
  (*(code *)PTR_memset_0057d9dc)(&local_104,0,0x20);
  local_104 = auStack_e4;
  local_100 = 100;
  local_fc = 10;
  local_f8 = 0x5a;
  if (g_progress_flag != 0) {
    (*(code *)PTR_progress_init_0057e930)(&local_104);
  }
  local_20 = (*(code *)PTR_https_download_fw_0057ea84)(*(undefined4 *)(param_2 + 4),&local_108);
  if (local_20 != -1) {
    (*(code *)PTR_puts_0057d338)("\n====================================");
    (*(code *)PTR_printf_0057d378)("download over %d\n",local_20);
    local_18 = auStack_e4;
    iVar1 = (*(code *)PTR_strlen_0057e310)(local_18);
    (*(code *)PTR_memcpy_0057e7cc)(auStack_a4,local_18,iVar1 + 1);
    local_24 = local_108;
    local_1c = 0;
    (*(code *)PTR_puts_0057d338)("---upgrade firmware from download file---");
    iVar1 = (*(code *)PTR_Upload_0057da78)(auStack_a4);
    if (iVar1 == 4) {
      iVar1 = (*(code *)PTR_FirmwareUpgrade_0057db68)(auStack_a4);
      if (iVar1 == 200) {
        (*(code *)PTR_puts_0057d338)("---upgrade ok---");
        (*(code *)PTR_sleep_0057e70c)(10);
        (*(code *)PTR_system_0057e830)("reboot");
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      pcVar2 = "---upgrade fail---";
    }
    else {
      pcVar2 = "---fw verify fail---";
    }
    (*(code *)PTR_puts_0057d338)(pcVar2);
  }
  return 0;
}

