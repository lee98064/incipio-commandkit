// Integrated relay test: one MCU owner and confirmed physical state.
// Fabrics remain RAM-only. No MTD writes or meter attributes.
#include <cstdio>
#include <cstring>
#include <map>
#include <memory>
#include <string>
#include <vector>
#include <net/if.h>
#include <unistd.h>
#include <csignal>
#include <fcntl.h>
#include <app/CommandHandler.h>
#include <system/SystemLayer.h>
#include "../relay/McuController.h"
#include <app/DefaultSafeAttributePersistenceProvider.h>
#include <app/InteractionModelEngine.h>
#include <app/clusters/on-off-server/OnOffCluster.h>
#include <app/clusters/identify-server/IdentifyCluster.h>
#include <app/persistence/DefaultAttributePersistenceProvider.h>
#include <app/server/Server.h>
#include <credentials/examples/DeviceAttestationCredsExample.h>
#include <data-model-providers/codedriven/CodeDrivenDataModelProvider.h>
#include <device/types/root-node/RootNode.h>
#include <device/api/SingleEndpoint.h>
#include <devices/Types.h>
#include <lib/support/CHIPMem.h>
#include <platform/CHIPDeviceLayer.h>
#include <platform/CommissionableDataProvider.h>
#include <platform/DefaultTimerDelegate.h>
#include <platform/DeviceInstanceInfoProvider.h>
#include <setup_payload/QRCodeSetupPayloadGenerator.h>
#include <setup_payload/SetupPayload.h>
#include "DeviceIdentity.h"
static DeviceIdentityData deviceIdentity;
using namespace chip;
using namespace chip::app;
using namespace chip::DeviceLayer;
int platform_probe_main(int argc,char**argv);

class BoundedRamStorage final : public PersistentStorageDelegate {
    std::map<std::string,std::vector<uint8_t>> data;
    size_t bytes=0;
public:
    CHIP_ERROR SyncGetKeyValue(const char*key,void*buffer,uint16_t&size) override {
        auto i=data.find(key);if(i==data.end())return CHIP_ERROR_PERSISTED_STORAGE_VALUE_NOT_FOUND;
        uint16_t required=(uint16_t)i->second.size();
        if(size<required){size=required;return CHIP_ERROR_BUFFER_TOO_SMALL;}
        if(required&&buffer==nullptr)return CHIP_ERROR_INVALID_ARGUMENT;
        if(required)memcpy(buffer,i->second.data(),required);
        size=required;return CHIP_NO_ERROR;
    }
    CHIP_ERROR SyncSetKeyValue(const char*key,const void*value,uint16_t size) override {
        if(key==nullptr||strlen(key)>64||(size&&value==nullptr))return CHIP_ERROR_INVALID_ARGUMENT;
        auto old=data.find(key);size_t previous=old==data.end()?0:old->second.size();
        if(bytes-previous+size>65536||(old==data.end()&&data.size()>=256))return CHIP_ERROR_NO_MEMORY;
        auto&v=data[key];v.resize(size);if(size)memcpy(v.data(),value,size);bytes=bytes-previous+size;return CHIP_NO_ERROR;
    }
    CHIP_ERROR SyncDeleteKeyValue(const char*key) override {
        auto i=data.find(key);if(i==data.end())return CHIP_ERROR_PERSISTED_STORAGE_VALUE_NOT_FOUND;
        bytes-=i->second.size();data.erase(i);return CHIP_NO_ERROR;
    }
};
class Identity final : public CommissionableDataProvider {
    Crypto::Spake2pVerifier verifier;
public:
    CHIP_ERROR Init(){return verifier.Generate(1000,ByteSpan(deviceIdentity.salt),deviceIdentity.pin);}
    CHIP_ERROR GetSetupDiscriminator(uint16_t&out) override {out=deviceIdentity.discriminator;return CHIP_NO_ERROR;}
    CHIP_ERROR SetSetupDiscriminator(uint16_t) override{return CHIP_ERROR_NOT_IMPLEMENTED;}
    CHIP_ERROR GetSpake2pIterationCount(uint32_t&out) override {out=1000;return CHIP_NO_ERROR;}
    CHIP_ERROR GetSpake2pSalt(MutableByteSpan&out) override {
        if(out.size()<sizeof(deviceIdentity.salt))return CHIP_ERROR_BUFFER_TOO_SMALL;
        memcpy(out.data(),deviceIdentity.salt,sizeof(deviceIdentity.salt));out.reduce_size(sizeof(deviceIdentity.salt));return CHIP_NO_ERROR;
    }
    CHIP_ERROR GetSpake2pVerifier(MutableByteSpan&out,size_t&size) override {
        size=Crypto::kSpake2p_VerifierSerialized_Length;return verifier.Serialize(out);
    }
    CHIP_ERROR GetSetupPasscode(uint32_t&out) override{out=deviceIdentity.pin;return CHIP_NO_ERROR;}
    CHIP_ERROR SetSetupPasscode(uint32_t) override{return CHIP_ERROR_NOT_IMPLEMENTED;}
};
static DefaultTimerDelegate timer;
static incipio::McuController hardware;
static volatile sig_atomic_t stopping = 0;
static void SignalStop(int) { stopping = 1; }
class RelayOnOff final : public Clusters::OnOffCluster {
    CommandHandler::Handle pending;
    ConcreteCommandPath pendingPath{};
    uint32_t pendingId = 0;
    uint64_t pendingAt = 0;
    bool lastFresh = false;
public:
    RelayOnOff():OnOffCluster(1,Context{.timerDelegate=timer,.defaults={.onOff=false}}){}
    DataModel::ActionReturnStatus ReadAttribute(const DataModel::ReadAttributeRequest & request, AttributeValueEncoder & encoder) override {
        if (request.path.mAttributeId == Clusters::OnOff::Attributes::OnOff::Id) {
            auto s = hardware.Snapshot();
            if (!s.known || incipio::McuController::Now()-s.relayAt > 10000) { return Protocols::InteractionModel::Status::Failure; }
            return encoder.Encode(s.on);
        }
        return OnOffCluster::ReadAttribute(request, encoder);
    }
    std::optional<DataModel::ActionReturnStatus> InvokeCommand(const DataModel::InvokeRequest & request,TLV::TLVReader&,CommandHandler * handler) override {
        using namespace Clusters::OnOff;
        using Status = Protocols::InteractionModel::Status;
        if (pendingId) { return Status::Busy; }
        bool desired;
        switch (request.path.mCommandId) {
        case Commands::Off::Id: desired = false; break;
        case Commands::On::Id: desired = true; break;
        case Commands::Toggle::Id: {
            auto s = hardware.Snapshot();
            if (!s.known || incipio::McuController::Now()-s.relayAt > 10000) { return Status::Failure; }
            desired = !s.on; break;
        }
        default: return Status::UnsupportedCommand;
        }
        if (!handler) { return Status::Failure; }
        uint32_t id = hardware.Request(desired);
        if (!id) { return Status::Busy; }
        pending = CommandHandler::Handle(handler); pendingPath = request.path;
        pendingId = id; pendingAt = incipio::McuController::Now();
        return std::nullopt;
    }
    void Poll() {
        auto s = hardware.Snapshot(); uint64_t now = incipio::McuController::Now();
        bool fresh = s.known && now-s.relayAt <= 10000;
        if (fresh && s.on != GetOnOff()) { LogErrorOnFailure(SetOnOff(s.on)); }
        if (fresh != lastFresh) { NotifyAttributeChanged(Clusters::OnOff::Attributes::OnOff::Id); lastFresh = fresh; }
        if (pendingId && (s.completedId == pendingId || now-pendingAt >= 4500)) {
            bool success = s.completedId == pendingId && s.result == incipio::RelayResult::Confirmed;
            if (auto * handler = pending.Get()) {
                handler->AddStatus(pendingPath, success ? Protocols::InteractionModel::Status::Success : Protocols::InteractionModel::Status::Failure);
            }
            std::printf("MCU_COMMAND_COMPLETE: id=%u confirmed=%d\n", pendingId, int(success));
            pending = nullptr; pendingId = 0;
        }
    }
};
class TestIdentify final : public Clusters::IdentifyDelegate {
public:
    void OnIdentifyStart(Clusters::IdentifyCluster&) override{hardware.Identify(true);}
    void OnIdentifyStop(Clusters::IdentifyCluster&) override{hardware.Identify(false);}
    void OnTriggerEffect(Clusters::IdentifyCluster&) override{}
    bool IsTriggerEffectEnabled()const override{return false;}
};
class TestPlug final : public SingleEndpoint {
    RelayOnOff onoff;
    ServerClusterRegistration onoffRegistration{onoff};
    TestIdentify identifyDelegate;
    LazyRegisteredServerCluster<Clusters::IdentifyCluster> identify;
public:
    TestPlug():SingleEndpoint(Span<const DataModel::DeviceTypeEntry>(&Device::Type::kOnOffPlugInUnit,1)){}
    void Poll() { onoff.Poll(); }
    CHIP_ERROR Register(EndpointId id,CodeDrivenDataModelProvider&model,EndpointComposition c={}) override {
        ReturnErrorOnFailure(RegisterDescriptor(id,model,c));
        identify.Create(Clusters::IdentifyCluster::Config(id,timer).WithDelegate(&identifyDelegate).WithIdentifyType(Clusters::Identify::IdentifyTypeEnum::kVisibleIndicator));
        ReturnErrorOnFailure(model.AddCluster(identify.Registration()));
        ReturnErrorOnFailure(model.AddCluster(onoffRegistration));
        return model.AddEndpoint(mEndpointRegistration);
    }
    void Unregister(CodeDrivenDataModelProvider&model) override {
        LogErrorOnFailure(model.RemoveCluster(&onoff));
        LogErrorOnFailure(model.RemoveCluster(&identify.Cluster()));identify.Destroy();UnregisterDescriptor(model);
    }
};
static BoundedRamStorage storage;
static Identity identity;
static CommonCaseDeviceServerInitParams params;
static DefaultAttributePersistenceProvider attributes;
static DefaultSafeAttributePersistenceProvider safeAttributes;
static std::unique_ptr<CodeDrivenDataModelProvider> model;
static std::unique_ptr<RootNode> root;
static TestPlug plug;
static void PollHardware(System::Layer * layer, void *) {
    if (stopping) { hardware.Stop(); _exit(0); }
    plug.Poll(); LogErrorOnFailure(layer->StartTimer(System::Clock::Milliseconds32(100), PollHardware, nullptr));
}
static int Fail(CHIP_ERROR err,const char*where){
    std::fprintf(stderr,"matterd-test: %s failed: %" CHIP_ERROR_FORMAT "\n",where,err.Format());
    // Global SDK destructors assume full initialization; do not run them after a partial failure.
    hardware.Stop(); _exit(1);
}
#define TRY(e) do{CHIP_ERROR er=(e);if(er!=CHIP_NO_ERROR)return Fail(er,#e);}while(0)
int main(int argc,char**argv){
    setvbuf(stdout,nullptr,_IONBF,0);setvbuf(stderr,nullptr,_IONBF,0);
    if(argc==3&&strcmp(argv[1],"--probe")==0)return platform_probe_main(argc-1,argv+1);
    if(argc==3&&strcmp(argv[1],"--init-identity")==0) {
        if(Platform::MemoryInit()!=CHIP_NO_ERROR || !InitializeDeviceIdentity(argv[2])) {
            std::fputs("device identity initialization failed\n",stderr); _exit(5);
        }
        _exit(0);
    }
    if (!LoadDeviceIdentity(deviceIdentity)) {
        std::fputs("device identity unavailable or invalid; no shared pairing code fallback\n",stderr); _exit(5);
    }
    bool vm = argc == 5 && strcmp(argv[1], "--vm") == 0;
    bool hardwareOnly = argc == 4 && strcmp(argv[1], "--hardware-only") == 0;
    const char * iface = vm ? argv[2] : (argc==2 ? argv[1] : "br0");
    const char * port = (vm || hardwareOnly) ? argv[hardwareOnly ? 2 : 3] : "/dev/ttyACM0";
    const char * gpio = (vm || hardwareOnly) ? argv[hardwareOnly ? 3 : 4] : "/proc/wlan0/gpio_ctrl";
    std::puts("matterd-test/relay-test SDK v1.6.1.0; one MCU owner; cold OFF; fabrics are RAM-only");
    signal(SIGTERM, SignalStop); signal(SIGINT, SignalStop);
    if (!hardware.Start(port, gpio)) { std::fputs("MCU ownership/thread setup failed\n", stderr); return 4; }
    if (!vm) {
        for (;;) {
            char state[64] = {}; int fd = open("/var/run/ck-setup-state", O_RDONLY);
            ssize_t n = fd < 0 ? -1 : read(fd, state, sizeof(state)-1); if (fd >= 0) { close(fd); }
            if (stopping) { hardware.Stop(); return 0; }
            if (!hardwareOnly && n > 0 && strncmp(state, "state=online", 12) == 0) { break; }
            usleep(250000);
        }
    }
    unsigned index=if_nametoindex(iface);if(index==0){std::fprintf(stderr,"interface unavailable\n");hardware.Stop();return 2;}
    TRY(Platform::MemoryInit());TRY(PlatformMgr().InitChipStack());TRY(identity.Init());
    SetCommissionableDataProvider(&identity);
    Credentials::SetDeviceAttestationCredentialsProvider(Credentials::Examples::GetExampleDACProvider());
    params.persistentStorageDelegate=&storage;TRY(params.InitializeStaticResourcesBeforeServerInit());
    TRY(attributes.Init(&storage));TRY(safeAttributes.Init(&storage));SetSafeAttributePersistenceProvider(&safeAttributes);
    model=std::make_unique<CodeDrivenDataModelProvider>(storage,attributes);
    auto&s=Server::GetInstance();auto*info=GetDeviceInstanceInfoProvider();if(info==nullptr)return 3;
    root=std::make_unique<RootNode>(RootNode::Context{
        .commissioningWindowManager=s.GetCommissioningWindowManager(),.configurationManager=ConfigurationMgr(),
        .deviceControlServer=DeviceControlServer::DeviceControlSvr(),.fabricTable=s.GetFabricTable(),
        .accessControl=s.GetAccessControl(),.persistentStorage=storage,.failSafeContext=s.GetFailSafeContext(),
        .deviceInstanceInfoProvider=*info,.platformManager=PlatformMgr(),.groupDataProvider=*params.groupDataProvider,
        .sessionManager=s.GetSecureSessionManager(),.dnssdServer=DnssdServer::Instance(),
        .deviceLoadStatusProvider=*InteractionModelEngine::GetInstance(),.diagnosticDataProvider=GetDiagnosticDataProvider(),
        .testEventTriggerDelegate=nullptr,.dacProvider=*Credentials::GetDeviceAttestationCredentialsProvider(),
        .eventManagement=EventManagement::GetInstance(),.timerDelegate=timer});
    TRY(root->Register(0,*model));TRY(plug.Register(1,*model));
    params.dataModelProvider=model.get();params.interfaceId=Inet::InterfaceId(index);
    TRY(s.Init(params));
    SetupPayload payload;payload.version=0;payload.vendorID=0xFFF1;payload.productID=0x8000;
    payload.setUpPINCode=deviceIdentity.pin;payload.discriminator.SetLongValue(deviceIdentity.discriminator);
    payload.rendezvousInformation.SetValue(RendezvousInformationFlag::kOnNetwork);
    std::string qr;TRY(QRCodeSetupPayloadGenerator(payload).payloadBase38Representation(qr));
    // Redirect logs to bounded RAM sink in firmware; QR is available only through authenticated download.
    std::printf("ONBOARDING_QR=%s\nREADY: interface=%s; port=5540; confirmed relay enabled; fabrics RAM-only\n",qr.c_str(),iface);
    TRY(SystemLayer().StartTimer(System::Clock::Milliseconds32(100), PollHardware, nullptr));
    PlatformMgr().RunEventLoop();hardware.Stop();return 0;
}
