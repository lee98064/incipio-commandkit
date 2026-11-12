/* One GPIO6 owner, independent of protocol and HTTP event loops. Linked into
 * the existing updater to share its static runtime and journal implementation. */
#include "ck_led.h"
#include <arpa/inet.h>
#include <netdb.h>
#include <sys/file.h>
#include <sys/socket.h>
#include <time.h>
static int led_gpio(const char *s) {
  int f=open(ck_path("/proc/wlan0/gpio_ctrl"),O_WRONLY|O_NOFOLLOW);
  if(f<0)return -1;int r=ck_write_all(f,s,strlen(s));close(f);return r;
}
/* A connected UDP socket validates the reply's peer. DNS and socket waits run
 * only in this killable child; neither sets the system wall clock. */
int ck_led_ntp(const char *host) {
  alarm(12);struct addrinfo hint,*list=NULL;memset(&hint,0,sizeof(hint));hint.ai_family=AF_INET;hint.ai_socktype=SOCK_DGRAM;
  if(getaddrinfo(host,"123",&hint,&list))return 1;
  int result=1;
  for(struct addrinfo *a=list;a;a=a->ai_next) {
    int f=socket(a->ai_family,a->ai_socktype,a->ai_protocol);if(f<0)continue;
    struct timeval timeout={2,0};setsockopt(f,SOL_SOCKET,SO_RCVTIMEO,&timeout,sizeof(timeout));
    uint8_t q[48]={0},r[256];q[0]=0x23;int random=open("/dev/urandom",O_RDONLY|O_NOFOLLOW);
    if(random<0){close(f);break;}int bad=ck_read_all(random,q+40,8);close(random);
    uint64_t at=ck_led_now();
    if(!bad && !connect(f,a->ai_addr,a->ai_addrlen) && send(f,q,sizeof(q),0)==sizeof(q)) {
      ssize_t n=recv(f,r,sizeof(r),0);uint64_t elapsed=ck_led_now()-at;
      if(n>=48 && (r[0]&7)==4 && ((r[0]>>3)&7)>=3 && ((r[0]>>3)&7)<=4 && (r[0]>>6)!=3 && r[1]>=1 && r[1]<=15 && !memcmp(r+24,q+40,8) && elapsed<=2500) {
        uint64_t seconds=ck_be32(r+40);if(seconds<UINT64_C(3786825600))seconds+=UINT64_C(4294967296);
        seconds-=UINT64_C(2208988800);if(!ck_led_set_time(seconds+elapsed/2000,1))result=0;
      }
    }
    close(f);if(!result)break;
  }
  freeaddrinfo(list);return result;
}
static int led_read_text(const char *path,char *b,size_t n) {
  FILE *f=fopen(ck_path(path),"r");if(!f)return -1;
  int r=fgets(b,(int)n,f)?0:-1;fclose(f);return r;
}
int ck_led_run(void) {
  int lock=open(ck_path("/var/lock/ck-led.lock"),O_CREAT|O_RDWR|O_NOFOLLOW,0600);
  if(lock<0 || flock(lock,LOCK_EX|LOCK_NB)){if(lock>=0)close(lock);return 1;}
  /* Preserve the last GPIO level when PID1 quiesces userspace for OTA. */
  uint64_t boot=ck_led_now(),tick=0,next_ntp=0,next_report=0;pid_t child=0;
  struct ck_led_config config;ck_led_default(&config);int configured=0,last=-1,load=0,high=0,low=0;uint32_t sequence=0;
  char owner[16]="",ntp_host[128]="";uint8_t hardware[CK_LED_HW_SIZE]={0};
  led_gpio("config 6 w");
  for(;;) {
    uint64_t now=ck_led_now();
    if(child>0) {int status;pid_t done=waitpid(child,&status,WNOHANG);if(done==child){child=0;next_ntp=now+(!status?21600000:60000);} }
    if(now>=tick) {
      tick=now+1000;struct ck_led_config fresh;
      if(!ck_led_load_config(&fresh)){config=fresh;configured=1;}
      if(strcmp(config.ntp,ntp_host)){strcpy(ntp_host,config.ntp);next_ntp=now;if(child>0){kill(child,SIGKILL);waitpid(child,NULL,0);child=0;}}
    }
    /* Never replace an unreadable preference with a newly saved default. */
    if(!configured){usleep(100000);continue;}
    struct ck_led_input in;memset(&in,0,sizeof(in));in.now_ms=now;
    char mode[16]="",state[64]="";led_read_text(CK_PROTOCOL_ACTIVE,mode,sizeof(mode));
    if(strcmp(owner,mode)){strcpy(owner,mode);sequence=0;load=high=low=0;}
    char path[96];snprintf(path,sizeof(path),"/var/run/ck-led-%s.bin",!strcmp(mode,"homekit")?"homekit":"matter");
    int hw_live=!ck_exact_file(ck_path(path),hardware,sizeof(hardware)) && !memcmp(hardware,"CKLEDHW1",8) && ck_be64(hardware+8)<=now && now-ck_be64(hardware+8)<=15000;
    uint32_t flags=hw_live?ck_be32(hardware+44):0;
    uint64_t relay=ck_be64(hardware+16),power=ck_be64(hardware+24);
    in.known=hw_live && (flags&CK_LED_KNOWN) && relay<=now && now-relay<=10000;
    in.on=!!(flags&CK_LED_RELAY_ON);
    int pvalid=hw_live && (flags&CK_LED_POWER) && power<=now && now-power<15000 && ck_be32(hardware+40)<=2000000;
    uint32_t seq=ck_be32(hardware+48),mw=ck_be32(hardware+40);
    if(!in.known || !in.on || !pvalid){load=high=low=0;sequence=seq;}
    else if(seq!=sequence){sequence=seq;if(mw>=5000){low=0;if(high<2)high++;if(high==2)load=1;}else if(mw<=2000){high=0;if(low<2)low++;if(low==2)load=0;}else high=low=0;}
    in.load=load;
    uint64_t until=hw_live?ck_be64(hardware+32):0;in.identify=until>now && until-now<=900000;
    uint8_t find[8];if(!ck_exact_file(ck_path(CK_LED_FIND),find,8)){until=ck_be64(find);if(until>now && until-now<=15000)in.identify=1;}
    if(!strcmp(mode,"homekit") && !ck_exact_file(ck_path("/var/run/ck-led-homekit-identify"),find,8)) {until=ck_be64(find);if(until>now && until-now<=15000)in.identify=1;}
    led_read_text("/var/run/ck-setup-state",state,sizeof(state));
    in.setup=!strcmp(state,"state=setup\n") || !strcmp(state,"state=ap-starting\n") || !strcmp(state,"state=waiting-identity\n");
    in.joining=!strcmp(state,"state=joining\n") || !strcmp(state,"state=reconnecting\n") || !strcmp(state,"state=committing\n");
    int online=!strcmp(state,"state=online\n");
    in.error=!access(ck_path("/var/run/ck-rescue"),F_OK) || !strcmp(state,"state=error\n");
    /* Grace period covers USB/identity/protocol startup. A missing controller
     * or stale confirmed relay then becomes a diagnostic, not a fake ON. */
    if(now-boot>=60000 && (!hw_live || !in.known))in.error=1;
    if(!strcmp(mode,"homekit"))in.pairing=hw_live && (flags&CK_LED_READY) && !(flags&CK_LED_PAIRED);
    else {
      char m[512];long stamp=0;int window=0;
      if(!led_read_text(CK_MATTER_STATE,m,sizeof(m)) && sscanf(m,"{\"updated_s\":%ld,",&stamp)==1 && stamp<=(long)(now/1000) && (long)(now/1000)-stamp<=5) {
        char *p=strstr(m,"\"window_open\":");if(p && (!strncmp(p+14,"true",4) || p[14]=='1'))window=1;
      }
      in.pairing=window;
    }
    int source=0;uint8_t clock[32];
    if(!ck_exact_file(ck_path(CK_LED_CLOCK),clock,sizeof(clock)) && !memcmp(clock,"CKLEDT1\n",8) && ck_be64(clock+8)<=now) {
      in.utc_s=ck_be64(clock+16)+(now-ck_be64(clock+8))/1000;source=(int)ck_be32(clock+24);in.time_valid=in.utc_s>=1577836800ULL && in.utc_s<=4102444799ULL && (source==1 || source==2);
    }
    if(config.schedule && online && child<=0 && now>=next_ntp) {
      child=fork();if(!child){for(int f=3;f<128;f++)close(f);execl(ck_path("/bin/ck-updater"),"ck-updater","--led-ntp",config.ntp,(char *)NULL);_exit(127);}
      next_ntp=now+60000;
    }
    struct ck_led_output out=ck_led_evaluate(&config,&in);
    /* A staged update latches the output even during the TERM/KILL interval. */
    if(!access(ck_path("/var/run/ck-ota/queued"),F_OK)) {usleep(50000);continue;}
    if(out.on!=last && !led_gpio(out.on?"set 6 0":"set 6 1"))last=out.on;
    uint8_t report[32]={0};memcpy(report,"CKLEDS1\n",8);ck_put64(report+8,now);report[16]=out.on;report[17]=out.reason;report[18]=in.time_valid;report[19]=out.night;report[20]=source;ck_put64(report+24,in.utc_s);
    if(now>=next_report){ck_atomic(ck_path(CK_LED_STATE),report,sizeof(report),0600);next_report=now+1000;}
    usleep(50000);
  }
}
