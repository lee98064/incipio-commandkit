/* HTTPHeaderClear @ 00405890 */

void HTTPHeaderClear(int param_1)

{
  *(undefined4 *)(param_1 + 0x808) = 0;
  *(undefined4 *)(param_1 + 0x800) = 0;
  return;
}

