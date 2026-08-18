#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 15 member(s).
class CD2DBitmapCache {
public:
    class CCachedBitmap;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddInvalidRegion@CD2DBitmapCache@@QEAAXAEBVCRegion@@@Z
    void AddInvalidRegion(CRegion const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCachedBitmap@CD2DBitmapCache@@QEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z
    long GetCachedBitmap(RenderTargetInfo const &, ID2D1Bitmap1* *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCachedTexture@CD2DBitmapCache@@QEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z
    long GetCachedTexture(RenderTargetInfo const &, IDeviceTexture * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeCache@CD2DBitmapCache@@QEAAXPEAVID2DBitmapCacheSource@@@Z
    void InitializeCache(ID2DBitmapCacheSource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkFullInvalid@CD2DBitmapCache@@QEAAXXZ
    void MarkFullInvalid();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyInvalidResource@CD2DBitmapCache@@UEAAXPEBVIDeviceResource@@@Z
    virtual void NotifyInvalidResource(IDeviceResource const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveFromCache@CD2DBitmapCache@@QEAA_NPEBVIDeviceResource@@@Z
    bool RemoveFromCache(IDeviceResource const *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAndCacheBitmap@CD2DBitmapCache@@IEAAJU_LUID@@PEAPEAVCSecondaryD2DBitmap@@@Z
    long CreateAndCacheBitmap(_LUID, CSecondaryD2DBitmap * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureSysmemBitmap@CD2DBitmapCache@@IEAAJXZ
    long EnsureSysmemBitmap();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@PEA_N@Z
    long GetBitmapInternal(_LUID, DisplayId, bool, ID2DBitmap * *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCachedBitmap@CD2DBitmapCache@@IEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVCSecondaryD2DBitmap@@@Z
    long UpdateCachedBitmap(WindissectOpaque const &, CSecondaryD2DBitmap *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSysmemBitmap@CD2DBitmapCache@@IEAAJXZ
    long UpdateSysmemBitmap();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CD2DBitmapCache@@MEAA@XZ
    virtual ~CD2DBitmapCache();
};
