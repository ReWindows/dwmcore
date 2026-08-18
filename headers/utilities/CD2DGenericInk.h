#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 7 member(s).
class CD2DGenericInk {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CD2DGenericInk@@SAJPEAVCD2DResourceManager@@PEAUIDCompositionDirectInkWetStrokePartner@@PEAPEAV1@@Z
    static long Create(CD2DResourceManager *, IDCompositionDirectInkWetStrokePartner *, CD2DGenericInk * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDirectInkFactory@CD2DGenericInk@@SAJPEAUID2D1DeviceContext@@PEAPEAUIDCompositionDirectInkFactoryPartner@@@Z
    static long CreateDirectInkFactory(ID2D1DeviceContext *, IDCompositionDirectInkFactoryPartner * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValid@CD2DGenericInk@@UEBAJXZ
    virtual long IsValid() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseD2DResources@CD2DGenericInk@@UEAAXXZ
    virtual void ReleaseD2DResources();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CD2DGenericInk@@UEAA@XZ
    virtual ~CD2DGenericInk();
};
