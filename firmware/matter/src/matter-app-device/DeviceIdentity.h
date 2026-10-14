#pragma once
#include <cstdint>
struct DeviceIdentityData {
    uint32_t pin;
    uint16_t discriminator;
    uint8_t salt[16];
};
// Private key remains constant across rebuilds. Generated files live in RAM.
bool InitializeDeviceIdentity(const char * interfaceName);
bool LoadDeviceIdentity(DeviceIdentityData & identity);
