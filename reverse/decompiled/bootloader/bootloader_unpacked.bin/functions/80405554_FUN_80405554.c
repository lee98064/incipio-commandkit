/* FUN_80405554 @ 80405554 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80405554(undefined1 param_1,int param_2,undefined4 param_3,char param_4,undefined1 param_5,
                 byte param_6)

{
  int iVar1;
  
  if (param_4 == '\x02') {
    FUN_80404ff4(param_1,0,param_5);
  }
  else {
    FUN_80404ff4(param_1,0,0);
  }
  do {
  } while ((_DAT_b8001208 & 0x8000000) == 0);
  _DAT_b800120c = param_3;
  if (param_4 == '\0') {
    FUN_80404ff4(param_1,0,0);
  }
  else {
    FUN_80404ff4(param_1,0,param_5);
  }
  do {
  } while ((_DAT_b8001208 & 0x8000000) == 0);
  do {
  } while ((_DAT_b8001208 & 0x8000000) == 0);
  do {
  } while ((_DAT_b8001208 & 0x8000000) == 0);
  _DAT_b800120c = param_2 << 0x18;
  iVar1 = 0;
  if (param_6 != 0) {
    do {
      do {
      } while ((_DAT_b8001208 & 0x8000000) == 0);
      _DAT_b800120c = 0;
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)(uint)param_6);
  }
  FUN_80404ff4(param_1,3,param_5);
  return;
}

