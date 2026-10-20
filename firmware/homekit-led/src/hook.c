/* Hash-bound 10219 HAP observer. All UART reads remain in the original MCU
 * thread. No UART opens, relay writes, GPIO access or Flash access here. */
typedef unsigned int u32;
typedef unsigned long long u64;
extern long linux_call(long,long,long,long,long,long,long);
extern int ck_hap_read_bridge(int,void *,unsigned);
#define P(x) ((long)(x))
#define S3(n,a,b,c) linux_call(n,P(a),P(b),P(c),0,0,0)
static u64 relay_at,power_at;
static u32 flags,power_mw,sequence;
static unsigned char window[2][4],count[2];
static void put32(volatile unsigned char *b,u32 n){b[0]=n>>24;b[1]=n>>16;b[2]=n>>8;b[3]=n;}
static void put64(volatile unsigned char *b,u64 n){put32(b,(u32)(n>>32));put32(b+4,(u32)n);}
static u64 now_ms(void){long t[2];if(S3(4263,1,t,0)<0)return 0;return (u64)(u32)t[0]*1000+(u32)t[1]/1000000;}
static int atomic_ram(const char *tmp,const char *path,const volatile void *b,unsigned n){
  int fd=(int)S3(4005,tmp,0x101|0x200|0x80|0x20000,0600);if(fd<0)return -1;
  long r=S3(4004,fd,b,n);S3(4006,fd,0,0);if(r!=(long)n)return -1;return (int)S3(4038,tmp,path,0);
}
static void publish(u64 now){
  volatile unsigned char b[56];unsigned j;for(j=0;j<56;j++)b[j]=0;
  const char *magic="CKLEDHW1";for(j=0;j<8;j++)b[j]=(unsigned char)magic[j];
  u32 f=flags|16;volatile unsigned char *pairs=(volatile unsigned char *)0x00614c58u;
  for(j=0;j<16;j++)if(pairs[j*0xa1]){f|=8;break;}
  put64(b+8,now);put64(b+16,relay_at);put64(b+24,power_at);put32(b+40,power_mw);put32(b+44,f);put32(b+48,sequence);
  atomic_ram("/var/run/ck-led-homekit.bin.tmp","/var/run/ck-led-homekit.bin",b,56);
}
/* Existing poll boundaries identify power responses; unsolicited reads can
 * update confirmed relay state, including the physical short-press button. */
static int observe_read(int fd,void *bytes,unsigned size,unsigned kind){
  int n=ck_hap_read_bridge(fd,bytes,size);if(n<=0 || n>(int)size || n>50)return n;
  unsigned char *p=bytes;unsigned k=kind?1:0;int changed=0;u64 now=now_ms();
  for(int i=0;i<n;i++){
    if(count[k]==4){for(unsigned j=0;j<3;j++)window[k][j]=window[k][j+1];count[k]=3;}
    window[k][count[k]++]=p[i];if(count[k]!=4)continue;unsigned char *w=window[k];
    if(w[0]==0xfe && w[3]==0x56 && w[1]==w[2] && (w[1]==0x30 || w[1]==0x31)){
      flags=(flags&~3u)|1u|(w[1]==0x31?2u:0u);relay_at=now;changed=1;count[k]=0;
    }else if(kind==1 && w[0]==0xff && w[3]==0x55){
      u32 raw=(u32)w[1]+256u*w[2];power_mw=raw*1000u;power_at=now;sequence++;flags=(flags&~4u)|(raw<=2000?4u:0u);changed=1;count[k]=0;
    }
  }
  if(changed)publish(now);return n;
}
int ck_hap_read_relay(int f,void *b,unsigned n){return observe_read(f,b,n,0);}
int ck_hap_read_power(int f,void *b,unsigned n){return observe_read(f,b,n,1);}
int ck_hap_identify(int active){
  volatile unsigned char b[8];put64(b,active?now_ms()+15000:0);
  return atomic_ram("/var/run/ck-led-homekit-identify.tmp","/var/run/ck-led-homekit-identify",b,8);
}
void ck_hap_identify_start(void){ck_hap_identify(1);}
#ifdef CK_LED_HOOK_TEST
/* Invoked only by a separately linked qemu-user fixture entry point. */
void ck_hap_test_entry(void){
  int fd=(int)S3(4005,"/tmp/ck-led-test-input",0,0);unsigned char b[8];
  if(fd<0)goto bad;
  if(ck_hap_read_relay(fd,b,4)!=4)goto bad;
  if(ck_hap_read_power(fd,b,4)!=4)goto bad;
  if(ck_hap_identify(1))goto bad;S3(4001,0,0,0);for(;;){}
bad:S3(4001,91,0,0);for(;;){}
}
#endif
