/* FUN_0043357c @ 0043357c */

void FUN_0043357c(void)

{
  if (0 < DAT_00600b80) {
    (*(code *)PTR_tcsetattr_00613374)(DAT_00600b80,0x540e,PTR_serial_options_orig_00612c68);
    (*(code *)PTR_close_00613604)(DAT_00600b80);
    DAT_00600b80 = -1;
  }
  return;
}

