#include "MatterOta.h"
#include "../update/ck_common.h"
#include "../update/ck_store.h"
#include "Version.h"
#include <app/clusters/ota-requestor/BDXDownloader.h>
#include <app/clusters/ota-requestor/DefaultOTARequestor.h>
#include <app/clusters/ota-requestor/DefaultOTARequestorDriver.h>
#include <app/clusters/ota-requestor/DefaultOTARequestorStorage.h>
#include <app/clusters/ota-requestor/OTARequestorCluster.h>
#include <cerrno>
#include <cstring>
#include <fcntl.h>
#include <lib/core/OTAImageHeader.h>
#include <platform/CHIPDeviceLayer.h>
#include <platform/OTAImageProcessor.h>
#include <sys/file.h>
#include <sys/wait.h>
#include <unistd.h>
#include <vector>
using namespace chip;
namespace {
constexpr const char *download = "/var/run/ck-ota/matter.ota";
int RunUpdater(const char *op, const char *file = nullptr) {
  pid_t child = fork();
  if (child < 0)
    return -1;
  if (child == 0) {
    if (file)
      execl("/bin/ck-updater", "ck-updater", op, file, nullptr);
    else
      execl("/bin/ck-updater", "ck-updater", op, nullptr);
    _exit(127);
  }
  int status = 0;
  while (waitpid(child, &status, 0) < 0) {
    if (errno != EINTR)
      return -1;
  }
  return status;
}
class Processor final : public OTAImageProcessorInterface {
  int fd = -1;
  int transfer = -1;
  uint32_t expectedVersion = 0;
  char packageHash[65]{};
  OTAImageHeaderParser parser;
  std::vector<uint8_t> buffer;
  static void Prepared(intptr_t p) {
    auto *self = reinterpret_cast<Processor *>(p);
    self->parser.Init();
    self->mParams = {};
    self->expectedVersion = 0;
    self->transfer = ck_download_begin();
    if (self->transfer < 0) {
      (void)self->downloader->OnPreparedForDownload(CHIP_ERROR_BUSY);
      return;
    }
    unlink(download);
    self->fd = open(download, O_WRONLY | O_CREAT | O_EXCL | O_NOFOLLOW, 0600);
    if (self->fd < 0) {
      close(self->transfer);
      self->transfer = -1;
    }
    (void)self->downloader->OnPreparedForDownload(
        self->fd < 0 ? CHIP_ERROR_OPEN_FAILED : CHIP_NO_ERROR);
  }
  static void Block(intptr_t p) {
    auto *self = reinterpret_cast<Processor *>(p);
    ByteSpan block(self->buffer.data(), self->buffer.size());
    if (self->parser.IsInitialized()) {
      OTAImageHeader header;
      CHIP_ERROR err = self->parser.AccumulateAndDecode(block, header);
      if (err == CHIP_ERROR_BUFFER_TOO_SMALL) {
        (void)self->downloader->FetchNextData();
        return;
      }
      if (err != CHIP_NO_ERROR || header.mPayloadSize != 0x290000 + 256 ||
          header.mSoftwareVersion <= CK_SOFTWARE_VERSION) {
        LogErrorOnFailure(self->Abort());
        self->downloader->EndDownload(CHIP_ERROR_INVALID_FILE_IDENTIFIER);
        return;
      }
      self->mParams.totalFileBytes = header.mPayloadSize;
      self->expectedVersion = header.mSoftwareVersion;
      self->parser.Clear();
    }
    if (self->fd < 0 || self->mParams.downloadedBytes + block.size() >
                            self->mParams.totalFileBytes) {
      LogErrorOnFailure(self->Abort());
      self->downloader->EndDownload(CHIP_ERROR_INVALID_FILE_IDENTIFIER);
      return;
    }
    size_t at = 0;
    while (at < block.size()) {
      ssize_t n = write(self->fd, block.data() + at, block.size() - at);
      if (n < 0 && errno == EINTR)
        continue;
      if (n <= 0) {
        LogErrorOnFailure(self->Abort());
        self->downloader->EndDownload(CHIP_ERROR_WRITE_FAILED);
        return;
      }
      at += static_cast<size_t>(n);
    }
    self->mParams.downloadedBytes += block.size();
    (void)self->downloader->FetchNextData();
  }

public:
  OTADownloader *downloader = nullptr;
  CHIP_ERROR PrepareDownload() override {
    return DeviceLayer::PlatformMgr().ScheduleWork(
        Prepared, reinterpret_cast<intptr_t>(this));
  }
  CHIP_ERROR ProcessBlock(ByteSpan &b) override {
    if (b.size() > 4096)
      return CHIP_ERROR_INVALID_ARGUMENT;
    buffer.assign(b.begin(), b.end());
    return DeviceLayer::PlatformMgr().ScheduleWork(
        Block, reinterpret_cast<intptr_t>(this));
  }
  CHIP_ERROR Finalize() override {
    if (fd < 0)
      return CHIP_ERROR_INCORRECT_STATE;
    int r = fsync(fd);
    if (close(fd))
      r = -1;
    fd = -1;
    uint8_t inner[24];
    int check = open(download, O_RDONLY | O_NOFOLLOW);
    ssize_t count = check < 0 || ck_read_all(check, inner, sizeof(inner)) ? -1 : sizeof(inner);
    uint8_t digest[32];
    if (check < 0 || ck_hash_fd(check, 0, CK_OTA_HEADER + CK_ROOTFS_SIZE, digest)) r = -1;
    else ck_hex(digest, 32, packageHash);
    if (check >= 0)
      close(check);
    uint32_t innerVersion =
        count == 24 ? uint32_t(inner[20]) << 24 | uint32_t(inner[21]) << 16 |
                          uint32_t(inner[22]) << 8 | inner[23]
                    : 0;
    if (innerVersion != expectedVersion || !GetRequestorInstance() ||
        GetRequestorInstance()->GetTargetVersion() != expectedVersion)
      r = -1;
    if (r || mParams.downloadedBytes != mParams.totalFileBytes ||
        RunUpdater("--stage", download)) {
      unlink(download);
      if (transfer >= 0)
        close(transfer);
      transfer = -1;
      return CHIP_ERROR_INVALID_FILE_IDENTIFIER;
    }
    unlink(download);
    if (transfer >= 0)
      close(transfer);
    transfer = -1;
    return CHIP_NO_ERROR;
  }
  CHIP_ERROR Abort() override {
    if (fd >= 0)
      close(fd);
    if (transfer >= 0)
      close(transfer);
    transfer = -1;
    fd = -1;
    unlink(download);
    buffer.clear();
    return CHIP_NO_ERROR;
  }
  CHIP_ERROR Apply() override {
    return RunUpdater("--queue", packageHash) ? CHIP_ERROR_WRITE_FAILED : CHIP_NO_ERROR;
  }
  bool IsFirstImageRun() override {
    size_t size = 4;
    uint8_t value[4];
    return GetRequestorInstance() &&
           GetRequestorInstance()->GetCurrentUpdateState() ==
               OTARequestorInterface::OTAUpdateStateEnum::kApplying &&
           ck_store_get("ota/pending", value, &size) == 0;
  }
  CHIP_ERROR ConfirmCurrentImage() override {
    return ck_store_floor() == CK_SOFTWARE_VERSION ? CHIP_NO_ERROR
                                                   : CHIP_ERROR_INCORRECT_STATE;
  }
};
DefaultOTARequestor requestor;
DefaultOTARequestorStorage requestorStorage;
class HealthDriver final : public DeviceLayer::DefaultOTARequestorDriver {
  bool notify = false;

public:
  void InitDeferred(OTARequestorInterface *core,
                    OTAImageProcessorInterface *image) {
    mRequestor = core;
    mImageProcessor = image;
    mProviderRetryCount = 0;
    mInvalidSessionRetryCount = 0;
    notify = image->IsFirstImageRun();
    if (!notify && core->GetCurrentUpdateState() !=
                       OTARequestorInterface::OTAUpdateStateEnum::kIdle)
      core->Reset();
  }
  void Healthy() {
    if (notify && mImageProcessor->ConfirmCurrentImage() == CHIP_NO_ERROR) {
      (void)mRequestor->NotifyUpdateApplied();
      notify = false;
    }
    StartPeriodicQueryTimer();
  }
};
HealthDriver driver;
BDXDownloader downloader;
Processor processor;
OTARequestorAttributes attributes;
app::LazyRegisteredServerCluster<app::Clusters::OTARequestorCluster> cluster;
} // namespace
CHIP_ERROR RegisterMatterOta(app::CodeDrivenDataModelProvider &model) {
  cluster.Create(0, requestor, attributes,
                 Server::GetInstance().GetFabricTable());
  return model.AddCluster(cluster.Registration());
}
CHIP_ERROR StartMatterOta() {
  SetRequestorInstance(&requestor);
  requestorStorage.Init(Server::GetInstance().GetPersistentStorage());
  driver.SetPeriodicQueryTimeout(86400);
  ReturnErrorOnFailure(requestor.Init(Server::GetInstance(), requestorStorage,
                                      driver, downloader, attributes,
                                      cluster.Cluster()));
  driver.InitDeferred(&requestor, &processor);
  processor.downloader = &downloader;
  downloader.SetImageProcessorDelegate(&processor);
  return CHIP_NO_ERROR;
}
void MatterOtaHealthy() { driver.Healthy(); }
