#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 27 member(s).
class CColorKeyBitmapRealization {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddDirtyRegion@CColorKeyBitmapRealization@@UEAAXAEBVCRegion@@@Z
    virtual void AddDirtyRegion(CRegion const &);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CColorKeyBitmapRealization@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CColorKeyBitmapRealization@@SAJPEAVIBitmapRealization@@AEBVCColorKey@@PEAPEAV2@@Z
    static long Create(IBitmapRealization *, CColorKey const &, IBitmapRealization * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetD2DBitmap@CColorKeyBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z
    virtual long GetD2DBitmap(RenderTargetInfo const &, ID2D1Bitmap1* *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeviceTexture@CColorKeyBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z
    virtual long GetDeviceTexture(RenderTargetInfo const &, IDeviceTexture * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayId@CColorKeyBitmapRealization@@UEBA?AVDisplayId@@XZ
    virtual DisplayId GetDisplayId() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPixelColor@CColorKeyBitmapRealization@@UEBA?AU_D3DCOLORVALUE@@AEBUD2D_POINT_2U@@@Z
    virtual _D3DCOLORVALUE GetPixelColor(D2D_POINT_2U const &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPixelFormatInfo@CColorKeyBitmapRealization@@UEBA?AUPixelFormatInfo@@XZ
    virtual PixelFormatInfo GetPixelFormatInfo() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@CColorKeyBitmapRealization@@UEBA?AUD2D_SIZE_U@@XZ
    virtual D2D_SIZE_U GetSize() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransform@CColorKeyBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    virtual bool GetTransform(CMILMatrix *, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsProtected@CColorKeyBitmapRealization@@UEBA_NXZ
    virtual bool IsProtected() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkFullDirty@CColorKeyBitmapRealization@@UEAAXXZ
    virtual void MarkFullDirty();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CColorKeyBitmapRealization@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecordUse@CColorKeyBitmapRealization@@UEAAJPEAVCDrawingContext@@@Z
    virtual long RecordUse(CDrawingContext *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CColorKeyBitmapRealization@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMargins@CColorKeyBitmapRealization@@UEAAXAEBU_MARGINS@@@Z
    virtual void SetMargins(_MARGINS const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CColorKeyBitmapRealization@@UEAA@XZ
    virtual ~CColorKeyBitmapRealization();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CColorKeyBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CColorKeyBitmapRealization@@IEAAJPEAVIBitmapRealization@@AEBVCColorKey@@@Z
    long Initialize(IBitmapRealization *, CColorKey const &);
};
