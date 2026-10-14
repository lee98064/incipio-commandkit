/* FUN_0040cd1c @ 0040cd1c */

void FUN_0040cd1c(undefined4 param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined *puVar6;
  uint uVar7;
  undefined4 local_120;
  int local_11c;
  undefined1 auStack_118 [128];
  undefined1 auStack_98 [128];
  
  local_120 = 0x80;
  iVar2 = (*(code *)PTR_accept_0046aa3c)(param_1,auStack_118,&local_120);
  if (iVar2 == -1) {
    *(undefined4 *)PTR_pending_requests_0046a9e0 = 0;
    return;
  }
  if (0x3ff < iVar2) {
LAB_0040cdc0:
    (*(code *)PTR_close_0046a694)(iVar2);
    return;
  }
  local_11c = 0x80;
  iVar3 = (*(code *)PTR_getsockname_0046a67c)(iVar2,auStack_98,&local_11c);
  if ((iVar3 != 0) || (puVar4 = (undefined4 *)FUN_0040cc60(), puVar4 == (undefined4 *)0x0))
  goto LAB_0040cdc0;
  puVar4[0x10] = (int)puVar4 + 0x10d5;
  puVar1 = PTR_current_time_0046ab68;
  puVar4[0x2d] = iVar2;
  *puVar4 = 0;
  puVar6 = PTR_ascii_sockaddr_0046ab30;
  puVar4[0x2e] = *(undefined4 *)puVar1;
  puVar4[0x231] = *(undefined4 *)PTR_ka_max_0046a69c;
  iVar3 = (*(code *)puVar6)(auStack_98,puVar4 + 0x2f,0x401);
  if ((iVar3 != 0) &&
     ((iVar3 = (*(code *)PTR_fcntl_0046a6cc)(puVar4[0x2d],4,0x80), iVar3 != -1 &&
      (iVar3 = (*(code *)PTR_fcntl_0046a6cc)(puVar4[0x2d],2,1), iVar3 != -1)))) {
    if (system_bufsize == 0) {
      local_11c = 4;
      iVar3 = (*(code *)PTR_getsockopt_0046a7b8)
                        (puVar4[0x2d],0xffff,0x1001,&system_bufsize,&local_11c);
      if ((iVar3 != 0) || (local_11c != 4)) {
        system_bufsize = 1;
      }
    }
    if (system_bufsize < DAT_004682e0) {
      (*(code *)PTR_setsockopt_0046a98c)(puVar4[0x2d],0xffff,0x1001,&DAT_004682e0,4);
    }
    iVar3 = (*(code *)PTR_ascii_sockaddr_0046ab30)(auStack_118,(int)puVar4 + 0x4bd,0x401);
    if (iVar3 != 0) {
      uVar5 = (*(code *)PTR_net_port_0046a774)(auStack_118);
      puVar4[0x230] = uVar5;
      uVar7 = *(uint *)PTR_max_connections_0046aa30;
      total_connections = total_connections + 1;
      *(int *)PTR_status_0046a6a8 = *(int *)PTR_status_0046a6a8 + 1;
      puVar1 = PTR_send_r_service_unavailable_0046ab74;
      puVar6 = PTR_request_ready_0046ac54;
      if (uVar7 < total_connections) {
        *(undefined4 *)PTR_pending_requests_0046a9e0 = 0;
        puVar4[2] = 2;
        puVar4[3] = 1;
        (*(code *)puVar1)(puVar4);
        *puVar4 = 10;
        puVar6 = PTR_request_ready_0046ac54;
      }
      goto LAB_0040cfc0;
    }
  }
  (*(code *)PTR_close_0046a694)(iVar2);
  puVar6 = PTR_request_free_0046a6d0;
LAB_0040cfc0:
  (*(code *)PTR_enqueue_0046a7b4)(puVar6,puVar4);
  return;
}

