/* Owner-authorized developer probes only. No persistent updater or shell. */
#define diag_main unused_diag_main
#include "../matter_diag.c"
#undef diag_main
#include "ram_probe.h"
static int limit(int id, int bytes) {
  int pair[2] = {bytes, bytes};
  return S2(4075, id, P(pair));
}
static void finish_log(int fd, int st, int timed, int low) {
  used = 0;
  append("\nRAM_PROBE_END wait_status=");
  number(st);
  append(" timeout=");
  number(timed);
  append(" system_memfree_min_kb=");
  number(low);
  append(st == 0 && !timed ? " PASS\n" : " FAIL\n");
  write_all(fd, report, used);
}
int diag_main(int argc, char **argv) {
  if (argc != 2 || !equal(argv[1], "--run") || !ram_filesystem())
    return 2;
  int fd = open_ro(RAM_PROGRAM), size = -1;
  if (fd >= 0)
    size = S3(4019, fd, 0, 2);
  int ok = fd >= 0 && static_elf(fd, size);
  close_fd(fd);
  int log = ram_open(RAM_RESULT), low = memfree_kb();
  if (log < 0)
    return 3;
  if (!ok || low < 8 * 1024) {
    const char *msg = "RAM_PROBE_REJECT invalid ELF or low free RAM\n";
    write_all(log, msg, slen(msg));
    close_fd(log);
    S1(4010, P(RAM_PROGRAM));
    return 4;
  }
  int pipes[2];
  /* MIPS pipe() returns its second FD in v1. pipe2 writes the FD array. */
  if (S2(4328, P(pipes), 0) < 0) {
    close_fd(log);
    S1(4010, P(RAM_PROGRAM));
    return 5;
  }
  int pid = S0(4002), st = 0, started = seconds(), timed = 0;
  if (pid == 0) {
    close_fd(pipes[0]);
    close_fd(log);
    int null = S3(4005, P("/dev/null"), 0, 0);
    if (null < 0 || S2(4063, null, 0) < 0 || S2(4063, pipes[1], 1) < 0 ||
        S2(4063, pipes[1], 2) < 0)
      goto failed;
    /* Close root directory/device/socket descriptors before dropping UID. */
    for (int i = 3; i < 128; i++)
      close_fd(i);
    if (S0(4066) < 0 || limit(4, 0) < 0 ||
        limit(MIPS_RLIMIT_AS, 8 * 1024 * 1024) < 0 || limit(0, 20) < 0 ||
        limit(1, 8192) < 0 || limit(5, 32) < 0 || limit(8, 8) < 0 ||
        S1(4061, P(RAM_JAIL)) < 0 || S1(4012, P("/")) < 0 ||
        S2(4081, 0, 0) < 0 || S1(4046, 65534) < 0 || S1(4023, 65534) < 0 ||
        S0(4024) != 65534 || S0(4047) != 65534)
      goto failed;
    S1(4027, 30);
    /* Trace this child only; the supervising root process can capture faults.
     */
    if (S4(4026, 0, 0, 0, 0) < 0)
      goto failed;
    char *args[] = {"/probe", "--probe", "br0", 0}, *env[] = {0};
    S3(4011, P(args[0]), P(args), P(env));
  failed:
    S1(4001, 127);
    for (;;) {
    }
  }
  close_fd(pipes[1]);
  if (pid < 0) {
    close_fd(pipes[0]);
    close_fd(log);
    S1(4010, P(RAM_PROGRAM));
    return 6;
  }
  int total = 0, fault_recorded = 0;
  for (;;) {
    struct {
      int fd;
      short events, revents;
    } f = {pipes[0], 1, 0};
    if (S3(4188, P(&f), 1, 100) > 0 && (f.revents & 1)) {
      int n = read_fd(pipes[0], scratch, sizeof(scratch));
      if (n > 0 && total < 7600) {
        if (n > 7600 - total)
          n = 7600 - total;
        write_all(log, scratch, n);
        total += n;
      }
    }
    int free = memfree_kb();
    if (free >= 0 && free < low)
      low = free;
    int r = S3(4007, pid, P(&st), 1);
    if (r == pid) {
      if ((st & 255) != 127)
        break;
      int sig = (st >> 8) & 255;
      if (!fault_recorded && (sig == 4 || sig == 10 || sig == 11)) {
        fault_recorded = 1;
        u32 regs[76] __attribute__((aligned(8))), insn = 0;
        zero(regs, sizeof(regs));
        int rc = S4(4026, 12, pid, 0, P(regs));
        used = 0;
        append("\nRAM_PROBE_FAULT signal=");
        number(sig);
        append(" getregs=");
        number(rc);
        if (rc == 0) {
          u32 pc = regs[69];
          append(" pc=");
          hex32(pc);
          append(" cause=");
          hex32(regs[75]);
          if (S4(4026, 1, pid, pc, P(&insn)) == 0) {
            append(" instruction=");
            hex32(insn);
          }
        }
        append("\n");
        write_all(log, report, used);
      }
      if (S4(4026, 7, pid, 0, sig == 5 ? 0 : sig) < 0)
        timed = 1;
    } else if (r < 0) {
      timed = 1;
    }
    if (timed || seconds() - started >= 35 || low < 6 * 1024) {
      timed = 1;
      S2(4037, -pid, 9);
      S2(4037, pid, 9);
      S3(4007, pid, P(&st), 0);
      break;
    }
  }
  S2(4037, -pid, 9); /* Reap/terminate any LinuxThreads manager or worker. */
  /* Drain already-buffered output without ever blocking. */
  for (;;) {
    struct {
      int fd;
      short events, revents;
    } f = {pipes[0], 1, 0};
    if (S3(4188, P(&f), 1, 0) <= 0 || !(f.revents & 1))
      break;
    int n = read_fd(pipes[0], scratch, sizeof(scratch));
    if (n <= 0)
      break;
    if (n > 7600 - total)
      n = 7600 - total;
    if (n > 0) {
      write_all(log, scratch, n);
      total += n;
    }
  }
  finish_log(log, st, timed, low);
  close_fd(pipes[0]);
  close_fd(log);
  S1(4010, P(RAM_PROGRAM));
  return st == 0 && !timed ? 0 : 1;
}
