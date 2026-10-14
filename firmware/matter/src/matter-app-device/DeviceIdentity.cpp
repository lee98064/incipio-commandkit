#include "DeviceIdentity.h"
#include "../vendor/qrcodegen/qrcodegen.h"
#include <crypto/CHIPCryptoPAL.h>
#include <setup_payload/ManualSetupPayloadGenerator.h>
#include <setup_payload/QRCodeSetupPayloadGenerator.h>
#include <setup_payload/SetupPayload.h>
#include <array>
#include <cerrno>
#include <cstdio>
#include <cstring>
#include <string>
#include <fcntl.h>
#include <net/if.h>
#include <sys/ioctl.h>
#include <sys/socket.h>
#include <unistd.h>

namespace {
constexpr const char * keyPath = "/etc/matter-device.key";
constexpr const char * recordPath = "/var/run/matter-device-identity";
bool ReadExact(const char * path, void * output, size_t length) {
    int fd = open(path, O_RDONLY | O_NOFOLLOW);
    if (fd < 0) return false;
    size_t at = 0;
    while (at < length) {
        ssize_t n = read(fd, static_cast<uint8_t *>(output) + at, length - at);
        if (n < 0 && errno == EINTR) continue;
        if (n <= 0) break;
        at += static_cast<size_t>(n);
    }
    uint8_t extra; ssize_t n = read(fd, &extra, 1); close(fd);
    return at == length && n == 0;
}
bool WriteAtomic(const char * path, const void * data, size_t length) {
    std::string temporary = std::string(path) + ".tmp";
    unlink(temporary.c_str());
    int fd = open(temporary.c_str(), O_WRONLY | O_CREAT | O_EXCL | O_NOFOLLOW, 0600);
    if (fd < 0) return false;
    size_t at = 0;
    while (at < length) {
        ssize_t n = write(fd, static_cast<const uint8_t *>(data) + at, length - at);
        if (n < 0 && errno == EINTR) continue;
        if (n <= 0) break;
        at += static_cast<size_t>(n);
    }
    bool ok = close(fd) == 0 && at == length;
    if (ok) ok = rename(temporary.c_str(), path) == 0;
    if (!ok) unlink(temporary.c_str());
    return ok;
}
uint32_t Big32(const uint8_t * b) {
    return (uint32_t(b[0]) << 24) | (uint32_t(b[1]) << 16) | (uint32_t(b[2]) << 8) | b[3];
}
bool ValidMac(const uint8_t * mac) {
    uint8_t any = 0; for (unsigned i = 0; i < 6; ++i) any |= mac[i];
    return any != 0 && !(mac[0] & 1);
}
bool Hash(const uint8_t * key, const void * data, size_t length, uint8_t * out) {
    chip::Crypto::HMAC_sha hmac;
    return hmac.HMAC_SHA256(key, 32, static_cast<const uint8_t *>(data), length, out, 32) == CHIP_NO_ERROR;
}
bool Derive(const uint8_t * key, const uint8_t * mac, DeviceIdentityData & out) {
    if (!ValidMac(mac)) return false;
    // Domain separation and an explicit revision keep the identity stable.
    uint8_t message[24] = {'C','K','-','M','A','T','T','E','R','-','I','D','-','V','1',0};
    memcpy(message + 16, mac, 6);
    uint8_t digest[32];
    for (unsigned counter = 0; counter < 256; ++counter) {
        message[23] = static_cast<uint8_t>(counter);
        if (!Hash(key, message, sizeof(message), digest)) return false;
        uint32_t candidate = Big32(digest) % 99999998U + 1;
        if (!chip::SetupPayload::IsValidSetupPIN(candidate)) continue;
        out.pin = candidate;
        out.discriminator = static_cast<uint16_t>(((digest[4] << 8) | digest[5]) & 0x0fff);
        memcpy(out.salt, digest + 6, sizeof(out.salt));
        memset(digest, 0, sizeof(digest)); return true;
    }
    return false;
}
chip::SetupPayload Payload(const DeviceIdentityData & identity) {
    chip::SetupPayload p;
    p.version = 0; p.vendorID = 0xFFF1; p.productID = 0x8000;
    p.setUpPINCode = identity.pin; p.discriminator.SetLongValue(identity.discriminator);
    p.rendezvousInformation.SetValue(chip::RendezvousInformationFlag::kOnNetwork);
    return p;
}
bool Svg(const std::string & text, std::string & out) {
    std::array<uint8_t, qrcodegen_BUFFER_LEN_FOR_VERSION(3)> temp{}, qr{};
    if (!qrcodegen_encodeText(text.c_str(), temp.data(), qr.data(), qrcodegen_Ecc_MEDIUM,
            1, 3, qrcodegen_Mask_AUTO, false)) return false;
    int size = qrcodegen_getSize(qr.data());
    char chunk[128];
    snprintf(chunk, sizeof(chunk), "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"0 0 %d %d\" shape-rendering=\"crispEdges\">", size + 8, size + 8);
    out = chunk; out += "<path fill=\"white\" d=\"M0,0h";
    out += std::to_string(size + 8); out += "v"; out += std::to_string(size + 8);
    out += "H0z\"/><path fill=\"black\" d=\"";
    for (int y = 0; y < size; ++y) {
        for (int x = 0; x < size;) {
            if (!qrcodegen_getModule(qr.data(), x, y)) { ++x; continue; }
            int start = x;
            while (x < size && qrcodegen_getModule(qr.data(), x, y)) ++x;
            snprintf(chunk, sizeof(chunk), "M%d,%dh%dv1h-%dz", start + 4, y + 4, x - start, x - start);
            out += chunk;
        }
    }
    out += "\"/></svg>";
    return out.size() < 8192;
}
}

bool InitializeDeviceIdentity(const char * interfaceName) {
    // Remove stale credentials before starting. There is no global PIN fallback.
    unlink(recordPath); unlink("/var/run/matter-manual-code");
    unlink("/var/run/matter-qr.svg"); unlink("/var/run/ck-setup-ap.bin");
    uint8_t key[32]{};
    if (!ReadExact(keyPath, key, sizeof(key)) || strlen(interfaceName) >= IFNAMSIZ) return false;
    int fd = socket(AF_INET, SOCK_DGRAM, 0);
    struct ifreq request{}; strcpy(request.ifr_name, interfaceName);
    if (fd < 0) return false;
    int result = ioctl(fd, SIOCGIFHWADDR, &request); close(fd);
    if (result != 0 || request.ifr_hwaddr.sa_family != 1) return false;
    uint8_t mac[6]; memcpy(mac, request.ifr_hwaddr.sa_data, 6);
    DeviceIdentityData identity{};
    if (!Derive(key, mac, identity)) return false;
    auto p = Payload(identity); std::string manual, qr, svg;
    if (chip::ManualSetupPayloadGenerator(p).payloadDecimalStringRepresentation(manual) != CHIP_NO_ERROR ||
        chip::QRCodeSetupPayloadGenerator(p).payloadBase38Representation(qr) != CHIP_NO_ERROR ||
        manual.size() != 11 || !Svg(qr, svg)) return false;
    uint8_t record[66] = {'C','K','I','1'};
    memcpy(record + 4, mac, 6);
    for (unsigned i = 0; i < 4; ++i) record[12 + i] = identity.pin >> (24 - 8 * i);
    record[16] = identity.discriminator >> 8; record[17] = identity.discriminator;
    memcpy(record + 18, identity.salt, 16);
    if (!Hash(key, record, 34, record + 34)) return false;
    uint8_t ap[104] = {'C','K','W','1'}; char ssid[33];
    int length = snprintf(ssid, sizeof(ssid), "CommandKit-Setup-%02X%02X%02X", mac[3], mac[4], mac[5]);
    if (length <= 0 || length > 32) return false;
    ap[4] = static_cast<uint8_t>(length); // zero password length/security: open AP
    memcpy(ap + 8, ssid, length);
    bool ok = WriteAtomic("/var/run/matter-manual-code", manual.data(), manual.size()) &&
        WriteAtomic("/var/run/matter-qr.svg", svg.data(), svg.size()) &&
        WriteAtomic("/var/run/ck-setup-ap.bin", ap, sizeof(ap)) &&
        WriteAtomic(recordPath, record, sizeof(record));
    if (!ok) { unlink(recordPath); unlink("/var/run/matter-manual-code"); unlink("/var/run/matter-qr.svg"); unlink("/var/run/ck-setup-ap.bin"); }
    memset(key, 0, sizeof(key)); memset(record, 0, sizeof(record));
    return ok;
}

bool LoadDeviceIdentity(DeviceIdentityData & identity) {
    uint8_t record[66]{}, key[32]{}, digest[32]{};
    if (!ReadExact(keyPath, key, sizeof(key)) || !ReadExact(recordPath, record, sizeof(record)) ||
        memcmp(record, "CKI1", 4) || record[10] || record[11] || !Hash(key, record, 34, digest)) return false;
    uint8_t difference = 0;
    for (unsigned i = 0; i < 32; ++i) difference |= digest[i] ^ record[34 + i];
    if (difference || !Derive(key, record + 4, identity)) return false;
    bool ok = identity.pin == Big32(record + 12) &&
        identity.discriminator == ((record[16] << 8) | record[17]) && !memcmp(identity.salt, record + 18, 16);
    memset(key, 0, sizeof(key)); memset(record, 0, sizeof(record)); memset(digest, 0, sizeof(digest));
    return ok;
}
