#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 14 member(s).
class CCompositionSurfaceInfo {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CommitRecordedStatistics@CCompositionSurfaceInfo@@UEBAJXZ
    virtual long CommitRecordedStatistics() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfirmRecordedStatistics@CCompositionSurfaceInfo@@UEBAXAEBUtagCOMPOSITION_TARGET_ID@@@Z
    virtual void ConfirmRecordedStatistics(tagCOMPOSITION_TARGET_ID const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConsumeDxFlipRect@CCompositionSurfaceInfo@@QEAA_NPEAUMilRectU@@@Z
    bool ConsumeDxFlipRect(MilRectU *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CCompositionSurfaceInfo@@SAJPEAXU_LUID@@PEAVCCompositionSurfaceManager@@PEAPEAV1@@Z
    static long Create(void *, _LUID, CCompositionSurfaceManager *, CCompositionSurfaceInfo * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyInvalidResource@CCompositionSurfaceInfo@@UEAAXPEBVIDeviceResource@@@Z
    virtual void NotifyInvalidResource(IDeviceResource const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyOverlayFrame@CCompositionSurfaceInfo@@UEAAXAEBUtagCOMPOSITION_TARGET_FLIP_AWAY_FENCE@@@Z
    virtual void NotifyOverlayFrame(tagCOMPOSITION_TARGET_FLIP_AWAY_FENCE const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCompositionMode@CCompositionSurfaceInfo@@UEAAX_NW4BufferCompositionMode@@AEBVCMILMatrix@@W4DXGI_COLOR_SPACE_TYPE@@PEBUtagCOMPOSITION_TARGET_ID@@@Z
    virtual void SetCompositionMode(bool, int, CMILMatrix const &, int, tagCOMPOSITION_TARGET_ID const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRecentlyComposed@CCompositionSurfaceInfo@@UEAAXXZ
    virtual void SetRecentlyComposed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldNotifyOfFlipAway@CCompositionSurfaceInfo@@UEAA_NXZ
    virtual bool ShouldNotifyOfFlipAway();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnRegisterBitmapNotifier@CCompositionSurfaceInfo@@QEAAXPEAVICompositionSurfaceInfoListener@@@Z
    void UnRegisterBitmapNotifier(ICompositionSurfaceInfoListener *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CCompositionSurfaceInfo@@IEAAJPEAX@Z
    long Initialize(void *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCompositionSurfaceInfo@@MEAA@XZ
    virtual ~CCompositionSurfaceInfo();
};
