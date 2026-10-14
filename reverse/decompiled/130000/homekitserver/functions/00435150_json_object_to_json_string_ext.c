/* json_object_to_json_string_ext @ 00435150 */

undefined * json_object_to_json_string_ext(int param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1 == 0) {
    puVar1 = PTR_PTR_006114b0 + -0x25d0;
  }
  else {
    if (*(int *)(param_1 + 0x10) == 0) {
      uVar2 = (*(code *)PTR_printbuf_new_00612c24)();
      *(undefined4 *)(param_1 + 0x10) = uVar2;
      if (*(int *)(param_1 + 0x10) == 0) {
        return (undefined *)0x0;
      }
    }
    (*(code *)PTR_printbuf_reset_00612fc8)(*(undefined4 *)(param_1 + 0x10));
    iVar3 = (**(code **)(param_1 + 8))(param_1,*(undefined4 *)(param_1 + 0x10),0,param_2);
    if (iVar3 < 0) {
      puVar1 = (undefined *)0x0;
    }
    else {
      puVar1 = (undefined *)**(undefined4 **)(param_1 + 0x10);
    }
  }
  return puVar1;
}

