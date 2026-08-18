#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dwmcore.dll by Windissect. 5 member(s).
class IDrawingContext {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawGeometry@IDrawingContext@@UEAAJPEAVCLegacyMilBrush@@PEAVCGeometry@@@Z
    virtual long DrawGeometry(CLegacyMilBrush *, CGeometry *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawImage@IDrawingContext@@UEAAJPEAVCResource@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    virtual long DrawImage(CResource *, WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawRectangle@IDrawingContext@@UEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAVCLegacyMilBrush@@@Z
    virtual long DrawRectangle(WindissectOpaque const &, CLegacyMilBrush *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawYCbCrBitmap@IDrawingContext@@UEAAJPEAVCResource@@0W4D2D1_YCBCR_CHROMA_SUBSAMPLING@@@Z
    virtual long DrawYCbCrBitmap(CResource *, CResource *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TileImage@IDrawingContext@@UEAAJPEAVCResource@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBUD2D_POINT_2F@@M@Z
    virtual long TileImage(CResource *, WindissectOpaque const &, D2D_POINT_2F const &, float);
};
