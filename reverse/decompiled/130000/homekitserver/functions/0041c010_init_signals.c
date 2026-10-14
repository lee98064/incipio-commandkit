/* init_signals @ 0041c010 */

void init_signals(void)

{
  undefined4 local_30;
  code *local_2c;
  undefined1 auStack_28 [24];
  
  local_30 = 0;
  (*(code *)PTR_sigemptyset_00611fa0)(auStack_28);
  (*(code *)PTR_sigaddset_006124d0)(auStack_28,0xb);
  (*(code *)PTR_sigaddset_006124d0)(auStack_28,10);
  (*(code *)PTR_sigaddset_006124d0)(auStack_28,0xf);
  (*(code *)PTR_sigaddset_006124d0)(auStack_28,1);
  (*(code *)PTR_sigaddset_006124d0)(auStack_28,2);
  (*(code *)PTR_sigaddset_006124d0)(auStack_28,0xd);
  (*(code *)PTR_sigaddset_006124d0)(auStack_28,0x12);
  (*(code *)PTR_sigaddset_006124d0)(auStack_28,0xe);
  local_2c = (code *)&UNK_0041c420;
  (*(code *)PTR_sigaction_00612630)(0xb,&local_30,0);
  local_2c = FUN_0041c3ac;
  (*(code *)PTR_sigaction_00612630)(10,&local_30,0);
  local_2c = (code *)&LAB_0041c000;
  (*(code *)PTR_sigaction_00612630)(0xf,&local_30,0);
  local_2c = (code *)&UNK_0041c338;
  (*(code *)PTR_sigaction_00612630)(1,&local_30,0);
  local_2c = FUN_0041c2c4;
  (*(code *)PTR_sigaction_00612630)(2,&local_30,0);
  local_2c = (code *)0x1;
  (*(code *)PTR_sigaction_00612630)(0xd,&local_30,0);
  local_2c = (code *)&LAB_0041c008;
  (*(code *)PTR_sigaction_00612630)(0x12,&local_30,0);
  local_2c = FUN_0041c270;
  (*(code *)PTR_sigaction_00612630)(0xe,&local_30,0);
  local_2c = (code *)0x1;
  (*(code *)PTR_sigaction_00612630)(0xd,&local_30,0);
  local_2c = FUN_0041c270;
  (*(code *)PTR_sigaction_00612630)(0xe,&local_30,0);
  return;
}

