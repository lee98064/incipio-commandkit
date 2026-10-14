#pragma once
/* Linux 2.6 predates libc/UAPI coordination for net/if.h + linux/if.h.
 * The uClibc header already supplies the same user ABI structures; retain
 * all wireless ioctl definitions from the real matching kernel header. */
#include <features.h>
#include <linux/version.h>
#if defined(__UCLIBC__) && LINUX_VERSION_CODE == KERNEL_VERSION(2,6,30)
#include <net/if.h>
#ifndef _LINUX_IF_H
#define _LINUX_IF_H 1
#endif
#endif
#include_next <linux/wireless.h>
#if defined(__UCLIBC__)
#ifdef __cplusplus
static_assert(sizeof(struct ifreq)==32, "o32 ifreq ABI mismatch");
static_assert(sizeof(struct iwreq)==32, "o32 wireless request ABI mismatch");
#endif
#endif
