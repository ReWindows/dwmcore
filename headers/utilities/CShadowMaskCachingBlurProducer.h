#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 7 member(s).
class CShadowMaskCachingBlurProducer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CShadowMaskCachingBlurProducer@@SAJAEBVCResourceTag@@PEAVCDrawingContext@@PEAVCShadowMaskProducer@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@MPEAPEAVIBitmapResource@@PEAV5@@Z
    static long Create(CResourceTag const &, CDrawingContext *, CShadowMaskProducer *, WindissectOpaque const &, float, IBitmapResource * *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProduceRealization@CShadowMaskCachingBlurProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CCachedImageProducer@@@Z
    virtual long ProduceRealization(CDrawingContext *, WindissectOpaque * *) const;
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CShadowMaskCachingBlurProducer@@AEAA@AEBVCResourceTag@@PEAVCShadowMaskProducer@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@M@Z
    CShadowMaskCachingBlurProducer(CResourceTag const &, CShadowMaskProducer *, WindissectOpaque const &, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProduceRealizationInternal@CShadowMaskCachingBlurProducer@@AEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CCachedImageProducer@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    long ProduceRealizationInternal(CDrawingContext *, WindissectOpaque * *, WindissectOpaque *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CShadowMaskCachingBlurProducer@@EEAA@XZ
    virtual ~CShadowMaskCachingBlurProducer();
};
