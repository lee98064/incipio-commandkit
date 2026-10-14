/* FUN_0041b628 @ 0041b628 */

undefined4
FUN_0041b628(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_28 [16];
  undefined4 local_18;
  
  local_18 = param_4;
  gcm_init_message(param_1,param_2,param_9);
  gcm_auth_header(param_3,local_18,param_9);
  gcm_decrypt(param_5,param_5,param_6,param_9);
  iVar1 = gcm_compute_tag(auStack_28,param_8,param_9);
  uVar2 = 0xffffffff;
  if (iVar1 == 0) {
    iVar1 = (*(code *)PTR_memcmp_004331b0)(param_7,auStack_28,param_8);
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}

