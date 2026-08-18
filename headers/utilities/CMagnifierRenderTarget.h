#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 23 member(s).
class CMagnifierRenderTarget {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CMagnifierRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyOnChanged@CMagnifierRenderTarget@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z
    virtual void NotifyOnChanged(int, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessCaptureBits@CMagnifierRenderTarget@@QEAAJPEAVCChannelContext@@PEBUtagMILCMD_MAGNIFIERRENDERTARGET_CAPTUREBITS@@@Z
    long ProcessCaptureBits(CChannelContext *, tagMILCMD_MAGNIFIERRENDERTARGET_CAPTUREBITS const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessCreate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MAGNIFIERRENDERTARGET_CREATE@@@Z
    long ProcessCreate(CResourceTable *, tagMILCMD_MAGNIFIERRENDERTARGET_CREATE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetColorTransform@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MAGNIFIERRENDERTARGET_SETCOLORTRANSFORM@@@Z
    long ProcessSetColorTransform(CResourceTable *, tagMILCMD_MAGNIFIERRENDERTARGET_SETCOLORTRANSFORM const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetFilterList@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MAGNIFIERRENDERTARGET_SETFILTERLIST@@@Z
    long ProcessSetFilterList(CResourceTable *, tagMILCMD_MAGNIFIERRENDERTARGET_SETFILTERLIST const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetResampleMode@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MAGNIFIERRENDERTARGET_SETRESAMPLEMODE@@@Z
    long ProcessSetResampleMode(CResourceTable *, tagMILCMD_MAGNIFIERRENDERTARGET_SETRESAMPLEMODE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetTransform@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MAGNIFIERRENDERTARGET_SETTRANSFORM@@@Z
    long ProcessSetTransform(CResourceTable *, tagMILCMD_MAGNIFIERRENDERTARGET_SETTRANSFORM const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessUpdate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MAGNIFIERRENDERTARGET@@@Z
    long ProcessUpdate(CResourceTable *, tagMILCMD_MAGNIFIERRENDERTARGET const *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureRenderTargets@CMagnifierRenderTarget@@MEAAJXZ
    virtual long EnsureRenderTargets();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStereoContextForRt@CMagnifierRenderTarget@@MEAA?AW4StereoContext@@I@Z
    virtual int GetStereoContextForRt(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideVisuals@CMagnifierRenderTarget@@MEAAXXZ
    virtual void HideVisuals();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadyForRender@CMagnifierRenderTarget@@MEAA_NXZ
    virtual bool ReadyForRender();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderTargetDirty@CMagnifierRenderTarget@@MEAAJPEAVCDrawingContext@@PEA_N@Z
    virtual long RenderTargetDirty(CDrawingContext *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RestoreVisuals@CMagnifierRenderTarget@@MEAAXXZ
    virtual void RestoreVisuals();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMagnifierRenderTarget@@AEAA@PEAVCComposition@@@Z
    CMagnifierRenderTarget(CComposition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureSharedRenderTargets@CMagnifierRenderTarget@@AEAAJXZ
    long EnsureSharedRenderTargets();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenSharedSurfaceRenderTarget@CMagnifierRenderTarget@@AEAAJPEAXU_LUID@@PEAUHMONITOR__@@PEAPEAVIRenderTargetBitmap@@@Z
    long OpenSharedSurfaceRenderTarget(void *, _LUID, HMONITOR__*, IRenderTargetBitmap * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterCursorListener@CMagnifierRenderTarget@@AEAAXXZ
    void UnregisterCursorListener();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCursorListenerRegistration@CMagnifierRenderTarget@@AEAAXXZ
    void UpdateCursorListenerRegistration();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMagnifierRenderTarget@@EEAA@XZ
    virtual ~CMagnifierRenderTarget();
};
