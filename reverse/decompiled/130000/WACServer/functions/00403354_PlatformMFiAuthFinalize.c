/* PlatformMFiAuthFinalize @ 00403354 */

void PlatformMFiAuthFinalize(void)

{
  if (DAT_004335d0 != 0) {
    (*(code *)PTR_free_00433088)();
    DAT_004335d0 = 0;
  }
  DAT_004335d4 = 0;
  return;
}

