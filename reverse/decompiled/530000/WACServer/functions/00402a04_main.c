/* main @ 00402a04 */

undefined4 main(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  (*(code *)PTR_printf_004332e4)
            ("[WAC-Server]============= WAC main() ===== start here!! WAC_DEVICE_INFO_FILE= [%s] \n\n"
             ,"/tmp/net/wac_device_info.txt");
  FUN_00401f50(param_1,param_2);
  FUN_00402014();
  FUN_004028e0(0xffffffff);
  (*(code *)PTR_puts_00433294)("[WAC-Server]============= WAC main() ===== call server start !!\n");
  iVar1 = (*(code *)PTR_WACServerStart_004331b8)(&DAT_00433544,FUN_00402b64);
  if (iVar1 != 0) {
    (*(code *)PTR_puts_00433294)("[WAC-Server] retry start WAC server before sleep 1 sec! ");
    (*(code *)PTR_sleep_0043327c)(1);
    iVar1 = (*(code *)PTR_WACServerStart_004331b8)(&DAT_00433544,FUN_00402b64);
    if (iVar1 != 0) goto LAB_00402b3c;
  }
  while( true ) {
    if (DAT_00433540 != '\0') {
      (*(code *)PTR_WACServerStop_004332d8)(&DAT_00433544);
    }
    if (DAT_00433584 != '\0') break;
    (*(code *)PTR_sleep_0043327c)(1);
  }
LAB_00402b3c:
  (*(code *)PTR_puts_00433294)("[WAC-Server]============= WAC main() ===== stop! \n");
  return 0;
}

