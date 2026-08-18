#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 15 member(s).
class CExternalLayer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z
    virtual long ApplyState(CDrawingContext *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetArea@CExternalLayer@@UEBA_KXZ
    virtual uint64_t GetArea() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CExternalLayer@@UEAA@XZ
    virtual ~CExternalLayer();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllowsOcclusion@CExternalLayer@@MEBA_NXZ
    virtual bool AllowsOcclusion() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z
    long ApplyRenderTarget(CDrawingContext *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CExternalLayer@@IEAA@AEBUD2D_POINTANDSIZE_L@@PEAVIRenderTargetBitmap@@@Z
    CExternalLayer(D2D_POINTANDSIZE_L const &, IRenderTargetBitmap *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcDeviceTransformDelta@CExternalLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z
    virtual long CalcDeviceTransformDelta(CDrawingContext *, CMILMatrix *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUD2D_POINTANDSIZE_L@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z
    static long CreateBitmap(CResourceTag const &, D2D_POINTANDSIZE_L const &, PixelFormatInfo const &, RenderTargetInfo const &, int, IRenderTargetBitmap * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostRestoreState@CExternalLayer@@MEAAJPEAVCDrawingContext@@@Z
    virtual long PostRestoreState(CDrawingContext *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreRestoreState@CExternalLayer@@MEAAJPEAVCDrawingContext@@@Z
    virtual long PreRestoreState(CDrawingContext *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderNoOpLayer@CExternalLayer@@MEAAJPEAVCDrawingContext@@@Z
    virtual long RenderNoOpLayer(CDrawingContext *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RestoreRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z
    long RestoreRenderTarget(CDrawingContext *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RestoreState@CExternalLayer@@EEAAJPEAVCDrawingContext@@@Z
    virtual long RestoreState(CDrawingContext *);
};
