/* FUN_00405f08 @ 00405f08 */

/* WARNING: Removing unreachable block (ram,0x00405f54) */

undefined8 FUN_00405f08(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = ((param_1 - param_2) * 1000000) / 48000;
  if (param_1 < param_2) {
    (*(code *)PTR_printf_004232d4)
              ("Max=%ld, Avail=%ld,TN=%016llX\n",param_1,param_2,param_4,iVar1 >> 0x1f,iVar1);
  }
  return CONCAT44(iVar1,iVar1 >> 0x1f);
}

