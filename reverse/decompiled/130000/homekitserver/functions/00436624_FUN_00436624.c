/* FUN_00436624 @ 00436624 */

int FUN_00436624(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int local_98;
  char *local_94;
  char *local_90;
  undefined1 auStack_8c [132];
  
  local_98 = (*(code *)PTR_snprintf_00612f8c)
                       (auStack_8c,0x80,PTR_PTR_006114b0 + -0x258c,param_4,
                        *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
  local_90 = (char *)(*(code *)PTR_strchr_00611958)(auStack_8c,0x2c);
  if (local_90 == (undefined1 *)0x0) {
    local_90 = (char *)(*(code *)PTR_strchr_00611958)(auStack_8c,0x2e);
  }
  else {
    *local_90 = 0x2e;
  }
  if ((local_90 != (undefined1 *)0x0) && ((param_4 & 4) != 0)) {
    local_94 = local_90 + 1;
    local_90 = local_94;
    for (; *local_94 != '\0'; local_94 = local_94 + 1) {
      if (*local_94 != '0') {
        local_90 = local_94;
      }
    }
    local_90[1] = '\0';
    local_98 = (int)(local_90 + 1) - (int)auStack_8c;
  }
  (*(code *)PTR_printbuf_memappend_00611768)(param_2,auStack_8c,local_98);
  return local_98;
}

