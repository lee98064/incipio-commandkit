/* SHA256_Update @ 004572ac */

int SHA256_Update(SHA256_CTX *c,void *data,size_t len)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  
  if (len != 0) {
    uVar1 = len * 8 + c->Nl;
    if (uVar1 < c->Nl) {
      c->Nh = c->Nh + 1;
    }
    c->Nh = c->Nh + (len >> 0x1d);
    c->Nl = uVar1;
    uVar1 = c->num;
    if (uVar1 != 0) {
      puVar2 = c->data;
      if ((len < 0x40) && (len + uVar1 < 0x40)) {
        (*(code *)PTR_memcpy_0057e698)((int)puVar2 + uVar1,data,len);
        c->num = c->num + len;
        return 1;
      }
      iVar3 = 0x40 - uVar1;
      (*(code *)PTR_memcpy_0057e698)((int)puVar2 + uVar1,data,iVar3);
      FUN_00454ad0(c,puVar2,1);
      data = (void *)((int)data + iVar3);
      len = len - iVar3;
      c->num = 0;
      (*(code *)PTR_memset_0057d8ac)(puVar2,0,0x40);
    }
    uVar1 = len >> 6;
    if (uVar1 != 0) {
      FUN_00454ad0(c,data,uVar1);
      data = (void *)((int)data + uVar1 * 0x40);
      len = len + uVar1 * -0x40;
    }
    if (len != 0) {
      c->num = len;
      (*(code *)PTR_memcpy_0057e698)(c->data,data,len);
    }
  }
  return 1;
}

