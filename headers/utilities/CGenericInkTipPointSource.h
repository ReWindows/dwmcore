#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 5 member(s).
class CGenericInkTipPointSource {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CGenericInkTipPointSource@@SAJPEAVCSharedSectionBase@@IIIPEAPEAV1@@Z
    static long Create(CSharedSectionBase *, unsigned int, unsigned int, unsigned int, CGenericInkTipPointSource * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CGenericInkTipPointSource@@AEAAJPEAVCSharedSectionBase@@III@Z
    long Initialize(CSharedSectionBase *, unsigned int, unsigned int, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CGenericInkTipPointSource@@EEAA@XZ
    virtual ~CGenericInkTipPointSource();
};
