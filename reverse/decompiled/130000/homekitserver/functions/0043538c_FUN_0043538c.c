/* FUN_0043538c @ 0043538c */

void FUN_0043538c(undefined4 param_1,undefined4 param_2,int param_3,uint param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *local_14;
  
  bVar1 = false;
  (*(code *)PTR_sprintbuf_00612f2c)(param_2,PTR_PTR_006114b0 + -0x25c8);
  if ((param_4 & 2) != 0) {
    (*(code *)PTR_sprintbuf_00612f2c)(param_2,PTR_PTR_006114b0 + -0x25c4);
  }
  iVar2 = (*(code *)PTR_json_object_get_object_00612cf8)(param_1);
  for (local_14 = *(undefined4 **)(iVar2 + 0x20); local_14 != (undefined4 *)0x0;
      local_14 = (undefined4 *)local_14[2]) {
    uVar4 = *local_14;
    iVar2 = local_14[1];
    if ((bVar1) &&
       ((*(code *)PTR_sprintbuf_00612f2c)(param_2,PTR_PTR_006114b0 + -0x25c0), (param_4 & 2) != 0))
    {
      (*(code *)PTR_sprintbuf_00612f2c)(param_2,PTR_PTR_006114b0 + -0x25c4);
    }
    bVar1 = true;
    if ((param_4 & 1) != 0) {
      (*(code *)PTR_sprintbuf_00612f2c)(param_2,PTR_PTR_006114b0 + -0x25bc);
    }
    (*(code *)(PTR_LAB_006114b4 + 0x5300))(param_2,param_3 + 1,param_4);
    (*(code *)PTR_sprintbuf_00612f2c)(param_2,PTR_PTR_006114b0 + -0x25b8);
    uVar3 = (*(code *)PTR_strlen_006130b4)(uVar4);
    (*(code *)(PTR_LAB_006114b4 + 0x4720))(param_2,uVar4,uVar3);
    if ((param_4 & 1) == 0) {
      (*(code *)PTR_sprintbuf_00612f2c)(param_2,PTR_PTR_006114b0 + -0x25b0);
    }
    else {
      (*(code *)PTR_sprintbuf_00612f2c)(param_2,PTR_PTR_006114b0 + -0x25b4);
    }
    if (iVar2 == 0) {
      (*(code *)PTR_sprintbuf_00612f2c)(param_2,PTR_PTR_006114b0 + -0x25d0);
    }
    else {
      (**(code **)(iVar2 + 8))(iVar2,param_2,param_3 + 1,param_4);
    }
  }
  if ((param_4 & 2) != 0) {
    if (bVar1) {
      (*(code *)PTR_sprintbuf_00612f2c)(param_2,PTR_PTR_006114b0 + -0x25c4);
    }
    (*(code *)(PTR_LAB_006114b4 + 0x5300))(param_2,param_3,param_4);
  }
  if ((param_4 & 1) == 0) {
    (*(code *)PTR_sprintbuf_00612f2c)(param_2,PTR_PTR_006114b0 + -0x25a8);
  }
  else {
    (*(code *)PTR_sprintbuf_00612f2c)(param_2,PTR_PTR_006114b0 + -0x25ac);
  }
  return;
}

