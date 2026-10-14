/* FUN_8040d07c @ 8040d07c */

void FUN_8040d07c(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  setCopReg(0,Status,Status & 0xffbfffff);
  iVar6 = 0;
  do {
    FUN_80400ae4(iVar6,FUN_80400c8c);
    iVar6 = iVar6 + 1;
  } while (iVar6 != 0x20);
  puVar2 = &DAT_8040057c;
  puVar1 = (undefined4 *)&DAT_80000080;
  do {
    uVar5 = puVar2[1];
    uVar4 = puVar2[2];
    uVar3 = puVar2[3];
    *puVar1 = *puVar2;
    puVar1[1] = uVar5;
    puVar1[2] = uVar4;
    puVar1[3] = uVar3;
    puVar2 = puVar2 + 4;
    puVar1 = puVar1 + 4;
  } while (puVar2 != (undefined4 *)0x804005fc);
  FUN_80406454();
  FUN_80400ae4(0x17,&LAB_80400800);
  return;
}

