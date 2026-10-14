#!/usr/bin/env python3
"""Record the narrowly scoped old-kernel header compatibility patch."""
import difflib
from pathlib import Path
p=Path('/work/deps/uClibc-ng-1.0.54/libc/inet/netlinkaccess.h')
s=p.read_text()
if 'INCIPIO_RESTORE_NOGLIBC' not in s:
    old='#include <linux/rtnetlink.h>\n#include <linux/netlink.h>'
    new='''/* Linux 2.6 socket headers require this interface marker to avoid
 * redefining libc socket structures while uClibc builds with _LIBC. */
#ifndef __GLIBC__
#define __GLIBC__ 2
#define INCIPIO_RESTORE_NOGLIBC 1
#endif
#include <linux/rtnetlink.h>
#include <linux/netlink.h>
#ifdef INCIPIO_RESTORE_NOGLIBC
#undef __GLIBC__
#undef INCIPIO_RESTORE_NOGLIBC
#endif'''
    assert s.count(old)==1
    patched=s.replace(old,new)
    p.write_text(patched)
    Path('/work/evidence/runtime-v2/uclibc-old-netlink-headers.patch').write_text(''.join(
        difflib.unified_diff(s.splitlines(True),patched.splitlines(True),
            fromfile='upstream/libc/inet/netlinkaccess.h',tofile='rtl8196e/libc/inet/netlinkaccess.h')))
