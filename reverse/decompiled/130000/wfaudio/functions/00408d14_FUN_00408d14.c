/* FUN_00408d14 @ 00408d14 */

void FUN_00408d14(undefined4 param_1)

{
  int local_218;
  undefined1 auStack_214 [516];
  
  local_218 = -1;
  (*(code *)PTR_memset_004231a8)(auStack_214,0,0x200);
  (*(code *)PTR_apmib_get_00423264)(0xc0,&local_218);
  if (DAT_0042359c != '\0') {
    (*(code *)PTR_strcat_00423220)(auStack_214,&DAT_0042359c);
    (*(code *)PTR_strcat_00423220)(auStack_214," ");
  }
  if (DAT_00423818._0_1_ != '\0') {
    (*(code *)PTR_strcat_00423220)(auStack_214,&DAT_00423818);
    (*(code *)PTR_strcat_00423220)(auStack_214," ");
  }
  if (DAT_004237bc != '\0') {
    (*(code *)PTR_strcat_00423220)(auStack_214,&DAT_004237bc);
    (*(code *)PTR_strcat_00423220)(auStack_214," ");
  }
  if (DAT_00423828 != '\0') {
    (*(code *)PTR_strcat_00423220)(auStack_214,&DAT_00423828);
    (*(code *)PTR_strcat_00423220)(auStack_214," ");
  }
  (*(code *)PTR_strcat_00423220)(auStack_214,&DAT_0042355c);
  (*(code *)PTR_strcat_00423220)(auStack_214," ");
  (*(code *)PTR_strcat_00423220)(auStack_214,&DAT_0042356c);
  if (local_218 - 1U < 2) {
    (*(code *)PTR_strcat_00423220)(auStack_214," ");
    (*(code *)PTR_strcat_00423220)(auStack_214,&DAT_0042357c);
  }
  (*(code *)PTR_memcpy_00423294)(param_1,auStack_214,0x200);
  return;
}

