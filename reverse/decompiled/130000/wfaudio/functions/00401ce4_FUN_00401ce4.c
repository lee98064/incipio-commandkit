/* FUN_00401ce4 @ 00401ce4 */

void FUN_00401ce4(void)

{
  char local_a0 [64];
  undefined1 auStack_60 [84];
  
  (*(code *)PTR_memset_004231a8)(local_a0,0,0x40);
  (*(code *)PTR_memset_004231a8)(auStack_60,0,0x50);
  (*(code *)PTR_apmib_get_00423264)(0x2b1,local_a0);
  if (local_a0[0] != '\0') {
    (*(code *)PTR_sprintf_00423164)(auStack_60,"hostname \'%s\'",local_a0);
    (*(code *)PTR_system_00423270)(auStack_60);
  }
  return;
}

