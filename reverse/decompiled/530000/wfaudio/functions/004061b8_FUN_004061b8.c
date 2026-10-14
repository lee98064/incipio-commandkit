/* FUN_004061b8 @ 004061b8 */

/* WARNING: Removing unreachable block (ram,0x00406204) */

undefined8 FUN_004061b8(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = ((param_1 - param_2) * 1000000) / 48000;
  if (param_1 < param_2) {
    (*(code *)PTR_printf_004235c0)
              ("Max=%ld, Avail=%ld,TN=%016llX\n",param_1,param_2,param_4,iVar1 >> 0x1f,iVar1);
  }
  return CONCAT44(iVar1,iVar1 >> 0x1f);
}

