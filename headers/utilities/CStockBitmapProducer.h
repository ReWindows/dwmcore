#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 6 member(s).
class CStockBitmapProducer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CStockBitmapProducer@@SAJAEBU_D3DCOLORVALUE@@PEAPEAVIBitmapResource@@@Z
    static long Create(_D3DCOLORVALUE const &, IBitmapResource * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureDeviceTexture@CStockBitmapProducer@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z
    virtual long EnsureDeviceTexture(RenderTargetInfo const &, IDeviceTexture * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeviceTexture@CStockBitmapProducer@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z
    virtual long GetDeviceTexture(RenderTargetInfo const &, IDeviceTexture * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProduceRealization@CStockBitmapProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CCachedImageProducer@@@Z
    virtual long ProduceRealization(CDrawingContext *, WindissectOpaque * *) const;
};
