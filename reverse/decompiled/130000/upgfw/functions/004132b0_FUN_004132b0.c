/* FUN_004132b0 @ 004132b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * FUN_004132b0(byte *pem,int public_key)

{
  int iVar1;
  code *pcVar2;
  void *local_10 [2];
  
  local_10[0] = (void *)0x0;
  iVar1 = (*(code *)PTR_BIO_new_mem_buf_0057e91c)(pem,0xffffffff);
  if (iVar1 == 0) {
    (*(code *)PTR_puts_0057d208)("Failed to create key BIO");
    local_10[0] = (void *)0x0;
  }
  else {
    pcVar2 = (code *)PTR_PEM_read_bio_RSAPrivateKey_0057e050;
    if (public_key != 0) {
      pcVar2 = (code *)PTR_PEM_read_bio_RSA_PUBKEY_0057d86c;
    }
    local_10[0] = (void *)(*pcVar2)(iVar1,local_10,0,0);
    if (local_10[0] == (void *)0x0) {
      (*(code *)PTR_puts_0057d208)("Failed to create RSA");
    }
  }
  return local_10[0];
}

