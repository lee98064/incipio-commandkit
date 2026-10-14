/* FUN_004376e0 @ 004376e0 */

undefined * FUN_004376e0(int param_1)

{
  undefined *puVar1;
  
  if ((param_1 < 0) || (0x38 < param_1)) {
    puVar1 = PTR_PTR_006114b0 + -0x2404;
  }
  else {
    puVar1 = *(undefined **)(PTR_json_tokener_errors_00612df8 + param_1 * 4);
  }
  return puVar1;
}

