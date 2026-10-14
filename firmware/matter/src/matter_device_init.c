/* PID 1 for isolated RAM API VM. No vendor firmware or private key. */
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <sys/mount.h>
#include <sys/socket.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <net/if.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/syscall.h>
#include <net/route.h>
#include <sys/resource.h>
#include <sys/reboot.h>
#ifdef CK_TESTING
#include "update/ck_store.h"
#include <signal.h>
#endif
static int module(const char *name) {
  int fd = open(name, O_RDONLY); if (fd < 0) return -1;
  int n = lseek(fd, 0, SEEK_END); lseek(fd, 0, SEEK_SET);
  void *b = malloc(n); if (!b) return -1;
  int ok = read(fd, b, n) == n && !syscall(SYS_init_module, b, n, "");
  close(fd); free(b); return ok ? 0 : -1;
}
int main(void) {
  setvbuf(stdout, NULL, _IONBF, 0); mount("proc", "/proc", "proc", 0, NULL);
  mount("ramfs", "/var", "ramfs", 0, NULL);
  mkdir("/var/run", 0755); mkdir("/var/log", 0755);
#ifdef CK_TESTING
  mkdir("/var/lock",0700);mkdir("/var/lib",0700);mkdir("/var/lib/ck-state",0700);
  setenv("CK_FLASH_FILE","/flash.bin",1);
  if(ck_store_import()){puts("PERSISTENT_VM_IMPORT_FAIL");return 6;}
#endif
  if (module("/mii.ko") || module("/pcnet32.ko")) { perror("network module"); return 3; }
  int fd = socket(AF_INET, SOCK_DGRAM, 0); struct ifreq r;
  memset(&r, 0, sizeof(r)); strcpy(r.ifr_name, "eth0"); strcpy(r.ifr_newname, "br0");
  if (ioctl(fd, SIOCSIFNAME, &r)) { perror("rename eth0"); return 1; }
  memset(&r, 0, sizeof(r)); strcpy(r.ifr_name, "br0");
  struct sockaddr_in *addr = (void *)&r.ifr_addr; addr->sin_family = AF_INET;
  inet_aton("10.0.2.15", &addr->sin_addr);
  if (ioctl(fd, SIOCSIFADDR, &r)) return 2;
  inet_aton("255.255.255.0", &addr->sin_addr); ioctl(fd, SIOCSIFNETMASK, &r);
  ioctl(fd, SIOCGIFFLAGS, &r); r.ifr_flags |= IFF_UP; ioctl(fd, SIOCSIFFLAGS, &r);
  struct rtentry route; memset(&route, 0, sizeof(route));
  route.rt_dst.sa_family = route.rt_genmask.sa_family = route.rt_gateway.sa_family = AF_INET;
  inet_aton("10.0.2.2", &((struct sockaddr_in *)&route.rt_gateway)->sin_addr);
  route.rt_flags = RTF_UP | RTF_GATEWAY; route.rt_dev = "br0";
  if (ioctl(fd, SIOCADDRT, &route)) perror("default route");
  close(fd);
  int identity_child = fork(), identity_status = -1;
  if (!identity_child) {
    char *args[] = {"/bin/matterd-test", "--init-identity", "br0", NULL};
    execv(args[0],args); _exit(127);
  }
  if (identity_child < 0 || waitpid(identity_child, &identity_status, 0) < 0 || identity_status) {
    puts("DEVICE_IDENTITY_VM_FAIL"); return 5;
  }
  puts("DEVICE_IDENTITY_VM_READY");
  puts("MATTER_TLV_VM_NETWORK_READY");
  sleep(2);
restart_application:
#ifdef CK_TESTING
  if (!fork()) { execl("/bin/ck-updated","ck-updated",NULL); _exit(127); }
#endif
  int child = fork();
  if (!child) {
    struct rlimit limit = {8*1024*1024,8*1024*1024};
    if (setrlimit(RLIMIT_AS,&limit)) _exit(126);
    alarm(300);
    char *args[] = {"/bin/matterd-test",
#ifdef CK_TESTING
      "--vm-persistent",
#else
      "--vm",
#endif
      "br0","/dev/ttyS1","/tmp/gpio",NULL};
    execv(args[0],args); _exit(127);
  }
  int status;
#ifdef CK_TESTING
  int control=open("/dev/ttyS0",O_RDONLY|O_NONBLOCK);
#endif
  while (waitpid(child,&status,WNOHANG)==0) {
#ifdef CK_TESTING
    char command[64];int got=control<0?0:read(control,command,sizeof(command)-1);
    if(got>0){command[got]=0;if(strstr(command,"restart")){
      kill(child,SIGTERM);waitpid(child,&status,0);close(control);
      kill(-1,SIGKILL);while(waitpid(-1,NULL,WNOHANG)>0){}sleep(1);
      unlink("/tmp/chip_factory.ini");unlink("/tmp/chip_config.ini");unlink("/tmp/chip_counters.ini");
      unlink("/tmp/chip_kvs");puts("PERSISTENT_VM_RESTARTING_WITHOUT_COMMISSIONING");goto restart_application;
    }}
#endif
    int report = open("/var/log/matter-hardware.txt",O_RDONLY);
    if (report>=0) { char text[1024]; int n=read(report,text,sizeof(text)); if (n>0) write(1,text,n); close(report); }
    sleep(1);
  }
  printf("MATTER_TLV_VM_WAIT=%d\n",status);
  sync(); reboot(RB_POWER_OFF);
  for (;;) pause();
}
