#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 3 member(s).
namespace Microsoft::BamoImpl {
class BamoStubImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareForRemoteCall@BamoStubImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z
    long PrepareForRemoteCall(IMessageCallSendHost * *, unsigned int *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseStubsFromPeerList@BamoStubImpl@BamoImpl@Microsoft@@SAXPEAV123@@Z
    static void ReleaseStubsFromPeerList(::Microsoft::BamoImpl::BamoStubImpl *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnZeroReferenceCount@BamoStubImpl@BamoImpl@Microsoft@@EEAAXXZ
    virtual void OnZeroReferenceCount();
};
} // namespace Microsoft::BamoImpl
