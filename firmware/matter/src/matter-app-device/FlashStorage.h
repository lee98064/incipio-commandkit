#pragma once
#include "../update/ck_store.h"
#include <lib/core/CHIPPersistentStorageDelegate.h>
#include <string>
class FlashStorage final : public chip::PersistentStorageDelegate {
public:
  CHIP_ERROR SyncGetKeyValue(const char *key, void *value,
                             uint16_t &size) override {
    if (!key || (size && !value))
      return CHIP_ERROR_INVALID_ARGUMENT;
    size_t n = size;
    int r = ck_store_get((std::string("matter/") + key).c_str(), value, &n);
    if (n > 65535)
      return CHIP_ERROR_BUFFER_TOO_SMALL;
    size = static_cast<uint16_t>(n);
    return r == 0   ? CHIP_NO_ERROR
           : r == 1 ? CHIP_ERROR_PERSISTED_STORAGE_VALUE_NOT_FOUND
           : r == 2 ? CHIP_ERROR_BUFFER_TOO_SMALL
                    : CHIP_ERROR_PERSISTED_STORAGE_FAILED;
  }
  CHIP_ERROR SyncSetKeyValue(const char *key, const void *value,
                             uint16_t size) override {
    if (!key || (size && !value))
      return CHIP_ERROR_INVALID_ARGUMENT;
    return ck_store_set((std::string("matter/") + key).c_str(), value, size)
               ? CHIP_ERROR_PERSISTED_STORAGE_FAILED
               : CHIP_NO_ERROR;
  }
  CHIP_ERROR SyncDeleteKeyValue(const char *key) override {
    if (!key)
      return CHIP_ERROR_INVALID_ARGUMENT;
    return ck_store_delete((std::string("matter/") + key).c_str())
               ? CHIP_ERROR_PERSISTED_STORAGE_FAILED
               : CHIP_NO_ERROR;
  }
};
