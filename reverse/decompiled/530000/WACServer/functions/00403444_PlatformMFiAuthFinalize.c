/* PlatformMFiAuthFinalize @ 00403444 */

void PlatformMFiAuthFinalize(void)

{
  if (DAT_00433590 != 0) {
    (*(code *)PTR_free_00433088)();
    DAT_00433590 = 0;
  }
  DAT_00433594 = 0;
  return;
}

