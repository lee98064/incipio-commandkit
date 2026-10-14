/* FUN_0043c284 @ 0043c284 */

undefined4 FUN_0043c284(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_28 [20];
  uint local_14;
  uint local_10;
  
  iVar1 = (*(code *)PTR_strchr_0046a6e8)(*param_3,0x5f);
  iVar1 = (*(code *)PTR_atoi_0046a73c)(iVar1 + 1);
  if (iVar1 + 1 < 0xb) {
    local_28[0] = (undefined1)(iVar1 + 1);
    iVar1 = (*(code *)PTR_apmib_get_0046aadc)(0x81f9,local_28);
    if (iVar1 == 0) {
      (*(code *)PTR_fputs_0046a6e4)("Get schedule entry fail\n",*(undefined4 *)PTR_stderr_0046a7f0);
      uVar2 = 0xffffffff;
    }
    else {
      (*(code *)PTR_req_format_write_0046a95c)
                (param_1,"%d|%d|%d|%d",local_14 >> 0x10,local_10 & 0xffff,local_14 & 0xffff,
                 local_10 >> 0x10);
      uVar2 = 0;
    }
  }
  else {
    (*(code *)PTR_req_format_write_0046a95c)(param_1,"0|0|0|0");
    uVar2 = 0;
  }
  return uVar2;
}

