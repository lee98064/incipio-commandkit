/* FUN_00401d54 @ 00401d54 */

void FUN_00401d54(void)

{
  char local_a0 [64];
  undefined1 auStack_60 [84];
  
  (*(code *)PTR_memset_00423490)(local_a0,0,0x40);
  (*(code *)PTR_memset_00423490)(auStack_60,0,0x50);
  (*(code *)PTR_apmib_get_0042354c)(0x2b1,local_a0);
  if (local_a0[0] != '\0') {
    (*(code *)PTR_sprintf_0042344c)(auStack_60,"hostname \'%s\'",local_a0);
    (*(code *)PTR_system_00423558)(auStack_60);
  }
  return;
}

