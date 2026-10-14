/* release_mmap @ 00409570 */

void release_mmap(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x10) + -1;
    if (*(int *)(param_1 + 0x10) == 0) {
      if ((*(uint *)PTR_debug_level_0046abf4 & 0x800) != 0) {
        (*(code *)PTR_fprintf_0046a9ec)
                  (*(undefined4 *)PTR_stderr_0046a7f0,"mmap_list(%p)->use_count already zero!\n");
        return;
      }
    }
    else {
      *(int *)(param_1 + 0x10) = iVar1;
      if (iVar1 == 0) {
        (*(code *)PTR_munmap_0046abdc)
                  (*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x14),param_1);
        DAT_0046c790 = DAT_0046c790 + -1;
      }
    }
  }
  return;
}

