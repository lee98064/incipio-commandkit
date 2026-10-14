/* FUN_0040c428 @ 0040c428 */

void FUN_0040c428(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  
  if (param_2 == 0) {
    iVar2 = 0xf;
    iVar1 = param_1;
    do {
      iVar2 = iVar2 + -1;
      cVar3 = *(char *)(iVar1 + 0x1167) + '\x01';
      *(char *)(iVar1 + 0x1167) = cVar3;
      if (cVar3 != '\0') break;
      iVar1 = iVar1 + -1;
    } while (iVar2 != -1);
    param_2 = param_1 + 0x1158;
  }
                    /* WARNING: Could not recover jumptable at 0x0040c474. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_gcm_init_message_00433148)(param_2,0x10);
  return;
}

