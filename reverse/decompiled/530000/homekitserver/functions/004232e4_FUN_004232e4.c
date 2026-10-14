/* FUN_004232e4 @ 004232e4 */

void FUN_004232e4(undefined4 param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)PTR___ctype_toupper_00613e40;
  (*(code *)PTR_sprintf_00612e20)
            (param_1,"%c%c:%c%c:%c%c:%c%c:%c%c:%c%c",(int)*(short *)(iVar1 + *param_2 * 2),
             (int)*(short *)(iVar1 + param_2[1] * 2),(int)*(short *)(iVar1 + param_2[2] * 2),
             (int)*(short *)(iVar1 + param_2[3] * 2),(int)*(short *)(iVar1 + param_2[4] * 2),
             (int)*(short *)(iVar1 + param_2[5] * 2),(int)*(short *)(iVar1 + param_2[6] * 2),
             (int)*(short *)(iVar1 + param_2[7] * 2),(int)*(short *)(iVar1 + param_2[8] * 2),
             (int)*(short *)(iVar1 + param_2[9] * 2),(int)*(short *)(iVar1 + param_2[10] * 2),
             (int)*(short *)(iVar1 + param_2[0xb] * 2));
  return;
}

