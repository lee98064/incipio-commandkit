/* FUN_0040d3a0 @ 0040d3a0 */

undefined4
FUN_0040d3a0(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,int param_6,int param_7)

{
  undefined4 uVar1;
  undefined1 auStack_138 [64];
  undefined1 auStack_f8 [208];
  undefined4 local_28;
  undefined4 local_24;
  
  if ((*param_1 == '\x04') || (uVar1 = 0xffffe5cb, *param_1 == '\x06')) {
    if (param_6 != 0) {
      local_28 = param_2;
      local_24 = param_3;
      (*(code *)PTR_SHA512_Init_compat_004330ac)(auStack_f8);
      (*(code *)PTR_SHA512_Update_compat_004330a8)(auStack_f8,local_28,local_24);
      (*(code *)PTR_SHA512_Update_compat_004330a8)(auStack_f8,param_1 + 2,0x20);
      (*(code *)PTR_SHA512_Final_compat_00433298)(auStack_138,auStack_f8);
      (*(code *)PTR_memcpy_004332a8)(param_6,auStack_138,0x10);
    }
    uVar1 = 0;
    if (param_7 != 0) {
      (*(code *)PTR_SHA512_Init_compat_004330ac)(auStack_f8);
      (*(code *)PTR_SHA512_Update_compat_004330a8)(auStack_f8,param_4,param_5);
      (*(code *)PTR_SHA512_Update_compat_004330a8)(auStack_f8,param_1 + 2,0x20);
      (*(code *)PTR_SHA512_Final_compat_00433298)(auStack_138,auStack_f8);
      (*(code *)PTR_memcpy_004332a8)(param_7,auStack_138,0x10);
      uVar1 = 0;
    }
  }
  return uVar1;
}

