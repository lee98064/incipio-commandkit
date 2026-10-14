/* FUN_00436f0c @ 00436f0c */

void FUN_00436f0c(undefined4 param_1,undefined4 param_2,int param_3,uint param_4)

{
  bool bVar1;
  int iVar2;
  int local_14;
  
  bVar1 = false;
  (*(code *)PTR_sprintbuf_00612f2c)(param_2,PTR_PTR_006114b0 + -0x2584);
  if ((param_4 & 2) != 0) {
    (*(code *)PTR_sprintbuf_00612f2c)(param_2,PTR_PTR_006114b0 + -0x25c4);
  }
  local_14 = 0;
  while( true ) {
    iVar2 = (*(code *)PTR_json_object_array_length_006138ec)(param_1);
    if (iVar2 <= local_14) break;
    if (bVar1) {
      (*(code *)PTR_sprintbuf_00612f2c)(param_2,PTR_PTR_006114b0 + -0x25c0);
      if ((param_4 & 2) != 0) {
        (*(code *)PTR_sprintbuf_00612f2c)(param_2,PTR_PTR_006114b0 + -0x25c4);
      }
    }
    bVar1 = true;
    if ((param_4 & 1) != 0) {
      (*(code *)PTR_sprintbuf_00612f2c)(param_2,PTR_PTR_006114b0 + -0x25bc);
    }
    (*(code *)(PTR_LAB_006114b4 + 0x5300))(param_2,param_3 + 1,param_4);
    iVar2 = (*(code *)PTR_json_object_array_get_idx_00613274)(param_1,local_14);
    if (iVar2 == 0) {
      (*(code *)PTR_sprintbuf_00612f2c)(param_2,PTR_PTR_006114b0 + -0x25d0);
    }
    else {
      (**(code **)(iVar2 + 8))(iVar2,param_2,param_3 + 1,param_4);
    }
    local_14 = local_14 + 1;
  }
  if ((param_4 & 2) != 0) {
    if (bVar1) {
      (*(code *)PTR_sprintbuf_00612f2c)(param_2,PTR_PTR_006114b0 + -0x25c4);
    }
    (*(code *)(PTR_LAB_006114b4 + 0x5300))(param_2,param_3,param_4);
  }
  if ((param_4 & 1) == 0) {
    (*(code *)PTR_sprintbuf_00612f2c)(param_2,PTR_PTR_006114b0 + -0x257c);
  }
  else {
    (*(code *)PTR_sprintbuf_00612f2c)(param_2,PTR_PTR_006114b0 + -0x2580);
  }
  return;
}

