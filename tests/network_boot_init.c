/* Offline Malta fixture: real vendor BusyBox PID1 + real DHCP, no MTD/RF. */
#include <fcntl.h>
#include <net/if.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/ioctl.h>
#include <sys/mount.h>
#include <sys/socket.h>
#include <sys/stat.h>
#include <sys/syscall.h>
#include <unistd.h>
static int module(const char *path) {
    int fd=open(path,O_RDONLY); if(fd<0)return -1;
    int n=lseek(fd,0,SEEK_END);lseek(fd,0,SEEK_SET);
    void *data=malloc(n);if(!data)return -1;
    int result=read(fd,data,n)==n && !syscall(SYS_init_module,data,n,"");
    free(data);close(fd);return result?0:-1;
}
int main(void) {
    mount("proc","/proc","proc",0,NULL);mount("ramfs","/var","ramfs",0,NULL);
    for(const char **p=(const char*[]){"/var/run","/var/log","/var/lock","/var/lib","/var/lib/ck-state",NULL};*p;p++)mkdir(*p,0700);
    if(module("/mii.ko")||module("/pcnet32.ko"))return 3;
    int fd=socket(AF_INET,SOCK_DGRAM,0);struct ifreq r;
    memset(&r,0,sizeof(r));strcpy(r.ifr_name,"eth0");strcpy(r.ifr_newname,"br0");
    if(ioctl(fd,SIOCSIFNAME,&r))return 4;
    memset(&r,0,sizeof(r));strcpy(r.ifr_name,"br0");
    ioctl(fd,SIOCGIFFLAGS,&r);r.ifr_flags|=IFF_UP;
    if(ioctl(fd,SIOCSIFFLAGS,&r))return 5;
    close(fd);setenv("PATH","/bin",1);
    execl("/bin/busybox","busybox","init",NULL);return 127;
}
