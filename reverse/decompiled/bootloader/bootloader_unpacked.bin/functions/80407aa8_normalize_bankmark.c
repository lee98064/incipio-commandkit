/* normalize_bankmark @ 80407aa8 */

uint normalize_bankmark(int found,undefined *header)

{
  uint uVar1;
  
  uVar1 = 0x80000000;
  if ((found != 0) && (uVar1 = *(uint *)(header + 8), -1 < (int)uVar1)) {
    uVar1 = 0x80000001;
  }
  return uVar1;
}

