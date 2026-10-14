#pragma once
#include <cstddef>
#include <cstdint>

namespace incipio {
enum class RelayResult : uint8_t { None, Confirmed, Timeout, TransportError };
struct RelaySnapshot {
    bool known = false, on = false, bootOffConfirmed = false, load = false;
    bool voltageValid = false, currentValid = false, powerValid = false;
    uint32_t voltageRaw = 0, currentRaw = 0, voltageFrames = 0, currentFrames = 0;
    uint64_t voltageAt = 0, currentAt = 0;
    uint64_t relayAt = 0, powerAt = 0;
    uint32_t completedId = 0, powerRaw = 0, relayFrames = 0, powerFrames = 0, resetEvents = 0;
    RelayResult result = RelayResult::None;
};
struct McuTx { uint8_t bytes[14]; };

// Single-threaded protocol state machine. The POSIX owner serializes access.
// FE 30 30 56 / FE 31 31 56 are the only accepted relay state frames.
// No inferred checksum, no GPIO relay writes, no unbounded retries.
class RelayEngine {
public:
    bool Request(uint32_t id, bool on, uint64_t now);
    bool NextTx(uint64_t now, McuTx & tx);
    void Feed(uint8_t byte, uint64_t now);
    void Disconnect();
    RelaySnapshot Snapshot() const { return mState; }
    bool Busy() const { return mCommand != Command::Idle; }
    bool Fresh(uint64_t now) const { return mState.known && now - mState.relayAt <= 10000; }
    bool LoadBlink(uint64_t now) const;
private:
    enum class Command : uint8_t { Idle, Send, Verify };
    enum class Query : uint8_t { None, Relay, Power, Voltage, Current };
    RelaySnapshot mState;
    Command mCommand = Command::Idle;
    Query mQuery = Query::None;
    bool mDesired = false;
    uint32_t mId = 0;
    uint64_t mDeadline = 0, mNextVerify = 0, mQueryDeadline = 0, mRelayDue = 0, mPowerDue = 5000, mVoltageDue = 500, mCurrentDue = 1500, mQuietUntil = 0;
    uint8_t mWindow[4] = {}, mCount = 0, mHigh = 0, mLow = 0;
    void Finish(RelayResult result);
    static void Frame(uint8_t code, bool on, McuTx & tx);
};
} // namespace incipio
