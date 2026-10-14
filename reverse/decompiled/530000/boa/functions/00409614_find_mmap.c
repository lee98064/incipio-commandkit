/* find_mmap @ 00409614 */

/* WARNING: Restarted to delay deadcode elimination for space: ram */

int * find_mmap(undefined4 param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  
  DAT_0046c794 = DAT_0046c794 + 1;
  uVar8 = param_2[4] & 0xff;
  uVar6 = uVar8;
  while( true ) {
    iVar2 = uVar6 * 0x18;
    if (*(int *)(&DAT_0046c7b0 + iVar2) == 0) break;
    if ((((*(int *)(&DAT_0046c7a0 + iVar2) == *param_2) &&
         (*(int *)(&DAT_0046c7a4 + iVar2) == param_2[1])) &&
        (*(uint *)(&DAT_0046c7a0 + (uVar6 * 3 + 1) * 8) == param_2[4])) &&
       (iVar4 = *(int *)(&DAT_0046c7b0 + iVar2) + 1, *(int *)(&DAT_0046c7b4 + iVar2) == param_2[0xd]
       )) {
      uVar1 = *(uint *)PTR_debug_level_0046abf4;
      *(int *)(&DAT_0046c7b0 + iVar2) = iVar4;
      if ((uVar1 & 0x800) != 0) {
        (*(code *)PTR_fprintf_0046a9ec)
                  (*(undefined4 *)PTR_stderr_0046a7f0,
                   "Old mmap_list entry %d use_count now %d (hash was %d)\n",uVar6,iVar4,uVar8);
      }
      return (int *)(&DAT_0046c7a0 + uVar6 * 0x18);
    }
    uVar6 = uVar6 + 1 & 0xff;
    DAT_0046c798 = DAT_0046c798 + 1;
    if (uVar6 == uVar8) {
      return (int *)0x0;
    }
  }
  if (0x80 < DAT_0046c790) {
    return (int *)0x0;
  }
  iVar2 = (*(code *)PTR_mmap_0046aa90)(0,param_2[0xd],1,2,param_1,0);
  if (iVar2 != -1) {
    iVar4 = (*(code *)PTR_madvise_0046a9a4)(iVar2,param_2[0xd],2);
    if (iVar4 == -1) {
      puVar3 = (undefined4 *)(*(code *)PTR___errno_location_0046a764)();
      uVar7 = *puVar3;
      (*(code *)PTR_fputs_0046a6e4)("Unable to madvise file: ",*(undefined4 *)PTR_stderr_0046a7f0);
      *puVar3 = uVar7;
      (*(code *)PTR_perror_0046ab44)("madvise");
      (*(code *)PTR_munmap_0046abdc)(iVar2,param_2[0xd]);
      return (int *)0x0;
    }
    if ((*(uint *)PTR_debug_level_0046abf4 & 0x800) != 0) {
      (*(code *)PTR_fprintf_0046a9ec)
                (*(undefined4 *)PTR_stderr_0046a7f0,"New mmap_list entry %d (hash was %d)\n",uVar6,
                 uVar8);
    }
    iVar4 = uVar6 * 0x18;
    DAT_0046c790 = DAT_0046c790 + 1;
    iVar5 = *param_2;
    *(int *)(&DAT_0046c7a4 + iVar4) = param_2[1];
    *(int *)(&DAT_0046c7a0 + iVar4) = iVar5;
    iVar5 = (uVar6 * 3 + 1) * 8;
    *(int *)(&DAT_0046c7a0 + iVar5) = param_2[4];
    *(int *)(&DAT_0046c7b4 + iVar4) = param_2[0xd];
    *(int *)(&DAT_0046c7a4 + iVar5) = iVar2;
    *(undefined4 *)(&DAT_0046c7b0 + iVar4) = 1;
    return (int *)(&DAT_0046c7a0 + iVar4);
  }
  puVar3 = (undefined4 *)(*(code *)PTR___errno_location_0046a764)();
  uVar7 = *puVar3;
  (*(code *)PTR_fputs_0046a6e4)("Unable to mmap file: ",*(undefined4 *)PTR_stderr_0046a7f0);
  *puVar3 = uVar7;
  (*(code *)PTR_perror_0046ab44)(&DAT_0044a52c);
  return (int *)0x0;
}

