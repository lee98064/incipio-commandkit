/* CreateSimpleHTTPOKMessage @ 00405a50 */

undefined4 CreateSimpleHTTPOKMessage(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_malloc_00433280)(200);
  *param_1 = iVar1;
  uVar2 = 0xffffe5b8;
  if (iVar1 != 0) {
    (*(code *)PTR_sprintf_00433144)
              (iVar1,"%s %s %s%s","HTTP/1.1",&DAT_0041d5e8,&DAT_0041d5ec,&DAT_0041d5f0);
    uVar2 = (*(code *)PTR_strlen_004330cc)(*param_1);
    *param_2 = uVar2;
    uVar2 = 0;
  }
  return uVar2;
}

