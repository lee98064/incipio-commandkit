/* one_time_init @ 00402ec0 */

void one_time_init(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char local_48;
  char local_47;
  
  (*(code *)PTR_system_004162f8)("gigadevice_chk  chk `flash get HW_WLAN0_WLAN_ADDR`");
  iVar1 = (*(code *)PTR_fopen_004162bc)("/proc/OTP",&DAT_00405b20);
  if (iVar1 == 0) {
    uVar4 = *(undefined4 *)PTR_stderr_004162a0;
    puVar2 = (undefined4 *)(*(code *)PTR___errno_location_00416294)();
    uVar3 = (*(code *)PTR_strerror_00416318)(*puVar2);
    (*(code *)PTR_fprintf_004162d8)(uVar4,&DAT_00405bc4,uVar3);
  }
  else {
    (*(code *)PTR_fgets_00416310)(&local_48,10,iVar1);
    if ((local_48 == 'O') && (local_47 == 'K')) {
      (*(code *)PTR_puts_00416300)("OTP Check pass!");
    }
    else {
      (*(code *)PTR_system_004162f8)("killall -9 WACServer 2> /dev/null");
      (*(code *)PTR_system_004162f8)("killall -9 homekitserver 2> /dev/null");
      (*(code *)PTR_system_004162f8)("killall -9 wfaudio 2> /dev/null");
      (*(code *)PTR_fwrite_00416298)(&DAT_00405b90,1,0x11,*(undefined4 *)PTR_stderr_004162a0);
    }
    (*(code *)PTR_fclose_004162b0)(iVar1);
    (*(code *)PTR_system_004162f8)("mfg_tool -start");
  }
  return;
}

