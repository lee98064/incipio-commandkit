/* RSA_verify @ 004df64c */

int RSA_verify(int type,uchar *m,uint m_length,uchar *sigbuf,uint siglen,RSA *rsa)

{
  int iVar1;
  _func_1769 *UNRECOVERED_JUMPTABLE;
  
  if (((rsa->flags & 0x40U) != 0) &&
     (UNRECOVERED_JUMPTABLE = rsa->meth->rsa_verify, UNRECOVERED_JUMPTABLE != (_func_1769 *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x004df694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*UNRECOVERED_JUMPTABLE)(type,m,m_length,sigbuf,siglen,rsa);
    return iVar1;
  }
  iVar1 = int_rsa_verify(type,m,m_length,0,0,sigbuf,siglen,rsa);
  return iVar1;
}

