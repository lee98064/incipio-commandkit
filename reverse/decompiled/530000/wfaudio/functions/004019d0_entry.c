/* entry @ 004019d0 */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_20 [16];
  undefined *local_10;
  undefined4 local_c;
  undefined1 *local_8;
  
  local_8 = auStack_20;
  local_10 = PTR__fini_00423450;
  local_c = param_1;
  (*(code *)PTR___uClibc_main_004234a8)
            (PTR_main_0042348c,param_2,&stack0x00000004,PTR__init_00423538);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

