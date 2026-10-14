/* FUN_00402fa4 @ 00402fa4 */

void FUN_00402fa4(undefined4 param_1)

{
  int local_218;
  undefined1 auStack_214 [516];
  
  local_218 = -1;
  (*(code *)PTR_memset_0042b114)(auStack_214,0,0x200);
  (*(code *)PTR_apmib_get_0042b1a0)(0xc0,&local_218);
  if (DAT_0042b29c != '\0') {
    (*(code *)PTR_strcat_0042b170)(auStack_214,&DAT_0042b29c);
    (*(code *)PTR_strcat_0042b170)(auStack_214,&DAT_00417a44);
  }
  if (DAT_0042b518 != '\0') {
    (*(code *)PTR_strcat_0042b170)(auStack_214,&DAT_0042b518);
    (*(code *)PTR_strcat_0042b170)(auStack_214,&DAT_00417a44);
  }
  if (DAT_0042b4bc != '\0') {
    (*(code *)PTR_strcat_0042b170)(auStack_214,&DAT_0042b4bc);
    (*(code *)PTR_strcat_0042b170)(auStack_214,&DAT_00417a44);
  }
  if (DAT_0042b528 != '\0') {
    (*(code *)PTR_strcat_0042b170)(auStack_214,&DAT_0042b528);
    (*(code *)PTR_strcat_0042b170)(auStack_214,&DAT_00417a44);
  }
  (*(code *)PTR_strcat_0042b170)(auStack_214,&DAT_0042b25c);
  (*(code *)PTR_strcat_0042b170)(auStack_214,&DAT_00417a44);
  (*(code *)PTR_strcat_0042b170)(auStack_214,&DAT_0042b26c);
  if (local_218 - 1U < 2) {
    (*(code *)PTR_strcat_0042b170)(auStack_214,&DAT_00417a44);
    (*(code *)PTR_strcat_0042b170)(auStack_214,&DAT_0042b27c);
  }
  (*(code *)PTR_memcpy_0042b1c8)(param_1,auStack_214,0x200);
  return;
}

