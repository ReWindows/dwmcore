#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 13 member(s).
namespace BamoImpl {
class BamoDataProviderRegistrarPrincipalImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLockThunk@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@UEAAJPEAVBaseBamoPeerImpl@2Microsoft@@PEAPEAVBamoStub@Bamo@4@@Z
    virtual long AllocateStubUnderLockThunk(::Microsoft::BamoImpl::BaseBamoPeerImpl *, ::Microsoft::Bamo::BamoStub * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastOnRegisterError@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@QEAAJI@Z
    long BroadcastOnRegisterError(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastOnUnregisterError@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@QEAAJI@Z
    long BroadcastOnUnregisterError(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHolder@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@UEBAPEAVBamoPrincipal@Bamo@Microsoft@@XZ
    virtual ::Microsoft::Bamo::BamoPrincipal * GetHolder() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@UEAAJPEBXI@Z
    virtual long OnMessage(void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushStateToProxyOnOutboundMessagesResumed@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z
    virtual void PushStateToProxyOnOutboundMessagesResumed(IMessageCallSendHost *, ::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@QEAAJI@Z
    long Register(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendMaterializeProxy@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z
    virtual void SendMaterializeProxy(IMessageCallSendHost *, ::Microsoft::BamoImpl::BamoStubImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unregister@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@QEAAJI@Z
    long Unregister(unsigned int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallOnRegisterErrorOnStub@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@I@Z
    static long CallOnRegisterErrorOnStub(::Microsoft::BamoImpl::BamoStubImpl *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallOnUnregisterErrorOnStub@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@I@Z
    static long CallOnUnregisterErrorOnStub(::Microsoft::BamoImpl::BamoStubImpl *, unsigned int);
};
} // namespace BamoImpl
