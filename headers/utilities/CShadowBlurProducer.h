#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 5 member(s).
class CShadowBlurProducer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CShadowBlurProducer@@SAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCBrush@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@MPEAPEAVIBitmapResource@@PEAV6@@Z
    static long Create(CResourceTag const &, CDrawingContext *, D2D_SIZE_F const &, CBrush *, WindissectOpaque const &, float, IBitmapResource * *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProduceRealization@CShadowBlurProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CCachedImageProducer@@@Z
    virtual long ProduceRealization(CDrawingContext *, WindissectOpaque * *) const;
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProduceRealizationInternal@CShadowBlurProducer@@AEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CCachedImageProducer@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    long ProduceRealizationInternal(CDrawingContext *, WindissectOpaque * *, WindissectOpaque *) const;
};
