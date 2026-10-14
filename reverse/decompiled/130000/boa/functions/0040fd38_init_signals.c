/* init_signals @ 0040fd38 */

void init_signals(void)

{
  undefined4 local_28;
  code *local_24;
  undefined1 auStack_20 [24];
  
  local_28 = 0;
  (*(code *)PTR_sigemptyset_0046ac10)(auStack_20);
  (*(code *)PTR_sigaddset_0046aa98)(auStack_20,0xb);
  (*(code *)PTR_sigaddset_0046aa98)(auStack_20,10);
  (*(code *)PTR_sigaddset_0046aa98)(auStack_20,0xf);
  (*(code *)PTR_sigaddset_0046aa98)(auStack_20,1);
  (*(code *)PTR_sigaddset_0046aa98)(auStack_20,2);
  (*(code *)PTR_sigaddset_0046aa98)(auStack_20,0xd);
  (*(code *)PTR_sigaddset_0046aa98)(auStack_20,0x12);
  (*(code *)PTR_sigaddset_0046aa98)(auStack_20,0xe);
  (*(code *)PTR_sigaddset_0046aa98)(auStack_20,0x10);
  local_24 = (code *)&UNK_0040faa4;
  (*(code *)PTR_sigaction_0046a8bc)(0xb,&local_28,0);
  local_24 = (code *)&UNK_0040f9fc;
  (*(code *)PTR_sigaction_0046a8bc)(10,&local_28,0);
  local_24 = FUN_0040f560;
  (*(code *)PTR_sigaction_0046a8bc)(0xf,&local_28,0);
  local_24 = FUN_0040f58c;
  (*(code *)PTR_sigaction_0046a8bc)(1,&local_28,0);
  local_24 = FUN_0040f72c;
  (*(code *)PTR_sigaction_0046a8bc)(2,&local_28,0);
  local_24 = (code *)0x1;
  (*(code *)PTR_sigaction_0046a8bc)(0xd,&local_28,0);
  local_24 = FUN_0040f5a4;
  (*(code *)PTR_sigaction_0046a8bc)(0x12,&local_28,0);
  local_24 = FUN_0040f5bc;
  (*(code *)PTR_sigaction_0046a8bc)(0xe,&local_28,0);
  local_24 = (code *)PTR_sigHandler_autoconf_0046a7b0;
  (*(code *)PTR_sigaction_0046a8bc)(0x10,&local_28,0);
  return;
}

