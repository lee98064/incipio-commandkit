/* FUN_004483d0 @ 004483d0 */

void FUN_004483d0(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_20 [2];
  
  uVar1 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"nextwebpage",&DAT_0044b32c);
  uVar2 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"operation",&DAT_0044b32c);
  iVar3 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"clientsindex",&DAT_0044b32c);
  iVar4 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"torrentsindex",&DAT_0044b32c);
  iVar5 = (*(code *)PTR_strcmp_0046a824)(uVar2,"start");
  if (iVar5 == 0) {
    while (iVar4 = FUN_004481a8(iVar4,local_20), iVar4 != 0) {
      if (-1 < local_20[0]) {
        (*(code *)PTR_bt_startTorrent_0046a720)();
      }
    }
  }
  else {
    iVar5 = (*(code *)PTR_strcmp_0046a824)(uVar2,"pause");
    if (iVar5 == 0) {
      while (iVar3 = FUN_004481a8(iVar3,local_20), iVar3 != 0) {
        if (-1 < local_20[0]) {
          (*(code *)PTR_bt_clientPause_0046a778)();
        }
      }
    }
    else {
      iVar5 = (*(code *)PTR_strcmp_0046a824)(uVar2,&DAT_00457a54);
      if (iVar5 == 0) {
        while (iVar3 = FUN_004481a8(iVar3,local_20), iVar3 != 0) {
          if (-1 < local_20[0]) {
            (*(code *)PTR_bt_clientQuit_0046a8a0)();
          }
        }
      }
      else {
        iVar5 = (*(code *)PTR_strcmp_0046a824)(uVar2,"update");
        if (iVar5 == 0) {
          while (iVar3 = FUN_004481a8(iVar3,local_20), iVar3 != 0) {
            if (-1 < local_20[0]) {
              (*(code *)PTR_bt_clientUpdate_0046aa34)();
            }
          }
        }
        else {
          iVar5 = (*(code *)PTR_strcmp_0046a824)(uVar2,"delete");
          if (iVar5 == 0) {
            while (iVar4 = FUN_004481a8(iVar4,local_20), iVar4 != 0) {
              if (-1 < local_20[0]) {
                (*(code *)PTR_bt_deleteTorrent_0046aa10)(local_20[0],0);
              }
            }
          }
          else {
            iVar4 = (*(code *)PTR_strcmp_0046a824)(uVar2,"deleteallfiles");
            if (iVar4 == 0) {
              while (iVar3 = FUN_004481a8(iVar3,local_20), iVar3 != 0) {
                if (-1 < local_20[0]) {
                  (*(code *)PTR_bt_deleteTorrent_0046aa10)(local_20[0],1);
                }
              }
            }
          }
        }
      }
    }
  }
  (*(code *)PTR_send_redirect_perm_0046ac78)(param_1,uVar1);
  return;
}

