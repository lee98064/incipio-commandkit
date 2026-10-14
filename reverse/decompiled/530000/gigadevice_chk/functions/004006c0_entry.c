/* entry @ 004006c0 */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_20 [16];
  undefined *local_10;
  undefined4 local_c;
  undefined1 *local_8;
  
  local_8 = auStack_20;
  local_10 = PTR__fini_00410f10;
  local_c = param_1;
  (*(code *)PTR___uClibc_main_00410f1c)
            (PTR_main_00410f18,param_2,&stack0x00000004,PTR__init_00410f2c);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

