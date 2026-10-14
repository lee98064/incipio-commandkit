/* FUN_0041344c @ 0041344c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int FUN_0041344c(byte *ciphertext,int ciphertext_length,byte *public_key_pem,byte *plaintext)

{
  void *pvVar1;
  int iVar2;
  
  pvVar1 = FUN_004133a0(public_key_pem,1);
  iVar2 = (*(code *)PTR_RSA_public_decrypt_0057d480)
                    (ciphertext_length,ciphertext,plaintext,pvVar1,DAT_00576670);
  return iVar2;
}

