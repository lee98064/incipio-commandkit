/* SHA256_Final @ 004c3024 */

int SHA256_Final(uchar *md,SHA256_CTX *c)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  SHA256_CTX *pSVar5;
  uint *puVar6;
  
  puVar6 = c->data;
  uVar1 = c->num + 1;
  *(undefined1 *)((int)puVar6 + c->num) = 0x80;
  if (0x38 < uVar1) {
    (*(code *)PTR_memset_0061223c)((int)puVar6 + uVar1,0,0x40 - uVar1);
    FUN_004c0d30(c,puVar6,1);
    uVar1 = 0;
  }
  (*(code *)PTR_memset_0061223c)((int)puVar6 + uVar1,0,0x38 - uVar1);
  *(undefined1 *)(c->data + 0xe) = *(undefined1 *)&c->Nh;
  *(char *)((int)c->data + 0x39) = (char)*(undefined2 *)&c->Nh;
  *(char *)((int)c->data + 0x3a) = (char)(c->Nh >> 8);
  *(char *)((int)c->data + 0x3b) = (char)c->Nh;
  *(undefined1 *)(c->data + 0xf) = *(undefined1 *)&c->Nl;
  *(char *)((int)c->data + 0x3d) = (char)*(undefined2 *)&c->Nl;
  *(char *)((int)c->data + 0x3e) = (char)(c->Nl >> 8);
  *(char *)((int)c->data + 0x3f) = (char)c->Nl;
  FUN_004c0d30(c,puVar6,1);
  c->num = 0;
  (*(code *)PTR_memset_0061223c)(puVar6,0,0x40);
  uVar1 = c->md_len;
  if (uVar1 == 0x1c) {
    iVar2 = 0;
    do {
      uVar4 = *(undefined4 *)((int)c->h + iVar2);
      iVar2 = iVar2 + 4;
      *md = (uchar)((uint)uVar4 >> 0x18);
      md[1] = (uchar)((uint)uVar4 >> 0x10);
      md[2] = (uchar)((uint)uVar4 >> 8);
      md[3] = (uchar)uVar4;
      md = md + 4;
    } while (iVar2 != 0x1c);
    iVar2 = 1;
  }
  else if (uVar1 == 0x20) {
    iVar2 = 0;
    do {
      uVar4 = *(undefined4 *)((int)c->h + iVar2);
      iVar2 = iVar2 + 4;
      *md = (uchar)((uint)uVar4 >> 0x18);
      md[1] = (uchar)((uint)uVar4 >> 0x10);
      md[2] = (uchar)((uint)uVar4 >> 8);
      md[3] = (uchar)uVar4;
      md = md + 4;
    } while (iVar2 != 0x20);
    iVar2 = 1;
  }
  else {
    iVar2 = 0;
    if (uVar1 < 0x21) {
      pSVar5 = c;
      for (uVar1 = 0; iVar2 = 1, uVar1 < c->md_len >> 2; uVar1 = uVar1 + 1) {
        uVar3 = pSVar5->h[0];
        pSVar5 = (SHA256_CTX *)(pSVar5->h + 1);
        *md = (uchar)(uVar3 >> 0x18);
        md[1] = (uchar)(uVar3 >> 0x10);
        md[2] = (uchar)(uVar3 >> 8);
        md[3] = (uchar)uVar3;
        md = md + 4;
      }
    }
  }
  return iVar2;
}

