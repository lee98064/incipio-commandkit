/* SHA256_Update @ 004c33a0 */

int SHA256_Update(SHA256_CTX *c,void *data,size_t len)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  
  if (len != 0) {
    uVar2 = len * 8 + c->Nl;
    if (uVar2 < c->Nl) {
      c->Nh = c->Nh + 1;
    }
    uVar3 = c->num;
    c->Nh = c->Nh + (len >> 0x1d);
    c->Nl = uVar2;
    if (uVar3 != 0) {
      puVar4 = c->data;
      if ((len < 0x40) && (len + uVar3 < 0x40)) {
        (*(code *)PTR_memcpy_006137d0)((int)puVar4 + uVar3,data,len);
        c->num = c->num + len;
        return 1;
      }
      iVar5 = 0x40 - uVar3;
      (*(code *)PTR_memcpy_006137d0)((int)puVar4 + uVar3,data,iVar5);
      FUN_004c0d30(c,puVar4,1);
      c->num = 0;
      (*(code *)PTR_memset_0061223c)(puVar4,0,0x40);
      len = len - iVar5;
      data = (void *)((int)data + iVar5);
    }
    uVar2 = len >> 6;
    if (uVar2 != 0) {
      FUN_004c0d30(c,data,uVar2);
      len = len + uVar2 * -0x40;
      data = (void *)((int)data + uVar2 * 0x40);
    }
    puVar1 = PTR_memcpy_006137d0;
    if (len != 0) {
      c->num = len;
      (*(code *)puVar1)(c->data,data,len);
    }
  }
  return 1;
}

