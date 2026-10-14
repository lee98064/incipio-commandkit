/* HKPairVerifyEngine @ 00426d10 */

int HKPairVerifyEngine(undefined4 param_1,int param_2,undefined1 *param_3,undefined4 param_4,
                      undefined4 param_5)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  char local_48 [4];
  int local_44;
  int local_40;
  int local_3c;
  int *local_38;
  byte *local_34;
  undefined *local_30;
  
  if (param_3 == (undefined1 *)0x0) {
    return -0x1a59;
  }
  if (*(int *)(param_3 + 4) == 1) {
    local_44 = *(int *)(param_2 + 0x104);
    local_38 = &local_3c;
    iVar5 = local_44 + *(int *)(param_2 + 0x10c);
    while (iVar4 = (*(code *)PTR_TLVGetNext_00613da4)
                             (local_44,iVar5,local_48,local_38,&local_40,&local_44), iVar4 == 0) {
      local_34 = (byte *)(*(code *)PTR_calloc_006148c0)(local_40 + 1,1);
      if (local_34 == (byte *)0x0) {
        local_34 = (byte *)0xffffe5b8;
        goto LAB_00427104;
      }
      (*(code *)PTR_memcpy_00614674)(local_34,local_3c,local_40);
      if (local_48[0] == '\x03') {
        *(byte **)(param_3 + 0xc) = local_34;
      }
      else if (local_48[0] == '\x06') {
        if (*(uint *)(param_3 + 4) != (uint)*local_34) {
          local_34 = (byte *)0xffffe5af;
          goto LAB_00427104;
        }
        (*(code *)PTR_free_0061286c)(local_34);
      }
    }
    *(undefined4 *)(param_3 + 4) = 2;
    local_34 = (byte *)FUN_004262f8(param_1,param_3,param_4);
    goto LAB_004270fc;
  }
  if (*(int *)(param_3 + 4) != 3) {
    return -0x1a35;
  }
  iVar5 = FUN_00426908(param_2,param_3,param_4,param_5);
  if (iVar5 != 0) {
    *(undefined4 *)(param_3 + 4) = 1;
    return iVar5;
  }
  local_40 = 0;
  local_3c = 0;
  puVar6 = (undefined1 *)(*(code *)PTR_calloc_006148c0)(3,1);
  puVar3 = PTR_calloc_006148c0;
  if (puVar6 == (undefined1 *)0x0) {
LAB_0042713c:
    iVar5 = -0x1a48;
LAB_00427140:
    local_34 = (byte *)iVar5;
    if (puVar6 != (undefined1 *)0x0) goto LAB_004270bc;
  }
  else {
    *puVar6 = 6;
    puVar6[2] = 4;
    *param_3 = 1;
    puVar6[1] = 1;
    iVar5 = (*(code *)puVar3)(0x20,1);
    *(int *)(param_3 + 0x20) = iVar5;
    if (iVar5 == 0) goto LAB_0042713c;
    local_30 = PTR_s_Control_Salt_00600a7c;
    local_34 = (byte *)(*(code *)PTR_strlen_00613f4c)(PTR_s_Control_Salt_00600a7c);
    puVar3 = PTR_s_Control_Read_Encryption_Key_00600a98;
    uVar7 = (*(code *)PTR_strlen_00613f4c)(PTR_s_Control_Read_Encryption_Key_00600a98);
    iVar5 = (*(code *)PTR_hkdf_00613044)
                      (4,local_30,local_34,*(undefined4 *)(param_3 + 0x18),0x20,puVar3,uVar7,iVar5,
                       0x20);
    if (iVar5 != 0) goto LAB_00427140;
    iVar5 = (*(code *)PTR_calloc_006148c0)(0x20,1);
    *(int *)(param_3 + 0x24) = iVar5;
    if (iVar5 == 0) goto LAB_0042713c;
    local_30 = PTR_s_Control_Salt_00600a78;
    local_34 = (byte *)(*(code *)PTR_strlen_00613f4c)(PTR_s_Control_Salt_00600a78);
    puVar3 = PTR_s_Control_Write_Encryption_Key_00600a94;
    uVar7 = (*(code *)PTR_strlen_00613f4c)(PTR_s_Control_Write_Encryption_Key_00600a94);
    iVar5 = (*(code *)PTR_hkdf_00613044)
                      (4,local_30,local_34,*(undefined4 *)(param_3 + 0x18),0x20,puVar3,uVar7,iVar5,
                       0x20);
    if ((iVar5 != 0) ||
       (iVar5 = (*(code *)PTR_CreateSimpleHTTPMessageNoCopy_006131a4)
                          ("application/pairing+tlv8",3,&local_40,&local_3c), iVar5 != 0))
    goto LAB_00427140;
    iVar5 = (*(code *)PTR_calloc_006148c0)(local_3c + 3,1);
    (*(code *)PTR_memcpy_00614674)(iVar5,local_40,local_3c);
    puVar3 = PTR_SocketSend_00612dcc;
    uVar1 = *puVar6;
    uVar2 = puVar6[1];
    puVar8 = (undefined1 *)(iVar5 + local_3c);
    puVar8[2] = puVar6[2];
    *puVar8 = uVar1;
    puVar8[1] = uVar2;
    local_34 = (byte *)(*(code *)puVar3)(param_1,iVar5,local_3c + 3);
    if (iVar5 != 0) {
      (*(code *)PTR_free_0061286c)(iVar5);
    }
LAB_004270bc:
    (*(code *)PTR_free_0061286c)(puVar6);
  }
  if (local_40 != 0) {
    (*(code *)PTR_free_0061286c)();
  }
LAB_004270fc:
  if (local_34 != (byte *)0x0) {
LAB_00427104:
    *(undefined4 *)(param_3 + 4) = 1;
  }
  return (int)local_34;
}

