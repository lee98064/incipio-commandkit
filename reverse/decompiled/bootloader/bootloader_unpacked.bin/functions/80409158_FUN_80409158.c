/* FUN_80409158 @ 80409158 */

undefined4 FUN_80409158(void)

{
  undefined **ppuVar1;
  
  FUN_804077a4(s___________________COMMAND_MODE_H_8040dd5c);
  ppuVar1 = &PTR_s_HELP_______Print_this_help_messa_8040ecec;
  do {
    if (*ppuVar1 != (undefined *)0x0) {
      FUN_804077a4(&DAT_8040dd94);
    }
    ppuVar1 = ppuVar1 + 4;
  } while (ppuVar1 != (undefined **)0x8040ee0c);
  return 1;
}

