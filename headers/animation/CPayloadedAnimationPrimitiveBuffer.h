#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 6 member(s).
class CPayloadedAnimationPrimitiveBuffer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Append@CPayloadedAnimationPrimitiveBuffer@@UEAAJ_KPEBUDwmAnimationPrimitive@@@Z
    virtual long Append(uint64_t, DwmAnimationPrimitive const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CPayloadedAnimationPrimitiveBuffer@@SAJPEAPEAV1@@Z
    static long Create(CPayloadedAnimationPrimitiveBuffer * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCount@CPayloadedAnimationPrimitiveBuffer@@UEAA_KXZ
    virtual uint64_t GetCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrimitive@CPayloadedAnimationPrimitiveBuffer@@UEAAPEBUDwmAnimationPrimitive@@I@Z
    virtual DwmAnimationPrimitive const * GetPrimitive(unsigned int);
};
