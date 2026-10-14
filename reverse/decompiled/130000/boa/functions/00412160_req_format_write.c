/* req_format_write @ 00412160 */

int req_format_write(undefined *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 auStack_444 [1068];
  
  if ((param_1 == (undefined *)0x0) || (param_2 == 0)) {
    iVar1 = 0;
  }
  else {
    local_res8 = param_3;
    local_resc = param_4;
    (*(code *)PTR_vsnprintf_0046ab00)(auStack_444,0x428,param_2,&local_res8);
    iVar1 = (*(code *)PTR_strlen_0046a714)(auStack_444);
    if (param_1 == PTR_inner_req_0046aba4) {
      (*(code *)PTR_strcpy_0046ac60)(PTR_inner_req_buff_0046abf8,auStack_444);
    }
    else {
      do {
        if ((uint)(*(int *)(param_1 + 0x50) + 10 + iVar1) <= *(uint *)(param_1 + 0x8cc))
        goto LAB_0041224c;
        iVar2 = allocNewBuffer(param_1);
      } while (iVar2 != -1);
      iVar1 = 0x2000 - *(int *)(param_1 + 0x50);
LAB_0041224c:
      *(int *)PTR_middle_segment_0046a92c = iVar1 + *(int *)PTR_middle_segment_0046a92c;
      if (0 < iVar1) {
        (*(code *)PTR_memcpy_0046ab5c)
                  (*(int *)(param_1 + 0x8d0) + *(int *)(param_1 + 0x50),auStack_444,iVar1);
        *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar1;
      }
    }
  }
  return iVar1;
}

