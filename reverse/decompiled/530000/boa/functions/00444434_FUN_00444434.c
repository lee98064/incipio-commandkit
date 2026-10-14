/* FUN_00444434 @ 00444434 */

int FUN_00444434(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_apmib_update_0046aa2c)(4);
  if (iVar1 != 0) {
    (*(code *)PTR_save_cs_to_file_0046a8f8)();
  }
  return iVar1;
}

