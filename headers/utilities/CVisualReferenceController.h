#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 9 member(s).
class CVisualReferenceController {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisualNoRef@CVisualReferenceController@@UEBAPEAVCVisual@@XZ
    virtual CVisual * GetVisualNoRef() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CVisualReferenceController@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyOnChanged@CVisualReferenceController@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z
    virtual void NotifyOnChanged(int, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessUpdate@CVisualReferenceController@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALREFERENCECONTROLLER@@@Z
    long ProcessUpdate(CResourceTable *, tagMILCMD_VISUALREFERENCECONTROLLER const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterNotifiers@CVisualReferenceController@@QEAAJPEAVCResourceTable@@@Z
    long RegisterNotifiers(CResourceTable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnRegisterNotifiers@CVisualReferenceController@@UEAAXXZ
    virtual void UnRegisterNotifiers();
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CVisualReferenceController@@MEAA@XZ
    virtual ~CVisualReferenceController();
};
