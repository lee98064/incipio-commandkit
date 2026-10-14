/* ready_request @ 0040a0ec */

void ready_request(undefined4 *param_1)

{
  uint uVar1;
  undefined *puVar2;
  
  if (request_block == param_1) {
    request_block = (undefined4 *)param_1[0xc9f];
  }
  if (param_1[0xca0] != 0) {
    *(undefined4 *)(param_1[0xca0] + 0x327c) = param_1[0xc9f];
  }
  if (param_1[0xc9f] != 0) {
    *(undefined4 *)(param_1[0xc9f] + 0x3280) = param_1[0xca0];
  }
  param_1[0xc9f] = 0;
  param_1[0xca0] = 0;
  if (request_ready != (undefined4 *)0x0) {
    *(undefined4 **)((int)request_ready + 0x3280) = param_1;
  }
  param_1[0xca0] = 0;
  param_1[0xc9f] = request_ready;
  request_ready = param_1;
  if (param_1[0x14] != 0) goto switchD_0040a1b4_caseD_6;
  puVar2 = PTR_block_read_fdset_0046a678;
  switch(*param_1) {
  case 5:
    goto switchD_0040a1b4_caseD_5;
  case 7:
switchD_0040a1b4_caseD_7:
    uVar1 = param_1[10];
    break;
  case 9:
    if (param_1[0x13] == 0) goto switchD_0040a1b4_caseD_7;
  case 6:
  case 8:
  case 10:
switchD_0040a1b4_caseD_6:
    uVar1 = param_1[0x2d];
    puVar2 = PTR_block_write_fdset_0046a8e4;
    break;
  default:
    uVar1 = param_1[0x2d];
  }
  *(uint *)(puVar2 + (uVar1 >> 5) * 4) =
       ~(1 << (uVar1 & 0x1f)) & *(uint *)(puVar2 + (uVar1 >> 5) * 4);
switchD_0040a1b4_caseD_5:
  return;
}

