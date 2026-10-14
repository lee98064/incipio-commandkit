/* RSA_verify @ 0046da84 */

int RSA_verify(int type,uchar *m,uint m_length,uchar *sigbuf,uint siglen,RSA *rsa)

{
  int iVar1;
  _func_1769 *p_Var2;
  
  if (((rsa->flags & 0x40U) == 0) || (p_Var2 = rsa->meth->rsa_verify, p_Var2 == (_func_1769 *)0x0))
  {
    iVar1 = int_rsa_verify();
  }
  else {
    iVar1 = (*p_Var2)(type,m,m_length,sigbuf,siglen,rsa);
  }
  return iVar1;
}

