#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 7 member(s).
namespace Microsoft::BamoImpl {
class BamoProxyImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ
    void AckReference();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AsProxy@BamoProxyImpl@BamoImpl@Microsoft@@UEAAPEAV123@XZ
    virtual ::Microsoft::BamoImpl::BamoProxyImpl * AsProxy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Disconnect@BamoProxyImpl@BamoImpl@Microsoft@@QEAAX_N@Z
    void Disconnect(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ
    bool IsDisconnected() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z
    long PrepareForRemoteCall(IMessageCallSendHost * *, unsigned int *, unsigned int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoProxyImpl@BamoImpl@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnZeroReferenceCount@BamoProxyImpl@BamoImpl@Microsoft@@EEAAXXZ
    virtual void OnZeroReferenceCount();
};
} // namespace Microsoft::BamoImpl
