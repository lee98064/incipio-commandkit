/* free_requests @ 0040b5a0 */

void free_requests(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)PTR_request_free_0046a6d0;
  while (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x327c);
    if (*(int *)(iVar1 + 0x8d0) != 0) {
      (*(code *)PTR_free_0046a680)(*(int *)(iVar1 + 0x8d0));
      *(undefined4 *)(iVar1 + 0x8d0) = 0;
    }
    if (*(int *)(iVar1 + 0x98) != 0) {
      (*(code *)PTR_free_0046a680)(*(int *)(iVar1 + 0x98));
      *(undefined4 *)(iVar1 + 0x98) = 0;
    }
    (*(code *)PTR_free_0046a680)(iVar1);
    iVar1 = iVar2;
  }
  *(undefined4 *)PTR_request_free_0046a6d0 = 0;
  return;
}

