#pragma once
#include "RelayEngine.h"
#include <pthread.h>

namespace incipio {
class McuController {
public:
    bool Start(const char * port = "/dev/ttyACM0", const char * gpio = "/proc/wlan0/gpio_ctrl");
    void Stop();
    uint32_t Request(bool on);
    RelaySnapshot Snapshot();
    void Identify(bool active);
    static uint64_t Now();
private:
    pthread_mutex_t mMutex = PTHREAD_MUTEX_INITIALIZER;
    pthread_t mThread{};
    RelayEngine mEngine;
    const char * mPort = nullptr;
    const char * mGpio = nullptr;
    bool mStarted = false, mStop = false, mIdentify = false, mBootIssued = false;
    uint32_t mNextId = 2;
    int mFd = -1, mLock = -1;
    static void * Run(void * self);
    void Worker();
    bool Open();
    bool Send(const McuTx & tx);
    void Report(uint64_t now, const RelaySnapshot & state);
};
} // namespace incipio
