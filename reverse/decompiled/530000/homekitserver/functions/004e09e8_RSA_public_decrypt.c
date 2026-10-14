/* RSA_public_decrypt @ 004e09e8 */

int RSA_public_decrypt(int flen,uchar *from,uchar *to,RSA *rsa,int padding)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004e09f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*rsa->meth->rsa_pub_dec)(flen,from,to,rsa,padding);
  return iVar1;
}

