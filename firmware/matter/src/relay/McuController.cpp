#include "McuController.h"
#include <cerrno>
#include <cstdio>
#include <cstring>
#include <fcntl.h>
#include <sys/file.h>
#include <sys/ioctl.h>
#include <sys/select.h>
#include <sys/stat.h>
#include <termios.h>
#include <time.h>
#include <unistd.h>

namespace incipio {
uint64_t McuController::Now()
{
    timespec t{}; clock_gettime(CLOCK_MONOTONIC, &t);
    return uint64_t(t.tv_sec) * 1000 + t.tv_nsec / 1000000;
}
bool McuController::Start(const char * port, const char * gpio)
{
    if (mStarted) { return false; }
    mLock = open("/var/run/matter-mcu.lock", O_RDWR | O_CREAT | O_NOFOLLOW, 0600);
    if (mLock < 0 || flock(mLock, LOCK_EX | LOCK_NB)) {
        if (mLock >= 0) { close(mLock); mLock = -1; } return false;
    }
    mPort = port; mGpio = gpio;
    pthread_attr_t attr; pthread_attr_init(&attr); pthread_attr_setstacksize(&attr, 65536);
    int error = pthread_create(&mThread, &attr, Run, this); pthread_attr_destroy(&attr);
    if (error) { close(mLock); mLock = -1; return false; }
    mStarted = true; return true;
}
void McuController::Stop()
{
    if (!mStarted) { return; }
    pthread_mutex_lock(&mMutex); mStop = true; pthread_mutex_unlock(&mMutex);
    pthread_join(mThread, nullptr); close(mLock); mLock = -1; mStarted = false;
}
uint32_t McuController::Request(bool on)
{
    pthread_mutex_lock(&mMutex);
    uint32_t id = mNextId++;
    if (!id) { id = mNextId++; }
    if (mFd < 0 || !mBootIssued || !mEngine.Request(id, on, Now())) { id = 0; }
    pthread_mutex_unlock(&mMutex); return id;
}
RelaySnapshot McuController::Snapshot()
{
    pthread_mutex_lock(&mMutex); auto state = mEngine.Snapshot(); pthread_mutex_unlock(&mMutex); return state;
}
void McuController::Identify(bool active)
{
    pthread_mutex_lock(&mMutex); mIdentify = active; pthread_mutex_unlock(&mMutex);
}
void * McuController::Run(void * self) { static_cast<McuController *>(self)->Worker(); return nullptr; }
bool McuController::Open()
{
    int fd = open(mPort, O_RDWR | O_NOCTTY | O_NONBLOCK);
    if (fd < 0) { return false; }
    termios t{};
    if (ioctl(fd, TIOCEXCL) || tcgetattr(fd, &t)) { close(fd); return false; }
    cfmakeraw(&t); t.c_cflag &= ~(CSIZE | PARENB | CSTOPB | CRTSCTS);
    t.c_cflag |= CS8 | CLOCAL | CREAD;
    // Vendor passes 19200 but its switch falls through to speed code 0x0d:
    // B9600 in MIPS/Linux. Match the actual configured rate, not the debug label.
    cfsetispeed(&t, B9600); cfsetospeed(&t, B9600); t.c_cc[VMIN] = 0; t.c_cc[VTIME] = 0;
    if (tcsetattr(fd, TCSANOW, &t) || tcflush(fd, TCIFLUSH)) { close(fd); return false; }
    mFd = fd; std::puts("MCU_CONNECTED: 9600 8N1; one owner; relay confirmation required"); return true;
}
bool McuController::Send(const McuTx & tx)
{
    size_t sent = 0; uint64_t until = Now() + 100;
    while (sent < sizeof(tx.bytes) && Now() < until) {
        ssize_t n = write(mFd, tx.bytes + sent, sizeof(tx.bytes) - sent);
        if (n > 0) { sent += size_t(n); }
        else if (n < 0 && errno != EINTR && errno != EAGAIN) { return false; }
        else { usleep(1000); }
    }
    return sent == sizeof(tx.bytes);
}
void McuController::Gpio(const char * command)
{
    int fd = open(mGpio, O_WRONLY | O_NOFOLLOW);
    if (fd < 0) { return; }
    ssize_t unused = write(fd, command, std::strlen(command)); (void) unused; close(fd);
}
void McuController::Report(uint64_t now, const RelaySnapshot & s, bool led)
{
    char text[1024];
    int n = std::snprintf(text, sizeof(text),
        "matter-hardware/1\nconnected=%d baud=9600 cold_off_confirmed=%d\nrelay_known=%d relay_on=%d relay_age_ms=%llu\n"
        "completed_id=%u result=%u relay_frames=%u\npower_raw=%u power_frames=%u power_age_ms=%llu load_blink=%d led=%d\n"
        "voltage_raw=%u voltage_valid=%d voltage_age_ms=%llu current_raw=%u current_valid=%d current_age_ms=%llu power_valid=%d\n"
        "reset_events=%u reset_action=record_only\n",
        int(mFd >= 0), int(s.bootOffConfirmed), int(s.known && now-s.relayAt <= 10000), int(s.on),
        static_cast<unsigned long long>(now-s.relayAt), s.completedId, unsigned(s.result), s.relayFrames,
        s.powerRaw, s.powerFrames, static_cast<unsigned long long>(now-s.powerAt), int(mEngine.LoadBlink(now)), int(led), s.voltageRaw, int(s.voltageValid && now-s.voltageAt<=15000), static_cast<unsigned long long>(now-s.voltageAt),
        s.currentRaw, int(s.currentValid && now-s.currentAt<=15000), static_cast<unsigned long long>(now-s.currentAt),
        int(s.powerValid && now-s.powerAt<=15000), s.resetEvents);
    int fd = open("/var/log/matter-hardware.txt.tmp", O_WRONLY | O_CREAT | O_TRUNC | O_NOFOLLOW, 0600);
    if (fd >= 0) {
        if (n > 0 && n < int(sizeof(text)) && write(fd, text, n) == n) { close(fd); rename("/var/log/matter-hardware.txt.tmp", "/var/log/matter-hardware.txt"); }
        else { close(fd); }
    }
}
void McuController::Worker()
{
    uint64_t start = Now(), nextOpen = 0, nextReport = 0; bool lastLed = false;
    Gpio("config 6 w"); Gpio("set 6 1");
    for (;;) {
        uint64_t now = Now();
        pthread_mutex_lock(&mMutex);
        if (mStop) { pthread_mutex_unlock(&mMutex); break; }
        if (mFd < 0 && now >= nextOpen) {
            if (Open() && !mBootIssued) { mEngine.Request(1, false, now); mBootIssued = true; }
            nextOpen = now + 1000;
        }
        if (mFd >= 0) {
            uint8_t bytes[64];
            ssize_t n = read(mFd, bytes, sizeof(bytes));
            if (n > 0) { for (ssize_t i = 0; i < n; ++i) { mEngine.Feed(bytes[i], now); } }
            bool failed = n < 0 && errno != EAGAIN && errno != EINTR;
            McuTx tx;
            if (!failed && mEngine.NextTx(now, tx)) { failed = !Send(tx); }
            if (failed) {
                std::puts("MCU_TRANSPORT_ERROR; state invalidated; no automatic relay retry");
                ioctl(mFd, TIOCNXCL); close(mFd); mFd = -1; mEngine.Disconnect();
            }
        }
        bool led = mIdentify ? ((now / 250) & 1) : (mEngine.LoadBlink(now) && ((now / 500) & 1));
        if (!mIdentify && now >= start + 10000 && now < start + 11500) { led = ((now-start-10000)/250)%2 == 0; }
        if (led != lastLed) { Gpio(led ? "set 6 0" : "set 6 1"); lastLed = led; }
        if (now >= nextReport) { Report(now, mEngine.Snapshot(), led); nextReport = now + 1000; }
        pthread_mutex_unlock(&mMutex); usleep(10000);
    }
    if (mFd >= 0) { ioctl(mFd, TIOCNXCL); close(mFd); mFd = -1; }
    Gpio("set 6 1");
}
} // namespace incipio
