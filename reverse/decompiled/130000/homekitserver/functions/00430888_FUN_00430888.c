/* FUN_00430888 @ 00430888 */

undefined4 FUN_00430888(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint *puVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  code *pcVar9;
  undefined4 local_10b0;
  undefined4 local_10ac;
  uint local_10a8 [32];
  char local_1028 [1024];
  undefined1 auStack_c28 [1024];
  char local_828 [1024];
  char local_428 [1024];
  
  (*(code *)PTR_memset_0061223c)(local_1028,0,0x400);
  (*(code *)PTR_memset_0061223c)(auStack_c28,0,0x400);
  (*(code *)PTR_memset_0061223c)(local_828,0,0x400);
  (*(code *)PTR_memset_0061223c)(local_428,0,0x400);
  FUN_00430094();
  iVar1 = FUN_00430380("http://dev.ncpo.cc");
  if (iVar1 == -1) {
LAB_00430c64:
    FUN_00430094();
    uVar4 = 0xffffffff;
  }
  else {
    (*(code *)PTR_sprintf_00611f90)
              (auStack_c28,
               "GET %s HTTP/1.1\r\nAccept: */*\r\nAccept-Language: zh-cn\r\nUser-Agent: Mozilla/4.0 (compatible; MSIE 5.01; Windows NT 5.0)\r\nHost: %s:%d\r\nConnection: Close\r\n\r\n"
               ,param_1,&DAT_00614a98,DAT_00614a94);
    (*(code *)PTR_puts_006117e4)("[GetFWINFO] Send HTTP Request:");
    iVar8 = 0;
    (*(code *)PTR_puts_006117e4)(auStack_c28);
    iVar1 = (*(code *)PTR_strlen_006130b4)(auStack_c28);
    while (iVar8 < iVar1) {
      uVar6 = DAT_00614a8c;
      pcVar9 = (code *)PTR_write_00612898;
      if (DAT_00614a94 != 0x50) {
        uVar6 = DAT_00614a88;
        pcVar9 = (code *)PTR_SSL_write_006120d4;
      }
      iVar7 = (*pcVar9)(uVar6,auStack_c28 + iVar8,iVar1 - iVar8);
      iVar8 = iVar8 + iVar7;
      if (iVar7 == -1) {
        (*(code *)PTR_puts_006117e4)("[GetFWINFO] send http fail...");
        goto LAB_00430c64;
      }
      (*(code *)PTR_printf_0061185c)("%d bytes send OK!\n",iVar8);
    }
    puVar2 = local_10a8;
    do {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    } while (puVar2 != (uint *)local_1028);
    local_10a8[DAT_00614a8c >> 5] = local_10a8[DAT_00614a8c >> 5] | 1 << (DAT_00614a8c & 0x1f);
    local_10b0 = 5;
    local_10ac = 0;
    iVar1 = (*(code *)PTR_select_00612e2c)(DAT_00614a8c + 1,local_10a8,0,0,&local_10b0);
    if ((iVar1 < 0) && (piVar3 = (int *)(*(code *)PTR___errno_location_0061397c)(), *piVar3 != 4)) {
      (*(code *)PTR_printf_0061185c)("select error");
      uVar4 = 0xffffffff;
    }
    else {
      if (DAT_00614a94 == 0x50) {
        iVar7 = 0;
        iVar8 = 0;
        iVar1 = 0;
        while( true ) {
          iVar5 = (*(code *)PTR_read_00612ef0)(DAT_00614a8c,local_1028,1);
          if (iVar5 != 1) break;
          if (iVar8 < 4) {
            iVar8 = iVar8 + 1;
            if ((local_1028[0] != '\r') && (local_1028[0] != '\n')) {
              iVar8 = 0;
            }
            local_828[iVar7] = local_1028[0];
            iVar7 = iVar7 + 1;
          }
          else {
            local_428[iVar1] = local_1028[0];
            iVar1 = iVar1 + 1;
          }
        }
      }
      else {
        iVar7 = 0;
        iVar8 = 0;
        iVar1 = 0;
        while( true ) {
          iVar5 = (*(code *)PTR_SSL_read_00612b14)(DAT_00614a88,local_1028,1);
          if (iVar5 != 1) break;
          if (iVar8 < 4) {
            iVar8 = iVar8 + 1;
            if ((local_1028[0] != '\r') && (local_1028[0] != '\n')) {
              iVar8 = 0;
            }
            local_828[iVar7] = local_1028[0];
            iVar7 = iVar7 + 1;
          }
          else {
            local_428[iVar1] = local_1028[0];
            iVar1 = iVar1 + 1;
          }
        }
      }
      (*(code *)PTR_strcpy_006115d0)(param_2,local_428);
      FUN_00430094();
      uVar4 = 1;
    }
  }
  return uVar4;
}

