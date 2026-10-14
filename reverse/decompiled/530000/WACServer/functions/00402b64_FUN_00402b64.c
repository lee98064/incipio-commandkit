/* FUN_00402b64 @ 00402b64 */

void FUN_00402b64(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x40) != '\0') {
    DAT_00433540 = 1;
    (*(code *)PTR_puts_00433294)("[WACCallbackFunc]: should stop !! ");
  }
  switch(param_2) {
  case 0:
    uVar1 = 0;
    break;
  case 1:
    uVar1 = 1;
    break;
  case 2:
    uVar1 = 2;
    break;
  case 3:
    uVar1 = 3;
    break;
  case 4:
    uVar1 = 4;
    break;
  case 5:
    FUN_004028e0(5);
    DAT_00433540 = 1;
    return;
  case 6:
    uVar1 = 6;
    break;
  default:
    return;
  }
  FUN_004028e0(uVar1);
  return;
}

