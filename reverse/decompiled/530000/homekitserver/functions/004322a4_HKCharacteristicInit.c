/* HKCharacteristicInit @ 004322a4 */

void HKCharacteristicInit(int param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  
  (*(code *)PTR_strcpy_00612464)(param_1,&DAT_00615eb0);
  uVar2 = (*(code *)PTR_calloc_006148c0)(4,1);
  puVar1 = PTR_HKsetupCodeInit_00612b58;
  *(undefined4 *)(param_1 + 0x158) = uVar2;
  iVar3 = (*(code *)puVar1)(uVar2);
  if (iVar3 == 0) {
    (*(code *)PTR_memcpy_00614674)(*(undefined4 *)(param_1 + 0x158),"273-49-151",10);
  }
  puVar4 = (undefined1 *)(*(code *)PTR_calloc_006148c0)(0x814,1);
  puVar1 = PTR_memset_006130cc;
  *puVar4 = 0;
  puVar4[1] = 0;
  *(undefined4 *)(puVar4 + 4) = 0;
  (*(code *)puVar1)(puVar4 + 8,0,0x800);
  *(undefined1 **)(param_1 + 0x154) = puVar4;
  *(undefined4 *)(puVar4 + 0x808) = 0;
  *(undefined4 *)(puVar4 + 0x80c) = 0;
  *(undefined4 *)(puVar4 + 0x810) = 0;
  return;
}

