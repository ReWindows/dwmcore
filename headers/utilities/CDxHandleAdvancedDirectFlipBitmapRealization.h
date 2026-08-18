#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 42 member(s).
class CDxHandleAdvancedDirectFlipBitmapRealization {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddDirtyRegion@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAXAEBVCRegion@@@Z
    virtual void AddDirtyRegion(CRegion const &);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CDxHandleAdvancedDirectFlipBitmapRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVISwapChainRealization@@@Z
    static long Create(int, _LUID, CSM_BUFFER_ATTRIBUTES const &, CSM_REALIZATION_INFO const &, CDecodeBitmap *, ISwapChainRealization * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetD2DBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z
    virtual long GetD2DBitmap(RenderTargetInfo const &, ID2D1Bitmap1* *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeviceTexture@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z
    virtual long GetDeviceTexture(RenderTargetInfo const &, IDeviceTexture * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasOverdraw@CDxHandleAdvancedDirectFlipBitmapRealization@@UEBA_NXZ
    virtual bool HasOverdraw() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkFullDirty@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAXXZ
    virtual void MarkFullDirty();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAttributes@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z
    virtual void UpdateAttributes(CSM_BUFFER_ATTRIBUTES const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDxHandleAdvancedDirectFlipBitmapRealization@@UEAA@XZ
    virtual ~CDxHandleAdvancedDirectFlipBitmapRealization();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDxHandleAdvancedDirectFlipBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@@Z
    CDxHandleAdvancedDirectFlipBitmapRealization(int, _LUID, CSM_BUFFER_ATTRIBUTES const &, CSM_REALIZATION_INFO const &, CDecodeBitmap *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureD2DBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@MEAAJXZ
    virtual long EnsureD2DBitmap();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureRenderTarget@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ
    long EnsureRenderTarget();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CDxHandleAdvancedDirectFlipBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetOverdrawRegion@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAXXZ
    void ResetOverdrawRegion();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SaveOffOverdraw@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ
    long SaveOffOverdraw();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDecodeBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ
    long UpdateDecodeBitmap();
};
