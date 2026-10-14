/* FUN_8040970c @ 8040970c */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_8040970c(undefined4 param_1,int *param_2)

{
  undefined4 uVar1;
  short sVar2;
  
  if (*param_2 == 0) {
    FUN_804079cc(s_Usage__sleep_<0~2>_8040ddf4);
    FUN_804079cc(s_sleep_<0>_CPU_sleep___DRAM_Norma_8040de0c);
    FUN_804079cc(s_sleep_<1>_CPU_sleep___DRAM_Power_8040de38);
    FUN_804079cc(s_sleep_<2>_CPU_sleep___DRAM_Self_r_8040de64);
    FUN_804079cc(s_sleep_<3>_Only_DRAM_Power_down_8040de90);
    uVar1 = FUN_804079cc(s_sleep_<4>_CPUSleep___Self_Refres_8040deb4);
    return uVar1;
  }
  sVar2 = FUN_80406c50(*param_2,0,0x10);
  if (sVar2 != 0) {
    _DAT_b8001040 = 0x3fffffff;
    switch(sVar2) {
    case 1:
      FUN_804079cc(s_DRAM__Auto_Power_Down_mode_8040defc);
      _DAT_b8001040 = _DAT_b8001040 | 0x40000000;
      break;
    case 2:
      FUN_804079cc(s_DRAM___Self_Refresh_mode_8040df1c);
      _DAT_b8001040 = 0x3fffffff;
      FUN_80407318(1000);
      _DAT_b8001040 = _DAT_b8001040 | 0x80000000;
      FUN_80407318(1000);
      _DAT_b8001040 = _DAT_b8001040 | 0x80000000;
      break;
    case 3:
      FUN_804079cc(s_DRAM__Only_Power_Down_mode__8040df38);
      _DAT_b8001040 = _DAT_b8001040 | 0x40000000;
      return 0;
    case 4:
      FUN_804079cc(s_CPUSleep___Self_Refresh_in_IMEM__8040df58);
      FUN_8040c000();
      break;
    default:
      FUN_804079cc(s_Error_Input_should_be_0_3_8040df7c);
    }
  }
  _DAT_b8003000 = 0;
  FUN_804079cc(s_CPU_Enter_Sleep____8040df98);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

