/* FUN_004055b4 @ 004055b4 */

undefined4 FUN_004055b4(int param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 local_28 [2];
  int local_20;
  
  puVar1 = PTR_malloc_00433280;
  local_28[0] = 0x1c;
  iVar3 = 0;
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 8) = 2;
    iVar3 = (*(code *)puVar1)(0x888);
    iVar2 = -0x1a48;
    if (iVar3 == 0) goto LAB_00405704;
    (*(code *)PTR_HTTPHeaderClear_00433110)(iVar3);
    iVar2 = (*(code *)PTR_accept_0043322c)(*(undefined4 *)(param_1 + 0xc),param_1 + 0x14,local_28);
    *(int *)(param_1 + 0x10) = iVar2;
    if (-1 < iVar2) {
      do {
        iVar2 = (*(code *)PTR_SocketReadHTTPHeader_004332bc)(*(undefined4 *)(param_1 + 0x10),iVar3);
        if (iVar2 == 0) {
          iVar2 = (*(code *)PTR_SocketReadHTTPBody_00433174)(*(undefined4 *)(param_1 + 0x10),iVar3);
          if (iVar2 != 0) break;
          local_20 = iVar2;
          (**(code **)(param_1 + 0x30))(iVar3,0,*(undefined4 *)(param_1 + 0x38));
          (*(code *)PTR_HTTPHeaderClear_00433110)(iVar3);
          iVar2 = local_20;
        }
        else if (iVar2 != 0xb) {
          if (iVar2 == -0x1a61) {
            iVar2 = 0;
          }
          break;
        }
      } while (*(int *)(param_1 + 8) != 3);
      goto LAB_00405704;
    }
    (*(code *)PTR_perror_004332a0)("accept perror");
  }
  iVar2 = -0x1a31;
LAB_00405704:
  *(undefined4 *)(param_1 + 8) = 3;
  local_20 = iVar2;
  (**(code **)(param_1 + 0x30))(0,1,*(undefined4 *)(param_1 + 0x38));
  if ((local_20 != 0) && (iVar3 != 0)) {
    (*(code *)PTR_free_00433088)(iVar3);
  }
  (*(code *)PTR_close_00433098)(*(undefined4 *)(param_1 + 0xc));
  return 0;
}

