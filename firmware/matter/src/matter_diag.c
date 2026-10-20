/* Owned-device read-only diagnostics. Linux MIPS o32, no libc dependency.
 * No flash writes, shell execution, GPIO or MCU access. All storage bounded.
 * Local CLI can run two fixed platform binaries and save bounded RAM logs.
 * HMAC-SHA256 challenge prevents sending the authentication key over HTTP.
 */
typedef unsigned int u32;
typedef unsigned char u8;
typedef __SIZE_TYPE__ usize;
extern int linux_call(int,int,int,int,int,int,int);
extern int probe_llsc(volatile u32 *);
extern int probe_tls(void);
extern int probe_sync(void);
#define P(p) ((int)(usize)(p))
#define S0(n) linux_call(n,0,0,0,0,0,0)
#define S1(n,a) linux_call(n,(int)(a),0,0,0,0,0)
#define S2(n,a,b) linux_call(n,(int)(a),(int)(b),0,0,0,0)
#define S3(n,a,b,c) linux_call(n,(int)(a),(int)(b),(int)(c),0,0,0)
#define S4(n,a,b,c,d) linux_call(n,(int)(a),(int)(b),(int)(c),(int)(d),0,0)
#define S5(n,a,b,c,d,e) linux_call(n,(int)(a),(int)(b),(int)(c),(int)(d),(int)(e),0)
#define REPORT_MAX (96*1024)
#define PORT 18080
#define MIPS_RLIMIT_AS 6 /* Linux 2.6.30 arch/mips/include/asm/resource.h */
static char report[REPORT_MAX], request[2048], scratch[8192];
static usize used;
static unsigned served, rejected;
static u8 key[32];
static char nonce[65];
static int nonce_valid, nonce_time;
static int slen(const char *s){int n=0;while(s[n])n++;return n;}
static int equal(const char *a,const char *b){while(*a&&*a==*b){a++;b++;}return *a==*b;}
/* Volatile bytes prevent LLVM folding unaligned copies to LWL/LWR, which
 * Lexra-derived RTL cores may only support through kernel emulation. */
static void copy(void *d,const void *s,usize n){volatile u8 *a=d;const volatile u8 *b=s;while(n--)*a++=*b++;}
static void zero(void *d,usize n){u8 *a=d;while(n--)*a++=0;}
/* Compiler may emit these even with -ffreestanding. */
void *memcpy(void*d,const void*s,usize n){copy(d,s,n);return d;}
void *memset(void*d,int c,usize n){u8*a=d;while(n--)*a++=(u8)c;return d;}
static void appendn(const char *s,usize n){if(n>REPORT_MAX-used-1)n=REPORT_MAX-used-1;copy(report+used,s,n);used+=n;report[used]=0;}
static void append(const char*s){appendn(s,(usize)slen(s));}
static void number(int n){char b[12];unsigned x;int i=0;if(n<0){append("-");x=0U-(unsigned)n;}else x=(unsigned)n;do{b[i++]=(char)('0'+x%10);x/=10;}while(x);while(i)appendn(b+--i,1);}
static void hex32(u32 n){static const char d[]="0123456789abcdef";int i;append("0x");for(i=28;i>=0;i-=4)appendn(d+((n>>i)&15),1);}
static int open_ro(const char*p){return S3(4005,P(p),0,0);}
static void close_fd(int fd){if(fd>=0)S1(4006,fd);}
static int read_fd(int fd,void*b,int n){int r;do{r=S3(4003,fd,P(b),n);}while(r==-4);return r;}
static int read_file(const char *p,void*b,int cap){int f=open_ro(p),n=0,r;if(f<0)return f;while(n<cap){r=read_fd(f,(u8*)b+n,cap-n);if(r<=0)break;n+=r;}close_fd(f);return n;}
static int random_bytes(void *p,int n){int f=open_ro("/dev/urandom"),done=0,r;if(f<0)return f;while(done<n){r=read_fd(f,(u8*)p+done,n-done);if(r<=0){close_fd(f);return r<0?r:-5;}done+=r;}close_fd(f);return done;}
static int seconds(void){int t[2];if(S2(4263,1,P(t))<0)return -1;return t[0];}
static void file_section(const char*p){int n;append("\n[ ");append(p);append(" ]\n");n=read_file(p,scratch,sizeof(scratch));if(n<0){append("unavailable errno=");number(-n);append("\n");}else{appendn(scratch,n);if(n==(int)sizeof(scratch))append("\n[section capped at 8192 bytes]\n");}}

/* SHA-256 / HMAC, RFC 6234 / RFC 4231. No dynamic allocation. */
typedef struct {u32 h[8],count;u8 b[64];unsigned fill;} Sha;
static const u32 K[64]={
0x428a2f98,0x71374491,0xb5c0fbcf,0xe9b5dba5,0x3956c25b,0x59f111f1,0x923f82a4,0xab1c5ed5,
0xd807aa98,0x12835b01,0x243185be,0x550c7dc3,0x72be5d74,0x80deb1fe,0x9bdc06a7,0xc19bf174,
0xe49b69c1,0xefbe4786,0x0fc19dc6,0x240ca1cc,0x2de92c6f,0x4a7484aa,0x5cb0a9dc,0x76f988da,
0x983e5152,0xa831c66d,0xb00327c8,0xbf597fc7,0xc6e00bf3,0xd5a79147,0x06ca6351,0x14292967,
0x27b70a85,0x2e1b2138,0x4d2c6dfc,0x53380d13,0x650a7354,0x766a0abb,0x81c2c92e,0x92722c85,
0xa2bfe8a1,0xa81a664b,0xc24b8b70,0xc76c51a3,0xd192e819,0xd6990624,0xf40e3585,0x106aa070,
0x19a4c116,0x1e376c08,0x2748774c,0x34b0bcb5,0x391c0cb3,0x4ed8aa4a,0x5b9cca4f,0x682e6ff3,
0x748f82ee,0x78a5636f,0x84c87814,0x8cc70208,0x90befffa,0xa4506ceb,0xbef9a3f7,0xc67178f2};
static u32 rr(u32 x,unsigned n){return (x>>n)|(x<<(32-n));}
static void block(Sha*s){u32 w[64],a,b,c,d,e,f,g,h,t1,t2;unsigned i;for(i=0;i<16;i++){const volatile u8*p=s->b+i*4;w[i]=((u32)p[0]<<24)|((u32)p[1]<<16)|((u32)p[2]<<8)|p[3];}for(i=16;i<64;i++){u32 x=w[i-15],y=w[i-2];w[i]=w[i-16]+(rr(x,7)^rr(x,18)^(x>>3))+w[i-7]+(rr(y,17)^rr(y,19)^(y>>10));}a=s->h[0];b=s->h[1];c=s->h[2];d=s->h[3];e=s->h[4];f=s->h[5];g=s->h[6];h=s->h[7];for(i=0;i<64;i++){t1=h+(rr(e,6)^rr(e,11)^rr(e,25))+((e&f)^(~e&g))+K[i]+w[i];t2=(rr(a,2)^rr(a,13)^rr(a,22))+((a&b)^(a&c)^(b&c));h=g;g=f;f=e;e=d+t1;d=c;c=b;b=a;a=t1+t2;}s->h[0]+=a;s->h[1]+=b;s->h[2]+=c;s->h[3]+=d;s->h[4]+=e;s->h[5]+=f;s->h[6]+=g;s->h[7]+=h;}
static void sha_init(Sha*s){static const u32 iv[8]={0x6a09e667,0xbb67ae85,0x3c6ef372,0xa54ff53a,0x510e527f,0x9b05688c,0x1f83d9ab,0x5be0cd19};copy(s->h,iv,32);s->count=s->fill=0;}
static void sha_add(Sha*s,const void*p,usize n){const u8*b=p;s->count+=(u32)n;while(n--){s->b[s->fill++]=*b++;if(s->fill==64){block(s);s->fill=0;}}}
static void sha_end(Sha*s,u8*out){u32 len=s->count*8;unsigned i;s->b[s->fill++]=128;if(s->fill>56){while(s->fill<64)s->b[s->fill++]=0;block(s);s->fill=0;}while(s->fill<60)s->b[s->fill++]=0;for(i=0;i<4;i++)s->b[60+i]=(u8)(len>>(24-i*8));block(s);for(i=0;i<32;i++)out[i]=(u8)(s->h[i/4]>>(24-(i%4)*8));}
static void hmac(const u8*k,unsigned kn,const void*p,usize n,u8*out){Sha s;u8 pad[64],inner[32];unsigned i;zero(pad,64);copy(pad,k,kn);for(i=0;i<64;i++)pad[i]^=0x36;sha_init(&s);sha_add(&s,pad,64);sha_add(&s,p,n);sha_end(&s,inner);for(i=0;i<64;i++)pad[i]^=0x36^0x5c;sha_init(&s);sha_add(&s,pad,64);sha_add(&s,inner,32);sha_end(&s,out);zero(pad,64);zero(inner,32);}
static void hex(const u8*b,unsigned n,char*out){const char*t="0123456789abcdef";unsigned i;for(i=0;i<n;i++){out[2*i]=t[b[i]>>4];out[2*i+1]=t[b[i]&15];}out[2*n]=0;}
static int unhex(const char *p,u8*out,unsigned n){unsigned i,j;for(i=0;i<n;i++){out[i]=0;for(j=0;j<2;j++){char c=*p++;int v=c>='0'&&c<='9'?c-'0':c>='a'&&c<='f'?c-'a'+10:-1;if(v<0)return -1;out[i]=(u8)((out[i]<<4)|v);}}return 0;}
static int selftest(void){Sha s;u8 b[32],k[20];char t[65];sha_init(&s);sha_add(&s,"abc",3);sha_end(&s,b);hex(b,32,t);if(!equal(t,"ba7816bf8f01cfea414140de5dae2223b00361a396177a9cb410ff61f20015ad"))return 1;memset(k,11,20);hmac(k,20,"Hi There",8,b);hex(b,32,t);if(!equal(t,"b0344c61d8db38535ca8afceaf0bf12b881dc200c9833da726e9376c2e32cff7"))return 2;return 0;}

static void isa_probe(int which){int pid,st=0,limit[2]={0,0};volatile u32 x=0;pid=S0(4002);if(pid==0){S2(4075,4,P(limit));S1(4027,2);if(which==0){probe_llsc(&x);S1(4001,x==1?0:1);}else if(which==1){probe_tls();S1(4001,0);}else{probe_sync();S1(4001,0);}for(;;){} }if(pid<0){number(pid);return;}if(S3(4007,pid,P(&st),0)<0){append("wait_failed");return;}append("wait_status=");number(st);append(st==0?" supported":" NOT_proven");}
static void probes(void){int t[2],r,fd,one=1,index=0,req[2]={0,0};u8 b[32],ifr[40],group[20];unsigned i;append("\n[ platform probes: read-only; child-only ISA checks ]\nclock_monotonic=");number(S2(4263,1,P(t)));append("\nclock_realtime=");number(S2(4263,0,P(t)));r=random_bytes(b,32);append("\nurandom_read_bytes=");number(r);zero(b,32);append(" (entropy quality not certified)\nsha256_hmac_vectors=");number(selftest());append("\nllsc: ");isa_probe(0);append("\nrdhwr_tls: ");isa_probe(1);append("\nsync: ");isa_probe(2);append("\nipv6_socket=");fd=S3(4183,10,1,0);number(fd<0?fd:0);if(fd>=0){append("\nipv6_pktinfo=");number(S5(4181,fd,41,49,P(&one),4));zero(ifr,40);copy(ifr,"br0",4);r=S3(4054,fd,0x8933,P(ifr));if(r==0)copy(&index,ifr+16,4);append("\nbr0_ifindex=");number(r<0?r:index);if(r==0&&index>0){zero(group,20);group[0]=0xff;group[1]=2;group[15]=0xfb;copy(group+16,&index,4);append("\njoin_ff02_fb_br0=");number(S5(4181,fd,41,20,P(group),20));}close_fd(fd);}append("\n");(void)req;(void)i;}
static void processes(void){int fd,n,off,count=0;char path[64];append("\n[ process status: max 64, credentials/command lines excluded ]\n");fd=open_ro("/proc");if(fd<0)return;while((n=S3(4219,fd,P(scratch),sizeof(scratch)))>0){for(off=0;off+20<=n;){unsigned len=(unsigned)(u8)scratch[off+16]*256+(u8)scratch[off+17];char *name=scratch+off+19;int i=0,good=1;if(len<20||off+(int)len>n)break;while(i<(int)len-19&&name[i]){if(name[i]<'0'||name[i]>'9')good=0;i++;}if(i==0||i==(int)len-19)good=0;if(good&&count<64){char data[2048];int got;copy(path,"/proc/",6);copy(path+6,name,i);copy(path+6+i,"/status",8);got=read_file(path,data,sizeof(data));append("\n");append(path);append("\n");if(got>0)appendn(data,got);count++;}off+=(int)len;}}close_fd(fd);if(count==64)append("\n[process list capped]\n");}
static void snapshot(void){static const char *files[]={"/proc/version","/proc/cpuinfo","/proc/meminfo","/proc/uptime","/proc/mtd","/proc/partitions","/proc/mounts","/proc/net/dev","/proc/net/route","/proc/net/if_inet6","/proc/net/ipv6_route","/proc/net/udp6","/proc/net/igmp6","/proc/sys/net/ipv6/conf/all/disable_ipv6","/proc/sys/kernel/random/entropy_avail","/proc/self/status","/var/run/ck-setup-state","/var/run/ck-identity-state","/var/log/ck-store-init.log","/var/log/matter-identity.log","/var/log/ck-setupd.log","/var/log/ck-dhcp.log","/var/log/ck-setup.txt","/var/log/ck-ram-probe.txt","/var/log/matter-platform-cpp.txt","/var/log/matter-test.log",0};int i,n;used=0;append("incipio-matter-diag/2\nread_only=1; writes_flash=0; owns_mcu=0\nSDK pin=v1.6.1.0 3bcdd56ba54fb88b2afb4bfef575014671df7aa7\nserved=");number((int)served);append(" rejected=");number((int)rejected);append("\n");for(i=0;files[i];i++)file_section(files[i]);probes();processes();append("\n[ kernel log: non-consuming snapshot, max 8192 bytes ]\n");n=S3(4103,3,P(scratch),sizeof(scratch));if(n>0)appendn(scratch,n);else{append("unavailable errno=");number(-n);}append("\n[end]\n");}
static int send_all(int fd,const char *p,int n){int r;while(n>0){r=S4(4178,fd,P(p),n,0x4000);if(r==-4)continue;if(r<=0)return -1;p+=r;n-=r;}return 0;}
static void reply(int fd,const char *status,const char *body,int n){char header[256],num[12];int i=0,j=0,x=n;const char*parts[]={"HTTP/1.1 ",status,"\r\nContent-Type: text/plain; charset=utf-8\r\nCache-Control: no-store\r\nConnection: close\r\nX-Content-Type-Options: nosniff\r\nContent-Length: ",0};while(j<3){int k=slen(parts[j]);copy(header+i,parts[j],k);i+=k;j++;}j=0;do{num[j++]=(char)('0'+x%10);x/=10;}while(x);while(j)header[i++]=num[--j];copy(header+i,"\r\n\r\n",4);i+=4;if(send_all(fd,header,i)==0)send_all(fd,body,n);}
static int prefix(const char*s,const char*p){while(*p)if(*s++!=*p++)return 0;return 1;}
static int auth(void){char message[96],expected[65];u8 mac[32];int i,d=0,now=seconds();const char *p=request;const char *proof=0;if(!nonce_valid||now<0||now<nonce_time||now-nonce_time>10)return 0;while(*p){if(prefix(p,"\r\nX-Diag-Proof: ")){if(proof)return 0;proof=p+16;}p++;}if(!proof||slen(proof)<131)return 0;copy(message,"GET /diagnostics\n",17);copy(message+17,nonce,64);hmac(key,32,message,81,mac);hex(mac,32,expected);for(i=0;i<64;i++)d|=(u8)proof[i]^(u8)nonce[i];d|=proof[64]^':';for(i=0;i<64;i++)d|=(u8)proof[i+65]^(u8)expected[i];d|=proof[129]^'\r';d|=proof[130]^'\n';zero(mac,32);if(d)return 0;nonce_valid=0;return 1;}
static void handle(int fd){int n=0,r,deadline=seconds()+5;struct {int fd;short events,revents;} pfd;zero(request,sizeof(request));for(;;){int remaining=deadline-seconds();if(remaining<=0)break;pfd.fd=fd;pfd.events=1;pfd.revents=0;r=S3(4188,P(&pfd),1,remaining*1000);if(r<=0)break;r=S4(4175,fd,P(request+n),sizeof(request)-1-n,0);if(r<=0)break;n+=r;request[n]=0;if(n>=4){int i;for(i=0;i+4<=n;i++)if(prefix(request+i,"\r\n\r\n"))goto complete;}if(n==(int)sizeof(request)-1)break;}rejected++;reply(fd,"400 Bad Request","Incomplete request\n",19);return;
complete:
    if(prefix(request,"GET /challenge HTTP/1.1\r\n")||prefix(request,"GET /challenge HTTP/1.0\r\n")){u8 b[32];if(random_bytes(b,32)!=32||seconds()<0){reply(fd,"503 Service Unavailable","Entropy/clock unavailable\n",26);return;}hex(b,32,nonce);zero(b,32);nonce_time=seconds();nonce_valid=1;reply(fd,"200 OK",nonce,64);return;}
    if(prefix(request,"GET /diagnostics HTTP/1.1\r\n")||prefix(request,"GET /diagnostics HTTP/1.0\r\n")){if(auth()){served++;snapshot();reply(fd,"200 OK",report,(int)used);}else{rejected++;reply(fd,"403 Forbidden","Authentication failed\n",22);}return;}
    rejected++;reply(fd,"404 Not Found","Unknown read-only endpoint\n",27);
}
static int serve(const char*iface,const char*keyfile) {
    int fd,client,r,one=1,initial_index=0,current_index=0,timeout[2]={3,0};
    u8 ifr[40],addr[16];char k[66];
    if(slen(iface)<1||slen(iface)>15)return 2;
    r=read_file(keyfile,k,sizeof(k));
    if((r!=64&&r!=65)||unhex(k,key,32)<0||(r==65&&k[64]!='\n'))return 3;
    zero(k,sizeof(k));if(selftest()||seconds()<0)return 4;
    fd=S3(4183,2,2,0);if(fd<0)return 5;
    zero(ifr,40);copy(ifr,iface,slen(iface));
    if(S3(4054,fd,0x8933,P(ifr))<0){close_fd(fd);return 6;}
    copy(&initial_index,ifr+16,4);
    /* Bind ANY IPv4 on the named interface, so DHCP changes keep working. */
    zero(addr,16);addr[1]=2;addr[2]=PORT>>8;addr[3]=PORT&255;
    r=S5(4181,fd,0xffff,25,P(iface),slen(iface)+1);
    if(r<0){close_fd(fd);return 7;}
    S5(4181,fd,0xffff,4,P(&one),4);
    if(S3(4169,fd,P(addr),16)<0||S2(4174,fd,2)<0){close_fd(fd);return 8;}
    for(;;) {
        zero(ifr,40);copy(ifr,iface,slen(iface));
        r=S3(4054,fd,0x8933,P(ifr));copy(&current_index,ifr+16,4);
        if(r<0||current_index!=initial_index){close_fd(fd);return 10;}
        struct {int fd;short events,revents;} pollfd={fd,1,0};
        r=S3(4188,P(&pollfd),1,1000);
        if(r<=0)continue;
        client=S3(4168,fd,0,0);
        if(client<0){if(client==-4)continue;close_fd(fd);return 9;}
        S5(4181,client,0xffff,0x1006,P(timeout),8);
        S5(4181,client,0xffff,0x1005,P(timeout),8);
        handle(client);close_fd(client);
    }
}
/* These paths are fixed and only writable on the vendor RAM filesystem. */
static int ram_open(const char *path) { return S3(4005,P(path),0x301,0600); }
static int write_all(int fd,const void *p,int n) {
    const u8 *b=p;
    while(n>0) { int r=S3(4004,fd,P(b),n);if(r==-4)continue;if(r<=0)return -1;b+=r;n-=r; }
    return 0;
}
static int log_sink(void) {
    int n,total=0;u8 input[512];
    while((n=read_fd(0,input,sizeof(input)))>0) {
        if(total+n>(int)sizeof(scratch)) { int trim=total+n-(int)sizeof(scratch);copy(scratch,scratch+trim,total-trim);total-=trim; }
        copy(scratch+total,input,n);total+=n;
        int fd=ram_open("/var/log/matter-test.log");if(fd<0)return 1;
        int rc=write_all(fd,scratch,total);close_fd(fd);if(rc)return 1;
    }
    return n<0?1:0;
}
static int run_probe(void) {
    int fd=ram_open("/var/log/matter-platform-cpp.txt"),st=0,pid;
    if(fd<0)return 1;
    pid=S0(4002);
    if(pid==0) {
        int core[2]={0,0},address_space[2]={8*1024*1024,8*1024*1024};char *args[]={"/bin/matterd-test","--probe","br0",0};char *env[]={0};
        if(S2(4075,4,P(core))<0||S2(4075,MIPS_RLIMIT_AS,P(address_space))<0){S1(4001,127);for(;;){}}
        S1(4027,30);S2(4063,fd,1);S2(4063,fd,2);close_fd(fd);
        /* Trace our own bounded child only, including libc startup. The
         * service never traces the MCU owner or accepts remote commands. */
        int trace=S4(4026,0,0,0,0);
        if(trace<0){used=0;append("ptrace_traceme_unavailable=");number(trace);append("\n");write_all(1,report,(int)used);}
        S3(4011,P(args[0]),P(args),P(env));S1(4001,127);for(;;){}
    }
    if(pid<0) {close_fd(fd);return 1;}
    for(;;) {
        if(S3(4007,pid,P(&st),0)<0) {close_fd(fd);return 1;}
        if((st&255)!=127)break;
        int sig=(st>>8)&255;
        if(sig==4||sig==10||sig==11) {
            /* Linux MIPS GETREGS uses 38 sign-extended 64-bit slots even
             * for o32: PC=34, cause=37. Read the instruction without
             * resuming or altering it; then deliver the original signal. */
            u32 regs[76] __attribute__((aligned(8)));u32 insn=0;int rc;
            zero(regs,sizeof(regs));rc=S4(4026,12,pid,0,P(regs));
            used=0;append("probe_fault_signal=");number(sig);append(" getregs=");number(rc);
            if(rc==0){u32 pc=regs[34*2+1];append(" pc=");hex32(pc);append(" cause=");hex32(regs[37*2+1]);rc=S4(4026,1,pid,pc,P(&insn));append(" peektext=");number(rc);if(rc==0){append(" instruction=");hex32(insn);}}
            append("\n");write_all(fd,report,(int)used);
        }
        if(S4(4026,7,pid,0,sig==5?0:sig)<0){S2(4037,pid,9);S3(4007,pid,P(&st),0);close_fd(fd);return 1;}
    }
    used=0;append("\nprobe_child_wait_status=");number(st);append(st==0?" PASS\n":" FAIL; Matter not started\n");
    write_all(fd,report,(int)used);close_fd(fd);return st==0?0:1;
}
static int run_matter(void) {
    int core[2]={0,0},address_space[2]={8*1024*1024,8*1024*1024};
    char *args[]={"/bin/matterd-test","br0",0};char *env[]={0};
    if(S2(4075,4,P(core))<0||S2(4075,MIPS_RLIMIT_AS,P(address_space))<0)return 1;
    int r=S3(4011,P(args[0]),P(args),P(env));
    const char *t="matterd-test exec failed\n";S3(4004,2,P(t),slen(t));return r<0?127:0;
}
int diag_main(int argc,char**argv){int r;if(argc==2&&equal(argv[1],"--selftest")){r=selftest();const char*t=r?"crypto vectors FAIL\n":"crypto vectors PASS\n";S3(4004,1,P(t),slen(t));return r;}if(argc==2&&equal(argv[1],"--snapshot")){snapshot();S3(4004,1,P(report),used);return 0;}if(argc==2&&equal(argv[1],"--log"))return log_sink();if(argc==2&&equal(argv[1],"--run-probe"))return run_probe();if(argc==2&&equal(argv[1],"--run-matter"))return run_matter();if(argc==4&&equal(argv[1],"--serve"))return serve(argv[2],argv[3]);const char*t="Usage: matter-diag --snapshot | --selftest | --serve INTERFACE KEYFILE\n";S3(4004,2,P(t),slen(t));return 2;}
