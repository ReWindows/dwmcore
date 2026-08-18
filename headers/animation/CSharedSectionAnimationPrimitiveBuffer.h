#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 7 member(s).
class CSharedSectionAnimationPrimitiveBuffer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Append@CSharedSectionAnimationPrimitiveBuffer@@UEAAJ_KPEBUDwmAnimationPrimitive@@@Z
    virtual long Append(uint64_t, DwmAnimationPrimitive const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CSharedSectionAnimationPrimitiveBuffer@@SAJPEAVCSharedSection@@IIPEAPEAV1@@Z
    static long Create(CSharedSection *, unsigned int, unsigned int, CSharedSectionAnimationPrimitiveBuffer * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCount@CSharedSectionAnimationPrimitiveBuffer@@UEAA_KXZ
    virtual uint64_t GetCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrimitive@CSharedSectionAnimationPrimitiveBuffer@@UEAAPEBUDwmAnimationPrimitive@@I@Z
    virtual DwmAnimationPrimitive const * GetPrimitive(unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSharedSectionAnimationPrimitiveBuffer@@UEAA@XZ
    virtual ~CSharedSectionAnimationPrimitiveBuffer();
};
