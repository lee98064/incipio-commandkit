/* escape_string @ 004055f8 */

byte * escape_string(byte *param_1,byte *param_2)

{
  byte bVar1;
  undefined *puVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  byte bVar7;
  byte bVar8;
  
  iVar4 = (*(code *)PTR_strlen_0046a714)();
  iVar4 = iVar4 * 3;
  pbVar5 = param_2;
  puVar2 = PTR__needs_escape_0046a9c4;
  pbVar3 = param_2;
  if ((param_2 == (byte *)0x0) &&
     ((iVar4 == 0 ||
      (pbVar5 = (byte *)(*(code *)PTR_malloc_0046ab14)(iVar4 + 1),
      puVar2 = PTR__needs_escape_0046a9c4, pbVar3 = pbVar5, pbVar5 == (byte *)0x0)))) {
    (*(code *)PTR_perror_0046ab44)("malloc");
  }
  else {
    while( true ) {
      param_2 = pbVar3;
      bVar7 = *param_1;
      param_1 = param_1 + 1;
      bVar1 = bVar7 >> 4;
      if ((bVar7 == 0) || (iVar4 < 1)) break;
      if (((char)bVar7 < 0) ||
         ((1 << (bVar7 & 0x1f) & *(uint *)(puVar2 + (uint)(bVar7 >> 5) * 4)) != 0)) {
        *pbVar5 = 0x25;
        bVar8 = bVar1 + 0x30;
        if (9 < bVar1) {
          bVar8 = bVar1 + 0x57;
        }
        uVar6 = (int)(char)bVar7 & 0xf;
        pbVar5[1] = bVar8;
        bVar7 = (char)uVar6 + 0x30;
        if (9 < uVar6) {
          bVar7 = (byte)((uVar6 + 0x57) * 0x1000000 >> 0x18);
        }
        pbVar5[2] = bVar7;
        pbVar5 = pbVar5 + 2;
      }
      else {
        *pbVar5 = bVar7;
      }
      pbVar5 = pbVar5 + 1;
      pbVar3 = param_2;
    }
    *pbVar5 = 0;
  }
  return param_2;
}

