/* FUN_00422330 @ 00422330 */

void FUN_00422330(void)

{
  int iVar1;
  undefined4 in_a3;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 *local_10;
  
  puVar3 = &local_18;
  puVar4 = &local_14;
  uVar2 = 0;
  uVar5 = 0;
  iVar1 = HTTPGetHeaderField();
  local_10 = &stack0x00000010;
  if (iVar1 == 0) {
    (*(code *)PTR_VSNScanF_00612990)(local_18,local_14,in_a3,local_10,uVar2,puVar3,puVar4,uVar5);
  }
  return;
}

