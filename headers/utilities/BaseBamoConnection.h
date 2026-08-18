#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 8 member(s).
namespace Microsoft::Bamo {
class BaseBamoConnection {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ
    unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrackError@BaseBamoConnection@Bamo@Microsoft@@QEAAJJ@Z
    long TrackError(long);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AcquireLock@BaseBamoConnection@Bamo@Microsoft@@MEAAXXZ
    virtual void AcquireLock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnected@BaseBamoConnection@Bamo@Microsoft@@MEAAJXZ
    virtual long OnDisconnected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPortConnectionFailed@BaseBamoConnection@Bamo@Microsoft@@MEAAJJIII@Z
    virtual long OnPortConnectionFailed(long, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseLock@BaseBamoConnection@Bamo@Microsoft@@MEAAXXZ
    virtual void ReleaseLock();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBootstrapProxy@BaseBamoConnection@Bamo@Microsoft@@MEAAJPEAVBamoProxy@23@@Z
    virtual long SetBootstrapProxy(::Microsoft::Bamo::BamoProxy *);
};
} // namespace Microsoft::Bamo
