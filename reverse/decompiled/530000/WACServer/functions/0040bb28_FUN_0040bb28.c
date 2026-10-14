/* FUN_0040bb28 @ 0040bb28 */

undefined4 FUN_0040bb28(undefined1 *param_1,int param_2)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar1 = PTR_memset_00433190;
  *(undefined1 *)(param_2 + *(int *)(param_2 + 200) + 0xcc) = 1;
  (*(code *)puVar1)(param_2 + 0xcc + *(uint *)(param_2 + 200) + 1,0,~*(uint *)(param_2 + 200) + 0x48
                   );
  *(byte *)(param_2 + 0x113) = *(byte *)(param_2 + 0x113) | 0x80;
  FUN_00409df4(param_2,param_2 + 0xcc);
  iVar3 = 0;
  do {
    puVar2 = (undefined4 *)(param_2 + iVar3);
    iVar3 = iVar3 + 8;
    *param_1 = (char)puVar2[1];
    param_1[1] = (char)((uint)puVar2[1] >> 8);
    param_1[2] = (char)*(undefined2 *)(puVar2 + 1);
    param_1[3] = *(undefined1 *)(puVar2 + 1);
    param_1[4] = (char)*puVar2;
    param_1[5] = (char)((uint)*puVar2 >> 8);
    param_1[6] = (char)*(undefined2 *)puVar2;
    param_1[7] = *(undefined1 *)puVar2;
    param_1 = param_1 + 8;
  } while (iVar3 != 0x40);
  return 0;
}

