/* FUN_00423164 @ 00423164 */

void FUN_00423164(undefined4 param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)PTR___ctype_toupper_00612fa8;
  (*(code *)PTR_sprintf_00611f90)
            (param_1,"%c%c:%c%c:%c%c:%c%c:%c%c:%c%c",(int)*(short *)(iVar1 + *param_2 * 2),
             (int)*(short *)(iVar1 + param_2[1] * 2),(int)*(short *)(iVar1 + param_2[2] * 2),
             (int)*(short *)(iVar1 + param_2[3] * 2),(int)*(short *)(iVar1 + param_2[4] * 2),
             (int)*(short *)(iVar1 + param_2[5] * 2),(int)*(short *)(iVar1 + param_2[6] * 2),
             (int)*(short *)(iVar1 + param_2[7] * 2),(int)*(short *)(iVar1 + param_2[8] * 2),
             (int)*(short *)(iVar1 + param_2[9] * 2),(int)*(short *)(iVar1 + param_2[10] * 2),
             (int)*(short *)(iVar1 + param_2[0xb] * 2));
  return;
}

