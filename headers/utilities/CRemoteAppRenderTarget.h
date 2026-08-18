#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 54 member(s).
class CRemoteAppRenderTarget {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CRemoteAppRenderTarget@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckOcclusionState@CRemoteAppRenderTarget@@UEAAJ_N@Z
    virtual long CheckOcclusionState(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceFullDirty@CRemoteAppRenderTarget@@UEAAXXZ
    virtual void ForceFullDirty();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDevice@CRemoteAppRenderTarget@@UEBAPEAVCD3DDevice@@XZ
    virtual CD3DDevice * GetDevice() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeviceTransform@CRemoteAppRenderTarget@@UEBAAEBVCMILMatrix@@XZ
    virtual CMILMatrix const & GetDeviceTransform() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHwndTopLevelWindow@CRemoteAppRenderTarget@@UEBA_KXZ
    virtual uint64_t GetHwndTopLevelWindow() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPresentCount@CRemoteAppRenderTarget@@UEBAIXZ
    virtual unsigned int GetPresentCount() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPresentStatistics@CRemoteAppRenderTarget@@UEBAJPEAUDXGI_FRAME_STATISTICS@@@Z
    virtual long GetPresentStatistics(DXGI_FRAME_STATISTICS *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRenderTargetInfo@CRemoteAppRenderTarget@@UEBA?AVRenderTargetInfo@@XZ
    virtual RenderTargetInfo GetRenderTargetInfo() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTreeBounds@CRemoteAppRenderTarget@@UEBAAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@XZ
    virtual WindissectOpaque const & GetTreeBounds() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOfType@CRemoteAppRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z
    virtual bool IsOfType(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyInvalidResource@CRemoteAppRenderTarget@@UEAAXPEBVIDeviceResource@@@Z
    virtual void NotifyInvalidResource(IDeviceResource const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessCreate@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTEAPPRENDERTARGET_CREATE@@@Z
    long ProcessCreate(CResourceTable *, tagMILCMD_REMOTEAPPRENDERTARGET_CREATE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessDestroyWindow@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTEAPPRENDERTARGET_DESTROYWINDOW@@@Z
    long ProcessDestroyWindow(CResourceTable *, tagMILCMD_REMOTEAPPRENDERTARGET_DESTROYWINDOW const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetAlphaMode@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTEAPPRENDERTARGET_SETALPHAMODE@@@Z
    long ProcessSetAlphaMode(CResourceTable *, tagMILCMD_REMOTEAPPRENDERTARGET_SETALPHAMODE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetClearColor@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTEAPPRENDERTARGET_SETCLEARCOLOR@@@Z
    long ProcessSetClearColor(CResourceTable *, tagMILCMD_REMOTEAPPRENDERTARGET_SETCLEARCOLOR const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetContentOffset@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTEAPPRENDERTARGET_SETCONTENTOFFSET@@@Z
    long ProcessSetContentOffset(CResourceTable *, tagMILCMD_REMOTEAPPRENDERTARGET_SETCONTENTOFFSET const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetRoot@CRemoteAppRenderTarget@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTARGET_SETROOT@@@Z
    virtual long ProcessSetRoot(CResourceTable *, tagMILCMD_RENDERTARGET_SETROOT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetSize@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTEAPPRENDERTARGET_SETSIZE@@@Z
    long ProcessSetSize(CResourceTable *, tagMILCMD_REMOTEAPPRENDERTARGET_SETSIZE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSetVailDpi@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTEAPPRENDERTARGET_SETVAILDPI@@@Z
    long ProcessSetVailDpi(CResourceTable *, tagMILCMD_REMOTEAPPRENDERTARGET_SETVAILDPI const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CRemoteAppRenderTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CRemoteAppRenderTarget@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderAndPresent@CRemoteAppRenderTarget@@UEAAJPEAVCDrawingContext@@@Z
    virtual long RenderAndPresent(CDrawingContext *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CRemoteAppRenderTarget@@IEAA@PEAVCComposition@@@Z
    CRemoteAppRenderTarget(CComposition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcVailAlphaMode@CRemoteAppRenderTarget@@IEBAXPEAW4DXGI_ALPHA_MODE@@PEAU_D3DCOLORVALUE@@@Z
    void CalcVailAlphaMode(int *, _D3DCOLORVALUE *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureSwapChain@CRemoteAppRenderTarget@@IEAAJXZ
    long EnsureSwapChain();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRailWindowDeviceBounds@CRemoteAppRenderTarget@@IEBA?AV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z
    WindissectOpaque GetRailWindowDeviceBounds(WindissectOpaque const &, CMILMatrix const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CRemoteAppRenderTarget@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CRemoteAppRenderTarget@@MEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyRenderedRect@CRemoteAppRenderTarget@@IEAAXPEAVISwapChain@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    void NotifyRenderedRect(ISwapChain *, CMILMatrix const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Present@CRemoteAppRenderTarget@@IEAAJXZ
    long Present();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@@Z
    long RailMultimonRenderAndPresent(CDrawingContext *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseSwapChain@CRemoteAppRenderTarget@@IEAAXXZ
    void ReleaseSwapChain();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Render@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@@Z
    long Render(CDrawingContext *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVISwapChain@@AEBVCMILMatrix@@PEAW4ProtectionMode@1@@Z
    long RenderDirtyRegion(CDrawingContext *, ISwapChain *, CMILMatrix const &, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendCompSurfHandle@CRemoteAppRenderTarget@@IEAAJXZ
    long SendCompSurfHandle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendMetaData@CRemoteAppRenderTarget@@IEBAJAEBU_DWMIndirectMetaData@@@Z
    long SendMetaData(_DWMIndirectMetaData const &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSize@CRemoteAppRenderTarget@@IEAAJAEBUD2D_SIZE_U@@@Z
    long SetSize(D2D_SIZE_U const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTransformAndTreeBounds@CRemoteAppRenderTarget@@IEAAXXZ
    void UpdateTransformAndTreeBounds();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRemoteAppRenderTarget@@MEAA@XZ
    virtual ~CRemoteAppRenderTarget();
};
