/* lh_table_delete_entry @ 0043f774 */

undefined4 lh_table_delete_entry(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = param_2 - *(int *)(param_1 + 0x28) >> 4;
  if (iVar1 < 0) {
    uVar2 = 0xfffffffe;
  }
  else if ((*(int *)(*(int *)(param_1 + 0x28) + iVar1 * 0x10) == -1) ||
          (*(int *)(*(int *)(param_1 + 0x28) + iVar1 * 0x10) == -2)) {
    uVar2 = 0xffffffff;
  }
  else {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
    if (*(int *)(param_1 + 0x2c) != 0) {
      (**(code **)(param_1 + 0x2c))(param_2);
    }
    *(undefined4 *)(*(int *)(param_1 + 0x28) + iVar1 * 0x10 + 4) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x28) + iVar1 * 0x10) = 0xfffffffe;
    if ((*(int *)(param_1 + 0x24) == *(int *)(param_1 + 0x28) + iVar1 * 0x10) &&
       (*(int *)(param_1 + 0x20) == *(int *)(param_1 + 0x28) + iVar1 * 0x10)) {
      *(undefined4 *)(param_1 + 0x24) = 0;
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x24);
    }
    else if (*(int *)(param_1 + 0x20) == *(int *)(param_1 + 0x28) + iVar1 * 0x10) {
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x20) + 8) + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(*(int *)(param_1 + 0x20) + 8);
    }
    else if (*(int *)(param_1 + 0x24) == *(int *)(param_1 + 0x28) + iVar1 * 0x10) {
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x24) + 0xc) + 8) = 0;
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0xc);
    }
    else {
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x28) + iVar1 * 0x10 + 0xc) + 8) =
           *(undefined4 *)(*(int *)(param_1 + 0x28) + iVar1 * 0x10 + 8);
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x28) + iVar1 * 0x10 + 8) + 0xc) =
           *(undefined4 *)(*(int *)(param_1 + 0x28) + iVar1 * 0x10 + 0xc);
    }
    iVar4 = *(int *)(param_1 + 0x28);
    iVar3 = *(int *)(param_1 + 0x28) + iVar1 * 0x10;
    *(undefined4 *)(iVar3 + 0xc) = 0;
    *(undefined4 *)(iVar4 + iVar1 * 0x10 + 8) = *(undefined4 *)(iVar3 + 0xc);
    uVar2 = 0;
  }
  return uVar2;
}

