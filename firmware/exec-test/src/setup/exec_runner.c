/* Fixed, hash-pinned test.tar suite. No remote execution interface. */
#define diag_main unused_diag_main
#include "../matter_diag.c"
#undef diag_main
#include "exec_probe.h"
static char output[7600];
typedef struct {
  const char *name, *source, *log, *digest, *marker;
  int bytes;
} Test;
#ifdef EXEC_TEST_FIXTURES
#include "../../tests/fixtures.h"
#else
static const Test tests[] = {
  {"tiny_eb", "/bin/test-tiny_eb", "/var/log/test-tiny_eb.txt",
   "897e409ae52a202d8f93aab9315686538c675adf80ee24a0f45c269a33cd2a1d", "RLX-OK", 608},
  {"tiny_gcc16", "/bin/test-tiny_gcc16", "/var/log/test-tiny_gcc16.txt",
   "60283435194b72e0c2dd61ffc0985f88d6478b26dc05be03eca629d2078f54c7", "RLX-OK", 632},
  {"cpp_lean", "/bin/test-cpp_lean", "/var/log/test-cpp_lean.txt",
   "85a4e1fb97533f9d5b09ef630811a8df5e47d53d51f5de6e4e9374ca7660fb96", "CXX-RT-OK", 274848}
};
#endif
static int limit(int id, int bytes) {
  int pair[2] = {bytes, bytes};
  return S2(4075, id, P(pair));
}
static int make_jail(void) {
  const char *dirs[] = {RAM_JAIL, RAM_JAIL "/dev", 0};
  for (int i=0; dirs[i]; i++) {
    int r=S2(4039,P(dirs[i]),0755);
    if ((r<0 && r!=-17) || S2(4015,P(dirs[i]),0755)<0) return -1;
  }
  int r=S3(4014,P(RAM_JAIL "/dev/null"),020666,0x103);
  if ((r<0 && r!=-17) || S2(4015,P(RAM_JAIL "/dev/null"),0666)<0) return -1;
  r=S3(4014,P(RAM_JAIL "/dev/urandom"),020444,0x109);
  if ((r<0 && r!=-17) || S2(4015,P(RAM_JAIL "/dev/urandom"),0444)<0) return -1;
  return 0;
}
static int stage(const Test *t) {
  if (make_jail()) return -1;
  int in=open_ro(t->source), dest=ram_open(RAM_PROGRAM), n, total=0;
  if (in<0 || dest<0) {close_fd(in);close_fd(dest);return -1;}
  Sha hash; u8 digest[32]; char actual[65]; sha_init(&hash);
  while ((n=read_fd(in,scratch,sizeof(scratch)))>0) {
    if (total+n>t->bytes || write_all(dest,scratch,n)) {n=-1;break;}
    sha_add(&hash,scratch,n); total+=n;
  }
  close_fd(in);close_fd(dest);sha_end(&hash,digest);hex(digest,32,actual);
  if (n<0 || total!=t->bytes || !equal(actual,t->digest)) return -1;
  /* Tiny samples have an original RWX segment; cpp_lean has PT_TLS.
   * Their exact original bytes are required by this test and hash-pinned. */
  return S2(4015,P(RAM_PROGRAM),0555)<0 ? -1 : 0;
}
static void retain(int log, int n, int *total) {
  if (n>7600-*total) n=7600-*total;
  if (n>0) {copy(output+*total,scratch,n);write_all(log,scratch,n);*total+=n;}
}
static int has_marker(const char *marker, int n) {
  int len=slen(marker);
  for (int i=0; i+len<=n; i++) {
    int j=0; while(j<len && output[i+j]==marker[j])j++;
    if(j==len)return 1;
  }
  return 0;
}
static int run_test(const Test *t) {
  int log=ram_open(t->log), low=memfree_kb(), total=0;
  if(log<0)return 3;
  used=0;append("TEST_BEGIN name=");append(t->name);append(" sha256=");append(t->digest);
  append("\nlimits: memory=8388608 cpu_seconds=20 wall_seconds=35 output_bytes=7600 uid=65534\n");
  write_all(log,report,(int)used);
  if(!ram_filesystem() || low<8*1024 || stage(t)) {
    const char *msg="TEST_REJECT: invalid RAM filesystem, low RAM, or input hash/staging failure\n";
    write_all(log,msg,slen(msg));close_fd(log);S1(4010,P(RAM_PROGRAM));return 4;
  }
  int pipes[2];
  if(S2(4328,P(pipes),0)<0) {close_fd(log);S1(4010,P(RAM_PROGRAM));return 5;}
  int pid=S0(4002), st=0, started=seconds(), timed=0, fault_recorded=0;
  if(pid==0) {
    close_fd(pipes[0]);close_fd(log);
    int null=open_ro("/dev/null");
    if(null<0 || S2(4063,null,0)<0 || S2(4063,pipes[1],1)<0 || S2(4063,pipes[1],2)<0)goto failed;
    for(int i=3;i<128;i++)close_fd(i);
    if(S0(4066)<0 || limit(4,0)<0 || limit(MIPS_RLIMIT_AS,8*1024*1024)<0 ||
       limit(0,20)<0 || limit(1,8192)<0 || limit(5,32)<0 || limit(8,8)<0 ||
       S1(4061,P(RAM_JAIL))<0 || S1(4012,P("/"))<0 || S2(4081,0,0)<0 ||
       S1(4046,65534)<0 || S1(4023,65534)<0 || S0(4024)!=65534 || S0(4047)!=65534)goto failed;
    S1(4027,30);
    if(S4(4026,0,0,0,0)<0)goto failed;
    char *args[]={"/probe",0}, *env[]={0};
    S3(4011,P(args[0]),P(args),P(env));
  failed:
    S1(4001,127);for(;;){}
  }
  close_fd(pipes[1]);
  if(pid<0) {close_fd(pipes[0]);close_fd(log);S1(4010,P(RAM_PROGRAM));return 6;}
  for(;;) {
    struct {int fd;short events,revents;} f={pipes[0],1,0};
    if(S3(4188,P(&f),1,100)>0 && (f.revents&1)) {
      int n=read_fd(pipes[0],scratch,sizeof(scratch));if(n>0)retain(log,n,&total);
    }
    int free=memfree_kb();if(free>=0 && free<low)low=free;
    int r=S3(4007,pid,P(&st),1);
    if(r==pid) {
      if((st&255)!=127)break;
      int sig=(st>>8)&255;
      if(!fault_recorded && (sig==4 || sig==10 || sig==11)) {
        fault_recorded=1;u32 regs[76] __attribute__((aligned(8))),insn=0;
        zero(regs,sizeof(regs));int rc=S4(4026,12,pid,0,P(regs));
        used=0;append("\nTEST_FAULT signal=");number(sig);append(" getregs=");number(rc);
        if(rc==0) {u32 pc=regs[69];append(" pc=");hex32(pc);append(" cause=");hex32(regs[75]);
          if(S4(4026,1,pid,pc,P(&insn))==0){append(" instruction=");hex32(insn);}}
        append("\n");write_all(log,report,(int)used);
      }
      if(S4(4026,7,pid,0,sig==5?0:sig)<0)timed=1;
    } else if(r<0 && r!=-4)timed=1;
    if(timed || started<0 || seconds()-started>=35 || low<6*1024) {
      timed=1;S2(4037,-pid,9);S2(4037,pid,9);
      while(S3(4007,pid,P(&st),0)==-4){}
      break;
    }
  }
  S2(4037,-pid,9);
  for(;;) {
    struct {int fd;short events,revents;} f={pipes[0],1,0};
    if(S3(4188,P(&f),1,0)<=0 || !(f.revents&1))break;
    int n=read_fd(pipes[0],scratch,sizeof(scratch));if(n<=0)break;retain(log,n,&total);
  }
  /* MIPS SIGALRM=14 and SIGXCPU=30 also terminate a time-limited child. */
  if((st&127)==14 || (st&127)==30)timed=1;
  int marker=has_marker(t->marker,total),passed=st==0 && !timed && marker;
  used=0;append("\nTEST_END name=");append(t->name);append(" wait_status=");number(st);
  append(" exit_code=");number((st&127)?-1:(st>>8)&255);append(" signal=");number(st&127);
  append(" timeout_or_low_memory=");number(timed);append(" expected_marker=");number(marker);
  append(" memfree_min_kb=");number(low);append(" output_capped=");number(total==7600);
  append(passed?" PASS\n":" FAIL\n");write_all(log,report,(int)used);
  close_fd(pipes[0]);close_fd(log);S1(4010,P(RAM_PROGRAM));return passed?0:1;
}
int diag_main(int argc,char **argv) {
  if(argc!=2)return 2;
  for(int i=0;i<3;i++)if(equal(argv[1],tests[i].name))return run_test(tests+i);
  return 2;
}
