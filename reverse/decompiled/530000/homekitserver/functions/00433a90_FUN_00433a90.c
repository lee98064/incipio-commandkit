/* FUN_00433a90 @ 00433a90 */

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_00433a90(void)

{
  int iVar1;
  char *pcVar2;
  
  (*(code *)PTR_puts_00612670)("USB Interface Enable...");
  DAT_00600b80 = FUN_004335e8(1);
  if (DAT_00600b80 < 0) {
    pcVar2 = "open_port error";
  }
  else {
    iVar1 = FUN_004337bc(DAT_00600b80,0x4b00,8,0x4e,1);
    if (-1 < iVar1) goto LAB_00433b20;
    pcVar2 = "set_opt error";
  }
  (*(code *)PTR_puts_00612670)(pcVar2);
LAB_00433b20:
                    /* WARNING: Could not recover jumptable at 0x00433b34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_printf_006126e8)("serialport fd=%d\n",DAT_00600b80);
  return;
}

