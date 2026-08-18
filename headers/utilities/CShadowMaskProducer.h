#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 6 member(s).
class CShadowMaskProducer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CShadowMaskProducer@@SAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCBrush@@$$QEAVCShapePtr@@_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAV1@@Z
    static long Create(CResourceTag const &, CDrawingContext *, D2D_SIZE_F const &, CBrush *, CShapePtr &&, bool, WindissectOpaque const &, CShadowMaskProducer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDrawListBrush@CShadowMaskProducer@@QEAAJPEAPEAVCDrawListBrush@@@Z
    long CreateDrawListBrush(CDrawListBrush * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProduceRealization@CShadowMaskProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CCachedImageProducer@@@Z
    virtual long ProduceRealization(CDrawingContext *, WindissectOpaque * *) const;
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CShadowMaskProducer@@EEAA@XZ
    virtual ~CShadowMaskProducer();
};
