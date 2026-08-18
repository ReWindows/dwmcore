#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 12 member(s).
namespace Microsoft::BamoImpl {
class BamoPrincipalImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AsPrincipal@BamoPrincipalImpl@BamoImpl@Microsoft@@UEAAPEAV123@XZ
    virtual ::Microsoft::BamoImpl::BamoPrincipalImpl * AsPrincipal();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemId@BamoPrincipalImpl@BamoImpl@Microsoft@@QEBAIXZ
    unsigned int GetItemId() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAIPEAVBaseBamoPeerImpl@23@@Z
    unsigned int PrepareForRemoteReference(::Microsoft::BamoImpl::BaseBamoPeerImpl *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BamoPrincipalImpl@BamoImpl@Microsoft@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentCaller@BamoPrincipalImpl@BamoImpl@Microsoft@@IEAAPEAVBamoStubImpl@23@XZ
    ::Microsoft::BamoImpl::BamoStubImpl * GetCurrentCaller();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnZeroReferenceCount@BamoPrincipalImpl@BamoImpl@Microsoft@@MEAAXXZ
    virtual void OnZeroReferenceCount();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStubUnderLock@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAPEAVBamoStubImpl@23@PEAVBaseBamoPeerImpl@23@@Z
    ::Microsoft::BamoImpl::BamoStubImpl * AllocateStubUnderLock(::Microsoft::BamoImpl::BaseBamoPeerImpl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Dispose@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAXXZ
    void Dispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendDisposeProxy@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAXPEAVBamoStubImpl@23@_N@Z
    void SendDisposeProxy(::Microsoft::BamoImpl::BamoStubImpl *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryDisposeAndNotifyRemoteProxies@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAA_NXZ
    bool TryDisposeAndNotifyRemoteProxies();
};
} // namespace Microsoft::BamoImpl
