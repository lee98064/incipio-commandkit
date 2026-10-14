/* FUN_0041b874 @ 0041b874 */

undefined4
FUN_0041b874(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9)

{
  int iVar1;
  undefined4 uVar2;
  
  gcm_init_message(param_1,param_2,param_9);
  gcm_auth_header(param_3,param_4,param_9);
  gcm_encrypt(param_5,param_5,param_6,param_9);
  iVar1 = gcm_compute_tag(param_7,param_8,param_9);
  uVar2 = 0xffffffff;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  return uVar2;
}

