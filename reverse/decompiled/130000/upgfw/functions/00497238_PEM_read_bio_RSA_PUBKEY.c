/* PEM_read_bio_RSA_PUBKEY @ 00497238 */

RSA * PEM_read_bio_RSA_PUBKEY(BIO *bp,RSA **x,undefined1 *cb,void *u)

{
  RSA *pRVar1;
  
  pRVar1 = (RSA *)(*(code *)PTR_PEM_ASN1_read_bio_0057d34c)
                            (PTR_d2i_RSA_PUBKEY_0057e748,"PUBLIC KEY",bp,x,cb,u);
  return pRVar1;
}

