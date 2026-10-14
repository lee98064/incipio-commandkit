/* FUN_804077dc @ 804077dc */

void FUN_804077dc(char *param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_30;
  
  FUN_804077a4(s__Addr___0__1__2__3__4__5__6__7___8040db20);
  iVar4 = 0;
  local_30 = param_2;
  if (0 < param_2) {
    do {
      FUN_804077a4(s__08X__8040db5c,param_1);
      iVar4 = iVar4 + 0x10;
      iVar3 = 0x10;
      if ((iVar4 < param_2) || (iVar3 = local_30, 0 < local_30)) {
        iVar2 = 0;
        pcVar1 = param_1;
        do {
          FUN_804077a4(&DAT_8040db64,*pcVar1);
          iVar2 = iVar2 + 1;
          pcVar1 = pcVar1 + 1;
        } while (iVar2 < iVar3);
      }
      if (0 < 0x10 - iVar3) {
        iVar2 = 0;
        do {
          FUN_804077a4(&DAT_8040db6c);
          iVar2 = iVar2 + 1;
        } while (iVar2 < 0x10 - iVar3);
      }
      FUN_804077a4(&DAT_8040db70);
      if (0 < iVar3) {
        iVar2 = 0;
        pcVar1 = param_1;
        do {
          if ((byte)(*pcVar1 - 0x20U) < 0x5f) {
            FUN_804077a4(&DAT_8040db78);
          }
          else {
            FUN_804077a4(s_EB_<Address>_<Value1>_<Value2>___8040e324 + 0x20);
          }
          iVar2 = iVar2 + 1;
          pcVar1 = pcVar1 + 1;
        } while (iVar2 < iVar3);
      }
      FUN_804077a4(&DAT_8040db7c);
      local_30 = local_30 + -0x10;
      param_1 = param_1 + 0x10;
    } while (iVar4 < param_2);
  }
  return;
}

