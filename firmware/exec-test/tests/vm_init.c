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
static int module(const char *name) {
  int fd = open(name, O_RDONLY); if (fd < 0) return -1;
  int n = lseek(fd, 0, SEEK_END); lseek(fd, 0, SEEK_SET);
  void *b = malloc(n); if (!b) return -1;
  int ok = read(fd, b, n) == n && !syscall(SYS_init_module, b, n, "");
  close(fd); free(b); return ok ? 0 : -1;
}
int main(void) {
  umask(077);
  setvbuf(stdout, NULL, _IONBF, 0); mount("proc", "/proc", "proc", 0, NULL);
  mount("ramfs", "/var", "ramfs", 0, NULL);
  mkdir("/var/run", 0755); mkdir("/var/log", 0755);
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
  puts("EXEC_VM_BOOTED");
  const char *names[]={"tiny_eb","tiny_gcc16","cpp_lean",NULL};
  int suite=open("/var/log/exec-suite.txt",O_WRONLY|O_CREAT|O_TRUNC,0600);
  dprintf(suite,"EXEC_SUITE_BEGIN vm_fixture=1\n");
  for(int i=0;names[i];i++) {
    int p=fork();
    if(!p){char *a[]={"/bin/exec-test-runner",(char*)names[i],NULL};execv(a[0],a);_exit(127);}
    int st=0;while(waitpid(p,&st,0)<0){}
    dprintf(suite,"test=%s runner_wait_status=%d\n",names[i],st);
    printf("EXEC_VM_TEST %s status=%d\n",names[i],st);
    char file[128];snprintf(file,sizeof(file),"/var/log/test-%s.txt",names[i]);
    int log=open(file,O_RDONLY);char b[8192];int n;
    if(log>=0){while((n=read(log,b,sizeof(b)))>0)write(1,b,n);close(log);}
  }
  dprintf(suite,"EXEC_SUITE_END\n");close(suite);
  const char *fixtures[]={"fixture_fault","fixture_flood","fixture_timeout",NULL};
  for(int i=0;fixtures[i];i++){
    int p=fork();if(!p){char *a[]={"/bin/fixture-runner",(char*)fixtures[i],NULL};execv(a[0],a);_exit(127);}
    int st=0;while(waitpid(p,&st,0)<0){}printf("FIXTURE_VM_TEST %s status=%d\n",fixtures[i],st);
    char file[128];snprintf(file,sizeof(file),"/var/log/%s.txt",fixtures[i]);
    int log=open(file,O_RDONLY);char b[8192];int n;
    if(log>=0){while((n=read(log,b,sizeof(b)))>0)write(1,b,n);close(log);}
  }
  int sample=open("/bin/test-tiny_eb",O_RDWR);char original,changed=0;
  if(sample>=0){read(sample,&original,1);lseek(sample,0,SEEK_SET);write(sample,&changed,1);close(sample);}
  int corrupt=fork();if(!corrupt){char *a[]={"/bin/exec-test-runner","tiny_eb",NULL};execv(a[0],a);_exit(127);}
  int corrupt_status=0;waitpid(corrupt,&corrupt_status,0);printf("HASH_REJECT_VM_TEST status=%d\n",corrupt_status);
  sample=open("/bin/test-tiny_eb",O_WRONLY);if(sample>=0){write(sample,&original,1);close(sample);}
  int recovery=fork();if(!recovery){char *a[]={"/bin/exec-test-runner","tiny_eb",NULL};execv(a[0],a);_exit(127);}
  int recovery_status=0;waitpid(recovery,&recovery_status,0);printf("HASH_RECOVERY_VM_TEST status=%d\n",recovery_status);
  int p=fork();
  if(!p){char *a[]={"/bin/exec-diag","--serve","br0","/test.key",NULL};execv(a[0],a);_exit(127);}
  p=fork();
  if(!p){char *a[]={"/bin/ck-setupd","--fixture","18082","18084","no-flash","/test.key",NULL};execv(a[0],a);_exit(127);}
  puts("EXEC_VM_READY");
  for(;;){int st;wait(&st);printf("VM_CHILD_EXIT=%d\n",st);}
}
