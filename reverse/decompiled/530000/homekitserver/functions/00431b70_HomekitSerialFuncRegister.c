/* HomekitSerialFuncRegister @ 00431b70 */

void HomekitSerialFuncRegister(int *param_1)

{
  if (*param_1 != 0) {
    DAT_00615e60 = *param_1;
  }
  if (param_1[3] != 0) {
    DAT_00615e6c = param_1[3];
  }
  if (param_1[1] != 0) {
    DAT_00615e64 = param_1[1];
  }
  if (param_1[2] != 0) {
    DAT_00615e68 = param_1[2];
  }
  return;
}

