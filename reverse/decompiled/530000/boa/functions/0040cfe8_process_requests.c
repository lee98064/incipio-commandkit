/* process_requests @ 0040cfe8 */

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void process_requests(undefined4 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  code *pcVar8;
  
  if (*(int *)PTR_pending_requests_0046a9e0 != 0) {
    FUN_0040cd1c();
  }
  puVar4 = PTR_isFWUPGRADE_0046ab90;
  puVar3 = PTR_current_time_0046ab68;
  puVar2 = PTR_pending_requests_0046a9e0;
  puVar1 = PTR_stderr_0046a7f0;
  puVar7 = *(uint **)PTR_request_ready_0046ac54;
LAB_0040d2d0:
  do {
    if (puVar7 == (uint *)0x0) {
      return;
    }
    (*(code *)PTR_time_0046a84c)(PTR_current_time_0046ab68);
    if ((puVar7[0x14] != 0) && (*puVar7 < 0xb)) {
      iVar5 = (*(code *)PTR_req_flush_0046a698)(puVar7);
      if (iVar5 == -2) goto LAB_0040d1a8;
      if (-1 < iVar5) goto LAB_0040d0cc;
      goto LAB_0040d1b0;
    }
LAB_0040d0cc:
    switch(*puVar7) {
    case 0:
    case 1:
    case 2:
    case 3:
      pcVar8 = (code *)PTR_read_header_0046aa70;
      break;
    case 4:
      pcVar8 = (code *)PTR_read_body_0046a6c8;
      break;
    case 5:
      pcVar8 = (code *)PTR_write_body_0046a834;
      break;
    case 6:
      pcVar8 = (code *)PTR_process_get_0046a6b4;
      break;
    case 7:
      pcVar8 = (code *)PTR_read_from_pipe_0046a99c;
      break;
    case 8:
      pcVar8 = (code *)PTR_write_from_pipe_0046a96c;
      break;
    case 9:
      pcVar8 = (code *)PTR_io_shuffle_0046a6f0;
      break;
    case 10:
      iVar5 = (*(code *)PTR_req_flush_0046a698)(puVar7);
      if (iVar5 != -2) {
        if (0 < iVar5) {
          iVar5 = 1;
        }
        goto LAB_0040d1b0;
      }
      goto LAB_0040d1a8;
    case 0xb:
    case 0xc:
      puVar7[0x14] = 0;
      puVar7[1] = 2;
      goto LAB_0040d1ac;
    default:
      (*(code *)PTR_fprintf_0046a9ec)(*(undefined4 *)puVar1,"Unknown status (%d), closing!\n");
LAB_0040d1a8:
      *puVar7 = 0xc;
LAB_0040d1ac:
      iVar5 = 0;
      goto LAB_0040d1b0;
    }
    iVar5 = (*pcVar8)(puVar7);
LAB_0040d1b0:
    if (*(int *)PTR_sigterm_flag_0046a9ac != 0) {
      puVar7[1] = 2;
    }
    if (*(int *)puVar2 != 0) {
      FUN_0040cd1c(param_1);
    }
    if (iVar5 == 0) {
      puVar7[0x2e] = *(uint *)puVar3;
      if ((*(int *)puVar4 == 1) &&
         (iVar5 = (*(code *)PTR_strcmp_0046a824)(puVar7 + 0x235,"/boafrm/formUpload"), iVar5 == 0))
      {
        firmware_len = puVar7[0x27];
        *(uint *)PTR_firmware_data_0046aa50 = puVar7[0x26];
      }
      puVar6 = (uint *)puVar7[0xc9f];
      FUN_0040c6c4(puVar7);
      puVar7 = puVar6;
      goto LAB_0040d2d0;
    }
    if (iVar5 == 1) {
      puVar7[0x2e] = *(uint *)puVar3;
LAB_0040d2c8:
      puVar7 = (uint *)puVar7[0xc9f];
    }
    else {
      if (iVar5 != -1) {
        (*(code *)PTR_fprintf_0046a9ec)
                  (*(undefined4 *)puVar1,"Unknown retval in process.c - Status: %d, retval: %d\n",
                   *puVar7,iVar5);
        *puVar7 = 0xc;
        goto LAB_0040d2c8;
      }
      puVar6 = (uint *)puVar7[0xc9f];
      (*(code *)PTR_block_request_0046aacc)(puVar7);
      puVar7 = puVar6;
    }
  } while( true );
}

