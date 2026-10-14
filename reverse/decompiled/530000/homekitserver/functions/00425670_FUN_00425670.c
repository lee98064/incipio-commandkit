/* FUN_00425670 @ 00425670 */

/* WARNING: Removing unreachable block (ram,0x0042585c) */
/* WARNING: Removing unreachable block (ram,0x004257a4) */
/* WARNING: Removing unreachable block (ram,0x004256ec) */
/* WARNING: Removing unreachable block (ram,0x00425748) */
/* WARNING: Removing unreachable block (ram,0x00425800) */
/* WARNING: Removing unreachable block (ram,0x004258b8) */

void FUN_00425670(void)

{
  undefined4 uVar1;
  int iVar2;
  char local_10;
  char local_f;
  char local_e;
  char local_d;
  char local_c;
  char local_b;
  
  (*(code *)PTR_apmib_init_00613c14)();
  uVar1 = (*(code *)PTR_time_00613804)(0);
  (*(code *)PTR_srand_00612708)(uVar1);
  iVar2 = (*(code *)PTR_rand_00612cbc)();
  local_10 = (char)(iVar2 % 0xff) + '\x01';
  iVar2 = (*(code *)PTR_time_00613804)(0);
  (*(code *)PTR_srand_00612708)(iVar2 + 1);
  iVar2 = (*(code *)PTR_rand_00612cbc)();
  local_f = (char)(iVar2 % 0xff) + '\x01';
  iVar2 = (*(code *)PTR_time_00613804)(0);
  (*(code *)PTR_srand_00612708)(iVar2 + 2);
  iVar2 = (*(code *)PTR_rand_00612cbc)();
  local_e = (char)(iVar2 % 0xff) + '\x01';
  iVar2 = (*(code *)PTR_time_00613804)(0);
  (*(code *)PTR_srand_00612708)(iVar2 + 3);
  iVar2 = (*(code *)PTR_rand_00612cbc)();
  local_d = (char)(iVar2 % 0xff) + '\x01';
  iVar2 = (*(code *)PTR_time_00613804)(0);
  (*(code *)PTR_srand_00612708)(iVar2 + 4);
  iVar2 = (*(code *)PTR_rand_00612cbc)();
  local_c = (char)(iVar2 % 0xff) + '\x01';
  iVar2 = (*(code *)PTR_time_00613804)(0);
  (*(code *)PTR_srand_00612708)(iVar2 + 5);
  iVar2 = (*(code *)PTR_rand_00612cbc)();
  local_b = (char)(iVar2 % 0xff) + '\x01';
  (*(code *)PTR_apmib_set_006136e0)(0x17,&local_10);
  (*(code *)PTR_apmib_update_006141c4)(4);
  return;
}

