/* FUN_0041c35c @ 0041c35c */

undefined4 FUN_0041c35c(char *param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  char local_20;
  char local_1f;
  undefined1 local_1e;
  
  iVar2 = 0;
  while( true ) {
    local_20 = *param_1;
    local_1f = param_1[1];
    if (((9 < (byte)(local_20 - 0x30U)) && (5 < (byte)(local_20 + 0xbfU))) &&
       (5 < (byte)(local_20 + 0x9fU))) {
      return 0;
    }
    param_1 = param_1 + 2;
    if (((9 < (byte)(local_1f - 0x30U)) && (5 < (byte)(local_1f + 0xbfU))) &&
       (5 < (byte)(local_1f + 0x9fU))) break;
    local_1e = 0;
    uVar1 = (*(code *)PTR_strtol_0046aa48)(&local_20,0,0x10);
    *(undefined1 *)(param_2 + iVar2) = uVar1;
    if (iVar2 == 5) {
      return 1;
    }
    iVar2 = iVar2 + 1;
  }
  return 0;
}

