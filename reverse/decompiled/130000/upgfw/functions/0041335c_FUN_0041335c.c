/* FUN_0041335c @ 0041335c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int FUN_0041335c(byte *ciphertext,int ciphertext_length,byte *public_key_pem,byte *plaintext)

{
  void *pvVar1;
  int iVar2;
  
  pvVar1 = FUN_004132b0(public_key_pem,1);
  iVar2 = (*(code *)PTR_RSA_public_decrypt_0057d350)
                    (ciphertext_length,ciphertext,plaintext,pvVar1,DAT_00576540);
  return iVar2;
}

