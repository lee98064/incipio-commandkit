/* block_request @ 00409f70 */

void block_request(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  
  if (request_ready == param_1) {
    request_ready = (undefined4 *)param_1[0xc9f];
  }
  if (param_1[0xca0] != 0) {
    *(undefined4 *)(param_1[0xca0] + 0x327c) = param_1[0xc9f];
  }
  if (param_1[0xc9f] != 0) {
    *(undefined4 *)(param_1[0xc9f] + 0x3280) = param_1[0xca0];
  }
  param_1[0xc9f] = 0;
  param_1[0xca0] = 0;
  if (request_block != (undefined4 *)0x0) {
    *(undefined4 **)((int)request_block + 0x3280) = param_1;
  }
  param_1[0xca0] = 0;
  param_1[0xc9f] = request_block;
  request_block = param_1;
  if (param_1[0x14] != 0) goto switchD_0040a038_caseD_6;
  switch(*param_1) {
  case 5:
    goto switchD_0040a038_caseD_5;
  case 7:
switchD_0040a038_caseD_7:
    *(uint *)(PTR_block_read_fdset_0046a678 + ((uint)param_1[10] >> 5) * 4) =
         *(uint *)(PTR_block_read_fdset_0046a678 + ((uint)param_1[10] >> 5) * 4) |
         1 << (param_1[10] & 0x1f);
    iVar2 = param_1[10];
    break;
  case 9:
    if (param_1[0x13] == 0) goto switchD_0040a038_caseD_7;
  case 6:
  case 8:
  case 10:
switchD_0040a038_caseD_6:
    uVar1 = param_1[0x2d];
    puVar3 = PTR_block_write_fdset_0046a8e4;
LAB_0040a0ac:
    *(uint *)(puVar3 + (uVar1 >> 5) * 4) =
         *(uint *)(puVar3 + (uVar1 >> 5) * 4) | 1 << (uVar1 & 0x1f);
    iVar2 = param_1[0x2d];
    break;
  default:
    uVar1 = param_1[0x2d];
    puVar3 = PTR_block_read_fdset_0046a678;
    goto LAB_0040a0ac;
  }
  if (*(int *)PTR_max_fd_0046a684 < iVar2) {
    *(int *)PTR_max_fd_0046a684 = iVar2;
  }
switchD_0040a038_caseD_5:
  return;
}

