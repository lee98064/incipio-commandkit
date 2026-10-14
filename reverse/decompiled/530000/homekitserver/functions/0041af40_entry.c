/* entry @ 0041af40 */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_20 [16];
  undefined *local_10;
  undefined4 local_c;
  undefined1 *local_8;
  
  local_8 = auStack_20;
  local_10 = PTR__fini_006143b8;
  local_c = param_1;
  (*(code *)PTR___uClibc_main_00614090)
            (PTR_main_0061247c,param_2,&stack0x00000004,PTR__init_00612468);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

