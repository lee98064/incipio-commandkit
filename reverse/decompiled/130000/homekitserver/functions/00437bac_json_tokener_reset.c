/* json_tokener_reset @ 00437bac */

void json_tokener_reset(int param_1)

{
  int local_10;
  
  if (param_1 != 0) {
    for (local_10 = *(int *)(param_1 + 0xc); -1 < local_10; local_10 = local_10 + -1) {
      (*(code *)(PTR_LAB_006114b4 + 0x7a38))(param_1,local_10);
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return;
}

