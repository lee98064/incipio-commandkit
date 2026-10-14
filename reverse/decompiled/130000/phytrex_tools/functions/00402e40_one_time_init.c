/* one_time_init @ 00402e40 */

void one_time_init(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char local_48;
  char local_47;
  
  (*(code *)PTR_system_00415f08)("gigadevice_chk  chk `flash get HW_WLAN0_WLAN_ADDR`");
  iVar1 = (*(code *)PTR_fopen_00415ecc)("/proc/OTP",&DAT_00405840);
  if (iVar1 == 0) {
    uVar4 = *(undefined4 *)PTR_stderr_00415eb0;
    puVar2 = (undefined4 *)(*(code *)PTR___errno_location_00415ea4)();
    uVar3 = (*(code *)PTR_strerror_00415f24)(*puVar2);
    (*(code *)PTR_fprintf_00415ee8)(uVar4,&DAT_004058d4,uVar3);
  }
  else {
    (*(code *)PTR_fgets_00415f1c)(&local_48,10,iVar1);
    if ((local_48 == 'O') && (local_47 == 'K')) {
      (*(code *)PTR_puts_00415f10)("OTP Check pass!");
    }
    else {
      (*(code *)PTR_system_00415f08)("killall -9 WACServer 2> /dev/null");
      (*(code *)PTR_system_00415f08)("killall -9 homekitserver 2> /dev/null");
      (*(code *)PTR_system_00415f08)("killall -9 wfaudio 2> /dev/null");
      (*(code *)PTR_fwrite_00415ea8)(&DAT_004058b0,1,0x11,*(undefined4 *)PTR_stderr_00415eb0);
    }
    (*(code *)PTR_fclose_00415ec0)(iVar1);
  }
  return;
}

