#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 46 member(s).
class CGdiSpriteBitmap {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CGdiSpriteBitmap@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendDirtyRectangles@CGdiSpriteBitmap@@QEAAJAEBV?$span@$$CBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@$0?0@gsl@@@Z
    long AppendDirtyRectangles(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAccumShape@CGdiSpriteBitmap@@QEAA?AVCShapePtr@@_N@Z
    CShapePtr GetAccumShape(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCreateChannel@CGdiSpriteBitmap@@UEBAIXZ
    virtual unsigned int GetCreateChannel() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentRenderingRealization@CGdiSpriteBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z
    virtual long GetCurrentRenderingRealization(IBitmapRealization * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHlsurf@CGdiSpriteBitmap@@UEBAPEAUHLSURF__@@XZ
    virtual HLSURF__* GetHlsurf() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPixelColor@CGdiSpriteBitmap@@QEBA?AU_D3DCOLORVALUE@@AEBUD2D_POINT_2U@@@Z
    _D3DCOLORVALUE GetPixelColor(D2D_POINT_2U const &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPixelFormatInfo@CGdiSpriteBitmap@@UEBA?AUPixelFormatInfo@@XZ
    virtual PixelFormatInfo GetPixelFormatInfo() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAttachedToWindow@CGdiSpriteBitmap@@UEBA_NXZ
    virtual bool IsAttachedToWindow() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOpaque@CGdiSpriteBitmap@@UEBA_NXZ
    virtual bool IsOpaque() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NeedsTiling@CGdiSpriteBitmap@@QEAA_NI@Z
    bool NeedsTiling(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyInvalidResource@CGdiSpriteBitmap@@UEAAXPEBVIDeviceResource@@@Z
    virtual void NotifyInvalidResource(IDeviceResource const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMarginsChanged@CGdiSpriteBitmap@@QEAAXXZ
    void OnMarginsChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPixelFormatChanging@CGdiSpriteBitmap@@QEAAJW4DXGI_FORMAT@@@Z
    long OnPixelFormatChanging(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSurfaceChanging@CGdiSpriteBitmap@@QEAAJPEAUHLSURF__@@@Z
    long OnSurfaceChanging(HLSURF__*);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CGdiSpriteBitmap@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CGdiSpriteBitmap@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetColorKey@CGdiSpriteBitmap@@QEAAX_NAEBVCColorKey@@@Z
    void SetColorKey(bool, CColorKey const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCompositionMode@CGdiSpriteBitmap@@UEAAX_NW4BufferCompositionMode@@AEBVCMILMatrix@@W4DXGI_COLOR_SPACE_TYPE@@PEBUtagCOMPOSITION_TARGET_ID@@@Z
    virtual void SetCompositionMode(bool, int, CMILMatrix const &, int, tagCOMPOSITION_TARGET_ID const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDirtyRectangles@CGdiSpriteBitmap@@QEAAJAEBV?$span@$$CBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@$0?0@gsl@@@Z
    long SetDirtyRectangles(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetBitmapRealization@CGdiSpriteBitmap@@UEAAPEAVIBitmapRealization@@XZ
    virtual IBitmapRealization * TryGetBitmapRealization();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CGdiSpriteBitmap@@IEAA@PEAVCComposition@@@Z
    CGdiSpriteBitmap(CComposition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CGdiSpriteBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CGdiSpriteBitmap@@MEAA@XZ
    virtual ~CGdiSpriteBitmap();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z
    void AddDirtyRegion(CRegion &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBitmap@CGdiSpriteBitmap@@AEAAJW4DXGI_FORMAT@@@Z
    long CreateBitmap(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDeviceBitmap@CGdiSpriteBitmap@@AEAAJPEAXU_LUID@@II@Z
    long CreateDeviceBitmap(void *, _LUID, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSectionBitmap@CGdiSpriteBitmap@@AEAAJPEAXII@Z
    long CreateSectionBitmap(void *, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSectionBitmapSubRects@CGdiSpriteBitmap@@AEAAJII@Z
    long CreateSectionBitmapSubRects(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DirtyFromAccum@CGdiSpriteBitmap@@AEAAXXZ
    void DirtyFromAccum();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ
    bool EnsureBitmapRealization();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyRemoteOfDirty@CGdiSpriteBitmap@@AEAAXAEBVCRegion@@@Z
    void NotifyRemoteOfDirty(CRegion const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterForSignaling@CGdiSpriteBitmap@@AEAAJXZ
    long RegisterForSignaling();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterWithSurfaceManager@CGdiSpriteBitmap@@AEAAJXZ
    long RegisterWithSurfaceManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ
    bool ReleaseBitmapRealization();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseBitmapResources@CGdiSpriteBitmap@@AEAAXXZ
    void ReleaseBitmapResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnRegisterWithSurfaceManager@CGdiSpriteBitmap@@AEAAXXZ
    void UnRegisterWithSurfaceManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePixelFormat@CGdiSpriteBitmap@@AEAAXW4DXGI_FORMAT@@@Z
    void UpdatePixelFormat(int);
};
