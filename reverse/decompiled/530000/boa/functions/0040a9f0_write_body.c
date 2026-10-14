/* write_body @ 0040a9f0 */

uint write_body(undefined4 *param_1)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  uint uVar8;
  undefined1 *puVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  
  iVar11 = param_1[0x11];
  iVar4 = param_1[0x10];
  uVar5 = (*(code *)PTR_boa_atoi_0046aa08)(param_1[0x25]);
  uVar10 = param_1[0xc];
  uVar8 = param_1[0xb];
  iVar12 = iVar11 - iVar4;
  if (uVar8 < (iVar11 - iVar4) + uVar10) {
    iVar12 = uVar8 - uVar10;
  }
  if (iVar12 == 0) {
    param_1[0x10] = param_1[0x234];
    param_1[0x11] = param_1[0x234];
    if (uVar8 <= uVar10) {
                    /* WARNING: Could not recover jumptable at 0x0040aa88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (*(code *)PTR_init_form_0046a6b0)(param_1);
      return uVar8;
    }
    *param_1 = 4;
  }
  else {
    if (param_1[0x26] == 0) {
      if (0x2000 < (uint)(iVar12 + param_1[0x1e])) {
        (*(code *)PTR_puts_0046ab3c)("error, post_data_len > BUFFER_SIZE!");
        return 0xffffffff;
      }
      (*(code *)PTR_memcpy_0046ab5c)(param_1[0x1d] + param_1[0x1f],param_1[0x10],iVar12);
      param_1[0x1e] = param_1[0x1e] + iVar12;
      param_1[0x1f] = param_1[0x1f] + iVar12;
      if (iVar12 < 0) {
        piVar7 = (int *)(*(code *)PTR___errno_location_0046a764)();
        if (*piVar7 == 0xb) {
          return 0xffffffff;
        }
        return (uint)(*piVar7 == 4);
      }
      if ((*(uint *)PTR_debug_level_0046abf4 & 0x10) != 0) {
        (*(code *)PTR_fprintf_0046a9ec)
                  (*(undefined4 *)PTR_stderr_0046a7f0,
                   "%s:%d - wrote %d bytes of CGI body. %ld of %ld\n","read.c",0x252,iVar12,
                   param_1[0xc],param_1[0xb]);
      }
      iVar4 = param_1[0x10];
      param_1[0xc] = param_1[0xc] + iVar12;
      puVar3 = PTR_debug_level_0046abf4;
      param_1[0x10] = iVar4 + iVar12;
      puVar2 = PTR_stderr_0046a7f0;
      if ((*(uint *)puVar3 & 4) == 0) {
        return 1;
      }
      puVar9 = (undefined1 *)(iVar4 + iVar12 + iVar12);
      uVar1 = *puVar9;
      *puVar9 = 0;
      (*(code *)PTR_fprintf_0046a9ec)
                (*(undefined4 *)puVar2,"%s:%d - wrote %d bytes (%s). %lu of %lu\n","read.c",0x261,
                 iVar12,param_1[0x10],param_1[0xc],param_1[0xb]);
      *(undefined1 *)(param_1[0x10] + iVar12) = uVar1;
      return 1;
    }
    if (param_1[0x28] == 0) {
      (*(code *)PTR_killDaemon_0046aaa4)(1);
      param_1[0x28] = 1;
    }
    if (DAT_0046dfc4 == 0) {
      uVar6 = (*(code *)PTR_ftok_0046a840)("/bin/fwd",0xe04);
      DAT_0046dfc4 = (*(code *)PTR_shmget_0046a988)(uVar6,uVar5,0x7b6);
      if (DAT_0046dfc4 == -1) {
        return 0xfffffffe;
      }
      DAT_0046dfc0 = (*(code *)PTR_shmat_0046ab64)(DAT_0046dfc4,0,0);
      if (param_1[0x26] != 0) {
        (*(code *)PTR_free_0046a680)();
      }
      param_1[0x26] = DAT_0046dfc0;
    }
    (*(code *)PTR_memcpy_0046ab5c)(param_1[0x26] + param_1[0x27],param_1[0x10],iVar12);
    param_1[0xc] = param_1[0xc] + iVar12;
    param_1[0x27] = param_1[0x27] + iVar12;
    param_1[0x10] = param_1[0x10] + iVar12;
  }
  return 1;
}

