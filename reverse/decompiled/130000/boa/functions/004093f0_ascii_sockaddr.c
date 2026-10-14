/* ascii_sockaddr @ 004093f0 */

undefined1 * ascii_sockaddr(undefined4 param_1,undefined1 *param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_getnameinfo_0046aa68)(param_1,0x80,param_2,param_3,0,0,1);
  if (iVar1 != 0) {
    (*(code *)PTR_fputs_0046a6e4)("[IPv6] getnameinfo failed\n",*(undefined4 *)PTR_stderr_0046a7f0);
    *param_2 = 0;
  }
  return param_2;
}

