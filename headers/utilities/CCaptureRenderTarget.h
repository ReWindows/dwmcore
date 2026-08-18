#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 53 member(s).
class CCaptureRenderTarget {
public:
    class CDeviceManager;
    class DXGIResourceRenderTargetBitmapPair;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckOcclusionState@CCaptureRenderTarget@@UEAAJ_N@Z
    virtual long CheckOcclusionState(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachFromChannel@CCaptureRenderTarget@@UEAAXPEAVCChannelContext@@_N@Z
    virtual void DetachFromChannel(CChannelContext *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectiveSDRBoost@CCaptureRenderTarget@@QEBAMXZ
    float GetEffectiveSDRBoost() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CCaptureRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyInvalidResource@CCaptureRenderTarget@@UEAAXPEBVIDeviceResource@@@Z
    virtual void NotifyInvalidResource(IDeviceResource const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyOnChanged@CCaptureRenderTarget@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z
    virtual void NotifyOnChanged(int, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessRequestFrame@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURERENDERTARGET_REQUESTFRAME@@@Z
    long ProcessRequestFrame(CResourceTable *, tagMILCMD_CAPTURERENDERTARGET_REQUESTFRAME const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetAdapterLUID@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURERENDERTARGET_SETADAPTERLUID@@@Z
    long ProcessSetAdapterLUID(CResourceTable *, tagMILCMD_CAPTURERENDERTARGET_SETADAPTERLUID const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetBuffers@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURERENDERTARGET_SETBUFFERS@@PEBXI@Z
    long ProcessSetBuffers(CResourceTable *, tagMILCMD_CAPTURERENDERTARGET_SETBUFFERS const *, void const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetController@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURERENDERTARGET_SETCONTROLLER@@@Z
    long ProcessSetController(CResourceTable *, tagMILCMD_CAPTURERENDERTARGET_SETCONTROLLER const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetDirtyRegionMode@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURERENDERTARGET_SETDIRTYREGIONMODE@@@Z
    long ProcessSetDirtyRegionMode(CResourceTable *, tagMILCMD_CAPTURERENDERTARGET_SETDIRTYREGIONMODE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetFlipManager@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURERENDERTARGET_SETFLIPMANAGER@@@Z
    long ProcessSetFlipManager(CResourceTable *, tagMILCMD_CAPTURERENDERTARGET_SETFLIPMANAGER const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetIsCursorEnabled@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURERENDERTARGET_SETISCURSORENABLED@@@Z
    long ProcessSetIsCursorEnabled(CResourceTable *, tagMILCMD_CAPTURERENDERTARGET_SETISCURSORENABLED const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetMinUpdateInterval@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURERENDERTARGET_SETMINUPDATEINTERVAL@@@Z
    long ProcessSetMinUpdateInterval(CResourceTable *, tagMILCMD_CAPTURERENDERTARGET_SETMINUPDATEINTERVAL const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetPreferReferenceVisual@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURERENDERTARGET_SETPREFERREFERENCEVISUAL@@@Z
    long ProcessSetPreferReferenceVisual(CResourceTable *, tagMILCMD_CAPTURERENDERTARGET_SETPREFERREFERENCEVISUAL const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetSDRBoost@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURERENDERTARGET_SETSDRBOOST@@@Z
    long ProcessSetSDRBoost(CResourceTable *, tagMILCMD_CAPTURERENDERTARGET_SETSDRBOOST const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetUpdateId@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURERENDERTARGET_SETUPDATEID@@@Z
    long ProcessSetUpdateId(CResourceTable *, tagMILCMD_CAPTURERENDERTARGET_SETUPDATEID const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetVisualsToExclude@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURERENDERTARGET_SETVISUALSTOEXCLUDE@@@Z
    long ProcessSetVisualsToExclude(CResourceTable *, tagMILCMD_CAPTURERENDERTARGET_SETVISUALSTOEXCLUDE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReevaluateRootVisual@CCaptureRenderTarget@@QEAAXXZ
    void ReevaluateRootVisual();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetController@CCaptureRenderTarget@@QEAAXPEAVCCaptureController@@@Z
    void SetController(CCaptureController *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetReferenceVisual@CCaptureRenderTarget@@QEAAXPEAVCVisual@@@Z
    void SetReferenceVisual(CVisual *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTargetVisual@CCaptureRenderTarget@@QEAAXPEAVCVisual@@@Z
    void SetTargetVisual(CVisual *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTransform@CCaptureRenderTarget@@QEAAXPEAVCTransform3D@@@Z
    void SetTransform(CTransform3D *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRenderTargetBitmapSDRBoosts@CCaptureRenderTarget@@QEAAXXZ
    void UpdateRenderTargetBitmapSDRBoosts();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddCursorInvalidRects@CCaptureRenderTarget@@IEAAXXZ
    void AddCursorInvalidRects();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCaptureRenderTarget@@IEAA@PEAVCComposition@@@Z
    CCaptureRenderTarget(CComposition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeCursorInvalidRects@CCaptureRenderTarget@@IEBAXPEAVCMergedRect@@@Z
    void ComputeCursorInvalidRects(CMergedRect *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeCursorRenderTransform@CCaptureRenderTarget@@MEBA_NPEBVCVisual@@PEAVCMILMatrix@@@Z
    virtual bool ComputeCursorRenderTransform(CVisual const *, CMILMatrix *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeCursorTransform@CCaptureRenderTarget@@IEBA_NPEBVCVisual@@0PEBVCVisualTree@@_NPEAVCMILMatrix@@@Z
    bool ComputeCursorTransform(CVisual const *, CVisual const *, CVisualTree const *, bool, CMILMatrix *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ
    long CreateRenderTargetForFrameBuffer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDevice@@@Z
    long EnsureResources(CD3DDevice *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentFrameBuffer@CCaptureRenderTarget@@IEAAPEAUIDXGIResource@@XZ
    IDXGIResource * GetCurrentFrameBuffer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCursorCaptureContext@CCaptureRenderTarget@@IEBA_NPEAPEBVCDesktopTree@@PEAPEBVCVisual@@@Z
    bool GetCursorCaptureContext(CDesktopTree const * *, CVisual const * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetD3DDeviceNoRef@CCaptureRenderTarget@@IEAAPEAVCD3DDevice@@XZ
    CD3DDevice * GetD3DDeviceNoRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextBufferIndexAvailable@CCaptureRenderTarget@@IEAAHXZ
    int GetNextBufferIndexAvailable();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideVisuals@CCaptureRenderTarget@@MEAAXXZ
    virtual void HideVisuals();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CCaptureRenderTarget@@MEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OffscreenRenderTargetType@CCaptureRenderTarget@@MEAA?AW4Type@IRenderTarget@@XZ
    virtual int OffscreenRenderTargetType();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Present@CCaptureRenderTarget@@MEAAJXZ
    virtual long Present();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadyForRender@CCaptureRenderTarget@@MEAA_NXZ
    virtual bool ReadyForRender();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseFlipResources@CCaptureRenderTarget@@IEAAXXZ
    void ReleaseFlipResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseRenderingResources@CCaptureRenderTarget@@IEAAXXZ
    void ReleaseRenderingResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderCursors@CCaptureRenderTarget@@IEAAJPEAVCDrawingContext@@@Z
    long RenderCursors(CDrawingContext *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderTargetDirty@CCaptureRenderTarget@@MEAAJPEAVCDrawingContext@@PEA_N@Z
    virtual long RenderTargetDirty(CDrawingContext *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetBuffers@CCaptureRenderTarget@@IEAAXXZ
    void ResetBuffers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RestoreVisuals@CCaptureRenderTarget@@MEAAXXZ
    virtual void RestoreVisuals();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldRenderCursor@CCaptureRenderTarget@@MEBA_NPEBVCVisual@@@Z
    virtual bool ShouldRenderCursor(CVisual const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryTargetNextBuffer@CCaptureRenderTarget@@IEAAJXZ
    long TryTargetNextBuffer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCursorDirty@CCaptureRenderTarget@@IEAAX_N0@Z
    void UpdateCursorDirty(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTargetDirty@CCaptureRenderTarget@@MEAAXAEBVCTreeDirty@@_N@Z
    virtual void UpdateTargetDirty(CTreeDirty const &, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCaptureRenderTarget@@MEAA@XZ
    virtual ~CCaptureRenderTarget();
};
