#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 19 member(s).
class CVisualCapture {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CVisualCapture@@QEAA@PEAVCComposition@@@Z
    CVisualCapture(CComposition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckOcclusionState@CVisualCapture@@UEAAJ_N@Z
    virtual long CheckOcclusionState(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CVisualCapture@@UEAAJXZ
    virtual long Initialize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CVisualCapture@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyOnChanged@CVisualCapture@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z
    virtual void NotifyOnChanged(int, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessUpdate@CVisualCapture@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALCAPTURE@@@Z
    long ProcessUpdate(CResourceTable *, tagMILCMD_VISUALCAPTURE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterNotifiers@CVisualCapture@@QEAAJPEAVCResourceTable@@@Z
    long RegisterNotifiers(CResourceTable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnRegisterNotifiers@CVisualCapture@@UEAAXXZ
    virtual void UnRegisterNotifiers();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CVisualCapture@@UEAA@XZ
    virtual ~CVisualCapture();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckForRenderCompleted@CVisualCapture@@IEAAXXZ
    void CheckForRenderCompleted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnqueueSetEvent@CVisualCapture@@IEAAJXZ
    long EnqueueSetEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureRenderTargets@CVisualCapture@@MEAAJXZ
    virtual long EnsureRenderTargets();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRenderTime@CVisualCapture@@MEAA_NXZ
    virtual bool IsRenderTime();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadyForRender@CVisualCapture@@MEAA_NXZ
    virtual bool ReadyForRender();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderTargetDirty@CVisualCapture@@MEAAJPEAVCDrawingContext@@PEA_N@Z
    virtual long RenderTargetDirty(CDrawingContext *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendCaptureCompleted@CVisualCapture@@IEAAXXZ
    void SendCaptureCompleted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTransformAndTreeBounds@CVisualCapture@@MEAAXXZ
    virtual void UpdateTransformAndTreeBounds();
};
