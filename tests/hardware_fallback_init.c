/* PID1 for an isolated MCU-only VM: intentionally no keys or Flash devices. */
#include <fcntl.h>
#include <signal.h>
#include <stdio.h>
#include <string.h>
#include <sys/mount.h>
#include <sys/reboot.h>
#include <sys/resource.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <unistd.h>

int main(void) {
  setvbuf(stdout, NULL, _IONBF, 0);
  mount("proc", "/proc", "proc", 0, NULL);
  mount("ramfs", "/var", "ramfs", 0, NULL);
  mkdir("/var/run", 0700);
  mkdir("/var/log", 0700);
  puts("MCU_ONLY_VM_READY_NO_IDENTITY");
  sleep(2);
  int phase = 0;
start_phase:
  unlink("/var/log/matter-hardware.txt");
  printf("MCU_VM_PHASE=%d\n", phase);
  int child = fork();
  if (!child) {
    struct rlimit limit = {8*1024*1024, 8*1024*1024};
    if (setrlimit(RLIMIT_AS, &limit)) _exit(126);
    char *args[] = {"/bin/matterd-test", "--hardware-only", "/dev/ttyS1", "/tmp/gpio", NULL};
    char *waiting[] = {"/bin/matterd-test", "--vm", "br0", "/dev/ttyS1", "/tmp/gpio", NULL};
    execv(args[0], phase ? args : waiting);
    _exit(127);
  }
  int control = open("/dev/ttyS0", O_RDONLY | O_NONBLOCK), status = -1;
  for (unsigned tick = 0; tick < 200; tick++) {
    if (waitpid(child, &status, WNOHANG) == child) break;
    char command[64] = {0};
    if (control >= 0 && read(control, command, sizeof(command)-1) > 0 && strstr(command, "stop")) {
      kill(child, SIGTERM);
      waitpid(child, &status, 0);
      break;
    }
    int fd = open("/var/log/matter-hardware.txt", O_RDONLY);
    if (fd >= 0) {
      char text[1024];
      int size = read(fd, text, sizeof(text));
      if (size > 0) write(1, text, size);
      close(fd);
    }
    usleep(250000);
  }
  close(control);
  printf("MCU_VM_PHASE_%d_WAIT=%d\n", phase, status);
  if (phase == 0 && status == 0) { phase = 1; goto start_phase; }
  reboot(RB_POWER_OFF);
  for (;;) pause();
}
