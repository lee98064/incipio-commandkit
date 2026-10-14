/* process_get @ 00407638 */

undefined4 process_get(undefined4 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint local_18;
  
  if (param_1[3] != 2) {
    local_18 = (((int *)param_1[8])[1] + 1) - *(int *)param_1[8];
    if (*(uint *)PTR_system_bufsize_0046a760 < local_18) {
      local_18 = *(uint *)PTR_system_bufsize_0046a760;
    }
    iVar3 = (*(code *)PTR__setjmp_0046a734)(PTR_env_0046a7d8);
    puVar2 = PTR_get_commonlog_time_0046aab4;
    puVar1 = PTR_handle_sigbus_0046a9b8;
    if (iVar3 != 0) {
      *param_1 = 0xc;
      uVar6 = *(undefined4 *)PTR_stderr_0046a7f0;
      uVar5 = (*(code *)puVar2)();
      (*(code *)PTR_fprintf_0046a9ec)(uVar6,"%sGot SIGBUS in write(2)!\n",uVar5);
      return 0;
    }
    *(undefined4 *)PTR_handle_sigbus_0046a9b8 = 1;
    iVar3 = (*(code *)PTR_write_0046a9fc)(param_1[0x2d],param_1[0xe] + *(int *)param_1[8],local_18);
    *(undefined4 *)puVar1 = 0;
    if (iVar3 < 0) {
      piVar4 = (int *)(*(code *)PTR___errno_location_0046a764)();
      if (*piVar4 == 0xb) {
        return 0xffffffff;
      }
      (*(code *)PTR_perror_0046ab44)("write");
      *param_1 = 0xc;
      return 0;
    }
    param_1[0xd] = param_1[0xd] + iVar3;
    *(int *)param_1[8] = *(int *)param_1[8] + iVar3;
    if (*(int *)param_1[8] != ((int *)param_1[8])[1] + 1) {
      return 1;
    }
  }
  uVar5 = (*(code *)PTR_complete_response_0046a864)(param_1);
  return uVar5;
}

