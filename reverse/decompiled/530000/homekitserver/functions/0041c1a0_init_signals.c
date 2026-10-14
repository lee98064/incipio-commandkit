/* init_signals @ 0041c1a0 */

void init_signals(void)

{
  undefined4 local_30;
  code *local_2c;
  undefined1 auStack_28 [24];
  
  local_30 = 0;
  (*(code *)PTR_sigemptyset_00612e30)(auStack_28);
  (*(code *)PTR_sigaddset_00613360)(auStack_28,0xb);
  (*(code *)PTR_sigaddset_00613360)(auStack_28,10);
  (*(code *)PTR_sigaddset_00613360)(auStack_28,0xf);
  (*(code *)PTR_sigaddset_00613360)(auStack_28,1);
  (*(code *)PTR_sigaddset_00613360)(auStack_28,2);
  (*(code *)PTR_sigaddset_00613360)(auStack_28,0xd);
  (*(code *)PTR_sigaddset_00613360)(auStack_28,0x12);
  (*(code *)PTR_sigaddset_00613360)(auStack_28,0xe);
  local_2c = (code *)&UNK_0041c5b4;
  (*(code *)PTR_sigaction_006134c4)(0xb,&local_30,0);
  local_2c = FUN_0041c540;
  (*(code *)PTR_sigaction_006134c4)(10,&local_30,0);
  local_2c = (code *)&LAB_0041c190;
  (*(code *)PTR_sigaction_006134c4)(0xf,&local_30,0);
  local_2c = (code *)&UNK_0041c4c8;
  (*(code *)PTR_sigaction_006134c4)(1,&local_30,0);
  local_2c = FUN_0041c454;
  (*(code *)PTR_sigaction_006134c4)(2,&local_30,0);
  local_2c = (code *)0x1;
  (*(code *)PTR_sigaction_006134c4)(0xd,&local_30,0);
  local_2c = (code *)&LAB_0041c198;
  (*(code *)PTR_sigaction_006134c4)(0x12,&local_30,0);
  local_2c = FUN_0041c400;
  (*(code *)PTR_sigaction_006134c4)(0xe,&local_30,0);
  local_2c = (code *)0x1;
  (*(code *)PTR_sigaction_006134c4)(0xd,&local_30,0);
  local_2c = FUN_0041c400;
  (*(code *)PTR_sigaction_006134c4)(0xe,&local_30,0);
  return;
}

