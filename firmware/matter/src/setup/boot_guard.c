/* Fixed boot jobs only. No shell or caller-selected executable in production.
 * Deadlines use CLOCK_MONOTONIC; a dead launcher cannot orphan its child.
 */
#define _GNU_SOURCE
#include <errno.h>
#include <fcntl.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/prctl.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <time.h>
#include <unistd.h>

static volatile sig_atomic_t stopping;
static void stop(int sig) { (void)sig; stopping = 1; }
static long seconds_now(void) {
    struct timespec t;
    return clock_gettime(CLOCK_MONOTONIC, &t) ? -1 : t.tv_sec;
}
static const char *path(const char *p) {
#ifdef CK_TESTING
    static char names[8][1024]; static unsigned at;
    const char *root = getenv("CK_BOOT_TEST_ROOT");
    if (root) {
        char *out = names[at++ % 8];
        if (snprintf(out,1024,"%s%s",root,p) >= 1024) _exit(2);
        return out;
    }
#endif
    return p;
}
int main(int argc, char **argv) {
    const char *binary, *arg, *extra = NULL;
    int deadline = 30, watch = 0;
    if (argc != 2) return 2;
    if (!strcmp(argv[1],"--dhcp-log")) {
        char buffer[8192], chunk[512]; size_t total=0; ssize_t got;
        while ((got=read(STDIN_FILENO,chunk,sizeof(chunk)))>0) {
            size_t n=(size_t)got;
            if (total+n>sizeof(buffer)) {
                size_t trim=total+n-sizeof(buffer);
                memmove(buffer,buffer+trim,total-trim); total-=trim;
            }
            memcpy(buffer+total,chunk,n); total+=n;
            int fd=open(path("/var/log/ck-dhcp.log"),O_WRONLY|O_CREAT|O_TRUNC|O_NOFOLLOW,0600);
            if (fd<0) return 1;
            size_t at=0;
            while (at<total) {
                ssize_t written=write(fd,buffer+at,total-at);
                if (written<0 && errno==EINTR) continue;
                if (written<=0) { close(fd); return 1; }
                at+=(size_t)written;
            }
            close(fd);
        }
        return got<0 ? 1 : 0;
    }
    if (!strcmp(argv[1],"--import") || !strcmp(argv[1],"--import-wait") || !strcmp(argv[1],"--boot") || !strcmp(argv[1],"--protocol-boot")) {
        binary = "/bin/ck-updater"; arg = argv[1];
        if (!strcmp(arg,"--import-wait")) deadline = 300;
    } else if (!strcmp(argv[1],"--identity")) {
        binary = "/bin/matterd-test"; arg = "--init-identity"; extra = "wlan0";
    } else if (!strcmp(argv[1],"--mib")) {
        binary = "/bin/ck-wificfg"; arg = "status"; deadline = 10;
    } else if (!strcmp(argv[1],"--setup")) {
        binary = "/bin/ck-setupd"; arg = "--serve";
        extra = path("/var/lib/ck-state/diag.key"); watch = 1; deadline = 40;
        unlink(path("/var/run/ck-setup-heartbeat"));
    } else return 2;
#ifdef CK_TESTING
    const char *limit = getenv("CK_BOOT_TEST_SECONDS");
    if (limit && atoi(limit) > 0) deadline = atoi(limit);
#endif
    signal(SIGTERM,stop); signal(SIGINT,stop); signal(SIGHUP,stop);
    pid_t launcher=getppid();
    if (prctl(PR_SET_PDEATHSIG,SIGTERM) || getppid() != launcher) return 125;
    long started = seconds_now();
    if (started < 0) return 125;
    pid_t child = fork();
    if (child < 0) return 125;
    if (!child) {
        pid_t parent = getppid();
        if (setsid() < 0 || prctl(PR_SET_PDEATHSIG,SIGKILL) || getppid() != parent) _exit(125);
        char *args[] = {(char *)path(binary),(char *)arg,(char *)extra,NULL};
        execv(args[0],args); _exit(127);
    }
    int status = 0, expired = 0;
    long last = started;
    for (;;) {
        pid_t result = waitpid(child,&status,WNOHANG);
        if (result == child) break;
        if (result < 0 && errno != EINTR) return 125;
        long now = seconds_now();
        if (watch) {
            FILE *f = fopen(path("/var/run/ck-setup-heartbeat"),"r");
            long beat;
            if (f) {
                if (fscanf(f,"%ld",&beat) == 1 && beat >= last && beat <= now) last = beat;
                fclose(f);
            }
        }
        if (stopping || now < 0 || now - last >= deadline) {
            expired = !stopping;
            /* A process group also contains a stuck backend child. */
            kill(-child,SIGTERM); kill(child,SIGTERM);
            struct timespec grace = {1,0}; nanosleep(&grace,NULL);
            kill(-child,SIGKILL); kill(child,SIGKILL);
            while (waitpid(child,&status,0) < 0 && errno == EINTR) {}
            break;
        }
        struct timespec pause = {0,250000000}; nanosleep(&pause,NULL);
    }
    if (expired || stopping) {
        fprintf(stderr,"CK_BOOT job=%s result=%s\n",argv[1],expired?"timeout":"stopped");
        return expired ? 124 : 143;
    }
    return WIFEXITED(status) ? WEXITSTATUS(status) : 128 + WTERMSIG(status);
}
