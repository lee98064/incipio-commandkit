/* init_form @ 00408b98 */

undefined4 init_form(int param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_complete_env_0046a94c;
  *(undefined4 *)(param_1 + 4) = 2;
  (*(code *)puVar1)();
  if (*(int *)(param_1 + 0xc) == 4) {
    *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x78);
  }
  (*(code *)PTR_handleForm_0046ac34)(param_1);
  return 0;
}

