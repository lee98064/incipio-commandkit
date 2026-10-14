/* FUN_8040922c @ 8040922c */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8040922c(uint param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = _DAT_b8003000;
  _DAT_b8000004 = 2;
  do {
  } while ((_DAT_b8003004 & 0x8000000) != 0);
  _DAT_b8003014 = _DAT_b8003014 & 0xffff0fff | 0x3000;
  FUN_80400a54(0x1b,&PTR_FUN_8040ee20,0);
  uVar1 = _DAT_b8000008;
  _DAT_b8003000 = 0x8000000;
  _DAT_b8000008 = (param_1 & 0xf) << 0xd | _DAT_b8000008 & 0xfff21fff | (param_2 & 3) << 0x12;
  if (param_1 != (uVar1 & 0x1e000) >> 0xd) {
    _DAT_b8003004 = 0xffffffff;
    _DAT_b8000014 = _DAT_b8000014 | 4;
    do {
    } while ((_DAT_b8000020 & 1) == 0);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  _DAT_b8003000 = uVar2;
  return;
}

