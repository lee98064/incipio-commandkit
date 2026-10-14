/* FUN_004113f0 @ 004113f0 */

void FUN_004113f0(char *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_20 = 0;
  local_1c = 0;
  if (*param_1 != '\0') {
    iVar1 = (*(code *)PTR_strncmp_0057e2e8)(param_1,"http://",7);
    if (iVar1 == 0) {
      *(undefined4 *)(param_2 + 0x490) = 0;
    }
    else {
      iVar1 = (*(code *)PTR_strncmp_0057e2e8)(param_1,"https://",8);
      if (iVar1 == 0) {
        *(undefined4 *)(param_2 + 0x490) = 1;
      }
    }
    iVar1 = (*(code *)PTR_sscanf_0057dad4)
                      (param_1,"%99[^:]://%99[^:]:%i/%199[^\n]",&local_20,param_2 + 8,param_2 + 4,
                       param_2 + 0x88);
    if (iVar1 != 4) {
      iVar1 = (*(code *)PTR_sscanf_0057dad4)
                        (param_1,"%99[^:]://%99[^/]/%199[^\n]",&local_20,param_2 + 8,param_2 + 0x88)
      ;
      if (iVar1 == 3) {
        uVar2 = 0x1bb;
        if (*(int *)(param_2 + 0x490) != 1) {
          uVar2 = 0x50;
        }
        *(undefined4 *)(param_2 + 4) = uVar2;
      }
    }
  }
  return;
}

