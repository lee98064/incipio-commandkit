/* req_write_escape_http @ 004059e0 */

int req_write_escape_http(undefined4 *param_1,byte *param_2)

{
  undefined *puVar1;
  byte *pbVar2;
  int iVar3;
  byte bVar5;
  uint uVar4;
  byte bVar6;
  byte bVar7;
  
  puVar1 = PTR__needs_escape_0046a9c4;
  iVar3 = 0x2000 - param_1[0x14];
  pbVar2 = (byte *)(param_1[0x234] + param_1[0x14]);
  while( true ) {
    bVar5 = *param_2;
    uVar4 = (uint)(char)bVar5;
    if ((uVar4 == 0) || (iVar3 < 3)) break;
    if (((int)uVar4 < 0) || ((1 << (uVar4 & 0x1f) & *(uint *)(puVar1 + (uVar4 >> 5) * 4)) != 0)) {
      bVar6 = bVar5 >> 4;
      *pbVar2 = 0x25;
      bVar7 = bVar6 + 0x30;
      if (9 < bVar6) {
        bVar7 = bVar6 + 0x57;
      }
      bVar5 = bVar5 & 0xf;
      pbVar2[1] = bVar7;
      bVar6 = bVar5 + 0x30;
      if (9 < bVar5) {
        bVar6 = bVar5 + 0x57;
      }
      pbVar2[2] = bVar6;
      iVar3 = iVar3 + -3;
      pbVar2 = pbVar2 + 3;
      param_2 = param_2 + 1;
    }
    else {
      *pbVar2 = bVar5;
      iVar3 = iVar3 + -1;
      pbVar2 = pbVar2 + 1;
      param_2 = param_2 + 1;
    }
  }
  iVar3 = (int)pbVar2 - param_1[0x234];
  param_1[0x14] = iVar3;
  if (*param_2 != 0) {
    (*(code *)PTR_fputs_0046a6e4)
              ("Ran out of Buffer space! [req_write_escape_http]\n",
               *(undefined4 *)PTR_stderr_0046a7f0);
    *param_1 = 0xc;
    iVar3 = -1;
  }
  return iVar3;
}

