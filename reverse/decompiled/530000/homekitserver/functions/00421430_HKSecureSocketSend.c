/* HKSecureSocketSend @ 00421430 */

undefined4 HKSecureSocketSend(undefined4 param_1,undefined4 param_2,uint param_3,int param_4)

{
  undefined *puVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int local_38;
  uint local_34;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_20;
  
  local_20 = param_2;
  puVar2 = (undefined1 *)(*(code *)PTR_calloc_006148c0)(param_3 + 0x1c,1);
  puVar1 = PTR_crypto_aead_chacha20poly1305_encrypt_00613840;
  if (puVar2 != (undefined1 *)0x0) {
    iVar3 = *(int *)(param_4 + 0x5c);
    puVar2[1] = (char)(param_3 >> 8);
    local_2f = (undefined1)((uint)iVar3 >> 8);
    *puVar2 = (char)param_3;
    local_2d = (undefined1)((uint)iVar3 >> 0x18);
    local_2c = 0;
    local_28 = 0;
    local_2e = (undefined1)((uint)iVar3 >> 0x10);
    local_30 = (undefined1)iVar3;
    iVar3 = (*(code *)puVar1)(puVar2 + 2,&local_38,local_20,iVar3 >> 0x10,0,param_3,puVar2);
    uVar5 = *(uint *)(param_4 + 0x5c);
    uVar4 = uVar5 + 1;
    *(uint *)(param_4 + 0x5c) = uVar4;
    *(uint *)(param_4 + 0x58) = (uint)(uVar4 < uVar5) + *(int *)(param_4 + 0x58);
    if (iVar3 == 0) {
      if (((uint)(local_34 - 0x10 < local_34) + local_38 + -1 == 0) && (local_34 - 0x10 == param_3))
      {
        (*(code *)PTR_SocketSend_00612dcc)(param_1,puVar2,local_34 + 2);
      }
    }
    (*(code *)PTR_free_0061286c)(puVar2);
  }
  return 0;
}

