#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 38 member(s).
class CSectionBitmapRealization {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSectionBitmapRealization@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyPixels@CSectionBitmapRealization@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z
    virtual long CopyPixels(WindissectOpaque const &, unsigned int, unsigned int, unsigned char *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetD2DBitmap@CSectionBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z
    virtual long GetD2DBitmap(RenderTargetInfo const &, ID2D1Bitmap1* *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeviceTexture@CSectionBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z
    virtual long GetDeviceTexture(RenderTargetInfo const &, IDeviceTexture * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayId@CSectionBitmapRealization@@UEBA?AVDisplayId@@XZ
    virtual DisplayId GetDisplayId() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPixelColor@CSectionBitmapRealization@@UEBA?AU_D3DCOLORVALUE@@AEBUD2D_POINT_2U@@@Z
    virtual _D3DCOLORVALUE GetPixelColor(D2D_POINT_2U const &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPixelFormatInfo@CSectionBitmapRealization@@UEBA?AUPixelFormatInfo@@XZ
    virtual PixelFormatInfo GetPixelFormatInfo() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@CSectionBitmapRealization@@UEBA?AUD2D_SIZE_U@@XZ
    virtual D2D_SIZE_U GetSize() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHardwareProtected@CSectionBitmapRealization@@UEBA_NXZ
    virtual bool IsHardwareProtected() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsProtected@CSectionBitmapRealization@@UEBA_NXZ
    virtual bool IsProtected() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LockForRead@CSectionBitmapRealization@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z
    virtual long LockForRead(WindissectOpaque const &, IBitmapLock * *) const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSectionBitmapRealization@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSectionBitmapRealization@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SupportsFastLock@CSectionBitmapRealization@@UEBA_NXZ
    virtual bool SupportsFastLock() const;
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSectionBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AEBUCSM_SYSMEM_SECTION_INFO@@_N@Z
    CSectionBitmapRealization(CSM_BUFFER_ATTRIBUTES const &, CSM_REALIZATION_INFO const &, CSM_SYSMEM_SECTION_INFO const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureBitmapCacheSource@CSectionBitmapRealization@@MEAAJXZ
    virtual long EnsureBitmapCacheSource();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CSectionBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MapSection@CSectionBitmapRealization@@IEAAJXZ
    long MapSection();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSectionBitmapRealization@@MEAA@XZ
    virtual ~CSectionBitmapRealization();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnmapSection@CSectionBitmapRealization@@AEAA_NXZ
    bool UnmapSection();
};
