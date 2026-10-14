/* lh_char_equal @ 0043ea2c */

bool lh_char_equal(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_00611bec)(param_1,param_2);
  return iVar1 == 0;
}

