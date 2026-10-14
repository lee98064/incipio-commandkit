/* build_needs_escape @ 00406eb0 */

void build_needs_escape(void)

{
  bool bVar1;
  byte bVar2;
  undefined *puVar3;
  int iVar4;
  byte *pbVar5;
  byte abStack_60 [80];
  byte abStack_10 [12];
  
  (*(code *)PTR_memcpy_0046ab5c)
            (abStack_60,
             "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789-_.!~*\'():@&=+$,/?",
             0x51);
  iVar4 = 1;
  do {
    bVar1 = iVar4 != 0x20;
    iVar4 = iVar4 + 1;
  } while (bVar1);
  (*(code *)PTR_memset_0046a87c)(PTR__needs_escape_0046a9c4,0xffffffff,0x10);
  puVar3 = PTR__needs_escape_0046a9c4;
  pbVar5 = abStack_60;
  do {
    bVar2 = *pbVar5;
    pbVar5 = pbVar5 + 1;
    if (bVar2 < 0x80) {
      *(uint *)(puVar3 + (uint)(bVar2 >> 5) * 4) =
           ~(1 << (bVar2 & 0x1f)) & *(uint *)(puVar3 + (uint)(bVar2 >> 5) * 4);
    }
  } while (pbVar5 != abStack_10);
  return;
}

