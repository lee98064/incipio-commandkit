/* json_object_put @ 00434c88 */

undefined4 json_object_put(int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 == 0) ||
     (*(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1, *(int *)(param_1 + 0xc) != 0)) {
    uVar1 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x20) != 0) {
      (**(code **)(param_1 + 0x20))(param_1,*(undefined4 *)(param_1 + 0x24));
    }
    (**(code **)(param_1 + 4))(param_1);
    uVar1 = 1;
  }
  return uVar1;
}

