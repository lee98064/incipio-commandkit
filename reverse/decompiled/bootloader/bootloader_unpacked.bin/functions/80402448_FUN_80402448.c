/* FUN_80402448 @ 80402448 */

void FUN_80402448(byte *param_1)

{
  int iVar1;
  char *pcVar2;
  char cVar3;
  uint uVar4;
  char *pcVar5;
  char local_18 [4];
  ushort local_14;
  ushort local_12;
  
  iVar1 = FUN_80404a94(local_18,0x6000,6);
  if (iVar1 == 0) {
    return;
  }
  if (local_18[0] != 'h') {
    return;
  }
  local_12 = local_14;
  if (0x2000 < local_14) {
    return;
  }
  pcVar2 = (char *)FUN_80406604();
  if (pcVar2 == (char *)0x0) {
    return;
  }
  FUN_80404a94(pcVar2,0x6006,local_12);
  uVar4 = (uint)local_12;
  if ((uVar4 - 1 & 0xffff) < 0x2000) {
    if (uVar4 != 0) {
      cVar3 = '\0';
      pcVar5 = pcVar2;
      do {
        cVar3 = cVar3 + *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (pcVar5 != pcVar2 + uVar4);
      if (cVar3 != '\0') goto LAB_8040258c;
    }
    *(undefined4 *)param_1 = *(undefined4 *)(pcVar2 + 1);
    param_1[4] = pcVar2[5];
    param_1[5] = pcVar2[6];
    iVar1 = FUN_80406a80(param_1,&DAT_8040a760,6);
    if ((iVar1 == 0) || ((*param_1 & 1) != 0)) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
    }
  }
LAB_8040258c:
  FUN_804066ec(pcVar2);
  return;
}

