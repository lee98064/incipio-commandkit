/* HomekitSerialFuncRegister @ 00431290 */

void HomekitSerialFuncRegister(int *param_1)

{
  if (*param_1 != 0) {
    DAT_00614fb0 = *param_1;
  }
  if (param_1[3] != 0) {
    DAT_00614fbc = param_1[3];
  }
  if (param_1[1] != 0) {
    DAT_00614fb4 = param_1[1];
  }
  if (param_1[2] != 0) {
    DAT_00614fb8 = param_1[2];
  }
  return;
}

