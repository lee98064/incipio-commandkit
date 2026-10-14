/* FUN_00408fc4 @ 00408fc4 */

void FUN_00408fc4(undefined4 param_1)

{
  int local_218;
  undefined1 auStack_214 [516];
  
  local_218 = -1;
  (*(code *)PTR_memset_00423490)(auStack_214,0,0x200);
  (*(code *)PTR_apmib_get_0042354c)(0xc0,&local_218);
  if (DAT_0042387c != '\0') {
    (*(code *)PTR_strcat_00423508)(auStack_214,&DAT_0042387c);
    (*(code *)PTR_strcat_00423508)(auStack_214," ");
  }
  if (DAT_00423af8._0_1_ != '\0') {
    (*(code *)PTR_strcat_00423508)(auStack_214,&DAT_00423af8);
    (*(code *)PTR_strcat_00423508)(auStack_214," ");
  }
  if (DAT_00423a9c != '\0') {
    (*(code *)PTR_strcat_00423508)(auStack_214,&DAT_00423a9c);
    (*(code *)PTR_strcat_00423508)(auStack_214," ");
  }
  if (DAT_00423b08 != '\0') {
    (*(code *)PTR_strcat_00423508)(auStack_214,&DAT_00423b08);
    (*(code *)PTR_strcat_00423508)(auStack_214," ");
  }
  (*(code *)PTR_strcat_00423508)(auStack_214,&DAT_0042383c);
  (*(code *)PTR_strcat_00423508)(auStack_214," ");
  (*(code *)PTR_strcat_00423508)(auStack_214,&DAT_0042384c);
  if (local_218 - 1U < 2) {
    (*(code *)PTR_strcat_00423508)(auStack_214," ");
    (*(code *)PTR_strcat_00423508)(auStack_214,&DAT_0042385c);
  }
  (*(code *)PTR_memcpy_0042357c)(param_1,auStack_214,0x200);
  return;
}

