/* printbuf_memappend @ 0043fe1c */

int printbuf_memappend(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if ((param_1[2] <= param_1[1] + param_3 + 1) &&
     (iVar1 = (*(code *)(PTR_LAB_006114bc + -0x2f0))(param_1,param_1[1] + param_3 + 1), iVar1 < 0))
  {
    return -1;
  }
  (*(code *)PTR_memcpy_006137d0)(*param_1 + param_1[1],param_2,param_3);
  param_1[1] = param_1[1] + param_3;
  *(undefined1 *)(*param_1 + param_1[1]) = 0;
  return param_3;
}

