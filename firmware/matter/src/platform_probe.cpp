// Phase B executable: modern C++/pthread/crypto on the actual vendor kernel.
// No MCU, GPIO, Flash writes, pairing keys or network configuration changes.
#include <atomic>
#include <cstdio>
#include <cstring>
#include <thread>
#include <mutex>
#include <vector>
#include <chrono>
#include <cerrno>
#include <fcntl.h>
#include <unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <net/if.h>
#include <mbedtls/sha256.h>
#include <mbedtls/gcm.h>
#include <mbedtls/ecdh.h>
#include <mbedtls/ecdsa.h>
#include <mbedtls/ctr_drbg.h>
#include <mbedtls/entropy.h>
static int failures;
static thread_local unsigned tls_marker=0x12345678;
static void check(const char*name,bool ok){std::printf("%s=%s\n",name,ok?"PASS":"FAIL");if(!ok)failures++;}
static int entropy(void*,unsigned char*b,size_t n){int f=open("/dev/urandom",O_RDONLY);if(f<0)return -1;size_t got=0;while(got<n){ssize_t r=read(f,b+got,n-got);if(r<=0){close(f);return -1;}got+=(size_t)r;}close(f);return 0;}
#ifdef INCIPIO_MATTER_EMBEDDED_PROBE
int platform_probe_main(int argc,char**argv){
#else
int main(int argc,char**argv){
#endif
    // If an unsupported instruction hangs, kernel alarm bounds the probe.
    alarm(20);setvbuf(stdout,nullptr,_IONBF,0);
    std::printf("incipio-platform-probe/2 gcc=%s cplusplus=%ld\n",__VERSION__,__cplusplus);
    check("big_endian",htonl(0x12345678)==0x12345678);
    std::atomic<unsigned> count{0},tls_errors{0},ready{0};std::mutex mutex;unsigned locked=0;volatile unsigned legacy_count=0;
    struct ThreadObservation {unsigned tls_bad{},errno_bad{},first_marker{};int first_errno{};int *errno_address{};};
    ThreadObservation observations[2];
    // LinuxThreads' signal-based mutex wait leaves errno=EINTR. It is not a
    // TLS collision. Test distinct live errno storage and real syscall errors
    // immediately after failure instead of requiring errno across mutex calls.
    auto work=[&](unsigned id){auto &obs=observations[id==17?0:1];tls_marker=id;obs.errno_address=&errno;ready.fetch_add(1);while(ready.load()<2)std::this_thread::yield();for(unsigned i=0;i<10000;i++){count.fetch_add(1,std::memory_order_relaxed);unsigned n;do{n=__atomic_load_n(&legacy_count,__ATOMIC_RELAXED);}while(!__sync_bool_compare_and_swap(&legacy_count,n,n+1));std::lock_guard<std::mutex>g(mutex);locked++;if(tls_marker!=id){obs.tls_bad++;obs.first_marker=tls_marker;tls_errors.fetch_add(1,std::memory_order_relaxed);}int rc=id==17?close(-1):open("/__incipio_missing_probe__",O_RDONLY);int seen_errno=errno;int expected_errno=id==17?EBADF:ENOENT;if(rc!=-1||seen_errno!=expected_errno){if(!obs.errno_bad)obs.first_errno=seen_errno;obs.errno_bad++;tls_errors.fetch_add(1,std::memory_order_relaxed);if(rc>=0)close(rc);}}};
    std::thread a(work,17),b(work,29);a.join();b.join();check("pthread_atomic_mutex",count==20000&&locked==20000);
    bool distinct=observations[0].errno_address!=observations[1].errno_address&&observations[0].errno_address!=&errno&&observations[1].errno_address!=&errno;
    check("thread_local_errno_isolation",tls_errors==0&&tls_marker==0x12345678&&distinct);
    for(unsigned i=0;i<2;i++)std::printf("thread_observation id=%u tls_bad=%u first_marker=%u syscall_errno_bad=%u first_errno=%d address_distinct=%d\n",i?29:17,observations[i].tls_bad,observations[i].first_marker,observations[i].errno_bad,observations[i].first_errno,distinct);
    check("legacy_cas_contention",legacy_count==20000&&!__sync_bool_compare_and_swap(&legacy_count,0,7));
    auto start=std::chrono::steady_clock::now();std::this_thread::sleep_for(std::chrono::milliseconds(20));
    check("monotonic_sleep",std::chrono::steady_clock::now()>start);
    std::vector<unsigned>v(1024,42);check("cpp_heap",v.size()==1024&&v.at(100)==42);
    unsigned char digest[32];static const unsigned char known[32]={0xba,0x78,0x16,0xbf,0x8f,0x01,0xcf,0xea,0x41,0x41,0x40,0xde,0x5d,0xae,0x22,0x23,0xb0,0x03,0x61,0xa3,0x96,0x17,0x7a,0x9c,0xb4,0x10,0xff,0x61,0xf2,0x00,0x15,0xad};
    check("sdk_mbedtls_sha256",mbedtls_sha256_ret((const unsigned char*)"abc",3,digest,0)==0&&memcmp(digest,known,32)==0);
    unsigned char key[16]={0},iv[12]={0},plain[16]={0},cipher[16],tag[16],restored[16];
    mbedtls_gcm_context g;mbedtls_gcm_init(&g);int rc=mbedtls_gcm_setkey(&g,MBEDTLS_CIPHER_ID_AES,key,128);
    rc|=mbedtls_gcm_crypt_and_tag(&g,MBEDTLS_GCM_ENCRYPT,16,iv,12,nullptr,0,plain,cipher,16,tag);
    rc|=mbedtls_gcm_auth_decrypt(&g,16,iv,12,nullptr,0,tag,16,cipher,restored);
    check("sdk_mbedtls_aes_gcm",rc==0&&memcmp(plain,restored,16)==0);mbedtls_gcm_free(&g);
    mbedtls_ctr_drbg_context rng;mbedtls_ctr_drbg_init(&rng);
    const unsigned char label[]="incipio-platform-test";
    rc=mbedtls_ctr_drbg_seed(&rng,entropy,nullptr,label,sizeof(label)-1);check("urandom_drbg",rc==0);
    // Tests a real P-256 signature and verification; no key is persisted.
    mbedtls_ecdsa_context ec;mbedtls_ecdsa_init(&ec);unsigned char sig[80];size_t siglen=0;
    if(rc==0)rc=mbedtls_ecdsa_genkey(&ec,MBEDTLS_ECP_DP_SECP256R1,mbedtls_ctr_drbg_random,&rng);
    if(rc==0)rc=mbedtls_ecdsa_write_signature(&ec,MBEDTLS_MD_SHA256,digest,32,sig,&siglen,mbedtls_ctr_drbg_random,&rng);
    if(rc==0)rc=mbedtls_ecdsa_read_signature(&ec,digest,32,sig,siglen);
    check("sdk_mbedtls_p256_sign_verify",rc==0);mbedtls_ecdsa_free(&ec);mbedtls_ctr_drbg_free(&rng);
    int fd=socket(AF_INET6,SOCK_DGRAM,0);check("ipv6_socket",fd>=0);
    if(fd>=0){int one=1;check("ipv6_pktinfo",setsockopt(fd,IPPROTO_IPV6,IPV6_RECVPKTINFO,&one,sizeof(one))==0);
        const char*iface=argc==2?argv[1]:"br0";ipv6_mreq req{};req.ipv6mr_multiaddr.s6_addr[0]=0xff;req.ipv6mr_multiaddr.s6_addr[1]=2;req.ipv6mr_multiaddr.s6_addr[15]=0xfb;req.ipv6mr_interface=if_nametoindex(iface);
        check("multicast_interface_found",req.ipv6mr_interface!=0);
        check("join_ff02_fb",req.ipv6mr_interface!=0&&setsockopt(fd,IPPROTO_IPV6,IPV6_JOIN_GROUP,&req,sizeof(req))==0);close(fd);}
    std::printf("result=%s failures=%d (does not prove LAN multicast reception or entropy quality)\n",failures?"FAIL":"PASS",failures);
    return failures?1:0;
}
