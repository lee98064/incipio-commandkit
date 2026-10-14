/* entry @ 00400ad0 */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_20 [16];
  undefined *local_10;
  undefined4 local_c;
  undefined1 *local_8;
  
  local_8 = auStack_20;
  local_10 = PTR__fini_00415eb8;
  local_c = param_1;
  (*(code *)PTR___uClibc_main_00415ed4)
            (PTR_main_00415ec4,param_2,&stack0x00000004,PTR__init_00415ef8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

