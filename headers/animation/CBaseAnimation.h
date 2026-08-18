#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 11 member(s).
class CBaseAnimation {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CBaseAnimation@@QEAA@PEAVCComposition@@@Z
    CBaseAnimation(CComposition *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CBaseAnimation@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessAddBinding@CBaseAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEANIMATION_ADDBINDING@@@Z
    long ProcessAddBinding(CResourceTable *, tagMILCMD_BASEANIMATION_ADDBINDING const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessRemoveBinding@CBaseAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEANIMATION_REMOVEBINDING@@@Z
    long ProcessRemoveBinding(CResourceTable *, tagMILCMD_BASEANIMATION_REMOVEBINDING const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterAnimateResource@CBaseAnimation@@QEAAJXZ
    long RegisterAnimateResource();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterAnimateResource@CBaseAnimation@@QEAAJXZ
    long UnregisterAnimateResource();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBaseAnimation@@UEAA@XZ
    virtual ~CBaseAnimation();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasEnded@CBaseAnimation@@MEAA_NXZ
    virtual bool HasEnded();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAddBinding@CBaseAnimation@@MEAAJPEAUAnimationBinding@1@@Z
    virtual long OnAddBinding(WindissectOpaque *);
};
