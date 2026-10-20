#include "RelayEngine.h"
#include <cstring>

namespace incipio {
void RelayEngine::Frame(uint8_t code, bool on, McuTx & tx)
{
    static const uint8_t base[14] = {0xff,0xa4,0,0xe0,0x4c,0x81,0x96,0xc1,0xc1,0,0x1b,0x32,0,0x55};
    std::memcpy(tx.bytes, base, sizeof(base));
    tx.bytes[1] = code;
    if (code == 0xa1) { tx.bytes[9] = on ? 0x31 : 0x30; tx.bytes[11] = 0; }
}
bool RelayEngine::Request(uint32_t id, bool on, uint64_t now)
{
    if (!id || Busy() || (on && !mState.bootOffConfirmed)) { return false; }
    mId = id; mDesired = on; mCommand = Command::Send; mDeadline = now + 3000;
    mQuery = Query::None; mCount = 0; mQuietUntil = now + 800;
    return true;
}
void RelayEngine::Finish(RelayResult result)
{
    mState.completedId = mId; mState.result = result;
    if (result == RelayResult::Confirmed && !mDesired) { mState.bootOffConfirmed = true; }
    if (result != RelayResult::Confirmed) { mState.known = false; mState.load = false; }
    mCommand = Command::Idle; mQuery = Query::None;
}
bool RelayEngine::NextTx(uint64_t now, McuTx & tx)
{
    if (Busy() && now >= mDeadline) { Finish(RelayResult::Timeout); }
    if (mQuery != Query::None && now >= mQueryDeadline) {
        if (mQuery == Query::Voltage) { mState.voltageValid = false; }
        if (mQuery == Query::Current) { mState.currentValid = false; }
        if (mQuery == Query::Power) { mState.powerValid = false; }
        mQuery = Query::None; mCount = 0; mQuietUntil = now + 200;
    }
    if (mCommand == Command::Send) {
        Frame(0xa1, mDesired, tx); mCommand = Command::Verify; mNextVerify = now + 100;
        return true;
    }
    if (mCommand == Command::Verify) {
        if (now < mNextVerify || mQuery != Query::None) { return false; }
        Frame(0xa4, false, tx); mQuery = Query::Relay; mQueryDeadline = now + 600;
        mNextVerify = now + 700; mCount = 0;
        return true;
    }
    if (mQuery != Query::None || now < mQuietUntil) { return false; }
    if (now >= mRelayDue) {
        Frame(0xa4, false, tx); mQuery = Query::Relay; mRelayDue = now + 2000;
    } else if (now >= mPowerDue) {
        Frame(0xa7, false, tx); mQuery = Query::Power; mPowerDue = now + 5000;
    } else if (now >= mVoltageDue) {
        Frame(0xa5, false, tx); mQuery = Query::Voltage; mVoltageDue = now + 5000;
    } else if (now >= mCurrentDue) {
        Frame(0xa6, false, tx); mQuery = Query::Current; mCurrentDue = now + 5000;
    } else { return false; }
    mQueryDeadline = now + 600; mCount = 0;
    return true;
}
void RelayEngine::Feed(uint8_t byte, uint64_t now)
{
    if (mCount == 4) { std::memmove(mWindow, mWindow + 1, 3); mCount = 3; }
    mWindow[mCount++] = byte;
    if (mCount != 4) { return; }
    if (mWindow[0] == 0xfe && mWindow[3] == 0x56 && mWindow[1] == mWindow[2] &&
        (mWindow[1] == 0x30 || mWindow[1] == 0x31)) {
        mState.known = true; mState.on = mWindow[1] == 0x31; mState.relayAt = now; ++mState.relayFrames;
        if (!mState.on) { mState.load = false; mHigh = mLow = 0; }
        if (mQuery == Query::Relay) {
            if (mCommand == Command::Verify && now < mDeadline && now < mQueryDeadline && mState.on == mDesired) { Finish(RelayResult::Confirmed); }
            mQuery = Query::None;
        }
        mCount = 0;
    } else if (mWindow[0] == 0xff && mWindow[3] == 0x55 && (mQuery == Query::Power || mQuery == Query::Voltage || mQuery == Query::Current) && now < mQueryDeadline) {
        uint32_t raw = uint32_t(mWindow[1]) + 256u * mWindow[2];
        if (mQuery == Query::Voltage) {
            mState.voltageRaw = raw; mState.voltageAt = now; ++mState.voltageFrames;
            mState.voltageValid = raw <= 300u * 64;
            mQuery = Query::None; mCount = 0; return;
        }
        if (mQuery == Query::Current) {
            mState.currentRaw = raw; mState.currentAt = now; ++mState.currentFrames;
            mState.currentValid = raw <= 15u * 256;
            mQuery = Query::None; mCount = 0; return;
        }
        mState.powerRaw = raw; mState.powerAt = now; ++mState.powerFrames;
        mState.powerValid = raw <= 2000;
        if (Fresh(now) && mState.on) {
            if (mState.powerRaw >= 5 && mState.powerRaw <= 2000) {
                mLow = 0; if (mHigh < 2) { ++mHigh; } if (mHigh == 2) { mState.load = true; }
            } else if (mState.powerRaw <= 2 || mState.powerRaw > 2000) {
                mHigh = 0; if (mLow < 2) { ++mLow; } if (mLow == 2) { mState.load = false; }
            } else { mHigh = mLow = 0; }
        } else { mHigh = mLow = 0; mState.load = false; }
        mQuery = Query::None; mCount = 0;
    } else if (mWindow[0] == 0xaa && mWindow[1] == 0xff && mWindow[3] == 0x55 &&
               (mWindow[2] == 0 || mWindow[2] == 0xff)) {
        // 00 arms the vendor reset flow; FF is the confirmed long-press frame.
        if(mWindow[2]==0xff) ++mState.resetEvents;
        mCount = 0;
    }
}
void RelayEngine::Disconnect()
{
    if (Busy()) { Finish(RelayResult::TransportError); }
    mQuery = Query::None; mCount = 0; mState.voltageValid = mState.currentValid = mState.powerValid = false; mState.known = false; mState.load = false; mHigh = mLow = 0;
}
bool RelayEngine::LoadBlink(uint64_t now) const
{
    return Fresh(now) && mState.on && mState.powerValid && mState.load && now - mState.powerAt < 15000;
}
} // namespace incipio
