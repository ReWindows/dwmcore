#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 31 member(s).
class CSuperWetInkManager {
public:
    class SuperWetStroke;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearCachedBoundsData@CSuperWetInkManager@@QEAAXXZ
    void ClearCachedBoundsData();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DirtyActiveInk@CSuperWetInkManager@@QEAAXXZ
    void DirtyActiveInk();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasActiveInk@CSuperWetInkManager@@QEBA_NXZ
    bool HasActiveInk() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUpdatedInkReceived@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z
    void OnUpdatedInkReceived(CSuperWetSource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterSuperWetInkVisual@CSuperWetInkManager@@QEAAXPEAVCVisual@@@Z
    void RegisterSuperWetInkVisual(CVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveSource@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z
    void RemoveSource(CSuperWetSource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScheduleScribblesForRenderTarget@CSuperWetInkManager@@QEAAJPEAVIMonitorTarget@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z
    long ScheduleScribblesForRenderTarget(IMonitorTarget *, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScheduleScribblesForRenderTarget@CSuperWetInkManager@@QEAAJPEAVIVailRenderTarget@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEA_N@Z
    long ScheduleScribblesForRenderTarget(IVailRenderTarget *, WindissectOpaque const &, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryRegisterSuperWetForDraw@CSuperWetInkManager@@QEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z
    long TryRegisterSuperWetForDraw(CSuperWetSource *, CDrawingContext *, bool, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterSuperWetInkVisual@CSuperWetInkManager@@QEAAXPEAVCVisual@@@Z
    void UnregisterSuperWetInkVisual(CVisual *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSuperWetInkManager@@QEAA@XZ
    ~CSuperWetInkManager();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckCommonComputeScribbleSupport@CSuperWetInkManager@@AEAAJPEA_N@Z
    long CheckCommonComputeScribbleSupport(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckHostComputeScribbleSupport@CSuperWetInkManager@@AEAAJAEBUVailSuperWetStroke@1@PEA_N@Z
    long CheckHostComputeScribbleSupport(WindissectOpaque const &, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckLocalComputeScribbleSupport@CSuperWetInkManager@@AEAAJAEBUSuperWetStroke@1@PEA_N@Z
    long CheckLocalComputeScribbleSupport(WindissectOpaque const &, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeactivateCurrentSource@CSuperWetInkManager@@AEAAXXZ
    void DeactivateCurrentSource();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureLocalSuperWetResources@CSuperWetInkManager@@AEAAJPEAVIMonitorTarget@@PEA_N@Z
    long EnsureLocalSuperWetResources(IMonitorTarget *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUpdatedLocalInkReceived@CSuperWetInkManager@@AEAAXPEAVCSuperWetSource@@@Z
    void OnUpdatedLocalInkReceived(CSuperWetSource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUpdatedVailInkReceived@CSuperWetInkManager@@AEAAXPEAVCSuperWetSource@@@Z
    void OnUpdatedVailInkReceived(CSuperWetSource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterStrokeOnHost@CSuperWetInkManager@@AEAAJPEAUVailSuperWetStroke@1@PEA_N@Z
    long RegisterStrokeOnHost(WindissectOpaque *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveSourceHost@CSuperWetInkManager@@AEAAXPEAVCSuperWetSource@@@Z
    void RemoveSourceHost(CSuperWetSource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveSourceLocal@CSuperWetInkManager@@AEAAXPEAVCSuperWetSource@@@Z
    void RemoveSourceLocal(CSuperWetSource *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetActiveSource@CSuperWetInkManager@@AEAAXAEBUSuperWetStroke@1@@Z
    void SetActiveSource(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryDrawSuperWetLocal@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z
    long TryDrawSuperWetLocal(CSuperWetSource *, CDrawingContext *, bool, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryLookupDataForSource@CSuperWetInkManager@@AEAAPEAUSuperWetStroke@1@PEAVCSuperWetSource@@@Z
    WindissectOpaque * TryLookupDataForSource(CSuperWetSource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryLookupVailDataForSource@CSuperWetInkManager@@AEAAPEAUVailSuperWetStroke@1@PEAVCSuperWetSource@@@Z
    WindissectOpaque * TryLookupVailDataForSource(CSuperWetSource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryReadyForCurrentFrame@CSuperWetInkManager@@AEAAJPEAUSuperWetStroke@1@PEA_N@Z
    long TryReadyForCurrentFrame(WindissectOpaque *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryRegisterSuperWetForDrawHost@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z
    long TryRegisterSuperWetForDrawHost(CSuperWetSource *, CDrawingContext *, bool, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryRegisterSuperWetForDrawLocal@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z
    long TryRegisterSuperWetForDrawLocal(CSuperWetSource *, CDrawingContext *, bool, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TurnOffScribblingForTarget@CSuperWetInkManager@@AEBAXPEAVIMonitorTarget@@@Z
    void TurnOffScribblingForTarget(IMonitorTarget *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRenderStateClip@CSuperWetInkManager@@CA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@PEAUD2D_RECT_U@@@Z
    static bool UpdateRenderStateClip(WindissectOpaque const &, WindissectOpaque const &, CMILMatrix const *, D2D_RECT_U *);
};
