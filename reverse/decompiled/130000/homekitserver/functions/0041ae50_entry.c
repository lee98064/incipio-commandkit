/* entry @ 0041ae50 */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_20 [16];
  undefined *local_10;
  undefined4 local_c;
  undefined1 *local_8;
  
  local_8 = auStack_20;
  local_10 = PTR__fini_00613514;
  local_c = param_1;
  (*(code *)PTR___uClibc_main_006131f4)
            (PTR_main_006115e8,param_2,&stack0x00000004,PTR__init_006115d4);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

