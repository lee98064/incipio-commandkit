/* FUN_0042fb84 @ 0042fb84 */

undefined4 FUN_0042fb84(char *param_1)

{
  undefined4 uVar1;
  
  if ((((((9 < (byte)(*param_1 - 0x30U)) || (9 < (byte)(param_1[1] - 0x30U))) ||
        (9 < (byte)(param_1[2] - 0x30U))) ||
       ((param_1[3] != '-' || (9 < (byte)(param_1[4] - 0x30U))))) ||
      ((9 < (byte)(param_1[5] - 0x30U) || ((param_1[6] != '-' || (9 < (byte)(param_1[7] - 0x30U)))))
      )) || ((9 < (byte)(param_1[8] - 0x30U) || (uVar1 = 1, 9 < (byte)(param_1[9] - 0x30U))))) {
    (*(code *)PTR_fprintf_00612f5c)
              (*(undefined4 *)PTR_stderr_006137c8,
               "\nFILE %s FUNCTION %s LINE %d: Setup code is illegal %2x%2x%2x%2x%2x%2x%2x%2x%2x%2x\n"
               ,"/home/vendor/rtl819x_v3464_homekit/users/phytrex-homekit/homekitsetupcode.c",
               "checkSetupCodeisLegal",0x76,*param_1,param_1[1],param_1[2],param_1[3],param_1[4],
               param_1[5],param_1[6],param_1[7],param_1[8],param_1[9]);
    uVar1 = 0;
  }
  return uVar1;
}

