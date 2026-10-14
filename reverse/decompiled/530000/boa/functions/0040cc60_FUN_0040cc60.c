/* FUN_0040cc60 @ 0040cc60 */

int FUN_0040cc60(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)PTR_request_free_0046a6d0;
  if (iVar3 == 0) {
    iVar3 = (*(code *)PTR_malloc_0046ab14)(0x3284);
    if (iVar3 == 0) {
      (*(code *)PTR_perror_0046ab44)("malloc for new request");
      return 0;
    }
  }
  else {
    (*(code *)PTR_dequeue_0046a790)(PTR_request_free_0046a6d0,iVar3);
  }
  puVar1 = PTR_malloc_0046ab14;
  *(undefined4 *)(iVar3 + 0x8cc) = 0x2000;
  uVar2 = (*(code *)puVar1)(0x2001);
  *(undefined4 *)(iVar3 + 0x8d0) = uVar2;
  *(undefined4 *)(iVar3 + 0x3278) = 0;
  FUN_0040c5d0(iVar3,1);
  return iVar3;
}

