/* SHA256_Final @ 00456ed4 */

int SHA256_Final(uchar *md,SHA256_CTX *c)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  SHA256_CTX *pSVar5;
  uint *puVar6;
  
  puVar6 = c->data;
  uVar1 = c->num;
  *(undefined1 *)((int)puVar6 + uVar1) = 0x80;
  uVar1 = uVar1 + 1;
  if (0x38 < uVar1) {
    (*(code *)PTR_memset_0057d8ac)((int)puVar6 + uVar1,0,0x40 - uVar1);
    FUN_00454ad0(c,puVar6,1);
    uVar1 = 0;
  }
  (*(code *)PTR_memset_0057d8ac)((int)puVar6 + uVar1,0,0x38 - uVar1);
  *(undefined1 *)(c->data + 0xe) = *(undefined1 *)&c->Nh;
  *(char *)((int)c->data + 0x39) = (char)*(undefined2 *)&c->Nh;
  *(char *)((int)c->data + 0x3a) = (char)(c->Nh >> 8);
  *(char *)((int)c->data + 0x3b) = (char)c->Nh;
  *(undefined1 *)(c->data + 0xf) = *(undefined1 *)&c->Nl;
  *(char *)((int)c->data + 0x3d) = (char)*(undefined2 *)&c->Nl;
  *(char *)((int)c->data + 0x3e) = (char)(c->Nl >> 8);
  *(char *)((int)c->data + 0x3f) = (char)c->Nl;
  FUN_00454ad0(c,puVar6,1);
  c->num = 0;
  (*(code *)PTR_memset_0057d8ac)(puVar6,0,0x40);
  uVar1 = c->md_len;
  if (uVar1 == 0x1c) {
    iVar4 = 0;
    do {
      uVar2 = *(undefined4 *)((int)c->h + iVar4);
      *md = (uchar)((uint)uVar2 >> 0x18);
      md[1] = (uchar)((uint)uVar2 >> 0x10);
      md[2] = (uchar)((uint)uVar2 >> 8);
      md[3] = (uchar)uVar2;
      iVar4 = iVar4 + 4;
      md = md + 4;
    } while (iVar4 != 0x1c);
    iVar4 = 1;
  }
  else {
    iVar4 = 0;
    if (uVar1 == 0x20) {
      do {
        uVar2 = *(undefined4 *)((int)c->h + iVar4);
        *md = (uchar)((uint)uVar2 >> 0x18);
        md[1] = (uchar)((uint)uVar2 >> 0x10);
        md[2] = (uchar)((uint)uVar2 >> 8);
        md[3] = (uchar)uVar2;
        iVar4 = iVar4 + 4;
        md = md + 4;
      } while (iVar4 != 0x20);
      iVar4 = 1;
    }
    else if (uVar1 < 0x21) {
      iVar4 = 1;
      if (3 < uVar1) {
        uVar1 = 0;
        pSVar5 = c;
        do {
          uVar3 = pSVar5->h[0];
          *md = (uchar)(uVar3 >> 0x18);
          md[1] = (uchar)(uVar3 >> 0x10);
          md[2] = (uchar)(uVar3 >> 8);
          md[3] = (uchar)uVar3;
          md = md + 4;
          uVar1 = uVar1 + 1;
          pSVar5 = (SHA256_CTX *)(pSVar5->h + 1);
        } while (uVar1 < c->md_len >> 2);
        iVar4 = 1;
      }
    }
    else {
      iVar4 = 0;
    }
  }
  return iVar4;
}

