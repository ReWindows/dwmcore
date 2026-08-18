#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 19 member(s).
class CDxHandleStereoBitmapRealization {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddDirtyRegion@CDxHandleStereoBitmapRealization@@UEAAXAEBVCRegion@@@Z
    virtual void AddDirtyRegion(CRegion const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CDxHandleStereoBitmapRealization@@SAHW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVISwapChainRealization@@@Z
    static int Create(int, _LUID, CSM_BUFFER_ATTRIBUTES const &, CSM_REALIZATION_INFO const &, ISwapChainRealization * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetD2DBitmap@CDxHandleStereoBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z
    virtual long GetD2DBitmap(RenderTargetInfo const &, ID2D1Bitmap1* *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeviceTexture@CDxHandleStereoBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z
    virtual long GetDeviceTexture(RenderTargetInfo const &, IDeviceTexture * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOverlayCompatible@CDxHandleStereoBitmapRealization@@UEBA_NXZ
    virtual bool IsOverlayCompatible() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkFullDirty@CDxHandleStereoBitmapRealization@@UEAAXXZ
    virtual void MarkFullDirty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyInvalidResource@CDxHandleStereoBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z
    virtual void NotifyInvalidResource(IDeviceResource const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAttributes@CDxHandleStereoBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z
    virtual void UpdateAttributes(CSM_BUFFER_ATTRIBUTES const &);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDxHandleStereoBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@Z
    CDxHandleStereoBitmapRealization(int, _LUID, CSM_BUFFER_ATTRIBUTES const &, CSM_REALIZATION_INFO const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ
    virtual long EnsureD2DBitmap();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAXXZ
    virtual void ReleaseD2DBitmap();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDxHandleStereoBitmapRealization@@MEAA@XZ
    virtual ~CDxHandleStereoBitmapRealization();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?UseLeftBitmap@CDxHandleStereoBitmapRealization@@AEBA_NW4StereoContext@@@Z
    bool UseLeftBitmap(int) const;
};
