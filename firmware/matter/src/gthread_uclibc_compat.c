/* GCC's gthr-posix.h uses __GLIBC__ to select __pthread_key_create as
 * its weak "threads linked" probe. uClibc defines __GLIBC__ for API
 * compatibility but exports pthread_key_create without that private alias.
 * Provide the same signature and delegate to the real LinuxThreads API.
 * This does not emulate pthreads or substitute global data for thread TLS.
 */
#include <pthread.h>
#ifndef __UCLIBC__
#error This compatibility symbol is only for the separate uClibc runtime.
#endif
int __pthread_key_create(pthread_key_t *key, void (*destructor)(void *))
{
    return pthread_key_create(key, destructor);
}
/* The SDK has one legacy __sync CAS for its shared ioctl socket cache.
 * Route it through the same real libatomic locks as modern __atomic CAS;
 * preserve the full sequentially consistent semantics of __sync. */
_Bool incipio_sync_cas4(volatile void *, unsigned int, unsigned int)
    __asm__("__sync_bool_compare_and_swap_4");
_Bool incipio_sync_cas4(volatile void *ptr, unsigned int old_value, unsigned int new_value)
{
    return __atomic_compare_exchange_n((volatile unsigned int *)ptr,&old_value,
        new_value,0,__ATOMIC_SEQ_CST,__ATOMIC_SEQ_CST);
}
