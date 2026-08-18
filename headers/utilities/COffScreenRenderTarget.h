#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 42 member(s).
class COffScreenRenderTarget {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@COffScreenRenderTarget@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceFullDirty@COffScreenRenderTarget@@UEAAXXZ
    virtual void ForceFullDirty();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBits@COffScreenRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z
    virtual long GetBits(tagRECT const *, IBitmapDest *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeviceTransform@COffScreenRenderTarget@@UEBAAEBVCMILMatrix@@XZ
    virtual CMILMatrix const & GetDeviceTransform() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRenderTargetInfo@COffScreenRenderTarget@@UEBA?AVRenderTargetInfo@@XZ
    virtual RenderTargetInfo GetRenderTargetInfo() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTreeBounds@COffScreenRenderTarget@@UEBAAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@XZ
    virtual WindissectOpaque const & GetTreeBounds() const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@COffScreenRenderTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@COffScreenRenderTarget@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderAndPresent@COffScreenRenderTarget@@UEAAJPEAVCDrawingContext@@@Z
    virtual long RenderAndPresent(CDrawingContext *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0COffScreenRenderTarget@@IEAA@PEAVCComposition@@AEBVCResourceTag@@W4DirtyRegionMode@0@@Z
    COffScreenRenderTarget(CComposition *, CResourceTag const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcTransform@COffScreenRenderTarget@@IEAAXXZ
    void CalcTransform();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcTreeBounds@COffScreenRenderTarget@@IEAAXXZ
    void CalcTreeBounds();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeCursorRenderTransform@COffScreenRenderTarget@@MEBA_NPEBVCVisual@@PEAVCMILMatrix@@@Z
    virtual bool ComputeCursorRenderTransform(CVisual const *, CMILMatrix *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ
    virtual long EnsureRenderTargets();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStereoContextForRt@COffScreenRenderTarget@@MEAA?AW4StereoContext@@I@Z
    virtual int GetStereoContextForRt(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideVisuals@COffScreenRenderTarget@@MEAAXXZ
    virtual void HideVisuals();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRenderTime@COffScreenRenderTarget@@MEAA_NXZ
    virtual bool IsRenderTime();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OffscreenRenderTargetType@COffScreenRenderTarget@@MEAA?AW4Type@IRenderTarget@@XZ
    virtual int OffscreenRenderTargetType();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreCompute@COffScreenRenderTarget@@MEAAJXZ
    virtual long PreCompute();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Present@COffScreenRenderTarget@@MEAAJXZ
    virtual long Present();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadyForRender@COffScreenRenderTarget@@MEAA_NXZ
    virtual bool ReadyForRender();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseRenderTargets@COffScreenRenderTarget@@MEAAXXZ
    virtual void ReleaseRenderTargets();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Render@COffScreenRenderTarget@@IEAAJPEAVCDrawingContext@@@Z
    long Render(CDrawingContext *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderCursors@COffScreenRenderTarget@@IEAAJPEAVCDrawingContext@@AEBUMilRenderOptions@@PEBU_D3DCOLORVALUE@@@Z
    long RenderCursors(CDrawingContext *, MilRenderOptions const &, _D3DCOLORVALUE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderTargetDirty@COffScreenRenderTarget@@MEAAJPEAVCDrawingContext@@PEA_N@Z
    virtual long RenderTargetDirty(CDrawingContext *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RestoreVisuals@COffScreenRenderTarget@@MEAAXXZ
    virtual void RestoreVisuals();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldRenderCursor@COffScreenRenderTarget@@MEBA_NPEBVCVisual@@@Z
    virtual bool ShouldRenderCursor(CVisual const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z
    long UpdatePixelFormatInfo(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTargetDirty@COffScreenRenderTarget@@MEAAXAEBVCTreeDirty@@_N@Z
    virtual void UpdateTargetDirty(CTreeDirty const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTransformAndTreeBounds@COffScreenRenderTarget@@MEAAXXZ
    virtual void UpdateTransformAndTreeBounds();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1COffScreenRenderTarget@@MEAA@XZ
    virtual ~COffScreenRenderTarget();
};
